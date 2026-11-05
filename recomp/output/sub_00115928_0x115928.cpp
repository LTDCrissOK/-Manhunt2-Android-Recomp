#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00115928
// Address: 0x115928 - 0x115958
void sub_00115928_0x115928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115928_0x115928");
#endif

    switch (ctx->pc) {
        case 0x11593cu: goto label_11593c;
        case 0x115948u: goto label_115948;
        default: break;
    }

    ctx->pc = 0x115928u;

    // 0x115928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11592c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115930: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x115934: 0xc045744  jal         func_115D10
    ctx->pc = 0x115934u;
    SET_GPR_U32(ctx, 31, 0x11593Cu);
    ctx->pc = 0x115938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115934u;
    // 0x115938: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115D10u, 0x115934u, 0x11593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11593Cu;
label_11593c:
    // 0x11593c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11593cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115940: 0xc045728  jal         func_115CA0
    ctx->pc = 0x115940u;
    SET_GPR_U32(ctx, 31, 0x115948u);
    ctx->pc = 0x115944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115940u;
    // 0x115944: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115CA0u, 0x115940u, 0x115948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115948u;
label_115948:
    // 0x115948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11594c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11594cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115950: 0x3e00008  jr          $ra
    ctx->pc = 0x115950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115950u;
        // 0x115954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115958u;
}
