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

// Function: sub_00375C80
// Address: 0x375c80 - 0x375c98
void sub_00375C80_0x375c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375C80_0x375c80");
#endif

    ctx->pc = 0x375c80u;

    // 0x375c80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x375c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x375c84: 0x8c62cd00  lw          $v0, -0x3300($v1)
    ctx->pc = 0x375c84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x375c88: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x375c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x375c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x375C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375C8Cu;
        // 0x375c90: 0xac62cd00  sw          $v0, -0x3300($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375C94u;
    // 0x375c94: 0x0  nop
    ctx->pc = 0x375c94u;
    // NOP
    ctx->pc = 0x375c98u;
}
