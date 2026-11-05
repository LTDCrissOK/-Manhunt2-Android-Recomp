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

// Function: sub_003A3530
// Address: 0x3a3530 - 0x3a3570
void sub_003A3530_0x3a3530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3530_0x3a3530");
#endif

    ctx->pc = 0x3a3530u;

    // 0x3a3530: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a3534: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a3534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a3538: 0x8c431e3c  lw          $v1, 0x1E3C($v0)
    ctx->pc = 0x3a3538u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411E3Cu));
    // 0x3a353c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a353cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3540: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3540u;
    {
        const bool branch_taken_0x3a3540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3540u;
        // 0x3a3544: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3540) {
            ctx->pc = 0x3A3558u;
            goto label_3a3558;
        }
    }
    ctx->pc = 0x3A3548u;
    // 0x3a3548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a354c: 0x80eb28c  j           func_3ACA30
    ctx->pc = 0x3A354Cu;
    ctx->pc = 0x3A3550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A354Cu;
    // 0x3a3550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA30u;
    sub_003ACA30_0x3aca30(rdram, ctx, runtime); return;
    ctx->pc = 0x3A3554u;
    // 0x3a3554: 0x0  nop
    ctx->pc = 0x3a3554u;
    // NOP
label_3a3558:
    // 0x3a3558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a355c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A355Cu;
        // 0x3a3560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A355Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3564u;
    // 0x3a3564: 0x0  nop
    ctx->pc = 0x3a3564u;
    // NOP
    // 0x3a3568: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a3568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a356c: 0x0  nop
    ctx->pc = 0x3a356cu;
    // NOP
    ctx->pc = 0x3a3570u;
}
