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

// Function: sub_00294A60
// Address: 0x294a60 - 0x294a78
void sub_00294A60_0x294a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294A60_0x294a60");
#endif

    ctx->pc = 0x294a60u;

    // 0x294a60: 0xe48f0018  swc1        $f15, 0x18($a0)
    ctx->pc = 0x294a60u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x294a64: 0xe48c000c  swc1        $f12, 0xC($a0)
    ctx->pc = 0x294a64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x294a68: 0xe48d0010  swc1        $f13, 0x10($a0)
    ctx->pc = 0x294a68u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x294a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x294A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A6Cu;
        // 0x294a70: 0xe48e0014  swc1        $f14, 0x14($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294A74u;
    // 0x294a74: 0x0  nop
    ctx->pc = 0x294a74u;
    // NOP
    ctx->pc = 0x294a78u;
}
