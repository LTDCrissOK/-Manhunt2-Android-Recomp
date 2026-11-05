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

// Function: sub_00178690
// Address: 0x178690 - 0x1786d0
void sub_00178690_0x178690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178690_0x178690");
#endif

    switch (ctx->pc) {
        case 0x1786a0u: goto label_1786a0;
        default: break;
    }

    ctx->pc = 0x178690u;

    // 0x178690: 0x2484015c  addiu       $a0, $a0, 0x15C
    ctx->pc = 0x178690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    // 0x178694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178698: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x178698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x17869c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x17869cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1786a0:
    // 0x1786a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1786a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1786a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1786a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1786a8: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1786A8u;
    {
        const bool branch_taken_0x1786a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1786ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786A8u;
        // 0x1786ac: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786a8) {
            ctx->pc = 0x1786B8u;
            goto label_1786b8;
        }
    }
    ctx->pc = 0x1786B0u;
    // 0x1786b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1786B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786B0u;
        // 0x1786b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1786B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1786B8u;
label_1786b8:
    // 0x1786b8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1786b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1786bc: 0x2ca30008  sltiu       $v1, $a1, 0x8
    ctx->pc = 0x1786bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1786c0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1786C0u;
    {
        const bool branch_taken_0x1786c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1786C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786C0u;
        // 0x1786c4: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786c0) {
            ctx->pc = 0x1786A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1786a0;
        }
    }
    ctx->pc = 0x1786C8u;
    // 0x1786c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1786C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786C8u;
        // 0x1786cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1786C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1786D0u;
}
