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

// Function: sub_00366810
// Address: 0x366810 - 0x366868
void sub_00366810_0x366810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366810_0x366810");
#endif

    switch (ctx->pc) {
        case 0x366828u: goto label_366828;
        default: break;
    }

    ctx->pc = 0x366810u;

    // 0x366810: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x366810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366814: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x366818: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x366818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x36681c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36681cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x366820: 0xc0a8e12  jal         func_2A3848
    ctx->pc = 0x366820u;
    SET_GPR_U32(ctx, 31, 0x366828u);
    ctx->pc = 0x366824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366820u;
    // 0x366824: 0x2484f250  addiu       $a0, $a0, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x366820u, 0x366828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366828u;
label_366828:
    // 0x366828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x366828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36682c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x36682Cu;
    {
        const bool branch_taken_0x36682c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x366830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36682Cu;
        // 0x366830: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36682c) {
            ctx->pc = 0x366858u;
            goto label_366858;
        }
    }
    ctx->pc = 0x366834u;
    // 0x366834: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x366834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x366838: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x366838u;
    {
        const bool branch_taken_0x366838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x36683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366838u;
        // 0x36683c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366838) {
            ctx->pc = 0x36685Cu;
            goto label_36685c;
        }
    }
    ctx->pc = 0x366840u;
    // 0x366840: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x366840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x366844: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x366844u;
    {
        const bool branch_taken_0x366844 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x366848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366844u;
        // 0x366848: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366844) {
            ctx->pc = 0x366860u;
            goto label_366860;
        }
    }
    ctx->pc = 0x36684Cu;
    // 0x36684c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x36684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x366850: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x366850u;
    {
        const bool branch_taken_0x366850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x366854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366850u;
        // 0x366854: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366850) {
            ctx->pc = 0x366860u;
            goto label_366860;
        }
    }
    ctx->pc = 0x366858u;
label_366858:
    // 0x366858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36685c:
    // 0x36685c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36685cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_366860:
    // 0x366860: 0x3e00008  jr          $ra
    ctx->pc = 0x366860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366860u;
        // 0x366864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366868u;
}
