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

// Function: sub_0036C828
// Address: 0x36c828 - 0x36c870
void sub_0036C828_0x36c828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C828_0x36c828");
#endif

    switch (ctx->pc) {
        case 0x36c848u: goto label_36c848;
        case 0x36c850u: goto label_36c850;
        default: break;
    }

    ctx->pc = 0x36c828u;

    // 0x36c828: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36c828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x36c82c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c830: 0x8c421f48  lw          $v0, 0x1F48($v0)
    ctx->pc = 0x36c830u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C1F48u));
    // 0x36c834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c838: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C838u;
    {
        const bool branch_taken_0x36c838 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x36C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C838u;
        // 0x36c83c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c838) {
            ctx->pc = 0x36C860u;
            goto label_36c860;
        }
    }
    ctx->pc = 0x36C840u;
    // 0x36c840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36c840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c844: 0x0  nop
    ctx->pc = 0x36c844u;
    // NOP
label_36c848:
    // 0x36c848: 0xc0db1fa  jal         func_36C7E8
    ctx->pc = 0x36C848u;
    SET_GPR_U32(ctx, 31, 0x36C850u);
    ctx->pc = 0x36C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C848u;
    // 0x36c84c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C7E8u, 0x36C848u, 0x36C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C850u;
label_36c850:
    // 0x36c850: 0x0  nop
    ctx->pc = 0x36c850u;
    // NOP
    // 0x36c854: 0x0  nop
    ctx->pc = 0x36c854u;
    // NOP
    // 0x36c858: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x36C858u;
    {
        const bool branch_taken_0x36c858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c858) {
            ctx->pc = 0x36C848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c848;
        }
    }
    ctx->pc = 0x36C860u;
label_36c860:
    // 0x36c860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c864: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c868: 0x3e00008  jr          $ra
    ctx->pc = 0x36C868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C868u;
        // 0x36c86c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C870u;
}
