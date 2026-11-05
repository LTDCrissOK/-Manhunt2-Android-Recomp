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

// Function: sub_003969C0
// Address: 0x3969c0 - 0x3969d8
void sub_003969C0_0x3969c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003969C0_0x3969c0");
#endif

    ctx->pc = 0x3969c0u;

    // 0x3969c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3969c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3969c4: 0x24631920  addiu       $v1, $v1, 0x1920
    ctx->pc = 0x3969c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6432));
    // 0x3969c8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x3969c8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x401920u));
    // 0x3969cc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3969ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x3969d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3969D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3969D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969D0u;
        // 0x3969d4: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3969D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3969D8u;
}
