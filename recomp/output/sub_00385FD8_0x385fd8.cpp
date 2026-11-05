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

// Function: sub_00385FD8
// Address: 0x385fd8 - 0x385ff0
void sub_00385FD8_0x385fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385FD8_0x385fd8");
#endif

    ctx->pc = 0x385fd8u;

    // 0x385fd8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x385fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x385fdc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x385fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x385fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x385FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FE0u;
        // 0x385fe4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385FE8u;
    // 0x385fe8: 0xac4600ac  sw          $a2, 0xAC($v0)
    ctx->pc = 0x385fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 6));
    // 0x385fec: 0x0  nop
    ctx->pc = 0x385fecu;
    // NOP
    ctx->pc = 0x385ff0u;
}
