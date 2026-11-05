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

// Function: sub_0023EB88
// Address: 0x23eb88 - 0x23ebc8
void sub_0023EB88_0x23eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EB88_0x23eb88");
#endif

    switch (ctx->pc) {
        case 0x23eb90u: goto label_23eb90;
        default: break;
    }

    ctx->pc = 0x23eb88u;

    // 0x23eb88: 0x248404bc  addiu       $a0, $a0, 0x4BC
    ctx->pc = 0x23eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1212));
    // 0x23eb8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23eb8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23eb90:
    // 0x23eb90: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x23eb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x23eb94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23eb94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23eb98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23eb9c: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x23eb9cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x23eba0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x23eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23eba4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23eba8: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23EBA8u;
    {
        const bool branch_taken_0x23eba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x23EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBA8u;
        // 0x23ebac: 0x28e60004  slti        $a2, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eba8) {
            ctx->pc = 0x23EBB4u;
            goto label_23ebb4;
        }
    }
    ctx->pc = 0x23EBB0u;
    // 0x23ebb0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x23ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_23ebb4:
    // 0x23ebb4: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x23EBB4u;
    {
        const bool branch_taken_0x23ebb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ebb4) {
            ctx->pc = 0x23EB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23eb90;
        }
    }
    ctx->pc = 0x23EBBCu;
    // 0x23ebbc: 0x3e00008  jr          $ra
    ctx->pc = 0x23EBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EBC4u;
    // 0x23ebc4: 0x0  nop
    ctx->pc = 0x23ebc4u;
    // NOP
    ctx->pc = 0x23ebc8u;
}
