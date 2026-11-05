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

// Function: sub_003D50B8
// Address: 0x3d50b8 - 0x3d5200
void sub_003D50B8_0x3d50b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D50B8_0x3d50b8");
#endif

    switch (ctx->pc) {
        case 0x3d50b8u: goto label_3d50b8;
        case 0x3d50bcu: goto label_3d50bc;
        case 0x3d50c0u: goto label_3d50c0;
        case 0x3d50c4u: goto label_3d50c4;
        case 0x3d50c8u: goto label_3d50c8;
        case 0x3d50ccu: goto label_3d50cc;
        case 0x3d50d0u: goto label_3d50d0;
        case 0x3d50d4u: goto label_3d50d4;
        case 0x3d50d8u: goto label_3d50d8;
        case 0x3d50dcu: goto label_3d50dc;
        case 0x3d50e0u: goto label_3d50e0;
        case 0x3d50e4u: goto label_3d50e4;
        case 0x3d50e8u: goto label_3d50e8;
        case 0x3d50ecu: goto label_3d50ec;
        case 0x3d50f0u: goto label_3d50f0;
        case 0x3d50f4u: goto label_3d50f4;
        case 0x3d50f8u: goto label_3d50f8;
        case 0x3d50fcu: goto label_3d50fc;
        case 0x3d5100u: goto label_3d5100;
        case 0x3d5104u: goto label_3d5104;
        case 0x3d5108u: goto label_3d5108;
        case 0x3d510cu: goto label_3d510c;
        case 0x3d5110u: goto label_3d5110;
        case 0x3d5114u: goto label_3d5114;
        case 0x3d5118u: goto label_3d5118;
        case 0x3d511cu: goto label_3d511c;
        case 0x3d5120u: goto label_3d5120;
        case 0x3d5124u: goto label_3d5124;
        case 0x3d5128u: goto label_3d5128;
        case 0x3d512cu: goto label_3d512c;
        case 0x3d5130u: goto label_3d5130;
        case 0x3d5134u: goto label_3d5134;
        case 0x3d5138u: goto label_3d5138;
        case 0x3d513cu: goto label_3d513c;
        case 0x3d5140u: goto label_3d5140;
        case 0x3d5144u: goto label_3d5144;
        case 0x3d5148u: goto label_3d5148;
        case 0x3d514cu: goto label_3d514c;
        case 0x3d5150u: goto label_3d5150;
        case 0x3d5154u: goto label_3d5154;
        case 0x3d5158u: goto label_3d5158;
        case 0x3d515cu: goto label_3d515c;
        case 0x3d5160u: goto label_3d5160;
        case 0x3d5164u: goto label_3d5164;
        case 0x3d5168u: goto label_3d5168;
        case 0x3d516cu: goto label_3d516c;
        case 0x3d5170u: goto label_3d5170;
        case 0x3d5174u: goto label_3d5174;
        case 0x3d5178u: goto label_3d5178;
        case 0x3d517cu: goto label_3d517c;
        case 0x3d5180u: goto label_3d5180;
        case 0x3d5184u: goto label_3d5184;
        case 0x3d5188u: goto label_3d5188;
        case 0x3d518cu: goto label_3d518c;
        case 0x3d5190u: goto label_3d5190;
        case 0x3d5194u: goto label_3d5194;
        case 0x3d5198u: goto label_3d5198;
        case 0x3d519cu: goto label_3d519c;
        case 0x3d51a0u: goto label_3d51a0;
        case 0x3d51a4u: goto label_3d51a4;
        case 0x3d51a8u: goto label_3d51a8;
        case 0x3d51acu: goto label_3d51ac;
        case 0x3d51b0u: goto label_3d51b0;
        case 0x3d51b4u: goto label_3d51b4;
        case 0x3d51b8u: goto label_3d51b8;
        case 0x3d51bcu: goto label_3d51bc;
        case 0x3d51c0u: goto label_3d51c0;
        case 0x3d51c4u: goto label_3d51c4;
        case 0x3d51c8u: goto label_3d51c8;
        case 0x3d51ccu: goto label_3d51cc;
        case 0x3d51d0u: goto label_3d51d0;
        case 0x3d51d4u: goto label_3d51d4;
        case 0x3d51d8u: goto label_3d51d8;
        case 0x3d51dcu: goto label_3d51dc;
        case 0x3d51e0u: goto label_3d51e0;
        case 0x3d51e4u: goto label_3d51e4;
        case 0x3d51e8u: goto label_3d51e8;
        case 0x3d51ecu: goto label_3d51ec;
        case 0x3d51f0u: goto label_3d51f0;
        case 0x3d51f4u: goto label_3d51f4;
        case 0x3d51f8u: goto label_3d51f8;
        case 0x3d51fcu: goto label_3d51fc;
        default: break;
    }

    ctx->pc = 0x3d50b8u;

label_3d50b8:
    // 0x3d50b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3d50b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3d50bc:
    // 0x3d50bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d50c0:
    // 0x3d50c0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3d50c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_3d50c4:
    // 0x3d50c4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3d50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_3d50c8:
    // 0x3d50c8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3d50c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3d50cc:
    // 0x3d50cc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3d50ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3d50d0:
    // 0x3d50d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3d50d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d50d4:
    // 0x3d50d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d50d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_3d50d8:
    // 0x3d50d8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3d50d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d50dc:
    // 0x3d50dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d50dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3d50e0:
    // 0x3d50e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d50e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d50e4:
    // 0x3d50e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d50e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3d50e8:
    // 0x3d50e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d50e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d50ec:
    // 0x3d50ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d50ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3d50f0:
    // 0x3d50f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d50f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3d50f4:
    // 0x3d50f4: 0x12a00036  beqz        $s5, . + 4 + (0x36 << 2)
label_3d50f8:
    if (ctx->pc == 0x3D50F8u) {
        ctx->pc = 0x3D50F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50F4u;
        // 0x3d50f8: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D50FCu;
        goto label_3d50fc;
    }
    ctx->pc = 0x3D50F4u;
    {
        const bool branch_taken_0x3d50f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D50F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50F4u;
        // 0x3d50f8: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d50f4) {
            ctx->pc = 0x3D51D0u;
            goto label_3d51d0;
        }
    }
    ctx->pc = 0x3D50FCu;
label_3d50fc:
    // 0x3d50fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d50fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d5100:
    // 0x3d5100: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
label_3d5104:
    if (ctx->pc == 0x3D5104u) {
        ctx->pc = 0x3D5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5100u;
        // 0x3d5104: 0x26a80008  addiu       $t0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5108u;
        goto label_3d5108;
    }
    ctx->pc = 0x3D5100u;
    {
        const bool branch_taken_0x3d5100 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5100u;
        // 0x3d5104: 0x26a80008  addiu       $t0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5100) {
            ctx->pc = 0x3D5134u;
            goto label_3d5134;
        }
    }
    ctx->pc = 0x3D5108u;
label_3d5108:
    // 0x3d5108: 0x2281023  subu        $v0, $s1, $t0
    ctx->pc = 0x3d5108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_3d510c:
    // 0x3d510c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3d510cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3d5110:
    // 0x3d5110: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x3d5110u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_3d5114:
    // 0x3d5114: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x3d5114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3d5118:
    // 0x3d5118: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x3d5118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3d511c:
    // 0x3d511c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3d5120:
    // 0x3d5120: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x3d5120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3d5124:
    // 0x3d5124: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d5124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d5128:
    // 0x3d5128: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3d5128u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3d512c:
    // 0x3d512c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d5130:
    if (ctx->pc == 0x3D5130u) {
        ctx->pc = 0x3D5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D512Cu;
        // 0x3d5130: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5134u;
        goto label_3d5134;
    }
    ctx->pc = 0x3D512Cu;
    {
        const bool branch_taken_0x3d512c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D512Cu;
        // 0x3d5130: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d512c) {
            ctx->pc = 0x3D5138u;
            goto label_3d5138;
        }
    }
    ctx->pc = 0x3D5134u;
label_3d5134:
    // 0x3d5134: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d5134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d5138:
    // 0x3d5138: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3d5138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3d513c:
    // 0x3d513c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d513cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3d5140:
    // 0x3d5140: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x3d5140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3d5144:
    // 0x3d5144: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d5144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3d5148:
    // 0x3d5148: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3d5148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3d514c:
    // 0x3d514c: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_3d5150:
    if (ctx->pc == 0x3D5150u) {
        ctx->pc = 0x3D5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D514Cu;
        // 0x3d5150: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5154u;
        goto label_3d5154;
    }
    ctx->pc = 0x3D514Cu;
    {
        const bool branch_taken_0x3d514c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D514Cu;
        // 0x3d5150: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d514c) {
            ctx->pc = 0x3D51D0u;
            goto label_3d51d0;
        }
    }
    ctx->pc = 0x3D5154u;
label_3d5154:
    // 0x3d5154: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x3d5154u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_3d5158:
    // 0x3d5158: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x3d5158u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_3d515c:
    // 0x3d515c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d515cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d5160:
    // 0x3d5160: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d5160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d5164:
    // 0x3d5164: 0x0  nop
    ctx->pc = 0x3d5164u;
    // NOP
label_3d5168:
    // 0x3d5168: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_3d516c:
    if (ctx->pc == 0x3D516Cu) {
        ctx->pc = 0x3D516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5168u;
        // 0x3d516c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5170u;
        goto label_3d5170;
    }
    ctx->pc = 0x3D5168u;
    {
        const bool branch_taken_0x3d5168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5168) {
            ctx->pc = 0x3D516Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5168u;
            // 0x3d516c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D51C4u;
            goto label_3d51c4;
        }
    }
    ctx->pc = 0x3D5170u;
label_3d5170:
    // 0x3d5170: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d5170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d5174:
    // 0x3d5174: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d5174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d5178:
    // 0x3d5178: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_3d517c:
    if (ctx->pc == 0x3D517Cu) {
        ctx->pc = 0x3D517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5178u;
        // 0x3d517c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5180u;
        goto label_3d5180;
    }
    ctx->pc = 0x3D5178u;
    {
        const bool branch_taken_0x3d5178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5178) {
            ctx->pc = 0x3D517Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5178u;
            // 0x3d517c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D51C4u;
            goto label_3d51c4;
        }
    }
    ctx->pc = 0x3D5180u;
label_3d5180:
    // 0x3d5180: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3d5180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d5184:
    // 0x3d5184: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_3d5188:
    if (ctx->pc == 0x3D5188u) {
        ctx->pc = 0x3D518Cu;
        goto label_3d518c;
    }
    ctx->pc = 0x3D5184u;
    {
        const bool branch_taken_0x3d5184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5184) {
            ctx->pc = 0x3D51B8u;
            goto label_3d51b8;
        }
    }
    ctx->pc = 0x3D518Cu;
label_3d518c:
    // 0x3d518c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3d518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3d5190:
    // 0x3d5190: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3d5194:
    if (ctx->pc == 0x3D5194u) {
        ctx->pc = 0x3D5194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5190u;
        // 0x3d5194: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5198u;
        goto label_3d5198;
    }
    ctx->pc = 0x3D5190u;
    {
        const bool branch_taken_0x3d5190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5190u;
        // 0x3d5194: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5190) {
            ctx->pc = 0x3D51C0u;
            goto label_3d51c0;
        }
    }
    ctx->pc = 0x3D5198u;
label_3d5198:
    // 0x3d5198: 0x40f809  jalr        $v0
label_3d519c:
    if (ctx->pc == 0x3D519Cu) {
        ctx->pc = 0x3D519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5198u;
        // 0x3d519c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D51A0u;
        goto label_3d51a0;
    }
    ctx->pc = 0x3D5198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D51A0u);
        ctx->pc = 0x3D519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5198u;
        // 0x3d519c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5198u, 0x3D51A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D51A0u;
label_3d51a0:
    // 0x3d51a0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3d51a4:
    if (ctx->pc == 0x3D51A4u) {
        ctx->pc = 0x3D51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51A0u;
        // 0x3d51a4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D51A8u;
        goto label_3d51a8;
    }
    ctx->pc = 0x3D51A0u;
    {
        const bool branch_taken_0x3d51a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d51a0) {
            ctx->pc = 0x3D51A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D51A0u;
            // 0x3d51a4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D51C4u;
            goto label_3d51c4;
        }
    }
    ctx->pc = 0x3D51A8u;
label_3d51a8:
    // 0x3d51a8: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_3d51ac:
    if (ctx->pc == 0x3D51ACu) {
        ctx->pc = 0x3D51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51A8u;
        // 0x3d51ac: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D51B0u;
        goto label_3d51b0;
    }
    ctx->pc = 0x3D51A8u;
    {
        const bool branch_taken_0x3d51a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d51a8) {
            ctx->pc = 0x3D51ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D51A8u;
            // 0x3d51ac: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D51B0u;
            goto label_3d51b0;
        }
    }
    ctx->pc = 0x3D51B0u;
label_3d51b0:
    // 0x3d51b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d51b4:
    if (ctx->pc == 0x3D51B4u) {
        ctx->pc = 0x3D51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51B0u;
        // 0x3d51b4: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D51B8u;
        goto label_3d51b8;
    }
    ctx->pc = 0x3D51B0u;
    {
        const bool branch_taken_0x3d51b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51B0u;
        // 0x3d51b4: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d51b0) {
            ctx->pc = 0x3D51D0u;
            goto label_3d51d0;
        }
    }
    ctx->pc = 0x3D51B8u;
label_3d51b8:
    // 0x3d51b8: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_3d51bc:
    if (ctx->pc == 0x3D51BCu) {
        ctx->pc = 0x3D51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51B8u;
        // 0x3d51bc: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D51C0u;
        goto label_3d51c0;
    }
    ctx->pc = 0x3D51B8u;
    {
        const bool branch_taken_0x3d51b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d51b8) {
            ctx->pc = 0x3D51BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D51B8u;
            // 0x3d51bc: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D51C0u;
            goto label_3d51c0;
        }
    }
    ctx->pc = 0x3D51C0u;
label_3d51c0:
    // 0x3d51c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3d51c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d51c4:
    // 0x3d51c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d51c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d51c8:
    // 0x3d51c8: 0x1452ffe7  bne         $v0, $s2, . + 4 + (-0x19 << 2)
label_3d51cc:
    if (ctx->pc == 0x3D51CCu) {
        ctx->pc = 0x3D51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51C8u;
        // 0x3d51cc: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D51D0u;
        goto label_3d51d0;
    }
    ctx->pc = 0x3D51C8u;
    {
        const bool branch_taken_0x3d51c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3D51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51C8u;
        // 0x3d51cc: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d51c8) {
            ctx->pc = 0x3D5168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5168;
        }
    }
    ctx->pc = 0x3D51D0u;
label_3d51d0:
    // 0x3d51d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d51d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d51d4:
    // 0x3d51d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d51d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3d51d8:
    // 0x3d51d8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3d51d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3d51dc:
    // 0x3d51dc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3d51dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d51e0:
    // 0x3d51e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3d51e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d51e4:
    // 0x3d51e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d51e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d51e8:
    // 0x3d51e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d51e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d51ec:
    // 0x3d51ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d51ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d51f0:
    // 0x3d51f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d51f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d51f4:
    // 0x3d51f4: 0x3e00008  jr          $ra
label_3d51f8:
    if (ctx->pc == 0x3D51F8u) {
        ctx->pc = 0x3D51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51F4u;
        // 0x3d51f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D51FCu;
        goto label_3d51fc;
    }
    ctx->pc = 0x3D51F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51F4u;
        // 0x3d51f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D51F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D51FCu;
label_3d51fc:
    // 0x3d51fc: 0x0  nop
    ctx->pc = 0x3d51fcu;
    // NOP
    ctx->pc = 0x3d5200u;
}
