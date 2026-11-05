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

// Function: sub_002961F8
// Address: 0x2961f8 - 0x296220
void sub_002961F8_0x2961f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002961F8_0x2961f8");
#endif

    ctx->pc = 0x2961f8u;

    // 0x2961f8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2961f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2961fc: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x2961fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x296200: 0x8ca3a8c0  lw          $v1, -0x5740($a1)
    ctx->pc = 0x296200u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA8C0u));
    // 0x296204: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x296204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x296208: 0x244211e0  addiu       $v0, $v0, 0x11E0
    ctx->pc = 0x296208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4576));
    // 0x29620c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x29620cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x296210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296214: 0x3e00008  jr          $ra
    ctx->pc = 0x296214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296214u;
        // 0x296218: 0xac44000c  sw          $a0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29621Cu;
    // 0x29621c: 0x0  nop
    ctx->pc = 0x29621cu;
    // NOP
    ctx->pc = 0x296220u;
}
