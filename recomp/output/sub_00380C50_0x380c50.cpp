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

// Function: sub_00380C50
// Address: 0x380c50 - 0x380c78
void sub_00380C50_0x380c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380C50_0x380c50");
#endif

    switch (ctx->pc) {
        case 0x380c70u: goto label_380c70;
        default: break;
    }

    ctx->pc = 0x380c50u;

    // 0x380c50: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x380c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x380c54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x380c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x380c58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x380c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x380c5c: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x380c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
    // 0x380c60: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x380c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x380c64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x380c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x380c68: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x380c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x380c6c: 0x3e00008  jr          $ra
label_380c70:
    if (ctx->pc == 0x380C70u) {
        ctx->pc = 0x380C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C6Cu;
        // 0x380c70: 0xac86004c  sw          $a2, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380C74u;
        goto label_fallthrough_0x380c6c;
    }
    ctx->pc = 0x380C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C6Cu;
        // 0x380c70: 0xac86004c  sw          $a2, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x380c6c:
    ctx->pc = 0x380C74u;
    // 0x380c74: 0x0  nop
    ctx->pc = 0x380c74u;
    // NOP
    ctx->pc = 0x380c78u;
}
