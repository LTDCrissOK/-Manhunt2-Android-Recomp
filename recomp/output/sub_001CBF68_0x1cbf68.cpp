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

// Function: sub_001CBF68
// Address: 0x1cbf68 - 0x1cbfb8
void sub_001CBF68_0x1cbf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBF68_0x1cbf68");
#endif

    ctx->pc = 0x1cbf68u;

    // 0x1cbf68: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1cbf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cbf6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cbf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cbf70: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBF70u;
    {
        const bool branch_taken_0x1cbf70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf70) {
            ctx->pc = 0x1CBF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBF70u;
            // 0x1cbf74: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBF90u;
            goto label_1cbf90;
        }
    }
    ctx->pc = 0x1CBF78u;
    // 0x1cbf78: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1cbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cbf7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cbf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cbf80: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBF80u;
    {
        const bool branch_taken_0x1cbf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf80) {
            ctx->pc = 0x1CBF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBF80u;
            // 0x1cbf84: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBF90u;
            goto label_1cbf90;
        }
    }
    ctx->pc = 0x1CBF88u;
    // 0x1cbf88: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF88u;
        // 0x1cbf8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBF90u;
label_1cbf90:
    // 0x1cbf90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1cbf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1cbf94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBF94u;
    {
        const bool branch_taken_0x1cbf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF94u;
        // 0x1cbf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf94) {
            ctx->pc = 0x1CBFB0u;
            goto label_1cbfb0;
        }
    }
    ctx->pc = 0x1CBF9Cu;
    // 0x1cbf9c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1cbf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cbfa0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1cbfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1cbfa4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBFA4u;
    {
        const bool branch_taken_0x1cbfa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFA4u;
        // 0x1cbfa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfa4) {
            ctx->pc = 0x1CBFB0u;
            goto label_1cbfb0;
        }
    }
    ctx->pc = 0x1CBFACu;
    // 0x1cbfac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cbfacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbfb0:
    // 0x1cbfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBFB8u;
}
