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

// Function: sub_00254D80
// Address: 0x254d80 - 0x254da0
void sub_00254D80_0x254d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254D80_0x254d80");
#endif

    ctx->pc = 0x254d80u;

    // 0x254d80: 0x8c820fec  lw          $v0, 0xFEC($a0)
    ctx->pc = 0x254d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4076)));
    // 0x254d84: 0x3e00008  jr          $ra
    ctx->pc = 0x254D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D84u;
        // 0x254d88: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254D8Cu;
    // 0x254d8c: 0x0  nop
    ctx->pc = 0x254d8cu;
    // NOP
    // 0x254d90: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x254d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x254d94: 0x0  nop
    ctx->pc = 0x254d94u;
    // NOP
    // 0x254d98: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x254d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x254d9c: 0x0  nop
    ctx->pc = 0x254d9cu;
    // NOP
    ctx->pc = 0x254da0u;
}
