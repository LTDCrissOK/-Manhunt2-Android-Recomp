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

// Function: sub_00115F00
// Address: 0x115f00 - 0x115f18
void sub_00115F00_0x115f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115F00_0x115f00");
#endif

    ctx->pc = 0x115f00u;

    // 0x115f00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x115f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x115f04: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x115f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x115f08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x115f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x115f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x115F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F0Cu;
        // 0x115f10: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115F14u;
    // 0x115f14: 0x0  nop
    ctx->pc = 0x115f14u;
    // NOP
    ctx->pc = 0x115f18u;
}
