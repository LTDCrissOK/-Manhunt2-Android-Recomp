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

// Function: sub_003B4788
// Address: 0x3b4788 - 0x3b47b0
void sub_003B4788_0x3b4788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4788_0x3b4788");
#endif

    ctx->pc = 0x3b4788u;

    // 0x3b4788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b4788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b478c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b4794: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x3b4794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x3b4798: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4798u;
    {
        const bool branch_taken_0x3b4798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4798u;
        // 0x3b479c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4798) {
            ctx->pc = 0x3B47A8u;
            goto label_3b47a8;
        }
    }
    ctx->pc = 0x3B47A0u;
    // 0x3b47a0: 0x80ed182  j           func_3B4608
    ctx->pc = 0x3B47A0u;
    ctx->pc = 0x3B47A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B47A0u;
    // 0x3b47a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4608u, 0x3B47A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B47A8u;
label_3b47a8:
    // 0x3b47a8: 0x80ed114  j           func_3B4450
    ctx->pc = 0x3B47A8u;
    ctx->pc = 0x3B47ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B47A8u;
    // 0x3b47ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4450u, 0x3B47A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B47B0u;
}
