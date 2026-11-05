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

// Function: sub_001DDC60
// Address: 0x1ddc60 - 0x1ddcc0
void sub_001DDC60_0x1ddc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDC60_0x1ddc60");
#endif

    switch (ctx->pc) {
        case 0x1ddc7cu: goto label_1ddc7c;
        default: break;
    }

    ctx->pc = 0x1ddc60u;

    // 0x1ddc60: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1ddc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ddc64: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDC64u;
    {
        const bool branch_taken_0x1ddc64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC64u;
        // 0x1ddc68: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc64) {
            ctx->pc = 0x1DDC84u;
            goto label_1ddc84;
        }
    }
    ctx->pc = 0x1DDC6Cu;
    // 0x1ddc6c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x1ddc6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ddc70: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x1ddc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x1ddc74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDC74u;
    {
        const bool branch_taken_0x1ddc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC74u;
        // 0x1ddc78: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc74) {
            ctx->pc = 0x1DDC84u;
            goto label_1ddc84;
        }
    }
    ctx->pc = 0x1DDC7Cu;
label_1ddc7c:
    // 0x1ddc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC7Cu;
        // 0x1ddc80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDC84u;
label_1ddc84:
    // 0x1ddc84: 0x8c4391b8  lw          $v1, -0x6E48($v0)
    ctx->pc = 0x1ddc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939064)));
    // 0x1ddc88: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DDC88u;
    {
        const bool branch_taken_0x1ddc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC88u;
        // 0x1ddc8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc88) {
            ctx->pc = 0x1DDCB4u;
            goto label_1ddcb4;
        }
    }
    ctx->pc = 0x1DDC90u;
    // 0x1ddc90: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDC90u;
    {
        const bool branch_taken_0x1ddc90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC90u;
        // 0x1ddc94: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc90) {
            ctx->pc = 0x1DDCB0u;
            goto label_1ddcb0;
        }
    }
    ctx->pc = 0x1DDC98u;
    // 0x1ddc98: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x1ddc98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ddc9c: 0x24632828  addiu       $v1, $v1, 0x2828
    ctx->pc = 0x1ddc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x1ddca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddca4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ddca4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddca8: 0x1080fff4  beqz        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DDCA8u;
    {
        const bool branch_taken_0x1ddca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddca8) {
            ctx->pc = 0x1DDC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddc7c;
        }
    }
    ctx->pc = 0x1DDCB0u;
label_1ddcb0:
    // 0x1ddcb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ddcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddcb4:
    // 0x1ddcb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ddcb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCB8u;
        // 0x1ddcbc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDCC0u;
}
