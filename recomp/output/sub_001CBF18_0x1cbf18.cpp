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

// Function: sub_001CBF18
// Address: 0x1cbf18 - 0x1cbf68
void sub_001CBF18_0x1cbf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBF18_0x1cbf18");
#endif

    ctx->pc = 0x1cbf18u;

    // 0x1cbf18: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1cbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cbf1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cbf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cbf20: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBF20u;
    {
        const bool branch_taken_0x1cbf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf20) {
            ctx->pc = 0x1CBF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBF20u;
            // 0x1cbf24: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBF40u;
            goto label_1cbf40;
        }
    }
    ctx->pc = 0x1CBF28u;
    // 0x1cbf28: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1cbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cbf2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cbf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cbf30: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBF30u;
    {
        const bool branch_taken_0x1cbf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf30) {
            ctx->pc = 0x1CBF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBF30u;
            // 0x1cbf34: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBF40u;
            goto label_1cbf40;
        }
    }
    ctx->pc = 0x1CBF38u;
    // 0x1cbf38: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF38u;
        // 0x1cbf3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBF40u;
label_1cbf40:
    // 0x1cbf40: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1cbf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1cbf44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBF44u;
    {
        const bool branch_taken_0x1cbf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF44u;
        // 0x1cbf48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf44) {
            ctx->pc = 0x1CBF60u;
            goto label_1cbf60;
        }
    }
    ctx->pc = 0x1CBF4Cu;
    // 0x1cbf4c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1cbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cbf50: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1cbf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1cbf54: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBF54u;
    {
        const bool branch_taken_0x1cbf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF54u;
        // 0x1cbf58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf54) {
            ctx->pc = 0x1CBF60u;
            goto label_1cbf60;
        }
    }
    ctx->pc = 0x1CBF5Cu;
    // 0x1cbf5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cbf5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf60:
    // 0x1cbf60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBF68u;
}
