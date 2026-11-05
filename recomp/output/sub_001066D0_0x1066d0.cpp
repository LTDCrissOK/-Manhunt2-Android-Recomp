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

// Function: sub_001066D0
// Address: 0x1066d0 - 0x1066e0
void sub_001066D0_0x1066d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001066D0_0x1066d0");
#endif

    ctx->pc = 0x1066d0u;

    // 0x1066d0: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1066d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1066d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1066D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1066D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066D4u;
        // 0x1066d8: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1066D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1066DCu;
    // 0x1066dc: 0x0  nop
    ctx->pc = 0x1066dcu;
    // NOP
    ctx->pc = 0x1066e0u;
}
