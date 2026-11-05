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

// Function: sub_003A07D8
// Address: 0x3a07d8 - 0x3a0880
void sub_003A07D8_0x3a07d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A07D8_0x3a07d8");
#endif

    switch (ctx->pc) {
        case 0x3a081cu: goto label_3a081c;
        case 0x3a0828u: goto label_3a0828;
        case 0x3a0844u: goto label_3a0844;
        default: break;
    }

    ctx->pc = 0x3a07d8u;

    // 0x3a07d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a07d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a07dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a07dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a07e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a07e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a07e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a07e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a07e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a07e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a07ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a07ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a07f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a07f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a07f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a07f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a07f8: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x3a07f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a07fc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3a07fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3a0800: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x3a0800u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a0804: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3a0804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3a0808: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x3a0808u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3a080c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3a080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3a0810: 0x2670000c  addiu       $s0, $s3, 0xC
    ctx->pc = 0x3a0810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x3a0814: 0xc0e82f8  jal         func_3A0BE0
    ctx->pc = 0x3A0814u;
    SET_GPR_U32(ctx, 31, 0x3A081Cu);
    ctx->pc = 0x3A0818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0814u;
    // 0x3a0818: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BE0u, 0x3A0814u, 0x3A081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A081Cu;
label_3a081c:
    // 0x3a081c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A081Cu;
    {
        const bool branch_taken_0x3a081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A081Cu;
        // 0x3a0820: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a081c) {
            ctx->pc = 0x3A082Cu;
            goto label_3a082c;
        }
    }
    ctx->pc = 0x3A0824u;
    // 0x3a0824: 0x0  nop
    ctx->pc = 0x3a0824u;
    // NOP
label_3a0828:
    // 0x3a0828: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a0828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a082c:
    // 0x3a082c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3a082cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3a0830: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A0830u;
    {
        const bool branch_taken_0x3a0830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0830) {
            ctx->pc = 0x3A0834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0830u;
            // 0x3a0834: 0x2321026  xor         $v0, $s1, $s2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0854u;
            goto label_3a0854;
        }
    }
    ctx->pc = 0x3A0838u;
    // 0x3a0838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a0838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a083c: 0xc0e6e40  jal         func_39B900
    ctx->pc = 0x3A083Cu;
    SET_GPR_U32(ctx, 31, 0x3A0844u);
    ctx->pc = 0x3A0840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A083Cu;
    // 0x3a0840: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x3A083Cu, 0x3A0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0844u;
label_3a0844:
    // 0x3a0844: 0x50560001  beql        $v0, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A0844u;
    {
        const bool branch_taken_0x3a0844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x3a0844) {
            ctx->pc = 0x3A0848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0844u;
            // 0x3a0848: 0xa2750001  sb          $s5, 0x1($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A084Cu;
            goto label_3a084c;
        }
    }
    ctx->pc = 0x3A084Cu;
label_3a084c:
    // 0x3a084c: 0x1054fff6  beq         $v0, $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A084Cu;
    {
        const bool branch_taken_0x3a084c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3A0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A084Cu;
        // 0x3a0850: 0x2321026  xor         $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a084c) {
            ctx->pc = 0x3A0828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0828;
        }
    }
    ctx->pc = 0x3A0854u;
label_3a0854:
    // 0x3a0854: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a0854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a0858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a085c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3a085cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3a0860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a0860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0864: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a0864u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a0868: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a0868u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a086c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3a086cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a0870: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3a0870u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0874: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3a0874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a0878: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0878u;
        // 0x3a087c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0880u;
}
