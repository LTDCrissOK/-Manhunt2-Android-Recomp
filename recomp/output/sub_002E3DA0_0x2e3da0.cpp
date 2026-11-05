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

// Function: sub_002E3DA0
// Address: 0x2e3da0 - 0x2e3db8
void sub_002E3DA0_0x2e3da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3DA0_0x2e3da0");
#endif

    ctx->pc = 0x2e3da0u;

    // 0x2e3da0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2e3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e3da4: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2e3da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e3da8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e3da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e3dac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DACu;
        // 0x2e3db0: 0xe48c0484  swc1        $f12, 0x484($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3DB4u;
    // 0x2e3db4: 0x0  nop
    ctx->pc = 0x2e3db4u;
    // NOP
    ctx->pc = 0x2e3db8u;
}
