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

// Function: sub_003E3DD8
// Address: 0x3e3dd8 - 0x3e3df0
void sub_003E3DD8_0x3e3dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3DD8_0x3e3dd8");
#endif

    ctx->pc = 0x3e3dd8u;

    // 0x3e3dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e3dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e3ddc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3e3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3e3de0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3e3de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3e3de4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DE4u;
        // 0x3e3de8: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3DECu;
    // 0x3e3dec: 0x0  nop
    ctx->pc = 0x3e3decu;
    // NOP
    ctx->pc = 0x3e3df0u;
}
