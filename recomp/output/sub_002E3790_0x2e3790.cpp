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

// Function: sub_002E3790
// Address: 0x2e3790 - 0x2e37a8
void sub_002E3790_0x2e3790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3790_0x2e3790");
#endif

    ctx->pc = 0x2e3790u;

    // 0x2e3790: 0xa08503d8  sb          $a1, 0x3D8($a0)
    ctx->pc = 0x2e3790u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 984), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e3794: 0xa08503d4  sb          $a1, 0x3D4($a0)
    ctx->pc = 0x2e3794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 980), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e3798: 0xa08503d5  sb          $a1, 0x3D5($a0)
    ctx->pc = 0x2e3798u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 981), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e379c: 0xa08503d6  sb          $a1, 0x3D6($a0)
    ctx->pc = 0x2e379cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 982), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e37a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E37A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37A0u;
        // 0x2e37a4: 0xa08503d7  sb          $a1, 0x3D7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 983), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E37A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E37A8u;
}
