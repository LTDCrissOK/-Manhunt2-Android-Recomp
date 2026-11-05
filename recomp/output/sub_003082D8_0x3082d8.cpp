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

// Function: sub_003082D8
// Address: 0x3082d8 - 0x308328
void sub_003082D8_0x3082d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003082D8_0x3082d8");
#endif

    ctx->pc = 0x3082d8u;

    // 0x3082d8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3082d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x3082dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3082dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3082e0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3082E0u;
    {
        const bool branch_taken_0x3082e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3082E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082E0u;
        // 0x3082e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3082e0) {
            ctx->pc = 0x3082F4u;
            goto label_3082f4;
        }
    }
    ctx->pc = 0x3082E8u;
    // 0x3082e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3082e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3082ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3082ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3082F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082ECu;
        // 0x3082f0: 0xac830070  sw          $v1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3082ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3082F4u;
label_3082f4:
    // 0x3082f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3082F4u;
    {
        const bool branch_taken_0x3082f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3082f4) {
            ctx->pc = 0x308308u;
            goto label_308308;
        }
    }
    ctx->pc = 0x3082FCu;
    // 0x3082fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3082fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x308300: 0x3e00008  jr          $ra
    ctx->pc = 0x308300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308300u;
        // 0x308304: 0xac830070  sw          $v1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308308u;
label_308308:
    // 0x308308: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308308u;
    {
        const bool branch_taken_0x308308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308308u;
        // 0x30830c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308308) {
            ctx->pc = 0x308318u;
            goto label_308318;
        }
    }
    ctx->pc = 0x308310u;
    // 0x308310: 0x3e00008  jr          $ra
    ctx->pc = 0x308310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308310u;
        // 0x308314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308318u;
label_308318:
    // 0x308318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30831c: 0x3e00008  jr          $ra
    ctx->pc = 0x30831Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30831Cu;
        // 0x308320: 0xac830070  sw          $v1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30831Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308324u;
    // 0x308324: 0x0  nop
    ctx->pc = 0x308324u;
    // NOP
    ctx->pc = 0x308328u;
}
