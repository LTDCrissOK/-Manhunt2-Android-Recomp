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

// Function: sub_0013D028
// Address: 0x13d028 - 0x13d068
void sub_0013D028_0x13d028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D028_0x13d028");
#endif

    switch (ctx->pc) {
        case 0x13d038u: goto label_13d038;
        default: break;
    }

    ctx->pc = 0x13d028u;

    // 0x13d028: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x13d028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x13d02c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d030: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x13d030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13d034: 0x0  nop
    ctx->pc = 0x13d034u;
    // NOP
label_13d038:
    // 0x13d038: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13d038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13d03c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d040: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D040u;
    {
        const bool branch_taken_0x13d040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D040u;
        // 0x13d044: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d040) {
            ctx->pc = 0x13D050u;
            goto label_13d050;
        }
    }
    ctx->pc = 0x13D048u;
    // 0x13d048: 0x3e00008  jr          $ra
    ctx->pc = 0x13D048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D048u;
        // 0x13d04c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D050u;
label_13d050:
    // 0x13d050: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x13d050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d054: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x13d054u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13d058: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13D058u;
    {
        const bool branch_taken_0x13d058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D058u;
        // 0x13d05c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d058) {
            ctx->pc = 0x13D038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d038;
        }
    }
    ctx->pc = 0x13D060u;
    // 0x13d060: 0x3e00008  jr          $ra
    ctx->pc = 0x13D060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D060u;
        // 0x13d064: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D068u;
}
