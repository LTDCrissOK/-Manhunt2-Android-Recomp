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

// Function: sub_00118C10
// Address: 0x118c10 - 0x118c68
void sub_00118C10_0x118c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118C10_0x118c10");
#endif

    ctx->pc = 0x118c10u;

    // 0x118c10: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x118c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118c18: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118C18u;
    {
        const bool branch_taken_0x118c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x118C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C18u;
        // 0x118c1c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c18) {
            ctx->pc = 0x118C30u;
            goto label_118c30;
        }
    }
    ctx->pc = 0x118C20u;
    // 0x118c20: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x118C20u;
    {
        const bool branch_taken_0x118c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x118c20) {
            ctx->pc = 0x118C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118C20u;
            // 0x118c24: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118C58u;
            goto label_118c58;
        }
    }
    ctx->pc = 0x118C28u;
    // 0x118c28: 0x3e00008  jr          $ra
    ctx->pc = 0x118C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118C30u;
label_118c30:
    // 0x118c30: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x118c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118c34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x118c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118c38: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x118C38u;
    {
        const bool branch_taken_0x118c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118c38) {
            ctx->pc = 0x118C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118C38u;
            // 0x118c3c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118C48u;
            goto label_118c48;
        }
    }
    ctx->pc = 0x118C40u;
    // 0x118c40: 0x3e00008  jr          $ra
    ctx->pc = 0x118C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C40u;
        // 0x118c44: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118C48u;
label_118c48:
    // 0x118c48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118C48u;
    {
        const bool branch_taken_0x118c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118c48) {
            ctx->pc = 0x118C5Cu;
            goto label_118c5c;
        }
    }
    ctx->pc = 0x118C50u;
    // 0x118c50: 0x3e00008  jr          $ra
    ctx->pc = 0x118C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C50u;
        // 0x118c54: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118C58u;
label_118c58:
    // 0x118c58: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x118c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
label_118c5c:
    // 0x118c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x118C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118C64u;
    // 0x118c64: 0x0  nop
    ctx->pc = 0x118c64u;
    // NOP
    ctx->pc = 0x118c68u;
}
