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

// Function: sub_001591C0
// Address: 0x1591c0 - 0x1591d0
void sub_001591C0_0x1591c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001591C0_0x1591c0");
#endif

    ctx->pc = 0x1591c0u;

    // 0x1591c0: 0x908302a8  lbu         $v1, 0x2A8($a0)
    ctx->pc = 0x1591c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x1591c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1591c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1591c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1591C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1591CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1591C8u;
        // 0x1591cc: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1591C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1591D0u;
}
