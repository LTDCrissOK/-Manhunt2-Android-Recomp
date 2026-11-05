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

// Function: sub_003B5240
// Address: 0x3b5240 - 0x3b5b30
void sub_003B5240_0x3b5240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5240_0x3b5240");
#endif

    switch (ctx->pc) {
        case 0x3b52b0u: goto label_3b52b0;
        case 0x3b5310u: goto label_3b5310;
        case 0x3b5420u: goto label_3b5420;
        case 0x3b54b0u: goto label_3b54b0;
        case 0x3b5580u: goto label_3b5580;
        case 0x3b57e8u: goto label_3b57e8;
        case 0x3b5870u: goto label_3b5870;
        case 0x3b5940u: goto label_3b5940;
        default: break;
    }

    ctx->pc = 0x3b5240u;

    // 0x3b5240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b5240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b5244: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x3b5244u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x3b5248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b5248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b524c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x3b524cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x3b5250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b5250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b5254: 0x88c03  sra         $s1, $t0, 16
    ctx->pc = 0x3b5254u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 8), 16));
    // 0x3b5258: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b5258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b525c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x3b525cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5260: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b5260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b5264: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b5264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5268: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3b5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3b526c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3b526cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5270: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3b5270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3b5274: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x3b5274u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x3b5278: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3b5278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3b527c: 0xbb403  sra         $s6, $t3, 16
    ctx->pc = 0x3b527cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 11), 16));
    // 0x3b5280: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x3b5280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x3b5284: 0x98403  sra         $s0, $t1, 16
    ctx->pc = 0x3b5284u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 9), 16));
    // 0x3b5288: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x3b5288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x3b528c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x3b528cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5290: 0x87b50050  lh          $s5, 0x50($sp)
    ctx->pc = 0x3b5290u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b5294: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b5294u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5298: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x3b5298u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3b529c: 0x1a600051  blez        $s3, . + 4 + (0x51 << 2)
    ctx->pc = 0x3B529Cu;
    {
        const bool branch_taken_0x3b529c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3B52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B529Cu;
        // 0x3b52a0: 0x868e0002  lh          $t6, 0x2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b529c) {
            ctx->pc = 0x3B53E4u;
            goto label_3b53e4;
        }
    }
    ctx->pc = 0x3B52A4u;
    // 0x3b52a4: 0x241eff00  addiu       $fp, $zero, -0x100
    ctx->pc = 0x3b52a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3b52a8: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x3b52a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x3b52ac: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x3b52acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_3b52b0:
    // 0x3b52b0: 0x91a40001  lbu         $a0, 0x1($t5)
    ctx->pc = 0x3b52b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x3b52b4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b52b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b52b8: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x3b52b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x3b52bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b52bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b52c0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3b52c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3b52c4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3b52c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3b52c8: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x3b52c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x3b52cc: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3B52CCu;
    {
        const bool branch_taken_0x3b52cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B52CCu;
        // 0x3b52d0: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b52cc) {
            ctx->pc = 0x3B53F0u;
            goto label_3b53f0;
        }
    }
    ctx->pc = 0x3B52D4u;
    // 0x3b52d4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x3b52d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b52d8: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x3b52d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x3b52dc: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x3b52dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3b52e0: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x3b52e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3b52e4: 0x563818  mult        $a3, $v0, $s6
    ctx->pc = 0x3b52e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b52e8: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x3b52e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x3b52ec: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x3b52ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x3b52f0: 0x24197fff  addiu       $t9, $zero, 0x7FFF
    ctx->pc = 0x3b52f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3b52f4: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x3b52f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b52f8: 0x26eb0618  addiu       $t3, $s7, 0x618
    ctx->pc = 0x3b52f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), 1560));
    // 0x3b52fc: 0xf51821  addu        $v1, $a3, $s5
    ctx->pc = 0x3b52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x3b5300: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x3b5300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3b5304: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x3b5304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x3b5308: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x3b5308u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b530c: 0x0  nop
    ctx->pc = 0x3b530cu;
    // NOP
label_3b5310:
    // 0x3b5310: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x3b5310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3b5314: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x3b5314u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3b5318: 0x20e1018  mult        $v0, $s0, $t6
    ctx->pc = 0x3b5318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b531c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x3b531cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5320: 0x72252018  mult1       $a0, $s1, $a1
    ctx->pc = 0x3b5320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b5324: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3b5324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3b5328: 0x32f03  sra         $a1, $v1, 28
    ctx->pc = 0x3b5328u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x3b532c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x3b532cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x3b5330: 0xaf2818  mult        $a1, $a1, $t7
    ctx->pc = 0x3b5330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b5334: 0x20ec018  mult        $t8, $s0, $t6
    ctx->pc = 0x3b5334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x3b5338: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b5338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b533c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x3b533cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3b5340: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x3b5340u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x3b5344: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b5344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b5348: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b5348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b534c: 0x4b6021  addu        $t4, $v0, $t3
    ctx->pc = 0x3b534cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3b5350: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x3b5350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3b5354: 0x28838000  slti        $v1, $a0, -0x8000
    ctx->pc = 0x3b5354u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b5358: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x3b5358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b535c: 0x324282a  slt         $a1, $t9, $a0
    ctx->pc = 0x3b535cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b5360: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5360u;
    {
        const bool branch_taken_0x3b5360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5360u;
        // 0x3b5364: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5360) {
            ctx->pc = 0x3B5374u;
            goto label_3b5374;
        }
    }
    ctx->pc = 0x3B5368u;
    // 0x3b5368: 0x325200b  movn        $a0, $t9, $a1
    ctx->pc = 0x3b5368u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 25));
    // 0x3b536c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b5370: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x3b5370u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3b5374:
    // 0x3b5374: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b5374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5378: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3b5378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3b537c: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x3b537cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b5380: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x3b5380u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3b5384: 0x6f2018  mult        $a0, $v1, $t7
    ctx->pc = 0x3b5384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b5388: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x3b5388u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b538c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3b538cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3b5390: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3b5390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3b5394: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x3b5394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x3b5398: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3b5398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3b539c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x3b539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3b53a0: 0x28828000  slti        $v0, $a0, -0x8000
    ctx->pc = 0x3b53a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b53a4: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x3b53a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b53a8: 0x324282a  slt         $a1, $t9, $a0
    ctx->pc = 0x3b53a8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b53ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B53ACu;
    {
        const bool branch_taken_0x3b53ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B53ACu;
        // 0x3b53b0: 0x384c0000  xori        $t4, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b53ac) {
            ctx->pc = 0x3B53C0u;
            goto label_3b53c0;
        }
    }
    ctx->pc = 0x3B53B4u;
    // 0x3b53b4: 0x325200b  movn        $a0, $t9, $a1
    ctx->pc = 0x3b53b4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 25));
    // 0x3b53b8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b53bc: 0x4c200b  movn        $a0, $v0, $t4
    ctx->pc = 0x3b53bcu;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3b53c0:
    // 0x3b53c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b53c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b53c4: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3b53c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x3b53c8: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x3b53c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3b53cc: 0x4e1ffd0  bgez        $a3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3B53CCu;
    {
        const bool branch_taken_0x3b53cc = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x3B53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B53CCu;
        // 0x3b53d0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b53cc) {
            ctx->pc = 0x3B5310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5310;
        }
    }
    ctx->pc = 0x3B53D4u;
    // 0x3b53d4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3b53d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3b53d8: 0x153102a  slt         $v0, $t2, $s3
    ctx->pc = 0x3b53d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3b53dc: 0x5440ffb4  bnel        $v0, $zero, . + 4 + (-0x4C << 2)
    ctx->pc = 0x3B53DCu;
    {
        const bool branch_taken_0x3b53dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b53dc) {
            ctx->pc = 0x3B53E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B53DCu;
            // 0x3b53e0: 0x95a30000  lhu         $v1, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B52B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b52b0;
        }
    }
    ctx->pc = 0x3B53E4u;
label_3b53e4:
    // 0x3b53e4: 0xa68e0002  sh          $t6, 0x2($s4)
    ctx->pc = 0x3b53e4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 14));
    // 0x3b53e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b53e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b53ec: 0xa6850000  sh          $a1, 0x0($s4)
    ctx->pc = 0x3b53ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 5));
label_3b53f0:
    // 0x3b53f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b53f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b53f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b53f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b53f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b53f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b53fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b53fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b5400: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3b5400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5404: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3b5404u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b5408: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3b5408u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b540c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3b540cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3b5410: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x3b5410u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b5414: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5414u;
        // 0x3b5418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B541Cu;
    // 0x3b541c: 0x0  nop
    ctx->pc = 0x3b541cu;
    // NOP
label_3b5420:
    // 0x3b5420: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x3b5420u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3b5424: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b5424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3b5428: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b5428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3b542c: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x3b542cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x3b5430: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b5430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b5434: 0x87a30078  lh          $v1, 0x78($sp)
    ctx->pc = 0x3b5434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3b5438: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b5438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b543c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3b543cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5440: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x3b5440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b5444: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x3b5444u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x3b5448: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3b5448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3b544c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x3b544cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x3b5450: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3b5450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3b5454: 0xa9c03  sra         $s3, $t2, 16
    ctx->pc = 0x3b5454u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x3b5458: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x3b5458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x3b545c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3b545cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5460: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3b5460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x3b5464: 0xb9403  sra         $s2, $t3, 16
    ctx->pc = 0x3b5464u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x3b5468: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b5468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3b546c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x3b546cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5470: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3b5470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3b5474: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3b5478: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3b5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x3b547c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x3b547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x3b5480: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x3b5480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x3b5484: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x3b5484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x3b5488: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3b5488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3b548c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x3b548cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x3b5490: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3b5490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b5494: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3b5494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3b5498: 0x84f80000  lh          $t8, 0x0($a3)
    ctx->pc = 0x3b5498u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3b549c: 0x84ec0002  lh          $t4, 0x2($a3)
    ctx->pc = 0x3b549cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3b54a0: 0x84b90000  lh          $t9, 0x0($a1)
    ctx->pc = 0x3b54a0u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b54a4: 0x18c000bd  blez        $a2, . + 4 + (0xBD << 2)
    ctx->pc = 0x3B54A4u;
    {
        const bool branch_taken_0x3b54a4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3B54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54A4u;
        // 0x3b54a8: 0x84b10002  lh          $s1, 0x2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b54a4) {
            ctx->pc = 0x3B579Cu;
            goto label_3b579c;
        }
    }
    ctx->pc = 0x3B54ACu;
    // 0x3b54ac: 0x0  nop
    ctx->pc = 0x3b54acu;
    // NOP
label_3b54b0:
    // 0x3b54b0: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x3b54b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3b54b4: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x3b54b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3b54b8: 0x91e40001  lbu         $a0, 0x1($t7)
    ctx->pc = 0x3b54b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x3b54bc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b54c0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3b54c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3b54c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b54c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b54c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3b54c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3b54cc: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x3b54ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3b54d0: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x3b54d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3b54d4: 0x146000b8  bnez        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x3B54D4u;
    {
        const bool branch_taken_0x3b54d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B54D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54D4u;
        // 0x3b54d8: 0x171040  sll         $v0, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b54d4) {
            ctx->pc = 0x3B57B8u;
            goto label_3b57b8;
        }
    }
    ctx->pc = 0x3B54DCu;
    // 0x3b54dc: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x3b54dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b54e0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3b54e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b54e4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3b54e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b54e8: 0xc00013  mtlo        $a2
    ctx->pc = 0x3b54e8u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x3b54ec: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x3b54ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3b54f0: 0x70662000  madd        $a0, $v1, $a2
    ctx->pc = 0x3b54f0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b54f4: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x3b54f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x3b54f8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3b54f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3b54fc: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x3b54fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3b5500: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x3b5500u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b5504: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x3b5504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b5508: 0x30867fff  andi        $a2, $a0, 0x7FFF
    ctx->pc = 0x3b5508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x3b550c: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x3b550cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b5510: 0x95e30012  lhu         $v1, 0x12($t7)
    ctx->pc = 0x3b5510u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x3b5514: 0x91e40013  lbu         $a0, 0x13($t7)
    ctx->pc = 0x3b5514u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x3b5518: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b5518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b551c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3b551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3b5520: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b5520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b5524: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3b5524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3b5528: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x3b5528u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3b552c: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x3b552cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3b5530: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3B5530u;
    {
        const bool branch_taken_0x3b5530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5530u;
        // 0x3b5534: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5530) {
            ctx->pc = 0x3B57B8u;
            goto label_3b57b8;
        }
    }
    ctx->pc = 0x3B5538u;
    // 0x3b5538: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b5538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b553c: 0x249e0618  addiu       $fp, $a0, 0x618
    ctx->pc = 0x3b553cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 1560));
    // 0x3b5540: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x3b5540u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x3b5544: 0x600013  mtlo        $v1
    ctx->pc = 0x3b5544u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x3b5548: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3b5548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3b554c: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x3b554cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3b5550: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x3b5550u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3b5554: 0x70661000  madd        $v0, $v1, $a2
    ctx->pc = 0x3b5554u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b5558: 0xa61826  xor         $v1, $a1, $a2
    ctx->pc = 0x3b5558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x3b555c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x3b555cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b5560: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3b5560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3b5564: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x3b5564u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b5568: 0x240d7fff  addiu       $t5, $zero, 0x7FFF
    ctx->pc = 0x3b5568u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3b556c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x3b556cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3b5570: 0x2416001e  addiu       $s6, $zero, 0x1E
    ctx->pc = 0x3b5570u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3b5574: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x3b5574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x3b5578: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x3b5578u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b557c: 0x0  nop
    ctx->pc = 0x3b557cu;
    // NOP
label_3b5580:
    // 0x3b5580: 0x91e20000  lbu         $v0, 0x0($t7)
    ctx->pc = 0x3b5580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3b5584: 0x24c3018  mult        $a2, $s2, $t4
    ctx->pc = 0x3b5584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b5588: 0x72781818  mult1       $v1, $s3, $t8
    ctx->pc = 0x3b5588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b558c: 0x91e40012  lbu         $a0, 0x12($t7)
    ctx->pc = 0x3b558cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x3b5590: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3b5590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b5594: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x3b5594u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x3b5598: 0x22f03  sra         $a1, $v0, 28
    ctx->pc = 0x3b5598u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 28));
    // 0x3b559c: 0x27603  sra         $t6, $v0, 24
    ctx->pc = 0x3b559cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3b55a0: 0xb52818  mult        $a1, $a1, $s5
    ctx->pc = 0x3b55a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b55a4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3b55a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3b55a8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3b55a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3b55ac: 0x46703  sra         $t4, $a0, 28
    ctx->pc = 0x3b55acu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 28));
    // 0x3b55b0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x3b55b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x3b55b4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x3b55b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b55b8: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x3b55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3b55bc: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x3b55bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b55c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B55C0u;
    {
        const bool branch_taken_0x3b55c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B55C0u;
        // 0x3b55c4: 0x43e03  sra         $a3, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b55c0) {
            ctx->pc = 0x3B55E0u;
            goto label_3b55e0;
        }
    }
    ctx->pc = 0x3B55C8u;
    // 0x3b55c8: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x3b55c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b55cc: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x3b55ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3b55d0: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x3b55d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x3b55d4: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x3b55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b55d8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3b55d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3b55dc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x3b55dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_3b55e0:
    // 0x3b55e0: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x3b55e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b55e4: 0x72791818  mult1       $v1, $s3, $t9
    ctx->pc = 0x3b55e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b55e8: 0x1942018  mult        $a0, $t4, $s4
    ctx->pc = 0x3b55e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b55ec: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x3b55ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55f0: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x3b55f0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b55f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b55f8: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x3b55f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x3b55fc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x3b55fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b5600: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x3b5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3b5604: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x3b5604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b5608: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B5608u;
    {
        const bool branch_taken_0x3b5608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5608u;
        // 0x3b560c: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5608) {
            ctx->pc = 0x3B5628u;
            goto label_3b5628;
        }
    }
    ctx->pc = 0x3B5610u;
    // 0x3b5610: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x3b5610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b5614: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x3b5614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3b5618: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x3b5618u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x3b561c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x3b561cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b5620: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3b5620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3b5624: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x3b5624u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_3b5628:
    // 0x3b5628: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x3b5628u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b562c: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x3b562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x3b5630: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B5630u;
    {
        const bool branch_taken_0x3b5630 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5630) {
            ctx->pc = 0x3B5634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5630u;
            // 0x3b5634: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5638u;
            goto label_3b5638;
        }
    }
    ctx->pc = 0x3B5638u;
label_3b5638:
    // 0x3b5638: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3b5638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3b563c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3b563cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b5640: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x3b5640u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b5644: 0x1012  mflo        $v0
    ctx->pc = 0x3b5644u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b5648: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3b5648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b564c: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x3b564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3b5650: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x3b5650u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b5654: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B5654u;
    {
        const bool branch_taken_0x3b5654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5654u;
        // 0x3b5658: 0x31c2000f  andi        $v0, $t6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5654) {
            ctx->pc = 0x3B5678u;
            goto label_3b5678;
        }
    }
    ctx->pc = 0x3B565Cu;
    // 0x3b565c: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x3b565cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b5660: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x3b5660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3b5664: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x3b5664u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x3b5668: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x3b5668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b566c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3b566cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3b5670: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x3b5670u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x3b5674: 0x31c2000f  andi        $v0, $t6, 0xF
    ctx->pc = 0x3b5674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_3b5678:
    // 0x3b5678: 0x24c2818  mult        $a1, $s2, $t4
    ctx->pc = 0x3b5678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b567c: 0x72782018  mult1       $a0, $s3, $t8
    ctx->pc = 0x3b567cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b5680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b5680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b5684: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x3b5684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x3b5688: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x3b5688u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b568c: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x3b568cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b5690: 0x30e3000f  andi        $v1, $a3, 0xF
    ctx->pc = 0x3b5690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x3b5694: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x3b5694u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b5698: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x3b5698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x3b569c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b569cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b56a0: 0x1d52818  mult        $a1, $t6, $s5
    ctx->pc = 0x3b56a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b56a4: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x3b56a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x3b56a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b56ac: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x3b56acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x3b56b0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x3b56b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3b56b4: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x3b56b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b56b8: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x3b56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3b56bc: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x3b56bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b56c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B56C0u;
    {
        const bool branch_taken_0x3b56c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56C0u;
        // 0x3b56c4: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b56c0) {
            ctx->pc = 0x3B56E0u;
            goto label_3b56e0;
        }
    }
    ctx->pc = 0x3B56C8u;
    // 0x3b56c8: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x3b56c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b56cc: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x3b56ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3b56d0: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x3b56d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x3b56d4: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x3b56d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b56d8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3b56d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3b56dc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x3b56dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_3b56e0:
    // 0x3b56e0: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x3b56e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b56e4: 0x72791818  mult1       $v1, $s3, $t9
    ctx->pc = 0x3b56e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b56e8: 0xf42018  mult        $a0, $a3, $s4
    ctx->pc = 0x3b56e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b56ec: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x3b56ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b56f0: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x3b56f0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b56f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b56f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b56f8: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x3b56f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x3b56fc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x3b56fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b5700: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x3b5700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3b5704: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x3b5704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b5708: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B5708u;
    {
        const bool branch_taken_0x3b5708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5708u;
        // 0x3b570c: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5708) {
            ctx->pc = 0x3B5728u;
            goto label_3b5728;
        }
    }
    ctx->pc = 0x3B5710u;
    // 0x3b5710: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x3b5710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b5714: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x3b5714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3b5718: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x3b5718u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x3b571c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x3b571cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b5720: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3b5720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3b5724: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x3b5724u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_3b5728:
    // 0x3b5728: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x3b5728u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b572c: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x3b572cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x3b5730: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B5730u;
    {
        const bool branch_taken_0x3b5730 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5730) {
            ctx->pc = 0x3B5734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5730u;
            // 0x3b5734: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B5738u;
            goto label_3b5738;
        }
    }
    ctx->pc = 0x3B5738u;
label_3b5738:
    // 0x3b5738: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3b5738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3b573c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3b573cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b5740: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x3b5740u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b5744: 0x1012  mflo        $v0
    ctx->pc = 0x3b5744u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b5748: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3b5748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b574c: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x3b574cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3b5750: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x3b5750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b5754: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B5754u;
    {
        const bool branch_taken_0x3b5754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5754u;
        // 0x3b5758: 0x26d6fffe  addiu       $s6, $s6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5754) {
            ctx->pc = 0x3B5774u;
            goto label_3b5774;
        }
    }
    ctx->pc = 0x3B575Cu;
    // 0x3b575c: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x3b575cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b5760: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x3b5760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3b5764: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x3b5764u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x3b5768: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x3b5768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b576c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3b576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3b5770: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x3b5770u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_3b5774:
    // 0x3b5774: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x3b5774u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b5778: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x3b5778u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b577c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x3b577cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x3b5780: 0x6c1ff7f  bgez        $s6, . + 4 + (-0x81 << 2)
    ctx->pc = 0x3B5780u;
    {
        const bool branch_taken_0x3b5780 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x3B5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5780u;
        // 0x3b5784: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5780) {
            ctx->pc = 0x3B5580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5580;
        }
    }
    ctx->pc = 0x3B5788u;
    // 0x3b5788: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3b5788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3b578c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3b578cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x3b5790: 0x2e3102a  slt         $v0, $s7, $v1
    ctx->pc = 0x3b5790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5794: 0x1440ff46  bnez        $v0, . + 4 + (-0xBA << 2)
    ctx->pc = 0x3B5794u;
    {
        const bool branch_taken_0x3b5794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5794u;
        // 0x3b5798: 0x25ef0012  addiu       $t7, $t7, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5794) {
            ctx->pc = 0x3B54B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b54b0;
        }
    }
    ctx->pc = 0x3B579Cu;
label_3b579c:
    // 0x3b579c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3b579cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b57a0: 0xa4ac0002  sh          $t4, 0x2($a1)
    ctx->pc = 0x3b57a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x3b57a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3b57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b57a8: 0xa4b80000  sh          $t8, 0x0($a1)
    ctx->pc = 0x3b57a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x3b57ac: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x3b57acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b57b0: 0xa4d10002  sh          $s1, 0x2($a2)
    ctx->pc = 0x3b57b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x3b57b4: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x3b57b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
label_3b57b8:
    // 0x3b57b8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b57b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b57bc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3b57bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b57c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3b57c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b57c4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3b57c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3b57c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b57c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b57cc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3b57ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3b57d0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x3b57d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b57d4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x3b57d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b57d8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x3b57d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b57dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B57DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B57DCu;
        // 0x3b57e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B57DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B57E4u;
    // 0x3b57e4: 0x0  nop
    ctx->pc = 0x3b57e4u;
    // NOP
label_3b57e8:
    // 0x3b57e8: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x3b57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3b57ec: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b57ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3b57f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3b57f4: 0x87a30078  lh          $v1, 0x78($sp)
    ctx->pc = 0x3b57f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3b57f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b57f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b57fc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3b57fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3b5800: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x3b5800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x3b5804: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x3b5804u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5808: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x3b5808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b580c: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x3b580cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x3b5810: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3b5810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3b5814: 0xa9c03  sra         $s3, $t2, 16
    ctx->pc = 0x3b5814u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x3b5818: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b5818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3b581c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x3b581cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x3b5820: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3b5820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3b5824: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x3b5824u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5828: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b5828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3b582c: 0xb9403  sra         $s2, $t3, 16
    ctx->pc = 0x3b582cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x3b5830: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3b5830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x3b5834: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x3b5834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x3b5838: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x3b5838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x3b583c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x3b583cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x3b5840: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3b5840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x3b5844: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x3b5844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x3b5848: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x3b5848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x3b584c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3b584cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3b5850: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3b5850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x3b5854: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x3b5854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x3b5858: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3b5858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b585c: 0x84ed0000  lh          $t5, 0x0($a3)
    ctx->pc = 0x3b585cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3b5860: 0x84ea0002  lh          $t2, 0x2($a3)
    ctx->pc = 0x3b5860u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3b5864: 0x852e0000  lh          $t6, 0x0($t1)
    ctx->pc = 0x3b5864u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3b5868: 0x1880009f  blez        $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x3B5868u;
    {
        const bool branch_taken_0x3b5868 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3B586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5868u;
        // 0x3b586c: 0x85300002  lh          $s0, 0x2($t1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5868) {
            ctx->pc = 0x3B5AE8u;
            goto label_3b5ae8;
        }
    }
    ctx->pc = 0x3B5870u;
label_3b5870:
    // 0x3b5870: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x3b5870u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3b5874: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x3b5874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3b5878: 0x91e40001  lbu         $a0, 0x1($t7)
    ctx->pc = 0x3b5878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x3b587c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b587cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b5880: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3b5880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3b5884: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3b5884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3b5888: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b5888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b588c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3b588cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3b5890: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3b5890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3b5894: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x3b5894u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3b5898: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x3b5898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3b589c: 0x14600099  bnez        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x3B589Cu;
    {
        const bool branch_taken_0x3b589c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B58A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B589Cu;
        // 0x3b58a0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b589c) {
            ctx->pc = 0x3B5B04u;
            goto label_3b5b04;
        }
    }
    ctx->pc = 0x3B58A4u;
    // 0x3b58a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x3b58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b58a8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3b58a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b58ac: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3b58acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b58b0: 0xc00013  mtlo        $a2
    ctx->pc = 0x3b58b0u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x3b58b4: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x3b58b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3b58b8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3b58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3b58bc: 0x70662000  madd        $a0, $v1, $a2
    ctx->pc = 0x3b58bcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b58c0: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x3b58c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x3b58c4: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3b58c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3b58c8: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x3b58c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3b58cc: 0x24770001  addiu       $s7, $v1, 0x1
    ctx->pc = 0x3b58ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b58d0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x3b58d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b58d4: 0x30867fff  andi        $a2, $a0, 0x7FFF
    ctx->pc = 0x3b58d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x3b58d8: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x3b58d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3b58dc: 0x95e30012  lhu         $v1, 0x12($t7)
    ctx->pc = 0x3b58dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x3b58e0: 0x91e40013  lbu         $a0, 0x13($t7)
    ctx->pc = 0x3b58e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x3b58e4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b58e8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3b58e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3b58ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b58ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b58f0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3b58f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3b58f4: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x3b58f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3b58f8: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x3b58f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3b58fc: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x3B58FCu;
    {
        const bool branch_taken_0x3b58fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58FCu;
        // 0x3b5900: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b58fc) {
            ctx->pc = 0x3B5B04u;
            goto label_3b5b04;
        }
    }
    ctx->pc = 0x3B5904u;
    // 0x3b5904: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x3b5904u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x3b5908: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x3b5908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b590c: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x3b590cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3b5910: 0x600013  mtlo        $v1
    ctx->pc = 0x3b5910u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x3b5914: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3b5914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3b5918: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x3b5918u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3b591c: 0x24187fff  addiu       $t8, $zero, 0x7FFF
    ctx->pc = 0x3b591cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3b5920: 0x70661000  madd        $v0, $v1, $a2
    ctx->pc = 0x3b5920u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b5924: 0xa61826  xor         $v1, $a1, $a2
    ctx->pc = 0x3b5924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x3b5928: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3b5928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3b592c: 0x241e001e  addiu       $fp, $zero, 0x1E
    ctx->pc = 0x3b592cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3b5930: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x3b5930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b5934: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x3b5934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x3b5938: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3b5938u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b593c: 0x0  nop
    ctx->pc = 0x3b593cu;
    // NOP
label_3b5940:
    // 0x3b5940: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x3b5940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3b5944: 0x24a1018  mult        $v0, $s2, $t2
    ctx->pc = 0x3b5944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b5948: 0x726d2018  mult1       $a0, $s3, $t5
    ctx->pc = 0x3b5948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b594c: 0x91e60012  lbu         $a2, 0x12($t7)
    ctx->pc = 0x3b594cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x3b5950: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3b5950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3b5954: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x3b5954u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5958: 0x32f03  sra         $a1, $v1, 28
    ctx->pc = 0x3b5958u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x3b595c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x3b595cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x3b5960: 0xb72818  mult        $a1, $a1, $s7
    ctx->pc = 0x3b5960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3b5964: 0x36603  sra         $t4, $v1, 24
    ctx->pc = 0x3b5964u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 24));
    // 0x3b5968: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b5968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b596c: 0x3182000f  andi        $v0, $t4, 0xF
    ctx->pc = 0x3b596cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x3b5970: 0x61f03  sra         $v1, $a2, 28
    ctx->pc = 0x3b5970u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 28));
    // 0x3b5974: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x3b5974u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x3b5978: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x3b5978u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x3b597c: 0x746018  mult        $t4, $v1, $s4
    ctx->pc = 0x3b597cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3b5980: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3b5980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3b5984: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3b5984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b5988: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b5988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b598c: 0x24630618  addiu       $v1, $v1, 0x618
    ctx->pc = 0x3b598cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1560));
    // 0x3b5990: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x3b5990u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b5994: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x3b5994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x3b5998: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x3b5998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b599c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x3b599cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b59a0: 0x24a8818  mult        $s1, $s2, $t2
    ctx->pc = 0x3b59a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x3b59a4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x3b59a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x3b59a8: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x3b59a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3b59ac: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x3b59acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x3b59b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B59B0u;
    {
        const bool branch_taken_0x3b59b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B59B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59B0u;
        // 0x3b59b4: 0x30c9000f  andi        $t1, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59b0) {
            ctx->pc = 0x3B59C4u;
            goto label_3b59c4;
        }
    }
    ctx->pc = 0x3B59B8u;
    // 0x3b59b8: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x3b59b8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x3b59bc: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b59c0: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x3b59c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_3b59c4:
    // 0x3b59c4: 0x2502018  mult        $a0, $s2, $s0
    ctx->pc = 0x3b59c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b59c8: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x3b59c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b59cc: 0x726e1018  mult1       $v0, $s3, $t6
    ctx->pc = 0x3b59ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b59d0: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x3b59d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b59d4: 0x26d1818  mult        $v1, $s3, $t5
    ctx->pc = 0x3b59d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b59d8: 0x2503818  mult        $a3, $s2, $s0
    ctx->pc = 0x3b59d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b59dc: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x3b59dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b59e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3b59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3b59e4: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x3b59e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x3b59e8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3b59e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3b59ec: 0x4c2821  addu        $a1, $v0, $t4
    ctx->pc = 0x3b59ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3b59f0: 0x33303  sra         $a2, $v1, 12
    ctx->pc = 0x3b59f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 12));
    // 0x3b59f4: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x3b59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x3b59f8: 0x28a28000  slti        $v0, $a1, -0x8000
    ctx->pc = 0x3b59f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b59fc: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x3b59fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b5a00: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x3b5a00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3b5a04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5A04u;
    {
        const bool branch_taken_0x3b5a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A04u;
        // 0x3b5a08: 0x384c0000  xori        $t4, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5a04) {
            ctx->pc = 0x3B5A18u;
            goto label_3b5a18;
        }
    }
    ctx->pc = 0x3B5A0Cu;
    // 0x3b5a0c: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x3b5a0cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x3b5a10: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b5a14: 0x4c280b  movn        $a1, $v0, $t4
    ctx->pc = 0x3b5a14u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_3b5a18:
    // 0x3b5a18: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x3b5a18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3b5a1c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x3b5a1cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5a20: 0x26e1018  mult        $v0, $s3, $t6
    ctx->pc = 0x3b5a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b5a24: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3b5a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3b5a28: 0x1972018  mult        $a0, $t4, $s7
    ctx->pc = 0x3b5a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3b5a2c: 0x24a50618  addiu       $a1, $a1, 0x618
    ctx->pc = 0x3b5a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1560));
    // 0x3b5a30: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3b5a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3b5a34: 0xa72d0000  sh          $t5, 0x0($t9)
    ctx->pc = 0x3b5a34u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x3b5a38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b5a3c: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x3b5a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5a40: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3b5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3b5a44: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x3b5a44u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x3b5a48: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x3b5a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3b5a4c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3b5a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b5a50: 0x26303  sra         $t4, $v0, 12
    ctx->pc = 0x3b5a50u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 12));
    // 0x3b5a54: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x3b5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x3b5a58: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x3b5a58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b5a5c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x3b5a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b5a60: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x3b5a60u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x3b5a64: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x3b5a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3b5a68: 0xd43018  mult        $a2, $a2, $s4
    ctx->pc = 0x3b5a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b5a6c: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x3b5a6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3b5a70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5A70u;
    {
        const bool branch_taken_0x3b5a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A70u;
        // 0x3b5a74: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5a70) {
            ctx->pc = 0x3B5A84u;
            goto label_3b5a84;
        }
    }
    ctx->pc = 0x3B5A78u;
    // 0x3b5a78: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x3b5a78u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x3b5a7c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b5a80: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x3b5a80u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_3b5a84:
    // 0x3b5a84: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x3b5a84u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5a88: 0x1862821  addu        $a1, $t4, $a2
    ctx->pc = 0x3b5a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x3b5a8c: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x3b5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x3b5a90: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x3b5a90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3b5a94: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x3b5a94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b5a98: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x3b5a98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3b5a9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5A9Cu;
    {
        const bool branch_taken_0x3b5a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A9Cu;
        // 0x3b5aa0: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5a9c) {
            ctx->pc = 0x3B5AB0u;
            goto label_3b5ab0;
        }
    }
    ctx->pc = 0x3B5AA4u;
    // 0x3b5aa4: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x3b5aa4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x3b5aa8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3b5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3b5aac: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x3b5aacu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_3b5ab0:
    // 0x3b5ab0: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x3b5ab0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ab4: 0x27defffe  addiu       $fp, $fp, -0x2
    ctx->pc = 0x3b5ab4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x3b5ab8: 0xa72d0000  sh          $t5, 0x0($t9)
    ctx->pc = 0x3b5ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x3b5abc: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x3b5abcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x3b5ac0: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x3b5ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x3b5ac4: 0x7c1ff9e  bgez        $fp, . + 4 + (-0x62 << 2)
    ctx->pc = 0x3B5AC4u;
    {
        const bool branch_taken_0x3b5ac4 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x3B5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5AC4u;
        // 0x3b5ac8: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ac4) {
            ctx->pc = 0x3B5940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5940;
        }
    }
    ctx->pc = 0x3B5ACCu;
    // 0x3b5acc: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3b5accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3b5ad0: 0x25ef0012  addiu       $t7, $t7, 0x12
    ctx->pc = 0x3b5ad0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18));
    // 0x3b5ad4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3b5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b5ad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b5ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b5adc: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x3b5adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b5ae0: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x3B5AE0u;
    {
        const bool branch_taken_0x3b5ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5AE0u;
        // 0x3b5ae4: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ae0) {
            ctx->pc = 0x3B5870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b5870;
        }
    }
    ctx->pc = 0x3B5AE8u;
label_3b5ae8:
    // 0x3b5ae8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3b5ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b5aec: 0xa48a0002  sh          $t2, 0x2($a0)
    ctx->pc = 0x3b5aecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x3b5af0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3b5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5af4: 0xa48d0000  sh          $t5, 0x0($a0)
    ctx->pc = 0x3b5af4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x3b5af8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3b5af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b5afc: 0xa4b00002  sh          $s0, 0x2($a1)
    ctx->pc = 0x3b5afcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x3b5b00: 0xa4ae0000  sh          $t6, 0x0($a1)
    ctx->pc = 0x3b5b00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 14));
label_3b5b04:
    // 0x3b5b04: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b5b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5b08: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3b5b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b5b0c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3b5b0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b5b10: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3b5b10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3b5b14: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b5b14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b5b18: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3b5b18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3b5b1c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x3b5b1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b5b20: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x3b5b20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b5b24: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x3b5b24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b5b28: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B28u;
        // 0x3b5b2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5B30u;
}
