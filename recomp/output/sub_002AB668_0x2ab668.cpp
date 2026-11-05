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

// Function: sub_002AB668
// Address: 0x2ab668 - 0x2ab680
void sub_002AB668_0x2ab668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB668_0x2ab668");
#endif

    ctx->pc = 0x2ab668u;

    // 0x2ab668: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2ab668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab66c: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x2ab66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x2ab670: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2ab670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab674: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB674u;
        // 0x2ab678: 0xe481007c  swc1        $f1, 0x7C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB67Cu;
    // 0x2ab67c: 0x0  nop
    ctx->pc = 0x2ab67cu;
    // NOP
    ctx->pc = 0x2ab680u;
}
