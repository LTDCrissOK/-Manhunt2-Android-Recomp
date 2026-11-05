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

// Function: sub_00190538
// Address: 0x190538 - 0x190588
void sub_00190538_0x190538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190538_0x190538");
#endif

    switch (ctx->pc) {
        case 0x190558u: goto label_190558;
        default: break;
    }

    ctx->pc = 0x190538u;

    // 0x190538: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x190538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19053c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19053Cu;
    {
        const bool branch_taken_0x19053c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19053Cu;
        // 0x190540: 0x8c830044  lw          $v1, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19053c) {
            ctx->pc = 0x190560u;
            goto label_190560;
        }
    }
    ctx->pc = 0x190544u;
    // 0x190544: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x190544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x190548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190548u;
    {
        const bool branch_taken_0x190548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190548) {
            ctx->pc = 0x190558u;
            goto label_190558;
        }
    }
    ctx->pc = 0x190550u;
    // 0x190550: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x190550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x190554: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x190554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_190558:
    // 0x190558: 0x3e00008  jr          $ra
    ctx->pc = 0x190558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190558u;
        // 0x19055c: 0xac820044  sw          $v0, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190560u;
label_190560:
    // 0x190560: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x190560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x190564: 0x0  nop
    ctx->pc = 0x190564u;
    // NOP
    // 0x190568: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x190568u;
    {
        const bool branch_taken_0x190568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190568) {
            ctx->pc = 0x190558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190558;
        }
    }
    ctx->pc = 0x190570u;
    // 0x190570: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x190570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x190574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190578: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x190578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x19057c: 0x3e00008  jr          $ra
    ctx->pc = 0x19057Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19057Cu;
        // 0x190580: 0xac830044  sw          $v1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19057Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190584u;
    // 0x190584: 0x0  nop
    ctx->pc = 0x190584u;
    // NOP
    ctx->pc = 0x190588u;
}
