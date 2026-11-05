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

// Function: sub_00324C80
// Address: 0x324c80 - 0x324c90
void sub_00324C80_0x324c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324C80_0x324c80");
#endif

    ctx->pc = 0x324c80u;

    // 0x324c80: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x324c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x324c84: 0x3e00008  jr          $ra
    ctx->pc = 0x324C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C84u;
        // 0x324c88: 0x244258e0  addiu       $v0, $v0, 0x58E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324C8Cu;
    // 0x324c8c: 0x0  nop
    ctx->pc = 0x324c8cu;
    // NOP
    ctx->pc = 0x324c90u;
}
