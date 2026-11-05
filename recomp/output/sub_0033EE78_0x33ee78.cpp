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

// Function: sub_0033EE78
// Address: 0x33ee78 - 0x33ee98
void sub_0033EE78_0x33ee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EE78_0x33ee78");
#endif

    ctx->pc = 0x33ee78u;

    // 0x33ee78: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x33ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x33ee7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x33ee80: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x33ee80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33ee84: 0x2442d1e0  addiu       $v0, $v0, -0x2E20
    ctx->pc = 0x33ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955488));
    // 0x33ee88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33ee8c: 0x3e00008  jr          $ra
    ctx->pc = 0x33EE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE8Cu;
        // 0x33ee90: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EE94u;
    // 0x33ee94: 0x0  nop
    ctx->pc = 0x33ee94u;
    // NOP
    ctx->pc = 0x33ee98u;
}
