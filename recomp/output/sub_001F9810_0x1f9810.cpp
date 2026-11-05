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

// Function: sub_001F9810
// Address: 0x1f9810 - 0x1f9860
void sub_001F9810_0x1f9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9810_0x1f9810");
#endif

    switch (ctx->pc) {
        case 0x1f9830u: goto label_1f9830;
        case 0x1f9838u: goto label_1f9838;
        default: break;
    }

    ctx->pc = 0x1f9810u;

    // 0x1f9810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9814: 0x340295cc  ori         $v0, $zero, 0x95CC
    ctx->pc = 0x1f9814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38348);
    // 0x1f9818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f981c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f981cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9820: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1f9820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f9824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f9828: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f9828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f982c: 0x0  nop
    ctx->pc = 0x1f982cu;
    // NOP
label_1f9830:
    // 0x1f9830: 0xc0f0620  jal         func_3C1880
    ctx->pc = 0x1F9830u;
    SET_GPR_U32(ctx, 31, 0x1F9838u);
    ctx->pc = 0x1F9834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9830u;
    // 0x1f9834: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1880u, 0x1F9830u, 0x1F9838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9838u;
label_1f9838:
    // 0x1f9838: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f9838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f983c: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x1f983cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f9840: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F9840u;
    {
        const bool branch_taken_0x1f9840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9840u;
        // 0x1f9844: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9840) {
            ctx->pc = 0x1F9830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9830;
        }
    }
    ctx->pc = 0x1F9848u;
    // 0x1f9848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f984c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f984cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9854: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9854u;
        // 0x1f9858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F985Cu;
    // 0x1f985c: 0x0  nop
    ctx->pc = 0x1f985cu;
    // NOP
    ctx->pc = 0x1f9860u;
}
