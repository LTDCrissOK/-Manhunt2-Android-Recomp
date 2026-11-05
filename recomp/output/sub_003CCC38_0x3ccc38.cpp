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

// Function: sub_003CCC38
// Address: 0x3ccc38 - 0x3ccc58
void sub_003CCC38_0x3ccc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCC38_0x3ccc38");
#endif

    ctx->pc = 0x3ccc38u;

    // 0x3ccc38: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3ccc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3ccc3c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ccc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3ccc40: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3ccc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x3ccc44: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3ccc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3ccc48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ccc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3ccc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCC4Cu;
        // 0x3ccc50: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCC54u;
    // 0x3ccc54: 0x0  nop
    ctx->pc = 0x3ccc54u;
    // NOP
    ctx->pc = 0x3ccc58u;
}
