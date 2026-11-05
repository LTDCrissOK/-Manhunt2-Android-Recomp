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

// Function: sub_001B3228
// Address: 0x1b3228 - 0x1b3240
void sub_001B3228_0x1b3228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3228_0x1b3228");
#endif

    ctx->pc = 0x1b3228u;

    // 0x1b3228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b322c: 0xe48c0040  swc1        $f12, 0x40($a0)
    ctx->pc = 0x1b322cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1b3230: 0xa0820049  sb          $v0, 0x49($a0)
    ctx->pc = 0x1b3230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3234: 0xe48d0044  swc1        $f13, 0x44($a0)
    ctx->pc = 0x1b3234u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x1b3238: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3238u;
        // 0x1b323c: 0xa0800048  sb          $zero, 0x48($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3240u;
}
