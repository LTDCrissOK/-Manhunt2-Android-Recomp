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

// Function: sub_003B5200
// Address: 0x3b5200 - 0x3b5240
void sub_003B5200_0x3b5200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5200_0x3b5200");
#endif

    ctx->pc = 0x3b5200u;

    // 0x3b5200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b5200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b5204: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b5204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b5208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b520c: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x3b520cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x3b5210: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5210u;
    {
        const bool branch_taken_0x3b5210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5210u;
        // 0x3b5214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5210) {
            ctx->pc = 0x3B5228u;
            goto label_3b5228;
        }
    }
    ctx->pc = 0x3B5218u;
    // 0x3b5218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b521c: 0x80ed416  j           func_3B5058
    ctx->pc = 0x3B521Cu;
    ctx->pc = 0x3B5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B521Cu;
    // 0x3b5220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5058u, 0x3B521Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B5224u;
    // 0x3b5224: 0x0  nop
    ctx->pc = 0x3b5224u;
    // NOP
label_3b5228:
    // 0x3b5228: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B5228u;
    {
        const bool branch_taken_0x3b5228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5228u;
        // 0x3b522c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5228) {
            ctx->pc = 0x3B5238u;
            goto label_3b5238;
        }
    }
    ctx->pc = 0x3B5230u;
    // 0x3b5230: 0x80ed3b6  j           func_3B4ED8
    ctx->pc = 0x3B5230u;
    ctx->pc = 0x3B5234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5230u;
    // 0x3b5234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4ED8u, 0x3B5230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B5238u;
label_3b5238:
    // 0x3b5238: 0x80ed350  j           func_3B4D40
    ctx->pc = 0x3B5238u;
    ctx->pc = 0x3B523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5238u;
    // 0x3b523c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4D40u, 0x3B5238u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B5240u;
}
