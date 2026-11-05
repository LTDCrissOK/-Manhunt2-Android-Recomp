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

// Function: sub_0023E1B0
// Address: 0x23e1b0 - 0x23e1e8
void sub_0023E1B0_0x23e1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E1B0_0x23e1b0");
#endif

    switch (ctx->pc) {
        case 0x23e1c0u: goto label_23e1c0;
        default: break;
    }

    ctx->pc = 0x23e1b0u;

    // 0x23e1b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x23e1b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e1b8: 0x244398a0  addiu       $v1, $v0, -0x6760
    ctx->pc = 0x23e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940832));
    // 0x23e1bc: 0x0  nop
    ctx->pc = 0x23e1bcu;
    // NOP
label_23e1c0:
    // 0x23e1c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e1c4: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E1C4u;
    {
        const bool branch_taken_0x23e1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x23E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1C4u;
        // 0x23e1c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1c4) {
            ctx->pc = 0x23E1D4u;
            goto label_23e1d4;
        }
    }
    ctx->pc = 0x23E1CCu;
    // 0x23e1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x23E1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1CCu;
        // 0x23e1d0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E1D4u;
label_23e1d4:
    // 0x23e1d4: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x23e1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23e1d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23E1D8u;
    {
        const bool branch_taken_0x23e1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1D8u;
        // 0x23e1dc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1d8) {
            ctx->pc = 0x23E1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e1c0;
        }
    }
    ctx->pc = 0x23E1E0u;
    // 0x23e1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x23E1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E1E8u;
}
