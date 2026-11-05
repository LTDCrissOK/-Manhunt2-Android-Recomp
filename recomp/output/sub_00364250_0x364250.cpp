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

// Function: sub_00364250
// Address: 0x364250 - 0x364278
void sub_00364250_0x364250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364250_0x364250");
#endif

    ctx->pc = 0x364250u;

    // 0x364250: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x364250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x364254: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x364254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x364258: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x364258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x36425c: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x36425cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x364260: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x364260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x364264: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x364264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x364268: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x364268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x36426c: 0x3e00008  jr          $ra
    ctx->pc = 0x36426Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36426Cu;
        // 0x364270: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36426Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364274u;
    // 0x364274: 0x0  nop
    ctx->pc = 0x364274u;
    // NOP
    ctx->pc = 0x364278u;
}
