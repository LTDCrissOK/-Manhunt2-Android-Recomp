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

// Function: sub_003A98E0
// Address: 0x3a98e0 - 0x3a9920
void sub_003A98E0_0x3a98e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A98E0_0x3a98e0");
#endif

    ctx->pc = 0x3a98e0u;

    // 0x3a98e0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a98e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a98e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a98e8: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a98e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41A0D0u));
    // 0x3a98ec: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A98ECu;
    {
        const bool branch_taken_0x3a98ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x3a98ec) {
            ctx->pc = 0x3A98F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A98ECu;
            // 0x3a98f0: 0xa0850050  sb          $a1, 0x50($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9904u;
            goto label_3a9904;
        }
    }
    ctx->pc = 0x3A98F4u;
    // 0x3a98f4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a98f8: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a98f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41A0C8u));
    // 0x3a98fc: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A98FCu;
    {
        const bool branch_taken_0x3a98fc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3a98fc) {
            ctx->pc = 0x3A9900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A98FCu;
            // 0x3a9900: 0xa0850050  sb          $a1, 0x50($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9904u;
            goto label_3a9904;
        }
    }
    ctx->pc = 0x3A9904u;
label_3a9904:
    // 0x3a9904: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A990Cu;
    // 0x3a990c: 0x0  nop
    ctx->pc = 0x3a990cu;
    // NOP
    // 0x3a9910: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3a9910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a9914: 0x0  nop
    ctx->pc = 0x3a9914u;
    // NOP
    // 0x3a9918: 0x0  nop
    ctx->pc = 0x3a9918u;
    // NOP
    // 0x3a991c: 0x0  nop
    ctx->pc = 0x3a991cu;
    // NOP
    ctx->pc = 0x3a9920u;
}
