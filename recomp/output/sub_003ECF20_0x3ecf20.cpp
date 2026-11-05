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

// Function: sub_003ECF20
// Address: 0x3ecf20 - 0x3ecf38
void sub_003ECF20_0x3ecf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECF20_0x3ecf20");
#endif

    ctx->pc = 0x3ecf20u;

    // 0x3ecf20: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ecf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ecf24: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x3ecf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x3ecf28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ecf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ecf2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3ECF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF2Cu;
        // 0x3ecf30: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ECF34u;
    // 0x3ecf34: 0x0  nop
    ctx->pc = 0x3ecf34u;
    // NOP
    ctx->pc = 0x3ecf38u;
}
