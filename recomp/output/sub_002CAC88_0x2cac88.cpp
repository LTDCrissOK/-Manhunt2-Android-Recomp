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

// Function: sub_002CAC88
// Address: 0x2cac88 - 0x2caca0
void sub_002CAC88_0x2cac88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAC88_0x2cac88");
#endif

    ctx->pc = 0x2cac88u;

    // 0x2cac88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2cac88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2cac8c: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x2cac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2cac90: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2cac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2cac94: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC94u;
        // 0x2cac98: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAC9Cu;
    // 0x2cac9c: 0x0  nop
    ctx->pc = 0x2cac9cu;
    // NOP
    ctx->pc = 0x2caca0u;
}
