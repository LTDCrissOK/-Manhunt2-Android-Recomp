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

// Function: sub_0038EE38
// Address: 0x38ee38 - 0x38ee70
void sub_0038EE38_0x38ee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EE38_0x38ee38");
#endif

    ctx->pc = 0x38ee38u;

    // 0x38ee38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38ee3c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x38ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x38ee40: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x38ee40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x38ee44: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x38ee44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x38ee48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38ee4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38ee50: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x38ee50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x38ee54: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38EE54u;
    {
        const bool branch_taken_0x38ee54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38ee54) {
            ctx->pc = 0x38EE64u;
            goto label_38ee64;
        }
    }
    ctx->pc = 0x38EE5Cu;
    // 0x38ee5c: 0x80e3204  j           func_38C810
    ctx->pc = 0x38EE5Cu;
    ctx->pc = 0x38C810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C810u, 0x38EE5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x38EE64u;
label_38ee64:
    // 0x38ee64: 0x3e00008  jr          $ra
    ctx->pc = 0x38EE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EE6Cu;
    // 0x38ee6c: 0x0  nop
    ctx->pc = 0x38ee6cu;
    // NOP
    ctx->pc = 0x38ee70u;
}
