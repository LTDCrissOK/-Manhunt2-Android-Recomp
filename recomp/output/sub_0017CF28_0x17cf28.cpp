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

// Function: sub_0017CF28
// Address: 0x17cf28 - 0x17cf40
void sub_0017CF28_0x17cf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CF28_0x17cf28");
#endif

    ctx->pc = 0x17cf28u;

    // 0x17cf28: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17cf2c: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x17cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x17cf30: 0xac8200a4  sw          $v0, 0xA4($a0)
    ctx->pc = 0x17cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
    // 0x17cf34: 0x7c8000b0  sq          $zero, 0xB0($a0)
    ctx->pc = 0x17cf34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 0));
    // 0x17cf38: 0x3e00008  jr          $ra
    ctx->pc = 0x17CF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CF40u;
}
