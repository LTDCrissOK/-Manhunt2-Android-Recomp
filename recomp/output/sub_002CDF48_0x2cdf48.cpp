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

// Function: sub_002CDF48
// Address: 0x2cdf48 - 0x2cdf70
void sub_002CDF48_0x2cdf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDF48_0x2cdf48");
#endif

    ctx->pc = 0x2cdf48u;

    // 0x2cdf48: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2cdf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2cdf4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2cdf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cdf50: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2cdf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cdf54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cdf54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf58: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x2cdf58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cdf5c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2cdf5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2cdf60: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x2cdf60u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2cdf64: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF64u;
        // 0x2cdf68: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDF6Cu;
    // 0x2cdf6c: 0x0  nop
    ctx->pc = 0x2cdf6cu;
    // NOP
    ctx->pc = 0x2cdf70u;
}
