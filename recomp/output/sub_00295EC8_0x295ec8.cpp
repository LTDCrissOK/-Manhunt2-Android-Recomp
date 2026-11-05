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

// Function: sub_00295EC8
// Address: 0x295ec8 - 0x295ef8
void sub_00295EC8_0x295ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295EC8_0x295ec8");
#endif

    ctx->pc = 0x295ec8u;

    // 0x295ec8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x295ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x295ecc: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x295eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x295ed0: 0x8c43a8c0  lw          $v1, -0x5740($v0)
    ctx->pc = 0x295ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA8C0u));
    // 0x295ed4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x295ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x295ed8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x295ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295edc: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x295edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x295ee0: 0x244211e0  addiu       $v0, $v0, 0x11E0
    ctx->pc = 0x295ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4576));
    // 0x295ee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x295ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295ee8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x295ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x295eec: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x295eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x295EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295EF0u;
        // 0x295ef4: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295EF8u;
}
