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

// Function: sub_001203D0
// Address: 0x1203d0 - 0x120420
void sub_001203D0_0x1203d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001203D0_0x1203d0");
#endif

    switch (ctx->pc) {
        case 0x1203e8u: goto label_1203e8;
        case 0x1203f8u: goto label_1203f8;
        default: break;
    }

    ctx->pc = 0x1203d0u;

    // 0x1203d0: 0x90820110  lbu         $v0, 0x110($a0)
    ctx->pc = 0x1203d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x1203d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1203d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1203d8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1203D8u;
    {
        const bool branch_taken_0x1203d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1203DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203D8u;
        // 0x1203dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203d8) {
            ctx->pc = 0x1203F0u;
            goto label_1203f0;
        }
    }
    ctx->pc = 0x1203E0u;
    // 0x1203e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1203E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1203E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203E0u;
        // 0x1203e4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1203E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1203E8u;
label_1203e8:
    // 0x1203e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1203E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1203ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203E8u;
        // 0x1203ec: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1203E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1203F0u;
label_1203f0:
    // 0x1203f0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1203f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1203f4: 0x0  nop
    ctx->pc = 0x1203f4u;
    // NOP
label_1203f8:
    // 0x1203f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1203f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1203fc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1203fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x120400: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x120400u;
    {
        const bool branch_taken_0x120400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120400u;
        // 0x120404: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120400) {
            ctx->pc = 0x1203E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1203e8;
        }
    }
    ctx->pc = 0x120408u;
    // 0x120408: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x120408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12040c: 0x2ca30008  sltiu       $v1, $a1, 0x8
    ctx->pc = 0x12040cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x120410: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x120410u;
    {
        const bool branch_taken_0x120410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120410u;
        // 0x120414: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120410) {
            ctx->pc = 0x1203F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1203f8;
        }
    }
    ctx->pc = 0x120418u;
    // 0x120418: 0x3e00008  jr          $ra
    ctx->pc = 0x120418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120418u;
        // 0x12041c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120420u;
}
