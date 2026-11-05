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

// Function: sub_001EDCA8
// Address: 0x1edca8 - 0x1edce0
void sub_001EDCA8_0x1edca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDCA8_0x1edca8");
#endif

    ctx->pc = 0x1edca8u;

    // 0x1edca8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1edca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1edcac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1edcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1edcb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1edcb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edcb4: 0x2442dbe0  addiu       $v0, $v0, -0x2420
    ctx->pc = 0x1edcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958048));
    // 0x1edcb8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edcbc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1edcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1edcc0: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1edcc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1edcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edcc8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1edcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1edccc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1edcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1edcd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1edcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1edcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCD4u;
        // 0x1edcd8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDCDCu;
    // 0x1edcdc: 0x0  nop
    ctx->pc = 0x1edcdcu;
    // NOP
    ctx->pc = 0x1edce0u;
}
