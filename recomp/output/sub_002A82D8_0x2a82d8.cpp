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

// Function: sub_002A82D8
// Address: 0x2a82d8 - 0x2a82e8
void sub_002A82D8_0x2a82d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A82D8_0x2a82d8");
#endif

    ctx->pc = 0x2a82d8u;

    // 0x2a82d8: 0xe48d0010  swc1        $f13, 0x10($a0)
    ctx->pc = 0x2a82d8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2a82dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A82DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82DCu;
        // 0x2a82e0: 0xe48c000c  swc1        $f12, 0xC($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A82DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A82E4u;
    // 0x2a82e4: 0x0  nop
    ctx->pc = 0x2a82e4u;
    // NOP
    ctx->pc = 0x2a82e8u;
}
