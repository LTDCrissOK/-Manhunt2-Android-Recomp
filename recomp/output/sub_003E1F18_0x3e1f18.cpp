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

// Function: sub_003E1F18
// Address: 0x3e1f18 - 0x3e1f38
void sub_003E1F18_0x3e1f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1F18_0x3e1f18");
#endif

    ctx->pc = 0x3e1f18u;

    // 0x3e1f18: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3e1f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e1f1c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x3e1f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3e1f20: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3e1f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e1f24: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F24u;
        // 0x3e1f28: 0xe481001c  swc1        $f1, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1F2Cu;
    // 0x3e1f2c: 0x0  nop
    ctx->pc = 0x3e1f2cu;
    // NOP
    // 0x3e1f30: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x3e1f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x3e1f34: 0x0  nop
    ctx->pc = 0x3e1f34u;
    // NOP
    ctx->pc = 0x3e1f38u;
}
