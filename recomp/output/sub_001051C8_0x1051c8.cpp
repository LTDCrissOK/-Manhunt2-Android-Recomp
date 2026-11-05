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

// Function: sub_001051C8
// Address: 0x1051c8 - 0x1051e8
void sub_001051C8_0x1051c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001051C8_0x1051c8");
#endif

    ctx->pc = 0x1051c8u;

    // 0x1051c8: 0x90830020  lbu         $v1, 0x20($a0)
    ctx->pc = 0x1051c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1051cc: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x1051ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1051d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1051d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1051d4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1051d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1051d8: 0x8c820720  lw          $v0, 0x720($a0)
    ctx->pc = 0x1051d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1824)));
    // 0x1051dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1051DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1051E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051DCu;
        // 0x1051e0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1051DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1051E4u;
    // 0x1051e4: 0x0  nop
    ctx->pc = 0x1051e4u;
    // NOP
    ctx->pc = 0x1051e8u;
}
