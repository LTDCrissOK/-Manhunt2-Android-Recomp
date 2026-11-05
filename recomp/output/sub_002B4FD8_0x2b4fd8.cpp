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

// Function: sub_002B4FD8
// Address: 0x2b4fd8 - 0x2b4fe8
void sub_002B4FD8_0x2b4fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4FD8_0x2b4fd8");
#endif

    ctx->pc = 0x2b4fd8u;

    // 0x2b4fd8: 0x80a20007  lb          $v0, 0x7($a1)
    ctx->pc = 0x2b4fd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x2b4fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FDCu;
        // 0x2b4fe0: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4FE4u;
    // 0x2b4fe4: 0x0  nop
    ctx->pc = 0x2b4fe4u;
    // NOP
    ctx->pc = 0x2b4fe8u;
}
