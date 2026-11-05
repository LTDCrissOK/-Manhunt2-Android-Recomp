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

// Function: sub_00375CD0
// Address: 0x375cd0 - 0x375ce8
void sub_00375CD0_0x375cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375CD0_0x375cd0");
#endif

    ctx->pc = 0x375cd0u;

    // 0x375cd0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x375cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x375cd4: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x375cd4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x375cd8: 0x8c62cd00  lw          $v0, -0x3300($v1)
    ctx->pc = 0x375cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954240)));
    // 0x375cdc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x375cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x375ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x375CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375CE0u;
        // 0x375ce4: 0xac62cd00  sw          $v0, -0x3300($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375CE8u;
}
