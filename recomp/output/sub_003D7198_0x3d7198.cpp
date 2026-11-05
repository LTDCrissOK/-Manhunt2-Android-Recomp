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

// Function: sub_003D7198
// Address: 0x3d7198 - 0x3d71a8
void sub_003D7198_0x3d7198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7198_0x3d7198");
#endif

    ctx->pc = 0x3d7198u;

    // 0x3d7198: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d7198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d719c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D719Cu;
        // 0x3d71a0: 0x24422580  addiu       $v0, $v0, 0x2580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D719Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D71A4u;
    // 0x3d71a4: 0x0  nop
    ctx->pc = 0x3d71a4u;
    // NOP
    ctx->pc = 0x3d71a8u;
}
