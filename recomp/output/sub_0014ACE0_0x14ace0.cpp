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

// Function: sub_0014ACE0
// Address: 0x14ace0 - 0x14ae68
void sub_0014ACE0_0x14ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ACE0_0x14ace0");
#endif

    switch (ctx->pc) {
        case 0x14ad00u: goto label_14ad00;
        case 0x14ad18u: goto label_14ad18;
        case 0x14ad24u: goto label_14ad24;
        case 0x14ad34u: goto label_14ad34;
        case 0x14ad40u: goto label_14ad40;
        case 0x14ad64u: goto label_14ad64;
        case 0x14ad80u: goto label_14ad80;
        case 0x14ad94u: goto label_14ad94;
        case 0x14adb4u: goto label_14adb4;
        case 0x14ade4u: goto label_14ade4;
        case 0x14ae08u: goto label_14ae08;
        case 0x14ae20u: goto label_14ae20;
        case 0x14ae34u: goto label_14ae34;
        case 0x14ae40u: goto label_14ae40;
        case 0x14ae50u: goto label_14ae50;
        default: break;
    }

    ctx->pc = 0x14ace0u;

    // 0x14ace0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ace4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x14ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x14ace8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x14ace8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x14acec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14acecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acf0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x14acf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x14acf4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x14acf8: 0xc052ae4  jal         func_14AB90
    ctx->pc = 0x14ACF8u;
    SET_GPR_U32(ctx, 31, 0x14AD00u);
    ctx->pc = 0x14ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACF8u;
    // 0x14acfc: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB90u, 0x14ACF8u, 0x14AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD00u;
label_14ad00:
    // 0x14ad00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ad04: 0x10430052  beq         $v0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x14AD04u;
    {
        const bool branch_taken_0x14ad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD04u;
        // 0x14ad08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad04) {
            ctx->pc = 0x14AE50u;
            goto label_14ae50;
        }
    }
    ctx->pc = 0x14AD0Cu;
    // 0x14ad0c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ad0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ad10: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14AD10u;
    SET_GPR_U32(ctx, 31, 0x14AD18u);
    ctx->pc = 0x14AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD10u;
    // 0x14ad14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14AD10u, 0x14AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD18u;
label_14ad18:
    // 0x14ad18: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ad18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ad1c: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14AD1Cu;
    SET_GPR_U32(ctx, 31, 0x14AD24u);
    ctx->pc = 0x14AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD1Cu;
    // 0x14ad20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14AD1Cu, 0x14AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD24u;
label_14ad24:
    // 0x14ad24: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ad24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ad28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14ad28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ad2c: 0xc052ade  jal         func_14AB78
    ctx->pc = 0x14AD2Cu;
    SET_GPR_U32(ctx, 31, 0x14AD34u);
    ctx->pc = 0x14AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD2Cu;
    // 0x14ad30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB78u, 0x14AD2Cu, 0x14AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD34u;
label_14ad34:
    // 0x14ad34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ad34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad38: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14AD38u;
    SET_GPR_U32(ctx, 31, 0x14AD40u);
    ctx->pc = 0x14AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD38u;
    // 0x14ad3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14AD38u, 0x14AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD40u;
label_14ad40:
    // 0x14ad40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ad40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad44: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14ad44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ad48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14ad48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14ad4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14ad50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14ad54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ad58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ad58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad5c: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14AD5Cu;
    SET_GPR_U32(ctx, 31, 0x14AD64u);
    ctx->pc = 0x14AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD5Cu;
    // 0x14ad60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14AD5Cu, 0x14AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD64u;
label_14ad64:
    // 0x14ad64: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ad64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ad68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ad68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad6c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14ad70: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14ad74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ad78: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14AD78u;
    SET_GPR_U32(ctx, 31, 0x14AD80u);
    ctx->pc = 0x14AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD78u;
    // 0x14ad7c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14AD78u, 0x14AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD80u;
label_14ad80:
    // 0x14ad80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14ad80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad84: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14ad84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ad88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad8c: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14AD8Cu;
    SET_GPR_U32(ctx, 31, 0x14AD94u);
    ctx->pc = 0x14AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD8Cu;
    // 0x14ad90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14AD8Cu, 0x14AD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD94u;
label_14ad94:
    // 0x14ad94: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x14ad94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x14ad98: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x14ad98u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14ad9c: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x14ad9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x14ada0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x14ada0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x14ada4: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x14ada4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x14ada8: 0x8e31020c  lw          $s1, 0x20C($s1)
    ctx->pc = 0x14ada8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x14adac: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14ADACu;
    SET_GPR_U32(ctx, 31, 0x14ADB4u);
    ctx->pc = 0x14ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ADACu;
    // 0x14adb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14ADACu, 0x14ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ADB4u;
label_14adb4:
    // 0x14adb4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14adb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14adbc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x14adbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14adc0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x14adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x14adc4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14ADC4u;
    {
        const bool branch_taken_0x14adc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14adc4) {
            ctx->pc = 0x14ADC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ADC4u;
            // 0x14adc8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ADD4u;
            goto label_14add4;
        }
    }
    ctx->pc = 0x14ADCCu;
    // 0x14adcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14ADCCu;
    {
        const bool branch_taken_0x14adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ADCCu;
        // 0x14add0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14adcc) {
            ctx->pc = 0x14ADDCu;
            goto label_14addc;
        }
    }
    ctx->pc = 0x14ADD4u;
label_14add4:
    // 0x14add4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14add4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14add8: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x14add8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14addc:
    // 0x14addc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x14ADDCu;
    SET_GPR_U32(ctx, 31, 0x14ADE4u);
    ctx->pc = 0x14ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ADDCu;
    // 0x14ade0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x14ADDCu, 0x14ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ADE4u;
label_14ade4:
    // 0x14ade4: 0x26420570  addiu       $v0, $s2, 0x570
    ctx->pc = 0x14ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1392));
    // 0x14ade8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x14ade8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14adec: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x14adecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14adf0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x14adf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x14adf4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x14adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14adf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14adf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14adfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae00: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x14AE00u;
    SET_GPR_U32(ctx, 31, 0x14AE08u);
    ctx->pc = 0x14AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE00u;
    // 0x14ae04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x14AE00u, 0x14AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE08u;
label_14ae08:
    // 0x14ae08: 0x8e420588  lw          $v0, 0x588($s2)
    ctx->pc = 0x14ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1416)));
    // 0x14ae0c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14AE0Cu;
    {
        const bool branch_taken_0x14ae0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE0Cu;
        // 0x14ae10: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae0c) {
            ctx->pc = 0x14AE54u;
            goto label_14ae54;
        }
    }
    ctx->pc = 0x14AE14u;
    // 0x14ae14: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ae14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ae18: 0xc052d14  jal         func_14B450
    ctx->pc = 0x14AE18u;
    SET_GPR_U32(ctx, 31, 0x14AE20u);
    ctx->pc = 0x14AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE18u;
    // 0x14ae1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B450u, 0x14AE18u, 0x14AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE20u;
label_14ae20:
    // 0x14ae20: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x14ae20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14ae24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ae28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae2c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14AE2Cu;
    SET_GPR_U32(ctx, 31, 0x14AE34u);
    ctx->pc = 0x14AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE2Cu;
    // 0x14ae30: 0xae420588  sw          $v0, 0x588($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1416), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14AE2Cu, 0x14AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE34u;
label_14ae34:
    // 0x14ae34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae38: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14AE38u;
    SET_GPR_U32(ctx, 31, 0x14AE40u);
    ctx->pc = 0x14AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE38u;
    // 0x14ae3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14AE38u, 0x14AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE40u;
label_14ae40:
    // 0x14ae40: 0xae420594  sw          $v0, 0x594($s2)
    ctx->pc = 0x14ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1428), GPR_U32(ctx, 2));
    // 0x14ae44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ae44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae48: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14AE48u;
    SET_GPR_U32(ctx, 31, 0x14AE50u);
    ctx->pc = 0x14AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE48u;
    // 0x14ae4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14AE48u, 0x14AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE50u;
label_14ae50:
    // 0x14ae50: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x14ae50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14ae54:
    // 0x14ae54: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x14ae54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ae58: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x14ae58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ae5c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x14ae5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x14AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE60u;
        // 0x14ae64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AE68u;
}
