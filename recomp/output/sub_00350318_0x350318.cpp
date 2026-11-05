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

// Function: sub_00350318
// Address: 0x350318 - 0x350328
void sub_00350318_0x350318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350318_0x350318");
#endif

    ctx->pc = 0x350318u;

    // 0x350318: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x350318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x35031c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x350320: 0x3e00008  jr          $ra
    ctx->pc = 0x350320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350320u;
        // 0x350324: 0xa0442cfc  sb          $a0, 0x2CFC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 11516), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350328u;
}
