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

// Function: sub_00249D70
// Address: 0x249d70 - 0x249d80
void sub_00249D70_0x249d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249D70_0x249d70");
#endif

    ctx->pc = 0x249d70u;

    // 0x249d70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x249d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x249d74: 0x3e00008  jr          $ra
    ctx->pc = 0x249D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D74u;
        // 0x249d78: 0xa04498d1  sb          $a0, -0x672F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940881), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249D7Cu;
    // 0x249d7c: 0x0  nop
    ctx->pc = 0x249d7cu;
    // NOP
    ctx->pc = 0x249d80u;
}
