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

// Function: sub_002D0448
// Address: 0x2d0448 - 0x2d0460
void sub_002D0448_0x2d0448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0448_0x2d0448");
#endif

    ctx->pc = 0x2d0448u;

    // 0x2d0448: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d0448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d044c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2d044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d0450: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2d0450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2d0454: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0454u;
        // 0x2d0458: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D045Cu;
    // 0x2d045c: 0x0  nop
    ctx->pc = 0x2d045cu;
    // NOP
    ctx->pc = 0x2d0460u;
}
