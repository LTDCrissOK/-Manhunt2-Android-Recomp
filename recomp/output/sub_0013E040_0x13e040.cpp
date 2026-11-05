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

// Function: sub_0013E040
// Address: 0x13e040 - 0x13e080
void sub_0013E040_0x13e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E040_0x13e040");
#endif

    switch (ctx->pc) {
        case 0x13e050u: goto label_13e050;
        default: break;
    }

    ctx->pc = 0x13e040u;

    // 0x13e040: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x13e040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13e044: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13e044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e048: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13e048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13e04c: 0x0  nop
    ctx->pc = 0x13e04cu;
    // NOP
label_13e050:
    // 0x13e050: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13e050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13e054: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e058: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E058u;
    {
        const bool branch_taken_0x13e058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e058) {
            ctx->pc = 0x13E078u;
            goto label_13e078;
        }
    }
    ctx->pc = 0x13E060u;
    // 0x13e060: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x13e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13e064: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x13e064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13e068: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x13e068u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13e06c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13E06Cu;
    {
        const bool branch_taken_0x13e06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E06Cu;
        // 0x13e070: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e06c) {
            ctx->pc = 0x13E050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e050;
        }
    }
    ctx->pc = 0x13E074u;
    // 0x13e074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e078:
    // 0x13e078: 0x3e00008  jr          $ra
    ctx->pc = 0x13E078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E080u;
}
