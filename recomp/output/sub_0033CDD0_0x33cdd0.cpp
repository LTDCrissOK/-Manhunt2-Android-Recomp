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

// Function: sub_0033CDD0
// Address: 0x33cdd0 - 0x33cdf8
void sub_0033CDD0_0x33cdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CDD0_0x33cdd0");
#endif

    ctx->pc = 0x33cdd0u;

    // 0x33cdd0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x33cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x33cdd4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x33cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x33cdd8: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x33cdd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33cddc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33cde0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cde4: 0x3e00008  jr          $ra
    ctx->pc = 0x33CDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDE4u;
        // 0x33cde8: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CDECu;
    // 0x33cdec: 0x0  nop
    ctx->pc = 0x33cdecu;
    // NOP
    // 0x33cdf0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33cdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33cdf4: 0x0  nop
    ctx->pc = 0x33cdf4u;
    // NOP
    ctx->pc = 0x33cdf8u;
}
