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

// Function: sub_00254D68
// Address: 0x254d68 - 0x254d80
void sub_00254D68_0x254d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254D68_0x254d68");
#endif

    ctx->pc = 0x254d68u;

    // 0x254d68: 0x8c820fec  lw          $v0, 0xFEC($a0)
    ctx->pc = 0x254d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4076)));
    // 0x254d6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x254d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x254d70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x254d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254d74: 0x3e00008  jr          $ra
    ctx->pc = 0x254D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D74u;
        // 0x254d78: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254D7Cu;
    // 0x254d7c: 0x0  nop
    ctx->pc = 0x254d7cu;
    // NOP
    ctx->pc = 0x254d80u;
}
