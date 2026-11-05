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

// Function: sub_002ABF48
// Address: 0x2abf48 - 0x2abf60
void sub_002ABF48_0x2abf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABF48_0x2abf48");
#endif

    ctx->pc = 0x2abf48u;

    // 0x2abf48: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2abf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2abf4c: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x2abf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x2abf50: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2abf50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2abf54: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF54u;
        // 0x2abf58: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABF5Cu;
    // 0x2abf5c: 0x0  nop
    ctx->pc = 0x2abf5cu;
    // NOP
    ctx->pc = 0x2abf60u;
}
