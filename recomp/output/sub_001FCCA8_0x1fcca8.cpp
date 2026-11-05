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

// Function: sub_001FCCA8
// Address: 0x1fcca8 - 0x1fccd8
void sub_001FCCA8_0x1fcca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCCA8_0x1fcca8");
#endif

    switch (ctx->pc) {
        case 0x1fccc8u: goto label_1fccc8;
        default: break;
    }

    ctx->pc = 0x1fcca8u;

    // 0x1fcca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fcca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fccac: 0x34029388  ori         $v0, $zero, 0x9388
    ctx->pc = 0x1fccacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37768);
    // 0x1fccb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fccb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fccb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fccb8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1fccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fccbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fccc0: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x1FCCC0u;
    SET_GPR_U32(ctx, 31, 0x1FCCC8u);
    ctx->pc = 0x1FCCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCC0u;
    // 0x1fccc4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1FCCC0u, 0x1FCCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCCC8u;
label_1fccc8:
    // 0x1fccc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fccc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCCCu;
        // 0x1fccd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCCD4u;
    // 0x1fccd4: 0x0  nop
    ctx->pc = 0x1fccd4u;
    // NOP
    ctx->pc = 0x1fccd8u;
}
