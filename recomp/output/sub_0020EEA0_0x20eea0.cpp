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

// Function: sub_0020EEA0
// Address: 0x20eea0 - 0x20eeb8
void sub_0020EEA0_0x20eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EEA0_0x20eea0");
#endif

    ctx->pc = 0x20eea0u;

    // 0x20eea0: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x20eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x20eea4: 0x3e00008  jr          $ra
    ctx->pc = 0x20EEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEA4u;
        // 0x20eea8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EEACu;
    // 0x20eeac: 0x0  nop
    ctx->pc = 0x20eeacu;
    // NOP
    // 0x20eeb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20eeb4: 0x0  nop
    ctx->pc = 0x20eeb4u;
    // NOP
    ctx->pc = 0x20eeb8u;
}
