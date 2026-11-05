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

// Function: sub_00281500
// Address: 0x281500 - 0x281530
void sub_00281500_0x281500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281500_0x281500");
#endif

    ctx->pc = 0x281500u;

    // 0x281500: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x281500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x281504: 0x2463cb28  addiu       $v1, $v1, -0x34D8
    ctx->pc = 0x281504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
    // 0x281508: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x281508u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x66CB80u));
    // 0x28150c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28150Cu;
    {
        const bool branch_taken_0x28150c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28150Cu;
        // 0x281510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28150c) {
            ctx->pc = 0x281520u;
            goto label_281520;
        }
    }
    ctx->pc = 0x281514u;
    // 0x281514: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x281514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x281518: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x281518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x28151c: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x28151cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
label_281520:
    // 0x281520: 0x3e00008  jr          $ra
    ctx->pc = 0x281520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281528u;
    // 0x281528: 0xac4601f8  sw          $a2, 0x1F8($v0)
    ctx->pc = 0x281528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 504), GPR_U32(ctx, 6));
    // 0x28152c: 0x0  nop
    ctx->pc = 0x28152cu;
    // NOP
    ctx->pc = 0x281530u;
}
