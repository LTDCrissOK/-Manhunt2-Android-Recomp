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

// Function: sub_0017E720
// Address: 0x17e720 - 0x17e780
void sub_0017E720_0x17e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E720_0x17e720");
#endif

    switch (ctx->pc) {
        case 0x17e770u: goto label_17e770;
        default: break;
    }

    ctx->pc = 0x17e720u;

    // 0x17e720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e728: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x17e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17e72c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E72Cu;
    {
        const bool branch_taken_0x17e72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e72c) {
            ctx->pc = 0x17E730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E72Cu;
            // 0x17e730: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E750u;
            goto label_17e750;
        }
    }
    ctx->pc = 0x17E734u;
    // 0x17e734: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x17E734u;
    {
        const bool branch_taken_0x17e734 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E734u;
        // 0x17e738: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e734) {
            ctx->pc = 0x17E774u;
            goto label_17e774;
        }
    }
    ctx->pc = 0x17E73Cu;
    // 0x17e73c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x17e73cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17e740: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17E740u;
    {
        const bool branch_taken_0x17e740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E740u;
        // 0x17e744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e740) {
            ctx->pc = 0x17E774u;
            goto label_17e774;
        }
    }
    ctx->pc = 0x17E748u;
    // 0x17e748: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E748u;
    {
        const bool branch_taken_0x17e748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E748u;
        // 0x17e74c: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e748) {
            ctx->pc = 0x17E774u;
            goto label_17e774;
        }
    }
    ctx->pc = 0x17E750u;
label_17e750:
    // 0x17e750: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E750u;
    {
        const bool branch_taken_0x17e750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e750) {
            ctx->pc = 0x17E768u;
            goto label_17e768;
        }
    }
    ctx->pc = 0x17E758u;
    // 0x17e758: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E758u;
    {
        const bool branch_taken_0x17e758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E758u;
        // 0x17e75c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e758) {
            ctx->pc = 0x17E770u;
            goto label_17e770;
        }
    }
    ctx->pc = 0x17E760u;
    // 0x17e760: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E760u;
    {
        const bool branch_taken_0x17e760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E760u;
        // 0x17e764: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e760) {
            ctx->pc = 0x17E774u;
            goto label_17e774;
        }
    }
    ctx->pc = 0x17E768u;
label_17e768:
    // 0x17e768: 0xc05f9e0  jal         func_17E780
    ctx->pc = 0x17E768u;
    SET_GPR_U32(ctx, 31, 0x17E770u);
    ctx->pc = 0x17E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E780u, 0x17E768u, 0x17E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E770u;
label_17e770:
    // 0x17e770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e774:
    // 0x17e774: 0x3e00008  jr          $ra
    ctx->pc = 0x17E774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E774u;
        // 0x17e778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E77Cu;
    // 0x17e77c: 0x0  nop
    ctx->pc = 0x17e77cu;
    // NOP
    ctx->pc = 0x17e780u;
}
