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

// Function: sub_002962E8
// Address: 0x2962e8 - 0x296310
void sub_002962E8_0x2962e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002962E8_0x2962e8");
#endif

    ctx->pc = 0x2962e8u;

    // 0x2962e8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2962e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2962ec: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x2962ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2962f0: 0x8c83a8c0  lw          $v1, -0x5740($a0)
    ctx->pc = 0x2962f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA8C0u));
    // 0x2962f4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2962f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2962f8: 0x244211e0  addiu       $v0, $v0, 0x11E0
    ctx->pc = 0x2962f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4576));
    // 0x2962fc: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2962fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x296300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296304: 0x3e00008  jr          $ra
    ctx->pc = 0x296304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296304u;
        // 0x296308: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29630Cu;
    // 0x29630c: 0x0  nop
    ctx->pc = 0x29630cu;
    // NOP
    ctx->pc = 0x296310u;
}
