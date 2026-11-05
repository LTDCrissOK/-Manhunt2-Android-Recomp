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

// Function: sub_0011E320
// Address: 0x11e320 - 0x11e338
void sub_0011E320_0x11e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E320_0x11e320");
#endif

    ctx->pc = 0x11e320u;

    // 0x11e320: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x11e320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x11e324: 0x3e00008  jr          $ra
    ctx->pc = 0x11E324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E324u;
        // 0x11e328: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E32Cu;
    // 0x11e32c: 0x0  nop
    ctx->pc = 0x11e32cu;
    // NOP
    // 0x11e330: 0x2c420030  sltiu       $v0, $v0, 0x30
    ctx->pc = 0x11e330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x11e334: 0x0  nop
    ctx->pc = 0x11e334u;
    // NOP
    ctx->pc = 0x11e338u;
}
