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

// Function: sub_0025B428
// Address: 0x25b428 - 0x25b440
void sub_0025B428_0x25b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B428_0x25b428");
#endif

    ctx->pc = 0x25b428u;

    // 0x25b428: 0xc4a0039c  lwc1        $f0, 0x39C($a1)
    ctx->pc = 0x25b428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b42c: 0xc4a103a0  lwc1        $f1, 0x3A0($a1)
    ctx->pc = 0x25b42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b430: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x25b430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x25b434: 0x3e00008  jr          $ra
    ctx->pc = 0x25B434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B434u;
        // 0x25b438: 0xe4810028  swc1        $f1, 0x28($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B43Cu;
    // 0x25b43c: 0x0  nop
    ctx->pc = 0x25b43cu;
    // NOP
    ctx->pc = 0x25b440u;
}
