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

// Function: sub_00160818
// Address: 0x160818 - 0x1608c8
void sub_00160818_0x160818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160818_0x160818");
#endif

    switch (ctx->pc) {
        case 0x160850u: goto label_160850;
        case 0x16087cu: goto label_16087c;
        case 0x160888u: goto label_160888;
        default: break;
    }

    ctx->pc = 0x160818u;

    // 0x160818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x160818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16081c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160820: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x160820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x160824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160828: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x160828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16082c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x160830: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x160830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x160834: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x160834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x160838: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x160838u;
    {
        const bool branch_taken_0x160838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160838u;
        // 0x16083c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160838) {
            ctx->pc = 0x1608A8u;
            goto label_1608a8;
        }
    }
    ctx->pc = 0x160840u;
    // 0x160840: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x160840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160844: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x160844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160848: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x160848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16084c: 0x0  nop
    ctx->pc = 0x16084cu;
    // NOP
label_160850:
    // 0x160850: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x160850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x160854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160858: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16085c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16085Cu;
    {
        const bool branch_taken_0x16085c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16085Cu;
        // 0x160860: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16085c) {
            ctx->pc = 0x160888u;
            goto label_160888;
        }
    }
    ctx->pc = 0x160864u;
    // 0x160864: 0x14730008  bne         $v1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x160864u;
    {
        const bool branch_taken_0x160864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x160868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160864u;
        // 0x160868: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160864) {
            ctx->pc = 0x160888u;
            goto label_160888;
        }
    }
    ctx->pc = 0x16086Cu;
    // 0x16086c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16086cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160870: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x160870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160874: 0xc058368  jal         func_160DA0
    ctx->pc = 0x160874u;
    SET_GPR_U32(ctx, 31, 0x16087Cu);
    ctx->pc = 0x160878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160874u;
    // 0x160878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160DA0u, 0x160874u, 0x16087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16087Cu;
label_16087c:
    // 0x16087c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16087cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160880: 0xc04f1a8  jal         func_13C6A0
    ctx->pc = 0x160880u;
    SET_GPR_U32(ctx, 31, 0x160888u);
    ctx->pc = 0x160884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160880u;
    // 0x160884: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6A0u, 0x160880u, 0x160888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160888u;
label_160888:
    // 0x160888: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x160888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16088c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x16088cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160890: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x160890u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x160894: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160894u;
    {
        const bool branch_taken_0x160894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160894) {
            ctx->pc = 0x160898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160894u;
            // 0x160898: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1608ACu;
            goto label_1608ac;
        }
    }
    ctx->pc = 0x16089Cu;
    // 0x16089c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x16089cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1608a0: 0x5642ffeb  bnel        $s2, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1608A0u;
    {
        const bool branch_taken_0x1608a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1608a0) {
            ctx->pc = 0x1608A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1608A0u;
            // 0x1608a4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160850;
        }
    }
    ctx->pc = 0x1608A8u;
label_1608a8:
    // 0x1608a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1608a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1608ac:
    // 0x1608ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1608acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1608b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1608b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1608b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1608b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1608b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1608b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1608bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1608BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1608C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608BCu;
        // 0x1608c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1608BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1608C4u;
    // 0x1608c4: 0x0  nop
    ctx->pc = 0x1608c4u;
    // NOP
    ctx->pc = 0x1608c8u;
}
