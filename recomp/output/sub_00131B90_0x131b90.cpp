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

// Function: sub_00131B90
// Address: 0x131b90 - 0x131bc8
void sub_00131B90_0x131b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131B90_0x131b90");
#endif

    ctx->pc = 0x131b90u;

    // 0x131b90: 0x8c820218  lw          $v0, 0x218($a0)
    ctx->pc = 0x131b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x131b94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131B94u;
    {
        const bool branch_taken_0x131b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B94u;
        // 0x131b98: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b94) {
            ctx->pc = 0x131BA8u;
            goto label_131ba8;
        }
    }
    ctx->pc = 0x131B9Cu;
    // 0x131b9c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x131b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x131ba0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131BA0u;
    {
        const bool branch_taken_0x131ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131ba0) {
            ctx->pc = 0x131BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131BA0u;
            // 0x131ba4: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131BB0u;
            goto label_131bb0;
        }
    }
    ctx->pc = 0x131BA8u;
label_131ba8:
    // 0x131ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x131BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BA8u;
        // 0x131bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131BB0u;
label_131bb0:
    // 0x131bb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131BB0u;
    {
        const bool branch_taken_0x131bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BB0u;
        // 0x131bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bb0) {
            ctx->pc = 0x131BC0u;
            goto label_131bc0;
        }
    }
    ctx->pc = 0x131BB8u;
    // 0x131bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x131BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BB8u;
        // 0x131bbc: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131BC0u;
label_131bc0:
    // 0x131bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x131BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BC0u;
        // 0x131bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131BC8u;
}
