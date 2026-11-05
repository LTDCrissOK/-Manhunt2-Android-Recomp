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

// Function: sub_003373C8
// Address: 0x3373c8 - 0x337420
void sub_003373C8_0x3373c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003373C8_0x3373c8");
#endif

    switch (ctx->pc) {
        case 0x337404u: goto label_337404;
        default: break;
    }

    ctx->pc = 0x3373c8u;

    // 0x3373c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3373c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3373cc: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3373CCu;
    {
        const bool branch_taken_0x3373cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3373D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373CCu;
        // 0x3373d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373cc) {
            ctx->pc = 0x3373DCu;
            goto label_3373dc;
        }
    }
    ctx->pc = 0x3373D4u;
    // 0x3373d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3373D4u;
    {
        const bool branch_taken_0x3373d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3373D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373D4u;
        // 0x3373d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373d4) {
            ctx->pc = 0x3373FCu;
            goto label_3373fc;
        }
    }
    ctx->pc = 0x3373DCu;
label_3373dc:
    // 0x3373dc: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x3373dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x3373e0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3373e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3373e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3373e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3373e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3373e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3373ec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3373ECu;
    {
        const bool branch_taken_0x3373ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3373F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373ECu;
        // 0x3373f0: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373ec) {
            ctx->pc = 0x3373FCu;
            goto label_3373fc;
        }
    }
    ctx->pc = 0x3373F4u;
    // 0x3373f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3373F4u;
    {
        const bool branch_taken_0x3373f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3373F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373F4u;
        // 0x3373f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373f4) {
            ctx->pc = 0x337408u;
            goto label_337408;
        }
    }
    ctx->pc = 0x3373FCu;
label_3373fc:
    // 0x3373fc: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x3373FCu;
    SET_GPR_U32(ctx, 31, 0x337404u);
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x3373FCu, 0x337404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337404u;
label_337404:
    // 0x337404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337408:
    // 0x337408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33740c: 0x3e00008  jr          $ra
    ctx->pc = 0x33740Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33740Cu;
        // 0x337410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33740Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337414u;
    // 0x337414: 0x0  nop
    ctx->pc = 0x337414u;
    // NOP
    // 0x337418: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x337418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33741c: 0x0  nop
    ctx->pc = 0x33741cu;
    // NOP
    ctx->pc = 0x337420u;
}
