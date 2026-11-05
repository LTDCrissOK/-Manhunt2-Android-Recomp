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

// Function: sub_00344830
// Address: 0x344830 - 0x344890
void sub_00344830_0x344830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344830_0x344830");
#endif

    switch (ctx->pc) {
        case 0x344860u: goto label_344860;
        case 0x34486cu: goto label_34486c;
        default: break;
    }

    ctx->pc = 0x344830u;

    // 0x344830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344834: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x344834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x344838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34483c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344840: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x344840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x344844: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x344844u;
    {
        const bool branch_taken_0x344844 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x344848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344844u;
        // 0x344848: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344844) {
            ctx->pc = 0x344878u;
            goto label_344878;
        }
    }
    ctx->pc = 0x34484Cu;
    // 0x34484c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x34484Cu;
    {
        const bool branch_taken_0x34484c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x344850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34484Cu;
        // 0x344850: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34484c) {
            ctx->pc = 0x344878u;
            goto label_344878;
        }
    }
    ctx->pc = 0x344854u;
    // 0x344854: 0x2411005f  addiu       $s1, $zero, 0x5F
    ctx->pc = 0x344854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x344858: 0x24508bf0  addiu       $s0, $v0, -0x7410
    ctx->pc = 0x344858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
    // 0x34485c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x34485cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_344860:
    // 0x344860: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x344860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x344864: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344864u;
    SET_GPR_U32(ctx, 31, 0x34486Cu);
    ctx->pc = 0x344868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344864u;
    // 0x344868: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344864u, 0x34486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34486Cu;
label_34486c:
    // 0x34486c: 0x0  nop
    ctx->pc = 0x34486cu;
    // NOP
    // 0x344870: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x344870u;
    {
        const bool branch_taken_0x344870 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x344874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344870u;
        // 0x344874: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344870) {
            ctx->pc = 0x344860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344860;
        }
    }
    ctx->pc = 0x344878u;
label_344878:
    // 0x344878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34487c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34487cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344880: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x344880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344884: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x344884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344888: 0x3e00008  jr          $ra
    ctx->pc = 0x344888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344888u;
        // 0x34488c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344890u;
}
