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

// Function: sub_00280F40
// Address: 0x280f40 - 0x280f50
void sub_00280F40_0x280f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280F40_0x280f40");
#endif

    ctx->pc = 0x280f40u;

    // 0x280f40: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x280f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x280f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280f48: 0x3e00008  jr          $ra
    ctx->pc = 0x280F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F48u;
        // 0x280f4c: 0xac62cd84  sw          $v0, -0x327C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280F50u;
}
