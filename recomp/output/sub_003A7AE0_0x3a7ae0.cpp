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

// Function: sub_003A7AE0
// Address: 0x3a7ae0 - 0x3a7af8
void sub_003A7AE0_0x3a7ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7AE0_0x3a7ae0");
#endif

    ctx->pc = 0x3a7ae0u;

    // 0x3a7ae0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a7ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3a7ae4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a7ae8: 0x246386b8  addiu       $v1, $v1, -0x7948
    ctx->pc = 0x3a7ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936248));
    // 0x3a7aec: 0x244286c8  addiu       $v0, $v0, -0x7938
    ctx->pc = 0x3a7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936264));
    // 0x3a7af0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AF0u;
        // 0x3a7af4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7AF8u;
}
