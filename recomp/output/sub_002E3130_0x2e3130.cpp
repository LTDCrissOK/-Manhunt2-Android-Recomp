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

// Function: sub_002E3130
// Address: 0x2e3130 - 0x2e3158
void sub_002E3130_0x2e3130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3130_0x2e3130");
#endif

    ctx->pc = 0x2e3130u;

    // 0x2e3130: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e3130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2e3134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3138: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e3138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e313c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e313cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3140: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x2e3140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x2e3144: 0xe481003c  swc1        $f1, 0x3C($a0)
    ctx->pc = 0x2e3144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2e3148: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x2e3148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x2e314c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E314Cu;
        // 0x2e3150: 0xe4800060  swc1        $f0, 0x60($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E314Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3154u;
    // 0x2e3154: 0x0  nop
    ctx->pc = 0x2e3154u;
    // NOP
    ctx->pc = 0x2e3158u;
}
