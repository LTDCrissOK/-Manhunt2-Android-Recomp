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

// Function: sub_002E0ED8
// Address: 0x2e0ed8 - 0x2e0ee8
void sub_002E0ED8_0x2e0ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0ED8_0x2e0ed8");
#endif

    ctx->pc = 0x2e0ed8u;

    // 0x2e0ed8: 0xc48000b8  lwc1        $f0, 0xB8($a0)
    ctx->pc = 0x2e0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0edc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0EDCu;
        // 0x2e0ee0: 0xe48000f0  swc1        $f0, 0xF0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0EE4u;
    // 0x2e0ee4: 0x0  nop
    ctx->pc = 0x2e0ee4u;
    // NOP
    ctx->pc = 0x2e0ee8u;
}
