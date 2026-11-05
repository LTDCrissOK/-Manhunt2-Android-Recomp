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

// Function: sub_00281020
// Address: 0x281020 - 0x281030
void sub_00281020_0x281020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281020_0x281020");
#endif

    ctx->pc = 0x281020u;

    // 0x281020: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x281020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x281024: 0x3e00008  jr          $ra
    ctx->pc = 0x281024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281024u;
        // 0x281028: 0xac40cb34  sw          $zero, -0x34CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28102Cu;
    // 0x28102c: 0x0  nop
    ctx->pc = 0x28102cu;
    // NOP
    ctx->pc = 0x281030u;
}
