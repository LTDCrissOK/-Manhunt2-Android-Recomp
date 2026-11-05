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

// Function: sub_003B00F8
// Address: 0x3b00f8 - 0x3b0318
void sub_003B00F8_0x3b00f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B00F8_0x3b00f8");
#endif

    switch (ctx->pc) {
        case 0x3b0140u: goto label_3b0140;
        default: break;
    }

    ctx->pc = 0x3b00f8u;

    // 0x3b00f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b00f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b00fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b00fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b0100: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b0100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0104: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b0104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3b0108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b0108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b010c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3b010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3b0110: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b0110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0114: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3b0114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3b0118: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x3b0118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b011c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3b011cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3b0120: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3b0120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0124: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3b0124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3b0128: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3b0128u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b012c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b0130: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b0130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0134: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3b0134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3b0138: 0xc0ebf3a  jal         func_3AFCE8
    ctx->pc = 0x3B0138u;
    SET_GPR_U32(ctx, 31, 0x3B0140u);
    ctx->pc = 0x3B013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0138u;
    // 0x3b013c: 0x27a70001  addiu       $a3, $sp, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE8u, 0x3B0138u, 0x3B0140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0140u;
label_3b0140:
    // 0x3b0140: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x3B0140u;
    {
        const bool branch_taken_0x3b0140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0140) {
            ctx->pc = 0x3B0144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0140u;
            // 0x3b0144: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B02F4u;
            goto label_3b02f4;
        }
    }
    ctx->pc = 0x3B0148u;
    // 0x3b0148: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x3b0148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b014c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x3b014cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3b0150: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x3b0150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3b0154: 0x38670004  xori        $a3, $v1, 0x4
    ctx->pc = 0x3b0154u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x3b0158: 0x87300a  movz        $a2, $a0, $a3
    ctx->pc = 0x3b0158u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x3b015c: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x3b015cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3b0160: 0x54600063  bnel        $v1, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x3B0160u;
    {
        const bool branch_taken_0x3b0160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0160) {
            ctx->pc = 0x3B0164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0160u;
            // 0x3b0164: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B02F0u;
            goto label_3b02f0;
        }
    }
    ctx->pc = 0x3B0168u;
    // 0x3b0168: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x3b0168u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b016c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3b016cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3b0170: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x3b0170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b0174: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3b0174u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3b0178: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b0178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b017c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3b017cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3b0180: 0x1465002b  bne         $v1, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3B0180u;
    {
        const bool branch_taken_0x3b0180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3B0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0180u;
        // 0x3b0184: 0x240aff00  addiu       $t2, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0180) {
            ctx->pc = 0x3B0230u;
            goto label_3b0230;
        }
    }
    ctx->pc = 0x3B0188u;
    // 0x3b0188: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3b0188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3b018c: 0x24c5fffc  addiu       $a1, $a2, -0x4
    ctx->pc = 0x3b018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x3b0190: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x3b0190u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3b0194: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b0194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b0198: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x3b0198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x3b019c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b019cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b01a0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3b01a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3b01a4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3b01a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3b01a8: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x3b01a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3b01ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B01ACu;
    {
        const bool branch_taken_0x3b01ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B01ACu;
        // 0x3b01b0: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b01ac) {
            ctx->pc = 0x3B01C0u;
            goto label_3b01c0;
        }
    }
    ctx->pc = 0x3B01B4u;
    // 0x3b01b4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3B01B4u;
    {
        const bool branch_taken_0x3b01b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B01B4u;
        // 0x3b01b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b01b4) {
            ctx->pc = 0x3B02F0u;
            goto label_3b02f0;
        }
    }
    ctx->pc = 0x3B01BCu;
    // 0x3b01bc: 0x0  nop
    ctx->pc = 0x3b01bcu;
    // NOP
label_3b01c0:
    // 0x3b01c0: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x3b01c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3b01c4: 0x67480a  movz        $t1, $v1, $a3
    ctx->pc = 0x3b01c4u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x3b01c8: 0x3c084149  lui         $t0, 0x4149
    ctx->pc = 0x3b01c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16713 << 16));
    // 0x3b01cc: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x3b01ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x3b01d0: 0x35084e46  ori         $t0, $t0, 0x4E46
    ctx->pc = 0x3b01d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20038);
    // 0x3b01d4: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x3b01d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x3b01d8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x3b01d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x3b01dc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3b01dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b01e0: 0x25260014  addiu       $a2, $t1, 0x14
    ctx->pc = 0x3b01e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x3b01e4: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3b01e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3b01e8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b01ec: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x3b01ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x3b01f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b01f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b01f4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3b01f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3b01f8: 0xc4480b  movn        $t1, $a2, $a0
    ctx->pc = 0x3b01f8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x3b01fc: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x3b01fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x3b0200: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x3b0200u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3b0204: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b0204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b0208: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x3b0208u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3b020c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3b020cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3b0210: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x3b0210u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3b0214: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3b0214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3b0218: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3b0218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b021c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3b021cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3b0220: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3b0220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3b0224: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b0224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b0228: 0x10680003  beq         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0228u;
    {
        const bool branch_taken_0x3b0228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x3B022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0228u;
        // 0x3b022c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0228) {
            ctx->pc = 0x3B0238u;
            goto label_3b0238;
        }
    }
    ctx->pc = 0x3B0230u;
label_3b0230:
    // 0x3b0230: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3B0230u;
    {
        const bool branch_taken_0x3b0230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0230u;
        // 0x3b0234: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0230) {
            ctx->pc = 0x3B02F0u;
            goto label_3b02f0;
        }
    }
    ctx->pc = 0x3B0238u;
label_3b0238:
    // 0x3b0238: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x3b0238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x3b023c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3b023cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3b0240: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3b0240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b0244: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x3b0244u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x3b0248: 0x2094021  addu        $t0, $s0, $t1
    ctx->pc = 0x3b0248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x3b024c: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x3b024cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x3b0250: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x3b0250u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x3b0254: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x3b0254u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3b0258: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x3b0258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x3b025c: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x3b025cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x3b0260: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x3b0260u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x3b0264: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3b0264u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3b0268: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3b0268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3b026c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3b026cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b0270: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b0270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b0274: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x3b0274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x3b0278: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3b0278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3b027c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3b027cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3b0280: 0x2093021  addu        $a2, $s0, $t1
    ctx->pc = 0x3b0280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x3b0284: 0x1303821  addu        $a3, $t1, $s0
    ctx->pc = 0x3b0284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x3b0288: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x3b0288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b028c: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x3b028cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b0290: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x3b0290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3b0294: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x3b0294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3b0298: 0xb2830007  sdl         $v1, 0x7($s4)
    ctx->pc = 0x3b0298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b029c: 0xb6830000  sdr         $v1, 0x0($s4)
    ctx->pc = 0x3b029cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b02a0: 0xb284000f  sdl         $a0, 0xF($s4)
    ctx->pc = 0x3b02a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b02a4: 0xb6840008  sdr         $a0, 0x8($s4)
    ctx->pc = 0x3b02a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b02a8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3b02a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b02ac: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3b02acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3b02b0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b02b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b02b4: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x3b02b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x3b02b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b02b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b02bc: 0xa6a40000  sh          $a0, 0x0($s5)
    ctx->pc = 0x3b02bcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b02c0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3b02c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b02c4: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3b02c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3b02c8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b02c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b02cc: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x3b02ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x3b02d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b02d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b02d4: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x3b02d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b02d8: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x3b02d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3b02dc: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x3b02dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3b02e0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b02e4: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x3b02e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x3b02e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b02e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b02ec: 0xa6640002  sh          $a0, 0x2($s3)
    ctx->pc = 0x3b02ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 4));
label_3b02f0:
    // 0x3b02f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b02f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b02f4:
    // 0x3b02f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3b02f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b02f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b02f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b02fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3b02fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b0300: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3b0300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0304: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3b0304u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3b0308: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b0308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b030c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B030Cu;
        // 0x3b0310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B030Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0314u;
    // 0x3b0314: 0x0  nop
    ctx->pc = 0x3b0314u;
    // NOP
    ctx->pc = 0x3b0318u;
}
