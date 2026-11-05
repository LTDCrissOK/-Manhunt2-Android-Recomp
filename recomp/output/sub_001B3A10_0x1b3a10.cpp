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

// Function: sub_001B3A10
// Address: 0x1b3a10 - 0x1b3a20
void sub_001B3A10_0x1b3a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3A10_0x1b3a10");
#endif

    ctx->pc = 0x1b3a10u;

    // 0x1b3a10: 0xe48c013c  swc1        $f12, 0x13C($a0)
    ctx->pc = 0x1b3a10u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 316), bits); }
    // 0x1b3a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A14u;
        // 0x1b3a18: 0xe48d0140  swc1        $f13, 0x140($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3A1Cu;
    // 0x1b3a1c: 0x0  nop
    ctx->pc = 0x1b3a1cu;
    // NOP
    ctx->pc = 0x1b3a20u;
}
