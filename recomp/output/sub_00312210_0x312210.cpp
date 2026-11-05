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

// Function: sub_00312210
// Address: 0x312210 - 0x312240
void sub_00312210_0x312210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312210_0x312210");
#endif

    switch (ctx->pc) {
        case 0x312224u: goto label_312224;
        case 0x312230u: goto label_312230;
        default: break;
    }

    ctx->pc = 0x312210u;

    // 0x312210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x312214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x312218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x312218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31221c: 0xc0c4882  jal         func_312208
    ctx->pc = 0x31221Cu;
    SET_GPR_U32(ctx, 31, 0x312224u);
    ctx->pc = 0x312220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31221Cu;
    // 0x312220: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312208u, 0x31221Cu, 0x312224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312224u;
label_312224:
    // 0x312224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312228: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x312228u;
    SET_GPR_U32(ctx, 31, 0x312230u);
    ctx->pc = 0x31222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312228u;
    // 0x31222c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x312228u, 0x312230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312230u;
label_312230:
    // 0x312230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x312230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312234: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x312234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312238: 0x3e00008  jr          $ra
    ctx->pc = 0x312238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312238u;
        // 0x31223c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312240u;
}
