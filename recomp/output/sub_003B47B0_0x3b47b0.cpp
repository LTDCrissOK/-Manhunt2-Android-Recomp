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

// Function: sub_003B47B0
// Address: 0x3b47b0 - 0x3b4ac8
void sub_003B47B0_0x3b47b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B47B0_0x3b47b0");
#endif

    ctx->pc = 0x3b47b0u;

    // 0x3b47b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b47b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b47b4: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x3b47b4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b47b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b47b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b47bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b47bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b47c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b47c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b47c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3b47c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b47c8: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x3b47c8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x3b47cc: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x3b47ccu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b47d0: 0x91cb0003  lbu         $t3, 0x3($t6)
    ctx->pc = 0x3b47d0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x3b47d4: 0x358c732e  ori         $t4, $t4, 0x732E
    ctx->pc = 0x3b47d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)29486);
    // 0x3b47d8: 0x91c30002  lbu         $v1, 0x2($t6)
    ctx->pc = 0x3b47d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x3b47dc: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x3b47dcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b47e0: 0x91c40001  lbu         $a0, 0x1($t6)
    ctx->pc = 0x3b47e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x3b47e4: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x3b47e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x3b47e8: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x3b47e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3b47ec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3b47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3b47f0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3b47f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b47f4: 0x120c02d  daddu       $t8, $t1, $zero
    ctx->pc = 0x3b47f4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b47f8: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x3b47f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x3b47fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b47fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b4800: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3b4800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b4804: 0x108c0005  beq         $a0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4804u;
    {
        const bool branch_taken_0x3b4804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 12));
        ctx->pc = 0x3B4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4804u;
        // 0x3b4808: 0x25cb0004  addiu       $t3, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4804) {
            ctx->pc = 0x3B481Cu;
            goto label_3b481c;
        }
    }
    ctx->pc = 0x3B480Cu;
    // 0x3b480c: 0x3c03646e  lui         $v1, 0x646E
    ctx->pc = 0x3b480cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25710 << 16));
    // 0x3b4810: 0x3463732e  ori         $v1, $v1, 0x732E
    ctx->pc = 0x3b4810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29486);
    // 0x3b4814: 0x148300a8  bne         $a0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3B4814u;
    {
        const bool branch_taken_0x3b4814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4814u;
        // 0x3b4818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4814) {
            ctx->pc = 0x3B4AB8u;
            goto label_3b4ab8;
        }
    }
    ctx->pc = 0x3B481Cu;
label_3b481c:
    // 0x3b481c: 0x91660003  lbu         $a2, 0x3($t3)
    ctx->pc = 0x3b481cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x3b4820: 0x3c0f00ff  lui         $t7, 0xFF
    ctx->pc = 0x3b4820u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
    // 0x3b4824: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x3b4824u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3b4828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b4828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b482c: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x3b482cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3b4830: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x3b4830u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x3b4834: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x3b4834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3b4838: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3b4838u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3b483c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3b483cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3b4840: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3b4840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3b4844: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3b4844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3b4848: 0x646025  or          $t4, $v1, $a0
    ctx->pc = 0x3b4848u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b484c: 0xc3202  srl         $a2, $t4, 8
    ctx->pc = 0x3b484cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x3b4850: 0xc2a00  sll         $a1, $t4, 8
    ctx->pc = 0x3b4850u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x3b4854: 0xc2600  sll         $a0, $t4, 24
    ctx->pc = 0x3b4854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x3b4858: 0xc1e02  srl         $v1, $t4, 24
    ctx->pc = 0x3b4858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 24));
    // 0x3b485c: 0xaf2824  and         $a1, $a1, $t7
    ctx->pc = 0x3b485cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x3b4860: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x3b4860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x3b4864: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b4864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b4868: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3b4868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x3b486c: 0x656025  or          $t4, $v1, $a1
    ctx->pc = 0x3b486cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b4870: 0x32c202a  slt         $a0, $t9, $t4
    ctx->pc = 0x3b4870u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x3b4874: 0x14800090  bnez        $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x3B4874u;
    {
        const bool branch_taken_0x3b4874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4874u;
        // 0x3b4878: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4874) {
            ctx->pc = 0x3B4AB8u;
            goto label_3b4ab8;
        }
    }
    ctx->pc = 0x3B487Cu;
    // 0x3b487c: 0x91690000  lbu         $t1, 0x0($t3)
    ctx->pc = 0x3b487cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3b4880: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x3b4880u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b4884: 0x91680003  lbu         $t0, 0x3($t3)
    ctx->pc = 0x3b4884u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x3b4888: 0x91660002  lbu         $a2, 0x2($t3)
    ctx->pc = 0x3b4888u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3b488c: 0x91670001  lbu         $a3, 0x1($t3)
    ctx->pc = 0x3b488cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3b4890: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3b4890u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3b4894: 0x91650003  lbu         $a1, 0x3($t3)
    ctx->pc = 0x3b4894u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x3b4898: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x3b4898u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x3b489c: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x3b489cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3b48a0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3b48a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3b48a4: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x3b48a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3b48a8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3b48a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3b48ac: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x3b48acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3b48b0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3b48b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3b48b4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b48b8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3b48b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3b48bc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3b48bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b48c0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3b48c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3b48c4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3b48c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3b48c8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x3b48c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b48cc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x3b48ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3b48d0: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x3b48d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3b48d4: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x3b48d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x3b48d8: 0x43602  srl         $a2, $a0, 24
    ctx->pc = 0x3b48d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x3b48dc: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3b48dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3b48e0: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x3b48e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b48e4: 0x93a02  srl         $a3, $t1, 8
    ctx->pc = 0x3b48e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x3b48e8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3b48e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3b48ec: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x3b48ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x3b48f0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3b48f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3b48f4: 0xaf2824  and         $a1, $a1, $t7
    ctx->pc = 0x3b48f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x3b48f8: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x3b48f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3b48fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3b48fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3b4900: 0x91602  srl         $v0, $t1, 24
    ctx->pc = 0x3b4900u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x3b4904: 0x92600  sll         $a0, $t1, 24
    ctx->pc = 0x3b4904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x3b4908: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x3b4908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x3b490c: 0x30e7ff00  andi        $a3, $a3, 0xFF00
    ctx->pc = 0x3b490cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x3b4910: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b4910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b4914: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3b4914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3b4918: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x3b4918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3b491c: 0x10990012  beq         $a0, $t9, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B491Cu;
    {
        const bool branch_taken_0x3b491c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 25));
        ctx->pc = 0x3B4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B491Cu;
        // 0x3b4920: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b491c) {
            ctx->pc = 0x3B4968u;
            goto label_3b4968;
        }
    }
    ctx->pc = 0x3B4924u;
    // 0x3b4924: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x3b4924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b4928: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B4928u;
    {
        const bool branch_taken_0x3b4928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4928u;
        // 0x3b492c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4928) {
            ctx->pc = 0x3B4948u;
            goto label_3b4948;
        }
    }
    ctx->pc = 0x3B4930u;
    // 0x3b4930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4934: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B4934u;
    {
        const bool branch_taken_0x3b4934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4934u;
        // 0x3b4938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4934) {
            ctx->pc = 0x3B4958u;
            goto label_3b4958;
        }
    }
    ctx->pc = 0x3B493Cu;
    // 0x3b493c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x3B493Cu;
    {
        const bool branch_taken_0x3b493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B493Cu;
        // 0x3b4940: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b493c) {
            ctx->pc = 0x3B4ABCu;
            goto label_3b4abc;
        }
    }
    ctx->pc = 0x3B4944u;
    // 0x3b4944: 0x0  nop
    ctx->pc = 0x3b4944u;
    // NOP
label_3b4948:
    // 0x3b4948: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B4948u;
    {
        const bool branch_taken_0x3b4948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4948u;
        // 0x3b494c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4948) {
            ctx->pc = 0x3B4980u;
            goto label_3b4980;
        }
    }
    ctx->pc = 0x3B4950u;
    // 0x3b4950: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3B4950u;
    {
        const bool branch_taken_0x3b4950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4950u;
        // 0x3b4954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4950) {
            ctx->pc = 0x3B4ABCu;
            goto label_3b4abc;
        }
    }
    ctx->pc = 0x3B4958u;
label_3b4958:
    // 0x3b4958: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3b4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b495c: 0xad590000  sw          $t9, 0x0($t2)
    ctx->pc = 0x3b495cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 25));
    // 0x3b4960: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B4960u;
    {
        const bool branch_taken_0x3b4960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4960u;
        // 0x3b4964: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4960) {
            ctx->pc = 0x3B498Cu;
            goto label_3b498c;
        }
    }
    ctx->pc = 0x3B4968u;
label_3b4968:
    // 0x3b4968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b496c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3b496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b4970: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x3b4970u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x3b4974: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4974u;
    {
        const bool branch_taken_0x3b4974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4974u;
        // 0x3b4978: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4974) {
            ctx->pc = 0x3B498Cu;
            goto label_3b498c;
        }
    }
    ctx->pc = 0x3B497Cu;
    // 0x3b497c: 0x0  nop
    ctx->pc = 0x3b497cu;
    // NOP
label_3b4980:
    // 0x3b4980: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3b4980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b4984: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x3b4984u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x3b4988: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x3b4988u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_3b498c:
    // 0x3b498c: 0x91650003  lbu         $a1, 0x3($t3)
    ctx->pc = 0x3b498cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x3b4990: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x3b4990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x3b4994: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x3b4994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3b4998: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3b4998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b499c: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x3b499cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3b49a0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3b49a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3b49a4: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3b49a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3b49a8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3b49a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3b49ac: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3b49acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b49b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3b49b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3b49b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b49b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b49b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3b49b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3b49bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b49bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b49c0: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x3b49c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3b49c4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3b49c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b49c8: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x3b49c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x3b49cc: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x3b49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x3b49d0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x3b49d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x3b49d4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3b49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b49d8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3b49d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3b49dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b49dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b49e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b49e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b49e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b49e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3b49e8: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x3b49e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3b49ec: 0x91640003  lbu         $a0, 0x3($t3)
    ctx->pc = 0x3b49ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x3b49f0: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x3b49f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3b49f4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3b49f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3b49f8: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3b49f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3b49fc: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3b49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3b4a00: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3b4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3b4a04: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3b4a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b4a08: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b4a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b4a0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b4a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b4a10: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x3b4a10u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3b4a14: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3b4a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b4a18: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x3b4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x3b4a1c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3b4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b4a20: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x3b4a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x3b4a24: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x3b4a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x3b4a28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b4a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b4a2c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3b4a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3b4a30: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b4a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b4a34: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b4a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3b4a38: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x3b4a38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3b4a3c: 0x15470008  bne         $t2, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B4A3Cu;
    {
        const bool branch_taken_0x3b4a3c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x3B4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A3Cu;
        // 0x3b4a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a3c) {
            ctx->pc = 0x3B4A60u;
            goto label_3b4a60;
        }
    }
    ctx->pc = 0x3B4A44u;
    // 0x3b4a44: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x3b4a44u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b4a48: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B4A48u;
    {
        const bool branch_taken_0x3b4a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4a48) {
            ctx->pc = 0x3B4A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4A48u;
            // 0x3b4a4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4A50u;
            goto label_3b4a50;
        }
    }
    ctx->pc = 0x3B4A50u;
label_3b4a50:
    // 0x3b4a50: 0x1012  mflo        $v0
    ctx->pc = 0x3b4a50u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b4a54: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3B4A54u;
    {
        const bool branch_taken_0x3b4a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A54u;
        // 0x3b4a58: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a54) {
            ctx->pc = 0x3B4AB4u;
            goto label_3b4ab4;
        }
    }
    ctx->pc = 0x3B4A5Cu;
    // 0x3b4a5c: 0x0  nop
    ctx->pc = 0x3b4a5cu;
    // NOP
label_3b4a60:
    // 0x3b4a60: 0x15420007  bne         $t2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B4A60u;
    {
        const bool branch_taken_0x3b4a60 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b4a60) {
            ctx->pc = 0x3B4A80u;
            goto label_3b4a80;
        }
    }
    ctx->pc = 0x3B4A68u;
    // 0x3b4a68: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x3b4a68u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b4a6c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B4A6Cu;
    {
        const bool branch_taken_0x3b4a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4a6c) {
            ctx->pc = 0x3B4A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4A6Cu;
            // 0x3b4a70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4A74u;
            goto label_3b4a74;
        }
    }
    ctx->pc = 0x3B4A74u;
label_3b4a74:
    // 0x3b4a74: 0x1012  mflo        $v0
    ctx->pc = 0x3b4a74u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b4a78: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B4A78u;
    {
        const bool branch_taken_0x3b4a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A78u;
        // 0x3b4a7c: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a78) {
            ctx->pc = 0x3B4AB4u;
            goto label_3b4ab4;
        }
    }
    ctx->pc = 0x3B4A80u;
label_3b4a80:
    // 0x3b4a80: 0x1540000b  bnez        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x3B4A80u;
    {
        const bool branch_taken_0x3b4a80 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A80u;
        // 0x3b4a84: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a80) {
            ctx->pc = 0x3B4AB0u;
            goto label_3b4ab0;
        }
    }
    ctx->pc = 0x3B4A88u;
    // 0x3b4a88: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x3b4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x3b4a8c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B4A8Cu;
    {
        const bool branch_taken_0x3b4a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4a8c) {
            ctx->pc = 0x3B4A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4A8Cu;
            // 0x3b4a90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4A94u;
            goto label_3b4a94;
        }
    }
    ctx->pc = 0x3B4A94u;
label_3b4a94:
    // 0x3b4a94: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3b4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3b4a98: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b4a98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b4a9c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3b4a9cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b4aa0: 0x1012  mflo        $v0
    ctx->pc = 0x3b4aa0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b4aa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4AA4u;
    {
        const bool branch_taken_0x3b4aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AA4u;
        // 0x3b4aa8: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4aa4) {
            ctx->pc = 0x3B4AB4u;
            goto label_3b4ab4;
        }
    }
    ctx->pc = 0x3B4AACu;
    // 0x3b4aac: 0x0  nop
    ctx->pc = 0x3b4aacu;
    // NOP
label_3b4ab0:
    // 0x3b4ab0: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x3b4ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_3b4ab4:
    // 0x3b4ab4: 0x1cc1021  addu        $v0, $t6, $t4
    ctx->pc = 0x3b4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_3b4ab8:
    // 0x3b4ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b4ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4abc:
    // 0x3b4abc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b4abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b4ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AC0u;
        // 0x3b4ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4AC8u;
}
