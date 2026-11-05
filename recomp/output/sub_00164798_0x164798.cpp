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

// Function: sub_00164798
// Address: 0x164798 - 0x1647d0
void sub_00164798_0x164798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164798_0x164798");
#endif

    ctx->pc = 0x164798u;

    // 0x164798: 0x8c830304  lw          $v1, 0x304($a0)
    ctx->pc = 0x164798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 772)));
    // 0x16479c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1647a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1647A0u;
    {
        const bool branch_taken_0x1647a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1647A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647A0u;
        // 0x1647a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647a0) {
            ctx->pc = 0x1647B0u;
            goto label_1647b0;
        }
    }
    ctx->pc = 0x1647A8u;
    // 0x1647a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1647A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1647ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647A8u;
        // 0x1647ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1647A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1647B0u;
label_1647b0:
    // 0x1647b0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1647B0u;
    {
        const bool branch_taken_0x1647b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1647b0) {
            ctx->pc = 0x1647C4u;
            goto label_1647c4;
        }
    }
    ctx->pc = 0x1647B8u;
    // 0x1647b8: 0x8c8203b4  lw          $v0, 0x3B4($a0)
    ctx->pc = 0x1647b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 948)));
    // 0x1647bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1647BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1647C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647BCu;
        // 0x1647c0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1647BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1647C4u;
label_1647c4:
    // 0x1647c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1647C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1647C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647C4u;
        // 0x1647c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1647C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1647CCu;
    // 0x1647cc: 0x0  nop
    ctx->pc = 0x1647ccu;
    // NOP
    ctx->pc = 0x1647d0u;
}
