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

// Function: sub_002C61F0
// Address: 0x2c61f0 - 0x2c6218
void sub_002C61F0_0x2c61f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C61F0_0x2c61f0");
#endif

    ctx->pc = 0x2c61f0u;

    // 0x2c61f0: 0xe48f000c  swc1        $f15, 0xC($a0)
    ctx->pc = 0x2c61f0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2c61f4: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x2c61f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c61f8: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x2c61f8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c61fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C61FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61FCu;
        // 0x2c6200: 0xe48e0008  swc1        $f14, 0x8($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C61FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6204u;
    // 0x2c6204: 0x0  nop
    ctx->pc = 0x2c6204u;
    // NOP
    // 0x2c6208: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2c6208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2c620c: 0x0  nop
    ctx->pc = 0x2c620cu;
    // NOP
    // 0x2c6210: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2c6210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2c6214: 0x0  nop
    ctx->pc = 0x2c6214u;
    // NOP
    ctx->pc = 0x2c6218u;
}
