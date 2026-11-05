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

// Function: sub_003DFEF0
// Address: 0x3dfef0 - 0x3dff18
void sub_003DFEF0_0x3dfef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFEF0_0x3dfef0");
#endif

    ctx->pc = 0x3dfef0u;

    // 0x3dfef0: 0x8c822040  lw          $v0, 0x2040($a0)
    ctx->pc = 0x3dfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8256)));
    // 0x3dfef4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFEF4u;
    {
        const bool branch_taken_0x3dfef4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3dfef4) {
            ctx->pc = 0x3DFEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFEF4u;
            // 0x3dfef8: 0x8c832044  lw          $v1, 0x2044($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFF04u;
            goto label_3dff04;
        }
    }
    ctx->pc = 0x3DFEFCu;
    // 0x3dfefc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEFCu;
        // 0x3dff00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFF04u;
label_3dff04:
    // 0x3dff04: 0x8c822048  lw          $v0, 0x2048($a0)
    ctx->pc = 0x3dff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8264)));
    // 0x3dff08: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3dff08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dff0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF0Cu;
        // 0x3dff10: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFF14u;
    // 0x3dff14: 0x0  nop
    ctx->pc = 0x3dff14u;
    // NOP
    ctx->pc = 0x3dff18u;
}
