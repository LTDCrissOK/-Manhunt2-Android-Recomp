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

// Function: sub_0031F150
// Address: 0x31f150 - 0x31f168
void sub_0031F150_0x31f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F150_0x31f150");
#endif

    ctx->pc = 0x31f150u;

    // 0x31f150: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31f150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31f154: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31f154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31f158: 0xac40bdc8  sw          $zero, -0x4238($v0)
    ctx->pc = 0x31f158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBDC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBDC8u, _value); } while (0);
    // 0x31f15c: 0x3e00008  jr          $ra
    ctx->pc = 0x31F15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F15Cu;
        // 0x31f160: 0xac60bdc4  sw          $zero, -0x423C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F164u;
    // 0x31f164: 0x0  nop
    ctx->pc = 0x31f164u;
    // NOP
    ctx->pc = 0x31f168u;
}
