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

// Function: sub_0033EE18
// Address: 0x33ee18 - 0x33ee38
void sub_0033EE18_0x33ee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EE18_0x33ee18");
#endif

    ctx->pc = 0x33ee18u;

    // 0x33ee18: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x33ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x33ee1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x33ee20: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x33ee20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33ee24: 0x2442d1e0  addiu       $v0, $v0, -0x2E20
    ctx->pc = 0x33ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955488));
    // 0x33ee28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33ee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x33EE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE2Cu;
        // 0x33ee30: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EE34u;
    // 0x33ee34: 0x0  nop
    ctx->pc = 0x33ee34u;
    // NOP
    ctx->pc = 0x33ee38u;
}
