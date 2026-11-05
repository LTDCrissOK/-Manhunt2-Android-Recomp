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

// Function: sub_0039EB90
// Address: 0x39eb90 - 0x39ebc8
void sub_0039EB90_0x39eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EB90_0x39eb90");
#endif

    switch (ctx->pc) {
        case 0x39eba8u: goto label_39eba8;
        case 0x39ebb0u: goto label_39ebb0;
        default: break;
    }

    ctx->pc = 0x39eb90u;

    // 0x39eb90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39eb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39eb98: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x39eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39eb9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39eb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39eba0: 0x80ec842  j           func_3B2108
    ctx->pc = 0x39EBA0u;
    ctx->pc = 0x39EBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EBA0u;
    // 0x39eba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2108u, 0x39EBA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39EBA8u;
label_39eba8:
    // 0x39eba8: 0x3e00008  jr          $ra
    ctx->pc = 0x39EBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBA8u;
        // 0x39ebac: 0xac850030  sw          $a1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EBB0u;
label_39ebb0:
    // 0x39ebb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ebb4: 0x3e00008  jr          $ra
    ctx->pc = 0x39EBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EBB4u;
        // 0x39ebb8: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EBBCu;
    // 0x39ebbc: 0x0  nop
    ctx->pc = 0x39ebbcu;
    // NOP
    // 0x39ebc0: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x39ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x39ebc4: 0x0  nop
    ctx->pc = 0x39ebc4u;
    // NOP
    ctx->pc = 0x39ebc8u;
}
