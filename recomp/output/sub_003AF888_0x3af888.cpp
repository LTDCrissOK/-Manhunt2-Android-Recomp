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

// Function: sub_003AF888
// Address: 0x3af888 - 0x3af8e0
void sub_003AF888_0x3af888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF888_0x3af888");
#endif

    ctx->pc = 0x3af888u;

    // 0x3af888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3af888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3af88c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3af88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3af890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3af890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3af894: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x3af894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x3af898: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AF898u;
    {
        const bool branch_taken_0x3af898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF898u;
        // 0x3af89c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af898) {
            ctx->pc = 0x3AF8B0u;
            goto label_3af8b0;
        }
    }
    ctx->pc = 0x3AF8A0u;
    // 0x3af8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3af8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af8a4: 0x80ebda0  j           func_3AF680
    ctx->pc = 0x3AF8A4u;
    ctx->pc = 0x3AF8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF8A4u;
    // 0x3af8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF680u, 0x3AF8A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AF8ACu;
    // 0x3af8ac: 0x0  nop
    ctx->pc = 0x3af8acu;
    // NOP
label_3af8b0:
    // 0x3af8b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF8B0u;
    {
        const bool branch_taken_0x3af8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF8B0u;
        // 0x3af8b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af8b0) {
            ctx->pc = 0x3AF8C0u;
            goto label_3af8c0;
        }
    }
    ctx->pc = 0x3AF8B8u;
    // 0x3af8b8: 0x80ebd3a  j           func_3AF4E8
    ctx->pc = 0x3AF8B8u;
    ctx->pc = 0x3AF8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF8B8u;
    // 0x3af8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF4E8u, 0x3AF8B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AF8C0u;
label_3af8c0:
    // 0x3af8c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AF8C0u;
    {
        const bool branch_taken_0x3af8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af8c0) {
            ctx->pc = 0x3AF8D8u;
            goto label_3af8d8;
        }
    }
    ctx->pc = 0x3AF8C8u;
    // 0x3af8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3af8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af8cc: 0x80ebcdc  j           func_3AF370
    ctx->pc = 0x3AF8CCu;
    ctx->pc = 0x3AF8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF8CCu;
    // 0x3af8d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF370u, 0x3AF8CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AF8D4u;
    // 0x3af8d4: 0x0  nop
    ctx->pc = 0x3af8d4u;
    // NOP
label_3af8d8:
    // 0x3af8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF8D8u;
        // 0x3af8dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF8E0u;
}
