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

// Function: sub_001FD000
// Address: 0x1fd000 - 0x1fd018
void sub_001FD000_0x1fd000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD000_0x1fd000");
#endif

    ctx->pc = 0x1fd000u;

    // 0x1fd000: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1fd000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x1fd004: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1fd004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1fd008: 0x244278e0  addiu       $v0, $v0, 0x78E0
    ctx->pc = 0x1fd008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30944));
    // 0x1fd00c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD00Cu;
        // 0x1fd010: 0xac629330  sw          $v0, -0x6CD0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294939440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD014u;
    // 0x1fd014: 0x0  nop
    ctx->pc = 0x1fd014u;
    // NOP
    ctx->pc = 0x1fd018u;
}
