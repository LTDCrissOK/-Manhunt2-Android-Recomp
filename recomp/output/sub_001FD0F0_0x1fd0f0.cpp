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

// Function: sub_001FD0F0
// Address: 0x1fd0f0 - 0x1fd110
void sub_001FD0F0_0x1fd0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD0F0_0x1fd0f0");
#endif

    ctx->pc = 0x1fd0f0u;

    // 0x1fd0f0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1fd0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1fd0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0F4u;
        // 0x1fd0f8: 0x8c629334  lw          $v0, -0x6CCC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939444)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD0FCu;
    // 0x1fd0fc: 0x0  nop
    ctx->pc = 0x1fd0fcu;
    // NOP
    // 0x1fd100: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fd100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd104: 0x0  nop
    ctx->pc = 0x1fd104u;
    // NOP
    // 0x1fd108: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1fd108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fd10c: 0x0  nop
    ctx->pc = 0x1fd10cu;
    // NOP
    ctx->pc = 0x1fd110u;
}
