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

// Function: sub_00118C68
// Address: 0x118c68 - 0x118cc0
void sub_00118C68_0x118c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118C68_0x118c68");
#endif

    ctx->pc = 0x118c68u;

    // 0x118c68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x118c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118c70: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x118c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x118c74: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118C74u;
    {
        const bool branch_taken_0x118c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x118C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C74u;
        // 0x118c78: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c74) {
            ctx->pc = 0x118C8Cu;
            goto label_118c8c;
        }
    }
    ctx->pc = 0x118C7Cu;
    // 0x118c7c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x118C7Cu;
    {
        const bool branch_taken_0x118c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x118C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C7Cu;
        // 0x118c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c7c) {
            ctx->pc = 0x118CA8u;
            goto label_118ca8;
        }
    }
    ctx->pc = 0x118C84u;
    // 0x118c84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x118C84u;
    {
        const bool branch_taken_0x118c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118c84) {
            ctx->pc = 0x118CB4u;
            goto label_118cb4;
        }
    }
    ctx->pc = 0x118C8Cu;
label_118c8c:
    // 0x118c8c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x118c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x118c90: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x118c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x118c94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118c98: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x118c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x118c9c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x118c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x118ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x118CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CA0u;
        // 0x118ca4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118CA8u;
label_118ca8:
    // 0x118ca8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x118ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x118cac: 0x3e00008  jr          $ra
    ctx->pc = 0x118CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CACu;
        // 0x118cb0: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118CB4u;
label_118cb4:
    // 0x118cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x118CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118CBCu;
    // 0x118cbc: 0x0  nop
    ctx->pc = 0x118cbcu;
    // NOP
    ctx->pc = 0x118cc0u;
}
