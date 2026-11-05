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

// Function: sub_003DF7B0
// Address: 0x3df7b0 - 0x3df7f0
void sub_003DF7B0_0x3df7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF7B0_0x3df7b0");
#endif

    switch (ctx->pc) {
        case 0x3df7c0u: goto label_3df7c0;
        case 0x3df7c8u: goto label_3df7c8;
        default: break;
    }

    ctx->pc = 0x3df7b0u;

    // 0x3df7b0: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DF7B0u;
    {
        const bool branch_taken_0x3df7b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df7b0) {
            ctx->pc = 0x3DF7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF7B0u;
            // 0x3df7b4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF7C8u;
            goto label_3df7c8;
        }
    }
    ctx->pc = 0x3DF7B8u;
    // 0x3df7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7B8u;
        // 0x3df7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF7C0u;
label_3df7c0:
    // 0x3df7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7C0u;
        // 0x3df7c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF7C8u;
label_3df7c8:
    // 0x3df7c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DF7C8u;
    {
        const bool branch_taken_0x3df7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df7c8) {
            ctx->pc = 0x3DF7E8u;
            goto label_3df7e8;
        }
    }
    ctx->pc = 0x3DF7D0u;
    // 0x3df7d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3df7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3df7d4: 0x1045fffa  beq         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3DF7D4u;
    {
        const bool branch_taken_0x3df7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3df7d4) {
            ctx->pc = 0x3DF7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df7c0;
        }
    }
    ctx->pc = 0x3DF7DCu;
    // 0x3df7dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3df7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3df7e0: 0x5462fff9  bnel        $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3DF7E0u;
    {
        const bool branch_taken_0x3df7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3df7e0) {
            ctx->pc = 0x3DF7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF7E0u;
            // 0x3df7e4: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df7c8;
        }
    }
    ctx->pc = 0x3DF7E8u;
label_3df7e8:
    // 0x3df7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF7E8u;
        // 0x3df7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF7F0u;
}
