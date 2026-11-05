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

// Function: sub_0011AD08
// Address: 0x11ad08 - 0x11af10
void sub_0011AD08_0x11ad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AD08_0x11ad08");
#endif

    switch (ctx->pc) {
        case 0x11ad54u: goto label_11ad54;
        case 0x11ae50u: goto label_11ae50;
        default: break;
    }

    ctx->pc = 0x11ad08u;

    // 0x11ad08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ad08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ad0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11ad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11ad10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11ad10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11ad14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11ad14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ad1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11ad1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11ad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11ad24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ad24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11ad2c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x11ad2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad30: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11ad34: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x11ad34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad38: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x11ad38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad3c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11AD3Cu;
    {
        const bool branch_taken_0x11ad3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD3Cu;
        // 0x11ad40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad3c) {
            ctx->pc = 0x11AD64u;
            goto label_11ad64;
        }
    }
    ctx->pc = 0x11AD44u;
    // 0x11ad44: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x11ad48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11ad48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad4c: 0xc047860  jal         func_11E180
    ctx->pc = 0x11AD4Cu;
    SET_GPR_U32(ctx, 31, 0x11AD54u);
    ctx->pc = 0x11AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD4Cu;
    // 0x11ad50: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E180u, 0x11AD4Cu, 0x11AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD54u;
label_11ad54:
    // 0x11ad54: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x11ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x11ad58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11ad58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ad60: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x11ad60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_11ad64:
    // 0x11ad64: 0x92021213  lbu         $v0, 0x1213($s0)
    ctx->pc = 0x11ad64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11ad68: 0x92031211  lbu         $v1, 0x1211($s0)
    ctx->pc = 0x11ad68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
    // 0x11ad6c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x11ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x11ad70: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x11ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x11ad74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ad78: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11ad7c: 0xac520210  sw          $s2, 0x210($v0)
    ctx->pc = 0x11ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 18));
    // 0x11ad80: 0x92031213  lbu         $v1, 0x1213($s0)
    ctx->pc = 0x11ad80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11ad84: 0x92021211  lbu         $v0, 0x1211($s0)
    ctx->pc = 0x11ad84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
    // 0x11ad88: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x11ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x11ad8c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11ad90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ad94: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x11ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11ad98: 0xac650214  sw          $a1, 0x214($v1)
    ctx->pc = 0x11ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 5));
    // 0x11ad9c: 0x92021211  lbu         $v0, 0x1211($s0)
    ctx->pc = 0x11ad9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
    // 0x11ada0: 0x92031213  lbu         $v1, 0x1213($s0)
    ctx->pc = 0x11ada0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11ada4: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11ada8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x11ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x11adac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11adb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11adb4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x11adb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11adb8: 0xf8610220  sqc2        $vf1, 0x220($v1)
    ctx->pc = 0x11adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11adbc: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x11adbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x11adc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11ADC0u;
    {
        const bool branch_taken_0x11adc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADC0u;
        // 0x11adc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adc0) {
            ctx->pc = 0x11ADD0u;
            goto label_11add0;
        }
    }
    ctx->pc = 0x11ADC8u;
    // 0x11adc8: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x11adc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x11adcc: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x11adccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_11add0:
    // 0x11add0: 0x92021211  lbu         $v0, 0x1211($s0)
    ctx->pc = 0x11add0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
    // 0x11add4: 0x92031213  lbu         $v1, 0x1213($s0)
    ctx->pc = 0x11add4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11add8: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11add8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11addc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x11addcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x11ade0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11ade4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ade8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11ADE8u;
    {
        const bool branch_taken_0x11ade8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADE8u;
        // 0x11adec: 0xac640234  sw          $a0, 0x234($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 564), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ade8) {
            ctx->pc = 0x11AE0Cu;
            goto label_11ae0c;
        }
    }
    ctx->pc = 0x11ADF0u;
    // 0x11adf0: 0x92021213  lbu         $v0, 0x1213($s0)
    ctx->pc = 0x11adf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11adf4: 0x92031211  lbu         $v1, 0x1211($s0)
    ctx->pc = 0x11adf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
    // 0x11adf8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x11adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x11adfc: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x11adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x11ae00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ae04: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11ae08: 0xac530244  sw          $s3, 0x244($v0)
    ctx->pc = 0x11ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 580), GPR_U32(ctx, 19));
label_11ae0c:
    // 0x11ae0c: 0x2643ffed  addiu       $v1, $s2, -0x13
    ctx->pc = 0x11ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967277));
    // 0x11ae10: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x11ae10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x11ae14: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11AE14u;
    {
        const bool branch_taken_0x11ae14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE14u;
        // 0x11ae18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae14) {
            ctx->pc = 0x11AE54u;
            goto label_11ae54;
        }
    }
    ctx->pc = 0x11AE1Cu;
    // 0x11ae1c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x11ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x11ae20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11ae24: 0x2442b9c0  addiu       $v0, $v0, -0x4640
    ctx->pc = 0x11ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949312));
    // 0x11ae28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ae2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ae30: 0x800008  jr          $a0
    ctx->pc = 0x11AE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AE38u: goto label_11ae38;
            case 0x11AE40u: goto label_11ae40;
            case 0x11AE50u: goto label_11ae50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AE30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11AE38u;
label_11ae38:
    // 0x11ae38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11AE38u;
    {
        const bool branch_taken_0x11ae38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE38u;
        // 0x11ae3c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae38) {
            ctx->pc = 0x11AE48u;
            goto label_11ae48;
        }
    }
    ctx->pc = 0x11AE40u;
label_11ae40:
    // 0x11ae40: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x11ae44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11ae48:
    // 0x11ae48: 0xc049856  jal         func_126158
    ctx->pc = 0x11AE48u;
    SET_GPR_U32(ctx, 31, 0x11AE50u);
    ctx->pc = 0x11AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE48u;
    // 0x11ae4c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126158u, 0x11AE48u, 0x11AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE50u;
label_11ae50:
    // 0x11ae50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ae54:
    // 0x11ae54: 0x92031211  lbu         $v1, 0x1211($s0)
    ctx->pc = 0x11ae54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
    // 0x11ae58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ae58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae5c: 0x92021213  lbu         $v0, 0x1213($s0)
    ctx->pc = 0x11ae5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11ae60: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x11ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x11ae64: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x11ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x11ae68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11ae6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ae70: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x11AE70u;
    {
        const bool branch_taken_0x11ae70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE70u;
        // 0x11ae74: 0xac44023c  sw          $a0, 0x23C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 572), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae70) {
            ctx->pc = 0x11AEACu;
            goto label_11aeac;
        }
    }
    ctx->pc = 0x11AE78u;
    // 0x11ae78: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x11ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11ae7c: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11AE7Cu;
    {
        const bool branch_taken_0x11ae7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x11AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE7Cu;
        // 0x11ae80: 0x2a420019  slti        $v0, $s2, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae7c) {
            ctx->pc = 0x11AEA8u;
            goto label_11aea8;
        }
    }
    ctx->pc = 0x11AE84u;
    // 0x11ae84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AE84u;
    {
        const bool branch_taken_0x11ae84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE84u;
        // 0x11ae88: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae84) {
            ctx->pc = 0x11AE9Cu;
            goto label_11ae9c;
        }
    }
    ctx->pc = 0x11AE8Cu;
    // 0x11ae8c: 0x52420007  beql        $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AE8Cu;
    {
        const bool branch_taken_0x11ae8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x11ae8c) {
            ctx->pc = 0x11AE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AE8Cu;
            // 0x11ae90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AEACu;
            goto label_11aeac;
        }
    }
    ctx->pc = 0x11AE94u;
    // 0x11ae94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11AE94u;
    {
        const bool branch_taken_0x11ae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE94u;
        // 0x11ae98: 0x92021211  lbu         $v0, 0x1211($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae94) {
            ctx->pc = 0x11AEB0u;
            goto label_11aeb0;
        }
    }
    ctx->pc = 0x11AE9Cu;
label_11ae9c:
    // 0x11ae9c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x11ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x11aea0: 0x56420003  bnel        $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AEA0u;
    {
        const bool branch_taken_0x11aea0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x11aea0) {
            ctx->pc = 0x11AEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AEA0u;
            // 0x11aea4: 0x92021211  lbu         $v0, 0x1211($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AEB0u;
            goto label_11aeb0;
        }
    }
    ctx->pc = 0x11AEA8u;
label_11aea8:
    // 0x11aea8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11aeac:
    // 0x11aeac: 0x92021211  lbu         $v0, 0x1211($s0)
    ctx->pc = 0x11aeacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
label_11aeb0:
    // 0x11aeb0: 0x92031213  lbu         $v1, 0x1213($s0)
    ctx->pc = 0x11aeb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11aeb4: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11aeb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11aeb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11aebc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11aec0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x11aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x11aec4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11aec8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11aec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aecc: 0xac650240  sw          $a1, 0x240($v1)
    ctx->pc = 0x11aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 576), GPR_U32(ctx, 5));
    // 0x11aed0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11aed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11aed4: 0x92021211  lbu         $v0, 0x1211($s0)
    ctx->pc = 0x11aed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4625)));
    // 0x11aed8: 0x92031213  lbu         $v1, 0x1213($s0)
    ctx->pc = 0x11aed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11aedc: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11aee0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11aee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11aee4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11aee8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x11aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x11aeec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11aef0: 0xac740238  sw          $s4, 0x238($v1)
    ctx->pc = 0x11aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 568), GPR_U32(ctx, 20));
    // 0x11aef4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11aef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11aef8: 0x92021213  lbu         $v0, 0x1213($s0)
    ctx->pc = 0x11aef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4627)));
    // 0x11aefc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11af00: 0xa2021213  sb          $v0, 0x1213($s0)
    ctx->pc = 0x11af00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4627), (uint8_t)GPR_U32(ctx, 2));
    // 0x11af04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11af04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11af08: 0x3e00008  jr          $ra
    ctx->pc = 0x11AF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF08u;
        // 0x11af0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AF10u;
}
