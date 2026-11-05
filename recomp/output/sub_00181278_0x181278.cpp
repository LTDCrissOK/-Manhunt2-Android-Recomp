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

// Function: sub_00181278
// Address: 0x181278 - 0x181298
void sub_00181278_0x181278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181278_0x181278");
#endif

    ctx->pc = 0x181278u;

    // 0x181278: 0xe4900124  swc1        $f16, 0x124($a0)
    ctx->pc = 0x181278u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x18127c: 0xe48c0110  swc1        $f12, 0x110($a0)
    ctx->pc = 0x18127cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x181280: 0xe48d0118  swc1        $f13, 0x118($a0)
    ctx->pc = 0x181280u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 280), bits); }
    // 0x181284: 0xe48e011c  swc1        $f14, 0x11C($a0)
    ctx->pc = 0x181284u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 284), bits); }
    // 0x181288: 0xe48f0120  swc1        $f15, 0x120($a0)
    ctx->pc = 0x181288u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x18128c: 0x3e00008  jr          $ra
    ctx->pc = 0x18128Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18128Cu;
        // 0x181290: 0xac80010c  sw          $zero, 0x10C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18128Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181294u;
    // 0x181294: 0x0  nop
    ctx->pc = 0x181294u;
    // NOP
    ctx->pc = 0x181298u;
}
