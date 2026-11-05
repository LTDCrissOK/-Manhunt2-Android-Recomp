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

// Function: sub_00115438
// Address: 0x115438 - 0x115470
void sub_00115438_0x115438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115438_0x115438");
#endif

    switch (ctx->pc) {
        case 0x11544cu: goto label_11544c;
        case 0x115454u: goto label_115454;
        default: break;
    }

    ctx->pc = 0x115438u;

    // 0x115438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11543c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115440: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x115444: 0xc04554e  jal         func_115538
    ctx->pc = 0x115444u;
    SET_GPR_U32(ctx, 31, 0x11544Cu);
    ctx->pc = 0x115448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115444u;
    // 0x115448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115538u, 0x115444u, 0x11544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11544Cu;
label_11544c:
    // 0x11544c: 0xc042254  jal         func_108950
    ctx->pc = 0x11544Cu;
    SET_GPR_U32(ctx, 31, 0x115454u);
    ctx->pc = 0x115450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11544Cu;
    // 0x115450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108950u, 0x11544Cu, 0x115454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115454u;
label_115454:
    // 0x115454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115458: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x115458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11545c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11545cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x115460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115464: 0x3e00008  jr          $ra
    ctx->pc = 0x115464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115464u;
        // 0x115468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11546Cu;
    // 0x11546c: 0x0  nop
    ctx->pc = 0x11546cu;
    // NOP
    ctx->pc = 0x115470u;
}
