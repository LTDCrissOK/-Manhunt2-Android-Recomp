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

// Function: sub_0028B658
// Address: 0x28b658 - 0x28b668
void sub_0028B658_0x28b658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B658_0x28b658");
#endif

    ctx->pc = 0x28b658u;

    // 0x28b658: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28b658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28b65c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B65Cu;
        // 0x28b660: 0xac44adcc  sw          $a0, -0x5234($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B664u;
    // 0x28b664: 0x0  nop
    ctx->pc = 0x28b664u;
    // NOP
    ctx->pc = 0x28b668u;
}
