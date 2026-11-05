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

// Function: sub_002AF8F8
// Address: 0x2af8f8 - 0x2af918
void sub_002AF8F8_0x2af8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF8F8_0x2af8f8");
#endif

    ctx->pc = 0x2af8f8u;

    // 0x2af8f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2af8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af8fc: 0x0  nop
    ctx->pc = 0x2af8fcu;
    // NOP
    // 0x2af900: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2af900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2af904: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2af904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2af908: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2af908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2af90c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF90Cu;
        // 0x2af910: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF914u;
    // 0x2af914: 0x0  nop
    ctx->pc = 0x2af914u;
    // NOP
    ctx->pc = 0x2af918u;
}
