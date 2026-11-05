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

// Function: sub_002ACA40
// Address: 0x2aca40 - 0x2aca68
void sub_002ACA40_0x2aca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACA40_0x2aca40");
#endif

    ctx->pc = 0x2aca40u;

    // 0x2aca40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2aca40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2aca44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2aca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aca48: 0x8c43bd6c  lw          $v1, -0x4294($v0)
    ctx->pc = 0x2aca48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD6Cu));
    // 0x2aca4c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACA4Cu;
    {
        const bool branch_taken_0x2aca4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2ACA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA4Cu;
        // 0x2aca50: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca4c) {
            ctx->pc = 0x2ACA60u;
            goto label_2aca60;
        }
    }
    ctx->pc = 0x2ACA54u;
    // 0x2aca54: 0x8c622c14  lw          $v0, 0x2C14($v1)
    ctx->pc = 0x2aca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11284)));
    // 0x2aca58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aca5c: 0xac622c14  sw          $v0, 0x2C14($v1)
    ctx->pc = 0x2aca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11284), GPR_U32(ctx, 2));
label_2aca60:
    // 0x2aca60: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACA68u;
}
