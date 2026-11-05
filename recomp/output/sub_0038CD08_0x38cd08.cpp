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

// Function: sub_0038CD08
// Address: 0x38cd08 - 0x38cd40
void sub_0038CD08_0x38cd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CD08_0x38cd08");
#endif

    ctx->pc = 0x38cd08u;

    // 0x38cd08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38cd0c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x38cd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x38cd10: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x38cd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x38cd14: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x38cd14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x38cd18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38cd1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38cd20: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x38cd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x38cd24: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CD24u;
    {
        const bool branch_taken_0x38cd24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38cd24) {
            ctx->pc = 0x38CD34u;
            goto label_38cd34;
        }
    }
    ctx->pc = 0x38CD2Cu;
    // 0x38cd2c: 0x80e3204  j           func_38C810
    ctx->pc = 0x38CD2Cu;
    ctx->pc = 0x38C810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C810u, 0x38CD2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x38CD34u;
label_38cd34:
    // 0x38cd34: 0x3e00008  jr          $ra
    ctx->pc = 0x38CD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CD3Cu;
    // 0x38cd3c: 0x0  nop
    ctx->pc = 0x38cd3cu;
    // NOP
    ctx->pc = 0x38cd40u;
}
