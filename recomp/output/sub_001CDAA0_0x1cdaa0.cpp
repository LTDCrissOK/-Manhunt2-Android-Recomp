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

// Function: sub_001CDAA0
// Address: 0x1cdaa0 - 0x1cdac0
void sub_001CDAA0_0x1cdaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDAA0_0x1cdaa0");
#endif

    ctx->pc = 0x1cdaa0u;

    // 0x1cdaa0: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1cdaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1cdaa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDAA4u;
    {
        const bool branch_taken_0x1cdaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAA4u;
        // 0x1cdaa8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaa4) {
            ctx->pc = 0x1CDAB8u;
            goto label_1cdab8;
        }
    }
    ctx->pc = 0x1CDAACu;
    // 0x1cdaac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cdaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cdab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAB0u;
        // 0x1cdab4: 0xc44089c4  lwc1        $f0, -0x763C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDAB8u;
label_1cdab8:
    // 0x1cdab8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAB8u;
        // 0x1cdabc: 0xc4408a60  lwc1        $f0, -0x75A0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDAC0u;
}
