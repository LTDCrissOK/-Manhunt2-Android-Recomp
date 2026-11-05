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

// Function: sub_002C86B8
// Address: 0x2c86b8 - 0x2c8ce8
void sub_002C86B8_0x2c86b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C86B8_0x2c86b8");
#endif

    switch (ctx->pc) {
        case 0x2c8780u: goto label_2c8780;
        case 0x2c8880u: goto label_2c8880;
        case 0x2c8928u: goto label_2c8928;
        case 0x2c8960u: goto label_2c8960;
        case 0x2c8964u: goto label_2c8964;
        case 0x2c89a4u: goto label_2c89a4;
        case 0x2c8a18u: goto label_2c8a18;
        case 0x2c8a64u: goto label_2c8a64;
        case 0x2c8a94u: goto label_2c8a94;
        case 0x2c8a9cu: goto label_2c8a9c;
        case 0x2c8b38u: goto label_2c8b38;
        case 0x2c8c10u: goto label_2c8c10;
        case 0x2c8c24u: goto label_2c8c24;
        case 0x2c8c60u: goto label_2c8c60;
        case 0x2c8c80u: goto label_2c8c80;
        case 0x2c8cccu: goto label_2c8ccc;
        case 0x2c8cdcu: goto label_2c8cdc;
        default: break;
    }

    ctx->pc = 0x2c86b8u;

    // 0x2c86b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c86b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c86bc: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2c86bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c86c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c86c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c86c4: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x2c86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2c86c8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2c86c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c86cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C86CCu;
    {
        const bool branch_taken_0x2c86cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86CCu;
        // 0x2c86d0: 0x54823  negu        $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86cc) {
            ctx->pc = 0x2C86DCu;
            goto label_2c86dc;
        }
    }
    ctx->pc = 0x2C86D4u;
    // 0x2c86d4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C86D4u;
    {
        const bool branch_taken_0x2c86d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86D4u;
        // 0x2c86d8: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86d4) {
            ctx->pc = 0x2C8744u;
            goto label_2c8744;
        }
    }
    ctx->pc = 0x2C86DCu;
label_2c86dc:
    // 0x2c86dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c86dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c86e0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c86e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c86e4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C86E4u;
    {
        const bool branch_taken_0x2c86e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86E4u;
        // 0x2c86e8: 0x240d001f  addiu       $t5, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86e4) {
            ctx->pc = 0x2C8744u;
            goto label_2c8744;
        }
    }
    ctx->pc = 0x2C86ECu;
    // 0x2c86ec: 0x2464ff00  addiu       $a0, $v1, -0x100
    ctx->pc = 0x2c86ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x2c86f0: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2c86f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2c86f4: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x2c86f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2c86f8: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x2c86f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c86fc: 0x2462f000  addiu       $v0, $v1, -0x1000
    ctx->pc = 0x2c86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x2c8700: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c8700u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c8704: 0x30460004  andi        $a2, $v0, 0x4
    ctx->pc = 0x2c8704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2c8708: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x2c8708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x2c870c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2c870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2c8710: 0x2462c000  addiu       $v0, $v1, -0x4000
    ctx->pc = 0x2c8710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950912));
    // 0x2c8714: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c8714u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c8718: 0x30460002  andi        $a2, $v0, 0x2
    ctx->pc = 0x2c8718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c871c: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x2c871cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x2c8720: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2c8720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2c8724: 0x31bc2  srl         $v1, $v1, 15
    ctx->pc = 0x2c8724u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2c8728: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x2c8728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x2c872c: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x2c872cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8730: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x2c8730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x2c8734: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2c8734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2c8738: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x2c8738u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c873c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c873cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c8740: 0x626821  addu        $t5, $v1, $v0
    ctx->pc = 0x2c8740u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c8744:
    // 0x2c8744: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x2c8744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2c8748: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2c8748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2c874c: 0x8c46012c  lw          $a2, 0x12C($v0)
    ctx->pc = 0x2c874cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x2c8750: 0x10c00022  beqz        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C8750u;
    {
        const bool branch_taken_0x2c8750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8750u;
        // 0x2c8754: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8750) {
            ctx->pc = 0x2C87DCu;
            goto label_2c87dc;
        }
    }
    ctx->pc = 0x2C8758u;
    // 0x2c8758: 0x11a20005  beq         $t5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8758u;
    {
        const bool branch_taken_0x2c8758 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8758u;
        // 0x2c875c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8758) {
            ctx->pc = 0x2C8770u;
            goto label_2c8770;
        }
    }
    ctx->pc = 0x2C8760u;
    // 0x2c8760: 0xd1842  srl         $v1, $t5, 1
    ctx->pc = 0x2c8760u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x2c8764: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2c8764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2c8768: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c8768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c876c: 0x453804  sllv        $a3, $a1, $v0
    ctx->pc = 0x2c876cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_2c8770:
    // 0x2c8770: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2c8770u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2c8774: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c8774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8778: 0x3508fffc  ori         $t0, $t0, 0xFFFC
    ctx->pc = 0x2c8778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65532);
    // 0x2c877c: 0x0  nop
    ctx->pc = 0x2c877cu;
    // NOP
label_2c8780:
    // 0x2c8780: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c8780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c8784: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2c8784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2c8788: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2c8788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c878c: 0x49182b  sltu        $v1, $v0, $t1
    ctx->pc = 0x2c878cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2c8790: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8790u;
    {
        const bool branch_taken_0x2c8790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8790) {
            ctx->pc = 0x2C8794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8790u;
            // 0x2c8794: 0x717c2  srl         $v0, $a3, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87A8u;
            goto label_2c87a8;
        }
    }
    ctx->pc = 0x2C8798u;
    // 0x2c8798: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c8798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c879c: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C879Cu;
    {
        const bool branch_taken_0x2c879c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C879Cu;
        // 0x2c87a0: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c879c) {
            ctx->pc = 0x2C87D4u;
            goto label_2c87d4;
        }
    }
    ctx->pc = 0x2C87A4u;
    // 0x2c87a4: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x2c87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_2c87a8:
    // 0x2c87a8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x2c87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2c87ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c87acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c87b0: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x2c87b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2c87b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c87b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C87B8u;
    {
        const bool branch_taken_0x2c87b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87B8u;
        // 0x2c87bc: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87b8) {
            ctx->pc = 0x2C87C8u;
            goto label_2c87c8;
        }
    }
    ctx->pc = 0x2C87C0u;
    // 0x2c87c0: 0x861026  xor         $v0, $a0, $a2
    ctx->pc = 0x2c87c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x2c87c4: 0x82500b  movn        $t2, $a0, $v0
    ctx->pc = 0x2c87c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
label_2c87c8:
    // 0x2c87c8: 0x54c0ffed  bnel        $a2, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2C87C8u;
    {
        const bool branch_taken_0x2c87c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c87c8) {
            ctx->pc = 0x2C87CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C87C8u;
            // 0x2c87cc: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8780;
        }
    }
    ctx->pc = 0x2C87D0u;
    // 0x2c87d0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2c87d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c87d4:
    // 0x2c87d4: 0x14c00026  bnez        $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C87D4u;
    {
        const bool branch_taken_0x2c87d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c87d4) {
            ctx->pc = 0x2C8870u;
            goto label_2c8870;
        }
    }
    ctx->pc = 0x2C87DCu;
label_2c87dc:
    // 0x2c87dc: 0x15800022  bnez        $t4, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C87DCu;
    {
        const bool branch_taken_0x2c87dc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87DCu;
        // 0x2c87e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87dc) {
            ctx->pc = 0x2C8868u;
            goto label_2c8868;
        }
    }
    ctx->pc = 0x2C87E4u;
    // 0x2c87e4: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x2c87e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2c87e8: 0x1a21004  sllv        $v0, $v0, $t5
    ctx->pc = 0x2c87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x2c87ec: 0x21823  negu        $v1, $v0
    ctx->pc = 0x2c87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2c87f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c87f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c87f4: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x2c87f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c87f8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C87F8u;
    {
        const bool branch_taken_0x2c87f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C87F8u;
        // 0x2c87fc: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87f8) {
            ctx->pc = 0x2C8868u;
            goto label_2c8868;
        }
    }
    ctx->pc = 0x2C8800u;
    // 0x2c8800: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c8800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c8804: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c8804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c8808: 0x22302  srl         $a0, $v0, 12
    ctx->pc = 0x2c8808u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2c880c: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x2c880cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2c8810: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c8810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8814: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x2c8814u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c8818: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x2c8818u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2c881c: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x2c881cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2c8820: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2c8820u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8824: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8828: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x2c8828u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2c882c: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x2c882cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2c8830: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2c8830u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8838: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x2c8838u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c883c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x2c883cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2c8840: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2c8840u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8844: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8848: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x2c8848u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c884c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2c884cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c8850: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2c8850u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8854: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8858: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c8858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c885c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c885cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8860: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2c8860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2c8864: 0x8c66012c  lw          $a2, 0x12C($v1)
    ctx->pc = 0x2c8864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_2c8868:
    // 0x2c8868: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C8868u;
    {
        const bool branch_taken_0x2c8868 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8868) {
            ctx->pc = 0x2C88B4u;
            goto label_2c88b4;
        }
    }
    ctx->pc = 0x2C8870u;
label_2c8870:
    // 0x2c8870: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2c8870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2c8874: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x2c8874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x2c8878: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c8878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c887c: 0x0  nop
    ctx->pc = 0x2c887cu;
    // NOP
label_2c8880:
    // 0x2c8880: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c8880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c8884: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2c8884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c8888: 0x49182b  sltu        $v1, $v0, $t1
    ctx->pc = 0x2c8888u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2c888c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C888Cu;
    {
        const bool branch_taken_0x2c888c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c888c) {
            ctx->pc = 0x2C8890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C888Cu;
            // 0x2c8890: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C88A0u;
            goto label_2c88a0;
        }
    }
    ctx->pc = 0x2C8894u;
    // 0x2c8894: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c8894u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8898: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2c8898u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c889c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2c889cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2c88a0:
    // 0x2c88a0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C88A0u;
    {
        const bool branch_taken_0x2c88a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88a0) {
            ctx->pc = 0x2C88A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C88A0u;
            // 0x2c88a4: 0x8cc20014  lw          $v0, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C88A8u;
            goto label_2c88a8;
        }
    }
    ctx->pc = 0x2C88A8u;
label_2c88a8:
    // 0x2c88a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c88a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c88ac: 0x54c0fff4  bnel        $a2, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C88ACu;
    {
        const bool branch_taken_0x2c88ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c88ac) {
            ctx->pc = 0x2C88B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C88ACu;
            // 0x2c88b0: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8880;
        }
    }
    ctx->pc = 0x2C88B4u;
label_2c88b4:
    // 0x2c88b4: 0x11800109  beqz        $t4, . + 4 + (0x109 << 2)
    ctx->pc = 0x2C88B4u;
    {
        const bool branch_taken_0x2c88b4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88B4u;
        // 0x2c88b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88b4) {
            ctx->pc = 0x2C8CDCu;
            goto label_2c8cdc;
        }
    }
    ctx->pc = 0x2C88BCu;
    // 0x2c88bc: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x2c88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2c88c0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2c88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c88c4: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x2c88c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c88c8: 0x10400104  beqz        $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x2C88C8u;
    {
        const bool branch_taken_0x2c88c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C88CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88C8u;
        // 0x2c88cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88c8) {
            ctx->pc = 0x2C8CDCu;
            goto label_2c8cdc;
        }
    }
    ctx->pc = 0x2C88D0u;
    // 0x2c88d0: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c88d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c88d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c88d8: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x2c88d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c88dc: 0x144000fd  bnez        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x2C88DCu;
    {
        const bool branch_taken_0x2c88dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88DCu;
        // 0x2c88e0: 0x1854021  addu        $t0, $t4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88dc) {
            ctx->pc = 0x2C8CD4u;
            goto label_2c8cd4;
        }
    }
    ctx->pc = 0x2C88E4u;
    // 0x2c88e4: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x2c88e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c88e8: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x2C88E8u;
    {
        const bool branch_taken_0x2c88e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88e8) {
            ctx->pc = 0x2C8CD4u;
            goto label_2c8cd4;
        }
    }
    ctx->pc = 0x2C88F0u;
    // 0x2c88f0: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x2c88f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x2c88f4: 0x104c000c  beq         $v0, $t4, . + 4 + (0xC << 2)
    ctx->pc = 0x2C88F4u;
    {
        const bool branch_taken_0x2c88f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x2C88F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88F4u;
        // 0x2c88f8: 0x8d8a0018  lw          $t2, 0x18($t4) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88f4) {
            ctx->pc = 0x2C8928u;
            goto label_2c8928;
        }
    }
    ctx->pc = 0x2C88FCu;
    // 0x2c88fc: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x2c88fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x2c8900: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c8900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8904: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2c8904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c8908: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8908u;
    {
        const bool branch_taken_0x2c8908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8908u;
        // 0x2c890c: 0x2d2d0010  sltiu       $t5, $t1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8908) {
            ctx->pc = 0x2C8920u;
            goto label_2c8920;
        }
    }
    ctx->pc = 0x2C8910u;
    // 0x2c8910: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2c8910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2c8914: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2c8914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2c8918: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C8918u;
    {
        const bool branch_taken_0x2c8918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8918u;
        // 0x2c891c: 0x258e0008  addiu       $t6, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8918) {
            ctx->pc = 0x2C89A4u;
            goto label_2c89a4;
        }
    }
    ctx->pc = 0x2C8920u;
label_2c8920:
    // 0x2c8920: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8920u;
    SET_GPR_U32(ctx, 31, 0x2C8928u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8920u, 0x2C8928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8928u;
label_2c8928:
    // 0x2c8928: 0x8d860014  lw          $a2, 0x14($t4)
    ctx->pc = 0x2c8928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x2c892c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C892Cu;
    {
        const bool branch_taken_0x2c892c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C892Cu;
        // 0x2c8930: 0x25840014  addiu       $a0, $t4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c892c) {
            ctx->pc = 0x2C8948u;
            goto label_2c8948;
        }
    }
    ctx->pc = 0x2C8934u;
    // 0x2c8934: 0x8d860010  lw          $a2, 0x10($t4)
    ctx->pc = 0x2c8934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x2c8938: 0x25840010  addiu       $a0, $t4, 0x10
    ctx->pc = 0x2c8938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2c893c: 0x2d2d0010  sltiu       $t5, $t1, 0x10
    ctx->pc = 0x2c893cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c8940: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C8940u;
    {
        const bool branch_taken_0x2c8940 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8940u;
        // 0x2c8944: 0x258e0008  addiu       $t6, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8940) {
            ctx->pc = 0x2C89A4u;
            goto label_2c89a4;
        }
    }
    ctx->pc = 0x2C8948u;
label_2c8948:
    // 0x2c8948: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2c8948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2c894c: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x2c894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2c8950: 0x2d2d0010  sltiu       $t5, $t1, 0x10
    ctx->pc = 0x2c8950u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c8954: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8954u;
    {
        const bool branch_taken_0x2c8954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8954u;
        // 0x2c8958: 0x258e0008  addiu       $t6, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8954) {
            ctx->pc = 0x2C8970u;
            goto label_2c8970;
        }
    }
    ctx->pc = 0x2C895Cu;
    // 0x2c895c: 0x0  nop
    ctx->pc = 0x2c895cu;
    // NOP
label_2c8960:
    // 0x2c8960: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c8960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c8964:
    // 0x2c8964: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2c8964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8968: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2c8968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2c896c: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x2c896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
label_2c8970:
    // 0x2c8970: 0x0  nop
    ctx->pc = 0x2c8970u;
    // NOP
    // 0x2c8974: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C8974u;
    {
        const bool branch_taken_0x2c8974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8974) {
            ctx->pc = 0x2C8978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8974u;
            // 0x2c8978: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8964;
        }
    }
    ctx->pc = 0x2C897Cu;
    // 0x2c897c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2c897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c8980: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C8980u;
    {
        const bool branch_taken_0x2c8980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8980u;
        // 0x2c8984: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8980) {
            ctx->pc = 0x2C8960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8960;
        }
    }
    ctx->pc = 0x2C8988u;
    // 0x2c8988: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2c8988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c898c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C898Cu;
    {
        const bool branch_taken_0x2c898c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c898c) {
            ctx->pc = 0x2C899Cu;
            goto label_2c899c;
        }
    }
    ctx->pc = 0x2C8994u;
    // 0x2c8994: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8994u;
    {
        const bool branch_taken_0x2c8994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8994u;
        // 0x2c8998: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8994) {
            ctx->pc = 0x2C89A4u;
            goto label_2c89a4;
        }
    }
    ctx->pc = 0x2C899Cu;
label_2c899c:
    // 0x2c899c: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C899Cu;
    SET_GPR_U32(ctx, 31, 0x2C89A4u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C899Cu, 0x2C89A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89A4u;
label_2c89a4:
    // 0x2c89a4: 0x1140003d  beqz        $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x2C89A4u;
    {
        const bool branch_taken_0x2c89a4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c89a4) {
            ctx->pc = 0x2C8A9Cu;
            goto label_2c8a9c;
        }
    }
    ctx->pc = 0x2C89ACu;
    // 0x2c89ac: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x2c89acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x2c89b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c89b4: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c89b8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2c89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c89bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c89bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c89c0: 0x5583000b  bnel        $t4, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C89C0u;
    {
        const bool branch_taken_0x2c89c0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c89c0) {
            ctx->pc = 0x2C89C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C89C0u;
            // 0x2c89c4: 0x8d620010  lw          $v0, 0x10($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C89F0u;
            goto label_2c89f0;
        }
    }
    ctx->pc = 0x2C89C8u;
    // 0x2c89c8: 0x14c00015  bnez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C89C8u;
    {
        const bool branch_taken_0x2c89c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89C8u;
        // 0x2c89cc: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89c8) {
            ctx->pc = 0x2C8A20u;
            goto label_2c8a20;
        }
    }
    ctx->pc = 0x2C89D0u;
    // 0x2c89d0: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x2c89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x2c89d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c89d8: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x2c89d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2c89dc: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2c89dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c89e0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2c89e0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2c89e4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2c89e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c89e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C89E8u;
    {
        const bool branch_taken_0x2c89e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C89ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89E8u;
        // 0x2c89ec: 0xad640004  sw          $a0, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89e8) {
            ctx->pc = 0x2C8A18u;
            goto label_2c8a18;
        }
    }
    ctx->pc = 0x2C89F0u;
label_2c89f0:
    // 0x2c89f0: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x2c89f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c89f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C89F4u;
    {
        const bool branch_taken_0x2c89f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c89f4) {
            ctx->pc = 0x2C8A10u;
            goto label_2c8a10;
        }
    }
    ctx->pc = 0x2C89FCu;
    // 0x2c89fc: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x2c89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2c8a00: 0x544c0005  bnel        $v0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8A00u;
    {
        const bool branch_taken_0x2c8a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x2c8a00) {
            ctx->pc = 0x2C8A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A00u;
            // 0x2c8a04: 0xad460014  sw          $a2, 0x14($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8A18u;
            goto label_2c8a18;
        }
    }
    ctx->pc = 0x2C8A08u;
    // 0x2c8a08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8A08u;
    {
        const bool branch_taken_0x2c8a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A08u;
        // 0x2c8a0c: 0xad460010  sw          $a2, 0x10($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a08) {
            ctx->pc = 0x2C8A18u;
            goto label_2c8a18;
        }
    }
    ctx->pc = 0x2C8A10u;
label_2c8a10:
    // 0x2c8a10: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8A10u;
    SET_GPR_U32(ctx, 31, 0x2C8A18u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8A10u, 0x2C8A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A18u;
label_2c8a18:
    // 0x2c8a18: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C8A18u;
    {
        const bool branch_taken_0x2c8a18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a18) {
            ctx->pc = 0x2C8A9Cu;
            goto label_2c8a9c;
        }
    }
    ctx->pc = 0x2C8A20u;
label_2c8a20:
    // 0x2c8a20: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c8a24: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2c8a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8a28: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C8A28u;
    {
        const bool branch_taken_0x2c8a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a28) {
            ctx->pc = 0x2C8A94u;
            goto label_2c8a94;
        }
    }
    ctx->pc = 0x2C8A30u;
    // 0x2c8a30: 0xacca0018  sw          $t2, 0x18($a2)
    ctx->pc = 0x2c8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 10));
    // 0x2c8a34: 0x8d830010  lw          $v1, 0x10($t4)
    ctx->pc = 0x2c8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x2c8a38: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C8A38u;
    {
        const bool branch_taken_0x2c8a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a38) {
            ctx->pc = 0x2C8A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A38u;
            // 0x2c8a3c: 0x8d830014  lw          $v1, 0x14($t4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8A68u;
            goto label_2c8a68;
        }
    }
    ctx->pc = 0x2C8A40u;
    // 0x2c8a40: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c8a44: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c8a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8a48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8A48u;
    {
        const bool branch_taken_0x2c8a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a48) {
            ctx->pc = 0x2C8A5Cu;
            goto label_2c8a5c;
        }
    }
    ctx->pc = 0x2C8A50u;
    // 0x2c8a50: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x2c8a50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x2c8a54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8A54u;
    {
        const bool branch_taken_0x2c8a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A54u;
        // 0x2c8a58: 0xac660018  sw          $a2, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a54) {
            ctx->pc = 0x2C8A64u;
            goto label_2c8a64;
        }
    }
    ctx->pc = 0x2C8A5Cu;
label_2c8a5c:
    // 0x2c8a5c: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C8A64u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8A5Cu, 0x2C8A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A64u;
label_2c8a64:
    // 0x2c8a64: 0x8d830014  lw          $v1, 0x14($t4)
    ctx->pc = 0x2c8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
label_2c8a68:
    // 0x2c8a68: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8A68u;
    {
        const bool branch_taken_0x2c8a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a68) {
            ctx->pc = 0x2C8A9Cu;
            goto label_2c8a9c;
        }
    }
    ctx->pc = 0x2C8A70u;
    // 0x2c8a70: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c8a74: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c8a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8a78: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8A78u;
    {
        const bool branch_taken_0x2c8a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a78) {
            ctx->pc = 0x2C8A8Cu;
            goto label_2c8a8c;
        }
    }
    ctx->pc = 0x2C8A80u;
    // 0x2c8a80: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x2c8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x2c8a84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8A84u;
    {
        const bool branch_taken_0x2c8a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A84u;
        // 0x2c8a88: 0xac660018  sw          $a2, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a84) {
            ctx->pc = 0x2C8A9Cu;
            goto label_2c8a9c;
        }
    }
    ctx->pc = 0x2C8A8Cu;
label_2c8a8c:
    // 0x2c8a8c: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8A8Cu;
    SET_GPR_U32(ctx, 31, 0x2C8A94u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8A8Cu, 0x2C8A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A94u;
label_2c8a94:
    // 0x2c8a94: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8A94u;
    SET_GPR_U32(ctx, 31, 0x2C8A9Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8A94u, 0x2C8A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A9Cu;
label_2c8a9c:
    // 0x2c8a9c: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8A9Cu;
    {
        const bool branch_taken_0x2c8a9c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A9Cu;
        // 0x2c8aa0: 0x1251021  addu        $v0, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a9c) {
            ctx->pc = 0x2C8AC0u;
            goto label_2c8ac0;
        }
    }
    ctx->pc = 0x2C8AA4u;
    // 0x2c8aa4: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x2c8aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2c8aa8: 0xad840004  sw          $a0, 0x4($t4)
    ctx->pc = 0x2c8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x2c8aac: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2c8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2c8ab0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c8ab4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2c8ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2c8ab8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2C8AB8u;
    {
        const bool branch_taken_0x2c8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AB8u;
        // 0x2c8abc: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ab8) {
            ctx->pc = 0x2C8CCCu;
            goto label_2c8ccc;
        }
    }
    ctx->pc = 0x2C8AC0u;
label_2c8ac0:
    // 0x2c8ac0: 0x34a20003  ori         $v0, $a1, 0x3
    ctx->pc = 0x2c8ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x2c8ac4: 0x35230001  ori         $v1, $t1, 0x1
    ctx->pc = 0x2c8ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x2c8ac8: 0xad820004  sw          $v0, 0x4($t4)
    ctx->pc = 0x2c8ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 2));
    // 0x2c8acc: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x2c8accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2c8ad0: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2c8ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2c8ad4: 0x928c2  srl         $a1, $t1, 3
    ctx->pc = 0x2c8ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
    // 0x2c8ad8: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x2c8ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2c8adc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C8ADCu;
    {
        const bool branch_taken_0x2c8adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8ADCu;
        // 0x2c8ae0: 0xac890000  sw          $t1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8adc) {
            ctx->pc = 0x2C8B4Cu;
            goto label_2c8b4c;
        }
    }
    ctx->pc = 0x2C8AE4u;
    // 0x2c8ae4: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x2c8ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2c8ae8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2c8ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c8aec: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2c8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2c8af0: 0xa71806  srlv        $v1, $a3, $a1
    ctx->pc = 0x2c8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c8af4: 0x1623021  addu        $a2, $t3, $v0
    ctx->pc = 0x2c8af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c8af8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c8af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c8afc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c8afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c8b00: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8B00u;
    {
        const bool branch_taken_0x2c8b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B00u;
        // 0x2c8b04: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b00) {
            ctx->pc = 0x2C8B1Cu;
            goto label_2c8b1c;
        }
    }
    ctx->pc = 0x2C8B08u;
    // 0x2c8b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8b0c: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x2c8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c8b10: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2c8b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2c8b14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8B14u;
    {
        const bool branch_taken_0x2c8b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B14u;
        // 0x2c8b18: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b14) {
            ctx->pc = 0x2C8B38u;
            goto label_2c8b38;
        }
    }
    ctx->pc = 0x2C8B1Cu;
label_2c8b1c:
    // 0x2c8b1c: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c8b20: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2c8b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c8b24: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c8b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8b28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8B28u;
    {
        const bool branch_taken_0x2c8b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B28u;
        // 0x2c8b2c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b28) {
            ctx->pc = 0x2C8B38u;
            goto label_2c8b38;
        }
    }
    ctx->pc = 0x2C8B30u;
    // 0x2c8b30: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8B30u;
    SET_GPR_U32(ctx, 31, 0x2C8B38u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8B30u, 0x2C8B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B38u;
label_2c8b38:
    // 0x2c8b38: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x2c8b38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x2c8b3c: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x2c8b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x2c8b40: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x2c8b40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x2c8b44: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2C8B44u;
    {
        const bool branch_taken_0x2c8b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B44u;
        // 0x2c8b48: 0xad040008  sw          $a0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b44) {
            ctx->pc = 0x2C8CCCu;
            goto label_2c8ccc;
        }
    }
    ctx->pc = 0x2C8B4Cu;
label_2c8b4c:
    // 0x2c8b4c: 0x91a02  srl         $v1, $t1, 8
    ctx->pc = 0x2c8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x2c8b50: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8B50u;
    {
        const bool branch_taken_0x2c8b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B50u;
        // 0x2c8b54: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b50) {
            ctx->pc = 0x2C8B60u;
            goto label_2c8b60;
        }
    }
    ctx->pc = 0x2C8B58u;
    // 0x2c8b58: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C8B58u;
    {
        const bool branch_taken_0x2c8b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B58u;
        // 0x2c8b5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b58) {
            ctx->pc = 0x2C8BC8u;
            goto label_2c8bc8;
        }
    }
    ctx->pc = 0x2C8B60u;
label_2c8b60:
    // 0x2c8b60: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c8b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c8b64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8B64u;
    {
        const bool branch_taken_0x2c8b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B64u;
        // 0x2c8b68: 0x2464ff00  addiu       $a0, $v1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b64) {
            ctx->pc = 0x2C8B74u;
            goto label_2c8b74;
        }
    }
    ctx->pc = 0x2C8B6Cu;
    // 0x2c8b6c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C8B6Cu;
    {
        const bool branch_taken_0x2c8b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B6Cu;
        // 0x2c8b70: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b6c) {
            ctx->pc = 0x2C8BC8u;
            goto label_2c8bc8;
        }
    }
    ctx->pc = 0x2C8B74u;
label_2c8b74:
    // 0x2c8b74: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2c8b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2c8b78: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x2c8b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2c8b7c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x2c8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8b80: 0x2462f000  addiu       $v0, $v1, -0x1000
    ctx->pc = 0x2c8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x2c8b84: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c8b88: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x2c8b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2c8b8c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x2c8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c8b90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c8b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c8b94: 0x2462c000  addiu       $v0, $v1, -0x4000
    ctx->pc = 0x2c8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950912));
    // 0x2c8b98: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c8b9c: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x2c8b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c8ba0: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x2c8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c8ba4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c8ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c8ba8: 0x31bc2  srl         $v1, $v1, 15
    ctx->pc = 0x2c8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2c8bac: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x2c8bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x2c8bb0: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x2c8bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8bb4: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x2c8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x2c8bb8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2c8bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c8bbc: 0x491006  srlv        $v0, $t1, $v0
    ctx->pc = 0x2c8bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c8bc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c8bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c8bc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c8bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c8bc8:
    // 0x2c8bc8: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x2c8bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
    // 0x2c8bcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8bd0: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x2c8bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x2c8bd4: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c8bd8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x2c8bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x2c8bdc: 0x1622821  addu        $a1, $t3, $v0
    ctx->pc = 0x2c8bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c8be0: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x2c8be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2c8be4: 0x641006  srlv        $v0, $a0, $v1
    ctx->pc = 0x2c8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c8be8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c8be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c8bec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c8becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c8bf0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C8BF0u;
    {
        const bool branch_taken_0x2c8bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BF0u;
        // 0x2c8bf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bf0) {
            ctx->pc = 0x2C8C34u;
            goto label_2c8c34;
        }
    }
    ctx->pc = 0x2C8BF8u;
    // 0x2c8bf8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x2c8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c8bfc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2c8bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2c8c00: 0xad620004  sw          $v0, 0x4($t3)
    ctx->pc = 0x2c8c00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
    // 0x2c8c04: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x2c8c04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x2c8c08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8C08u;
    {
        const bool branch_taken_0x2c8c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C08u;
        // 0x2c8c0c: 0xad050018  sw          $a1, 0x18($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c08) {
            ctx->pc = 0x2C8C28u;
            goto label_2c8c28;
        }
    }
    ctx->pc = 0x2C8C10u;
label_2c8c10:
    // 0x2c8c10: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x2c8c10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x2c8c14: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x2c8c14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x2c8c18: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x2c8c18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x2c8c1c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C8C1Cu;
    {
        const bool branch_taken_0x2c8c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C1Cu;
        // 0x2c8c20: 0xad000018  sw          $zero, 0x18($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c1c) {
            ctx->pc = 0x2C8CCCu;
            goto label_2c8ccc;
        }
    }
    ctx->pc = 0x2C8C24u;
label_2c8c24:
    // 0x2c8c24: 0xad060018  sw          $a2, 0x18($t0)
    ctx->pc = 0x2c8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 6));
label_2c8c28:
    // 0x2c8c28: 0xad080008  sw          $t0, 0x8($t0)
    ctx->pc = 0x2c8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 8));
    // 0x2c8c2c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C8C2Cu;
    {
        const bool branch_taken_0x2c8c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C2Cu;
        // 0x2c8c30: 0xad08000c  sw          $t0, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c2c) {
            ctx->pc = 0x2C8CCCu;
            goto label_2c8ccc;
        }
    }
    ctx->pc = 0x2C8C34u;
label_2c8c34:
    // 0x2c8c34: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2c8c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c8c38: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2c8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2c8c3c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8C3Cu;
    {
        const bool branch_taken_0x2c8c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C3Cu;
        // 0x2c8c40: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c3c) {
            ctx->pc = 0x2C8C54u;
            goto label_2c8c54;
        }
    }
    ctx->pc = 0x2C8C44u;
    // 0x2c8c44: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c8c48: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2c8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2c8c4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8c50: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x2c8c50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_2c8c54:
    // 0x2c8c54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C8C54u;
    {
        const bool branch_taken_0x2c8c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C54u;
        // 0x2c8c58: 0x8d670010  lw          $a3, 0x10($t3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c54) {
            ctx->pc = 0x2C8C80u;
            goto label_2c8c80;
        }
    }
    ctx->pc = 0x2C8C5Cu;
    // 0x2c8c5c: 0x0  nop
    ctx->pc = 0x2c8c5cu;
    // NOP
label_2c8c60:
    // 0x2c8c60: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x2c8c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c8c64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8C64u;
    {
        const bool branch_taken_0x2c8c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C64u;
        // 0x2c8c68: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c64) {
            ctx->pc = 0x2C8C78u;
            goto label_2c8c78;
        }
    }
    ctx->pc = 0x2C8C6Cu;
    // 0x2c8c6c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2c8c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c8c70: 0x5040ffe7  beql        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2C8C70u;
    {
        const bool branch_taken_0x2c8c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c70) {
            ctx->pc = 0x2C8C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C70u;
            // 0x2c8c74: 0xac68000c  sw          $t0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8c10;
        }
    }
    ctx->pc = 0x2C8C78u;
label_2c8c78:
    // 0x2c8c78: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8C78u;
    SET_GPR_U32(ctx, 31, 0x2C8C80u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8C78u, 0x2C8C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C80u;
label_2c8c80:
    // 0x2c8c80: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2c8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c8c84: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c8c88: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2c8c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2c8c8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c8c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c8c90: 0x1069fff3  beq         $v1, $t1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C8C90u;
    {
        const bool branch_taken_0x2c8c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C90u;
        // 0x2c8c94: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c90) {
            ctx->pc = 0x2C8C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8c60;
        }
    }
    ctx->pc = 0x2C8C98u;
    // 0x2c8c98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8c9c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2c8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c8ca0: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2c8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c8ca4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8ca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8CA8u;
    {
        const bool branch_taken_0x2c8ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CA8u;
        // 0x2c8cac: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ca8) {
            ctx->pc = 0x2C8CB8u;
            goto label_2c8cb8;
        }
    }
    ctx->pc = 0x2C8CB0u;
    // 0x2c8cb0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x2C8CB0u;
    {
        const bool branch_taken_0x2c8cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CB0u;
        // 0x2c8cb4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cb0) {
            ctx->pc = 0x2C8C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8c80;
        }
    }
    ctx->pc = 0x2C8CB8u;
label_2c8cb8:
    // 0x2c8cb8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2c8cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c8cbc: 0x5040ffd9  beql        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2C8CBCu;
    {
        const bool branch_taken_0x2c8cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8cbc) {
            ctx->pc = 0x2C8CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8CBCu;
            // 0x2c8cc0: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8c24;
        }
    }
    ctx->pc = 0x2C8CC4u;
    // 0x2c8cc4: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8CC4u;
    SET_GPR_U32(ctx, 31, 0x2C8CCCu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8CC4u, 0x2C8CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CCCu;
label_2c8ccc:
    // 0x2c8ccc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8CCCu;
    {
        const bool branch_taken_0x2c8ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CCCu;
        // 0x2c8cd0: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ccc) {
            ctx->pc = 0x2C8CDCu;
            goto label_2c8cdc;
        }
    }
    ctx->pc = 0x2C8CD4u;
label_2c8cd4:
    // 0x2c8cd4: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8CD4u;
    SET_GPR_U32(ctx, 31, 0x2C8CDCu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8CD4u, 0x2C8CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CDCu;
label_2c8cdc:
    // 0x2c8cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c8cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CE0u;
        // 0x2c8ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8CE8u;
}
