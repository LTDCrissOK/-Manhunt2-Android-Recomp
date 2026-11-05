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

// Function: sub_002CBC68
// Address: 0x2cbc68 - 0x2cbe90
void sub_002CBC68_0x2cbc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBC68_0x2cbc68");
#endif

    switch (ctx->pc) {
        case 0x2cbc88u: goto label_2cbc88;
        case 0x2cbce4u: goto label_2cbce4;
        case 0x2cbd08u: goto label_2cbd08;
        case 0x2cbdbcu: goto label_2cbdbc;
        case 0x2cbdf0u: goto label_2cbdf0;
        case 0x2cbdfcu: goto label_2cbdfc;
        case 0x2cbe08u: goto label_2cbe08;
        case 0x2cbe3cu: goto label_2cbe3c;
        case 0x2cbe48u: goto label_2cbe48;
        case 0x2cbe5cu: goto label_2cbe5c;
        default: break;
    }

    ctx->pc = 0x2cbc68u;

    // 0x2cbc68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cbc6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cbc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cbc70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cbc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cbc74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cbc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cbc78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cbc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cbc7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cbc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cbc80: 0xc0e1458  jal         func_385160
    ctx->pc = 0x2CBC80u;
    SET_GPR_U32(ctx, 31, 0x2CBC88u);
    ctx->pc = 0x2CBC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC80u;
    // 0x2cbc84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385160u, 0x2CBC80u, 0x2CBC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC88u;
label_2cbc88:
    // 0x2cbc88: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x2cbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x2cbc8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cbc8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc90: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2cbc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2cbc94: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2cbc94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2cbc98: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2cbc98u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x2cbc9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cbc9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbca0: 0x8c83b4a8  lw          $v1, -0x4B58($a0)
    ctx->pc = 0x2cbca0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cbca4: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x2cbca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x2cbca8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cbca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cbcac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2cbcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cbcb0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cbcb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2cbcb4: 0xac62080c  sw          $v0, 0x80C($v1)
    ctx->pc = 0x2cbcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2060), GPR_U32(ctx, 2));
    // 0x2cbcb8: 0x8c83b4a8  lw          $v1, -0x4B58($a0)
    ctx->pc = 0x2cbcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948008)));
    // 0x2cbcbc: 0x8c620800  lw          $v0, 0x800($v1)
    ctx->pc = 0x2cbcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2048)));
    // 0x2cbcc0: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2CBCC0u;
    {
        const bool branch_taken_0x2cbcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbcc0) {
            ctx->pc = 0x2CBE68u;
            goto label_2cbe68;
        }
    }
    ctx->pc = 0x2CBCC8u;
    // 0x2cbcc8: 0x8c620804  lw          $v0, 0x804($v1)
    ctx->pc = 0x2cbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2052)));
    // 0x2cbccc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cbcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbcd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cbcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbcd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cbcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cbcd8: 0xac620804  sw          $v0, 0x804($v1)
    ctx->pc = 0x2cbcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2052), GPR_U32(ctx, 2));
    // 0x2cbcdc: 0xc0e0f66  jal         func_383D98
    ctx->pc = 0x2CBCDCu;
    SET_GPR_U32(ctx, 31, 0x2CBCE4u);
    ctx->pc = 0x383D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383D98u, 0x2CBCDCu, 0x2CBCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBCE4u;
label_2cbce4:
    // 0x2cbce4: 0x8e43b4a8  lw          $v1, -0x4B58($s2)
    ctx->pc = 0x2cbce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cbce8: 0xac620810  sw          $v0, 0x810($v1)
    ctx->pc = 0x2cbce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2064), GPR_U32(ctx, 2));
    // 0x2cbcec: 0x8e43b4a8  lw          $v1, -0x4B58($s2)
    ctx->pc = 0x2cbcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cbcf0: 0x8c620810  lw          $v0, 0x810($v1)
    ctx->pc = 0x2cbcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2064)));
    // 0x2cbcf4: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2CBCF4u;
    {
        const bool branch_taken_0x2cbcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCF4u;
        // 0x2cbcf8: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcf4) {
            ctx->pc = 0x2CBE68u;
            goto label_2cbe68;
        }
    }
    ctx->pc = 0x2CBCFCu;
    // 0x2cbcfc: 0x34843094  ori         $a0, $a0, 0x3094
    ctx->pc = 0x2cbcfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12436);
    // 0x2cbd00: 0xc0b414c  jal         func_2D0530
    ctx->pc = 0x2CBD00u;
    SET_GPR_U32(ctx, 31, 0x2CBD08u);
    ctx->pc = 0x2CBD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD00u;
    // 0x2cbd04: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0530u, 0x2CBD00u, 0x2CBD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD08u;
label_2cbd08:
    // 0x2cbd08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cbd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd0c: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CBD0Cu;
    {
        const bool branch_taken_0x2cbd0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD0Cu;
        // 0x2cbd10: 0x8e44b4a8  lw          $a0, -0x4B58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd0c) {
            ctx->pc = 0x2CBD3Cu;
            goto label_2cbd3c;
        }
    }
    ctx->pc = 0x2CBD14u;
    // 0x2cbd14: 0x8e42b4a8  lw          $v0, -0x4B58($s2)
    ctx->pc = 0x2cbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cbd18: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cbd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cbd1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cbd20: 0x8c4330a8  lw          $v1, 0x30A8($v0)
    ctx->pc = 0x2cbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12456)));
    // 0x2cbd24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cbd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cbd28: 0xac4330a8  sw          $v1, 0x30A8($v0)
    ctx->pc = 0x2cbd28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12456), GPR_U32(ctx, 3));
    // 0x2cbd2c: 0xf  sync
    ctx->pc = 0x2cbd2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2cbd30: 0x42000038  ei
    ctx->pc = 0x2cbd30u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2cbd34: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2CBD34u;
    {
        const bool branch_taken_0x2cbd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD34u;
        // 0x2cbd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd34) {
            ctx->pc = 0x2CBE74u;
            goto label_2cbe74;
        }
    }
    ctx->pc = 0x2CBD3Cu;
label_2cbd3c:
    // 0x2cbd3c: 0x8c82080c  lw          $v0, 0x80C($a0)
    ctx->pc = 0x2cbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x2cbd40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cbd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cbd44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBD44u;
    {
        const bool branch_taken_0x2cbd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD44u;
        // 0x2cbd48: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd44) {
            ctx->pc = 0x2CBD58u;
            goto label_2cbd58;
        }
    }
    ctx->pc = 0x2CBD4Cu;
    // 0x2cbd4c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2cbd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2cbd50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBD50u;
    {
        const bool branch_taken_0x2cbd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD50u;
        // 0x2cbd54: 0x34423210  ori         $v0, $v0, 0x3210 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12816);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd50) {
            ctx->pc = 0x2CBD60u;
            goto label_2cbd60;
        }
    }
    ctx->pc = 0x2CBD58u;
label_2cbd58:
    // 0x2cbd58: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2cbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2cbd5c: 0x34423120  ori         $v0, $v0, 0x3120
    ctx->pc = 0x2cbd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12576);
label_2cbd60:
    // 0x2cbd60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2cbd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2cbd64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2cbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cbd68: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2cbd68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2cbd6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cbd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cbd70: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x2cbd70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2cbd74: 0x8e43b4a8  lw          $v1, -0x4B58($s2)
    ctx->pc = 0x2cbd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cbd78: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2cbd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2cbd7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cbd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cbd80: 0x8c67080c  lw          $a3, 0x80C($v1)
    ctx->pc = 0x2cbd80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2060)));
    // 0x2cbd84: 0x8c4632f8  lw          $a2, 0x32F8($v0)
    ctx->pc = 0x2cbd84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13048)));
    // 0x2cbd88: 0x8c4532f4  lw          $a1, 0x32F4($v0)
    ctx->pc = 0x2cbd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13044)));
    // 0x2cbd8c: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x2cbd8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x2cbd90: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x2cbd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2cbd94: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2cbd94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2cbd98: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x2cbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2cbd9c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2cbd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2cbda0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2cbda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2cbda4: 0x633c0  sll         $a2, $a2, 15
    ctx->pc = 0x2cbda4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x2cbda8: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x2cbda8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x2cbdac: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2cbdacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2cbdb0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2cbdb0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2cbdb4: 0xc0eeb68  jal         func_3BADA0
    ctx->pc = 0x2CBDB4u;
    SET_GPR_U32(ctx, 31, 0x2CBDBCu);
    ctx->pc = 0x2CBDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBDB4u;
    // 0x2cbdb8: 0x73c03  sra         $a3, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BADA0u, 0x2CBDB4u, 0x2CBDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDBCu;
label_2cbdbc:
    // 0x2cbdbc: 0x8e46b4a8  lw          $a2, -0x4B58($s2)
    ctx->pc = 0x2cbdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cbdc0: 0x8cc2080c  lw          $v0, 0x80C($a2)
    ctx->pc = 0x2cbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2060)));
    // 0x2cbdc4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CBDC4u;
    {
        const bool branch_taken_0x2cbdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDC4u;
        // 0x2cbdc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbdc4) {
            ctx->pc = 0x2CBE14u;
            goto label_2cbe14;
        }
    }
    ctx->pc = 0x2CBDCCu;
    // 0x2cbdcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cbdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cbdd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cbdd4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CBDD4u;
    {
        const bool branch_taken_0x2cbdd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDD4u;
        // 0x2cbdd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbdd4) {
            ctx->pc = 0x2CBE14u;
            goto label_2cbe14;
        }
    }
    ctx->pc = 0x2CBDDCu;
    // 0x2cbddc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cbddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cbde0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cbde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbde4: 0x348430c0  ori         $a0, $a0, 0x30C0
    ctx->pc = 0x2cbde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12480);
    // 0x2cbde8: 0xc0eeb02  jal         func_3BAC08
    ctx->pc = 0x2CBDE8u;
    SET_GPR_U32(ctx, 31, 0x2CBDF0u);
    ctx->pc = 0x2CBDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBDE8u;
    // 0x2cbdec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAC08u, 0x2CBDE8u, 0x2CBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDF0u;
label_2cbdf0:
    // 0x2cbdf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cbdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbdf4: 0xc0e0f66  jal         func_383D98
    ctx->pc = 0x2CBDF4u;
    SET_GPR_U32(ctx, 31, 0x2CBDFCu);
    ctx->pc = 0x2CBDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBDF4u;
    // 0x2cbdf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383D98u, 0x2CBDF4u, 0x2CBDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDFCu;
label_2cbdfc:
    // 0x2cbdfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cbdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe00: 0xc0e1466  jal         func_385198
    ctx->pc = 0x2CBE00u;
    SET_GPR_U32(ctx, 31, 0x2CBE08u);
    ctx->pc = 0x2CBE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE00u;
    // 0x2cbe04: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385198u, 0x2CBE00u, 0x2CBE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE08u;
label_2cbe08:
    // 0x2cbe08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbe0c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2CBE0Cu;
    {
        const bool branch_taken_0x2cbe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE0Cu;
        // 0x2cbe10: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe0c) {
            ctx->pc = 0x2CBE68u;
            goto label_2cbe68;
        }
    }
    ctx->pc = 0x2CBE14u;
label_2cbe14:
    // 0x2cbe14: 0x8cc3080c  lw          $v1, 0x80C($a2)
    ctx->pc = 0x2cbe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2060)));
    // 0x2cbe18: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CBE18u;
    {
        const bool branch_taken_0x2cbe18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cbe18) {
            ctx->pc = 0x2CBE68u;
            goto label_2cbe68;
        }
    }
    ctx->pc = 0x2CBE20u;
    // 0x2cbe20: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2cbe20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cbe24: 0x16230010  bne         $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CBE24u;
    {
        const bool branch_taken_0x2cbe24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CBE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE24u;
        // 0x2cbe28: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe24) {
            ctx->pc = 0x2CBE68u;
            goto label_2cbe68;
        }
    }
    ctx->pc = 0x2CBE2Cu;
    // 0x2cbe2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cbe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbe30: 0x348430c0  ori         $a0, $a0, 0x30C0
    ctx->pc = 0x2cbe30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12480);
    // 0x2cbe34: 0xc0eeb02  jal         func_3BAC08
    ctx->pc = 0x2CBE34u;
    SET_GPR_U32(ctx, 31, 0x2CBE3Cu);
    ctx->pc = 0x2CBE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE34u;
    // 0x2cbe38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAC08u, 0x2CBE34u, 0x2CBE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE3Cu;
label_2cbe3c:
    // 0x2cbe3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cbe3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe40: 0xc0e0f66  jal         func_383D98
    ctx->pc = 0x2CBE40u;
    SET_GPR_U32(ctx, 31, 0x2CBE48u);
    ctx->pc = 0x2CBE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE40u;
    // 0x2cbe44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383D98u, 0x2CBE40u, 0x2CBE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE48u;
label_2cbe48:
    // 0x2cbe48: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2cbe48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2cbe4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cbe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe50: 0x34a56740  ori         $a1, $a1, 0x6740
    ctx->pc = 0x2cbe50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26432);
    // 0x2cbe54: 0xc0e1466  jal         func_385198
    ctx->pc = 0x2CBE54u;
    SET_GPR_U32(ctx, 31, 0x2CBE5Cu);
    ctx->pc = 0x2CBE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE54u;
    // 0x2cbe58: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385198u, 0x2CBE54u, 0x2CBE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE5Cu;
label_2cbe5c:
    // 0x2cbe5c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2cbe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2cbe60: 0x8e42b4a8  lw          $v0, -0x4B58($s2)
    ctx->pc = 0x2cbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948008)));
    // 0x2cbe64: 0xac510808  sw          $s1, 0x808($v0)
    ctx->pc = 0x2cbe64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 17));
label_2cbe68:
    // 0x2cbe68: 0xf  sync
    ctx->pc = 0x2cbe68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2cbe6c: 0x42000038  ei
    ctx->pc = 0x2cbe6cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2cbe70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbe70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe74:
    // 0x2cbe74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cbe74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbe78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cbe78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cbe7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cbe7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbe80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cbe80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cbe84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cbe84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbe88: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE88u;
        // 0x2cbe8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBE90u;
}
