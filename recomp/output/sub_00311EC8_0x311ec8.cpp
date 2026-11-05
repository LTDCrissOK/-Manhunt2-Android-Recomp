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

// Function: sub_00311EC8
// Address: 0x311ec8 - 0x311ed8
void sub_00311EC8_0x311ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311EC8_0x311ec8");
#endif

    ctx->pc = 0x311ec8u;

    // 0x311ec8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x311ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x311ecc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x311eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x311ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x311ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311ED0u;
        // 0x311ed4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311ED8u;
}
