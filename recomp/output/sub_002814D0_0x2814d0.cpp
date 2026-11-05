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

// Function: sub_002814D0
// Address: 0x2814d0 - 0x281500
void sub_002814D0_0x2814d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002814D0_0x2814d0");
#endif

    ctx->pc = 0x2814d0u;

    // 0x2814d0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2814d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2814d4: 0x2465cb28  addiu       $a1, $v1, -0x34D8
    ctx->pc = 0x2814d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
    // 0x2814d8: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2814d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x66CB74u));
    // 0x2814dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2814DCu;
    {
        const bool branch_taken_0x2814dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2814E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814DCu;
        // 0x2814e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814dc) {
            ctx->pc = 0x2814F4u;
            goto label_2814f4;
        }
    }
    ctx->pc = 0x2814E4u;
    // 0x2814e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2814e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2814e8: 0xaca40054  sw          $a0, 0x54($a1)
    ctx->pc = 0x2814e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 4));
    // 0x2814ec: 0xaca2004c  sw          $v0, 0x4C($a1)
    ctx->pc = 0x2814ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
    // 0x2814f0: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x2814f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
label_2814f4:
    // 0x2814f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2814F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2814F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2814FCu;
    // 0x2814fc: 0x0  nop
    ctx->pc = 0x2814fcu;
    // NOP
    ctx->pc = 0x281500u;
}
