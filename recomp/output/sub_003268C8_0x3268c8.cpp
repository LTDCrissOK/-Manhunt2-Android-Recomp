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

// Function: sub_003268C8
// Address: 0x3268c8 - 0x3268e8
void sub_003268C8_0x3268c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003268C8_0x3268c8");
#endif

    ctx->pc = 0x3268c8u;

    // 0x3268c8: 0x2ca20014  sltiu       $v0, $a1, 0x14
    ctx->pc = 0x3268c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x3268cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3268CCu;
    {
        const bool branch_taken_0x3268cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3268D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268CCu;
        // 0x3268d0: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268cc) {
            ctx->pc = 0x3268E0u;
            goto label_3268e0;
        }
    }
    ctx->pc = 0x3268D4u;
    // 0x3268d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3268d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3268d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3268D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3268DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268D8u;
        // 0x3268dc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3268D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3268E0u;
label_3268e0:
    // 0x3268e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3268E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3268E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268E0u;
        // 0x3268e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3268E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3268E8u;
}
