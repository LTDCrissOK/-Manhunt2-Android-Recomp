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

// Function: sub_0013D068
// Address: 0x13d068 - 0x13d0b8
void sub_0013D068_0x13d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D068_0x13d068");
#endif

    switch (ctx->pc) {
        case 0x13d07cu: goto label_13d07c;
        case 0x13d090u: goto label_13d090;
        default: break;
    }

    ctx->pc = 0x13d068u;

    // 0x13d068: 0x908202a8  lbu         $v0, 0x2A8($a0)
    ctx->pc = 0x13d068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x13d06c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D06Cu;
    {
        const bool branch_taken_0x13d06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D06Cu;
        // 0x13d070: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d06c) {
            ctx->pc = 0x13D084u;
            goto label_13d084;
        }
    }
    ctx->pc = 0x13D074u;
    // 0x13d074: 0x3e00008  jr          $ra
    ctx->pc = 0x13D074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D074u;
        // 0x13d078: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D07Cu;
label_13d07c:
    // 0x13d07c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D07Cu;
        // 0x13d080: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D084u;
label_13d084:
    // 0x13d084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d088: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x13d088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13d08c: 0x0  nop
    ctx->pc = 0x13d08cu;
    // NOP
label_13d090:
    // 0x13d090: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13d090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13d094: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d098: 0x1065fff8  beq         $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13D098u;
    {
        const bool branch_taken_0x13d098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x13D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D098u;
        // 0x13d09c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d098) {
            ctx->pc = 0x13D07Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d07c;
        }
    }
    ctx->pc = 0x13D0A0u;
    // 0x13d0a0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x13d0a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d0a4: 0x2cc30010  sltiu       $v1, $a2, 0x10
    ctx->pc = 0x13d0a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13d0a8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13D0A8u;
    {
        const bool branch_taken_0x13d0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0A8u;
        // 0x13d0ac: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0a8) {
            ctx->pc = 0x13D090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d090;
        }
    }
    ctx->pc = 0x13D0B0u;
    // 0x13d0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0B0u;
        // 0x13d0b4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D0B8u;
}
