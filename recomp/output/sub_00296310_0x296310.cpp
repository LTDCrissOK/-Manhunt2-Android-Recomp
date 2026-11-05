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

// Function: sub_00296310
// Address: 0x296310 - 0x296338
void sub_00296310_0x296310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296310_0x296310");
#endif

    ctx->pc = 0x296310u;

    // 0x296310: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x296310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x296314: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x296314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x296318: 0x8c83a8c0  lw          $v1, -0x5740($a0)
    ctx->pc = 0x296318u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA8C0u));
    // 0x29631c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x29631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x296320: 0x244211e0  addiu       $v0, $v0, 0x11E0
    ctx->pc = 0x296320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4576));
    // 0x296324: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x296324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x296328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29632c: 0x3e00008  jr          $ra
    ctx->pc = 0x29632Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29632Cu;
        // 0x296330: 0xe44c0020  swc1        $f12, 0x20($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29632Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296334u;
    // 0x296334: 0x0  nop
    ctx->pc = 0x296334u;
    // NOP
    ctx->pc = 0x296338u;
}
