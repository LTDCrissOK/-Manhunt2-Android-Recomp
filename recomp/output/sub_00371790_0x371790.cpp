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

// Function: sub_00371790
// Address: 0x371790 - 0x371b48
void sub_00371790_0x371790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371790_0x371790");
#endif

    ctx->pc = 0x371790u;

    // 0x371790: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x371790u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371794: 0x34038026  ori         $v1, $zero, 0x8026
    ctx->pc = 0x371794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32806);
    // 0x371798: 0x8d640064  lw          $a0, 0x64($t3)
    ctx->pc = 0x371798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 100)));
    // 0x37179c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3717a0: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3717A0u;
    {
        const bool branch_taken_0x3717a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3717A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717A0u;
        // 0x3717a4: 0xfd630000  sd          $v1, 0x0($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717a0) {
            ctx->pc = 0x3717BCu;
            goto label_3717bc;
        }
    }
    ctx->pc = 0x3717A8u;
    // 0x3717a8: 0x8d620060  lw          $v0, 0x60($t3)
    ctx->pc = 0x3717a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 96)));
    // 0x3717ac: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3717ACu;
    {
        const bool branch_taken_0x3717ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3717B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717ACu;
        // 0x3717b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717ac) {
            ctx->pc = 0x3717C0u;
            goto label_3717c0;
        }
    }
    ctx->pc = 0x3717B4u;
    // 0x3717b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3717B4u;
    {
        const bool branch_taken_0x3717b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3717B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717B4u;
        // 0x3717b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717b4) {
            ctx->pc = 0x3717C0u;
            goto label_3717c0;
        }
    }
    ctx->pc = 0x3717BCu;
label_3717bc:
    // 0x3717bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3717bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3717c0:
    // 0x3717c0: 0xfd620008  sd          $v0, 0x8($t3)
    ctx->pc = 0x3717c0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 2));
    // 0x3717c4: 0x95620050  lhu         $v0, 0x50($t3)
    ctx->pc = 0x3717c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x3717c8: 0x240581ff  addiu       $a1, $zero, -0x7E01
    ctx->pc = 0x3717c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294935039));
    // 0x3717cc: 0xdd630020  ld          $v1, 0x20($t3)
    ctx->pc = 0x3717ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x3717d0: 0x3c06fff0  lui         $a2, 0xFFF0
    ctx->pc = 0x3717d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65520 << 16));
    // 0x3717d4: 0x34c67fff  ori         $a2, $a2, 0x7FFF
    ctx->pc = 0x3717d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32767);
    // 0x3717d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3717d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3717dc: 0x8564004e  lh          $a0, 0x4E($t3)
    ctx->pc = 0x3717dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 78)));
    // 0x3717e0: 0x24c03  sra         $t1, $v0, 16
    ctx->pc = 0x3717e0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3717e4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3717e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3717e8: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x3717e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x3717ec: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x3717ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x3717f0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x3717f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x3717f4: 0x423f8  dsll        $a0, $a0, 15
    ctx->pc = 0x3717f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 15);
    // 0x3717f8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x3717f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x3717fc: 0x8d65006c  lw          $a1, 0x6C($t3)
    ctx->pc = 0x3717fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 108)));
    // 0x371800: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x371800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x371804: 0x856d0052  lh          $t5, 0x52($t3)
    ctx->pc = 0x371804u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 82)));
    // 0x371808: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x371808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x37180c: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x37180cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x371810: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x371810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x371814: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x371814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x371818: 0x34420fff  ori         $v0, $v0, 0xFFF
    ctx->pc = 0x371818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4095);
    // 0x37181c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x37181cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x371820: 0x856a0054  lh          $t2, 0x54($t3)
    ctx->pc = 0x371820u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 84)));
    // 0x371824: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x371824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x371828: 0x85680056  lh          $t0, 0x56($t3)
    ctx->pc = 0x371828u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 86)));
    // 0x37182c: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x37182Cu;
    {
        const bool branch_taken_0x37182c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x371830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37182Cu;
        // 0x371830: 0xfd630020  sd          $v1, 0x20($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37182c) {
            ctx->pc = 0x371890u;
            goto label_371890;
        }
    }
    ctx->pc = 0x371834u;
    // 0x371834: 0xdd620028  ld          $v0, 0x28($t3)
    ctx->pc = 0x371834u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x371838: 0x3407ffc0  ori         $a3, $zero, 0xFFC0
    ctx->pc = 0x371838u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37183c: 0x73d78  dsll        $a3, $a3, 21
    ctx->pc = 0x37183cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 21);
    // 0x371840: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x371840u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x371844: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x371844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x371848: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x371848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x37184c: 0x73af8  dsll        $a3, $a3, 11
    ctx->pc = 0x37184cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 11);
    // 0x371850: 0x34e707ff  ori         $a3, $a3, 0x7FF
    ctx->pc = 0x371850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2047);
    // 0x371854: 0x85660042  lh          $a2, 0x42($t3)
    ctx->pc = 0x371854u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 66)));
    // 0x371858: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x371858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x37185c: 0x85640040  lh          $a0, 0x40($t3)
    ctx->pc = 0x37185cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x371860: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x371860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x371864: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x371864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x371868: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x371868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x37186c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x37186cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x371870: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x371870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x371874: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x371874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x371878: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x371878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x37187c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x37187cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x371880: 0xfd620028  sd          $v0, 0x28($t3)
    ctx->pc = 0x371880u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 40), GPR_U64(ctx, 2));
    // 0x371884: 0xfd630020  sd          $v1, 0x20($t3)
    ctx->pc = 0x371884u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 3));
    // 0x371888: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x371888u;
    {
        const bool branch_taken_0x371888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371888u;
        // 0x37188c: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371888) {
            ctx->pc = 0x3718E0u;
            goto label_3718e0;
        }
    }
    ctx->pc = 0x371890u;
label_371890:
    // 0x371890: 0xdd620028  ld          $v0, 0x28($t3)
    ctx->pc = 0x371890u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x371894: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x371894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x371898: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x371898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x37189c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x37189cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3718a0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3718a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3718a4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3718a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3718a8: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x3718a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x3718ac: 0x348407ff  ori         $a0, $a0, 0x7FF
    ctx->pc = 0x3718acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2047);
    // 0x3718b0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3718b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3718b4: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x3718b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x3718b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3718b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3718bc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3718bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3718c0: 0x2406fe00  addiu       $a2, $zero, -0x200
    ctx->pc = 0x3718c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x3718c4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3718c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3718c8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3718c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3718cc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3718ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3718d0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3718d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3718d4: 0xfd620028  sd          $v0, 0x28($t3)
    ctx->pc = 0x3718d4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 40), GPR_U64(ctx, 2));
    // 0x3718d8: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x3718d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3718dc: 0xfd630020  sd          $v1, 0x20($t3)
    ctx->pc = 0x3718dcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 3));
label_3718e0:
    // 0x3718e0: 0x95620050  lhu         $v0, 0x50($t3)
    ctx->pc = 0x3718e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x3718e4: 0x240581ff  addiu       $a1, $zero, -0x7E01
    ctx->pc = 0x3718e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294935039));
    // 0x3718e8: 0xdd630028  ld          $v1, 0x28($t3)
    ctx->pc = 0x3718e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x3718ec: 0x3c06fff0  lui         $a2, 0xFFF0
    ctx->pc = 0x3718ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65520 << 16));
    // 0x3718f0: 0x34c67fff  ori         $a2, $a2, 0x7FFF
    ctx->pc = 0x3718f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32767);
    // 0x3718f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3718f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3718f8: 0x8564004e  lh          $a0, 0x4E($t3)
    ctx->pc = 0x3718f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 78)));
    // 0x3718fc: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x3718fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x371900: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x371900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x371904: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x371904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x371908: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x371908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x37190c: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x37190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x371910: 0x423f8  dsll        $a0, $a0, 15
    ctx->pc = 0x371910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 15);
    // 0x371914: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x371914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x371918: 0x3c05800f  lui         $a1, 0x800F
    ctx->pc = 0x371918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32783 << 16));
    // 0x37191c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x37191cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x371920: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x371920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x371924: 0x34a50fff  ori         $a1, $a1, 0xFFF
    ctx->pc = 0x371924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    // 0x371928: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x371928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x37192c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371930: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x371930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x371934: 0x8d660068  lw          $a2, 0x68($t3)
    ctx->pc = 0x371934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 104)));
    // 0x371938: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x371938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x37193c: 0x14c2002a  bne         $a2, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x37193Cu;
    {
        const bool branch_taken_0x37193c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x371940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37193Cu;
        // 0x371940: 0xfd630028  sd          $v1, 0x28($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37193c) {
            ctx->pc = 0x3719E8u;
            goto label_3719e8;
        }
    }
    ctx->pc = 0x371944u;
    // 0x371944: 0x8d630064  lw          $v1, 0x64($t3)
    ctx->pc = 0x371944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 100)));
    // 0x371948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x371948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37194c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x37194Cu;
    {
        const bool branch_taken_0x37194c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x371950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37194Cu;
        // 0x371950: 0x252309ff  addiu       $v1, $t1, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37194c) {
            ctx->pc = 0x3719B0u;
            goto label_3719b0;
        }
    }
    ctx->pc = 0x371954u;
    // 0x371954: 0x25050032  addiu       $a1, $t0, 0x32
    ctx->pc = 0x371954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 50));
    // 0x371958: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x371958u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37195c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37195Cu;
    {
        const bool branch_taken_0x37195c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x37195c) {
            ctx->pc = 0x371960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37195Cu;
            // 0x371960: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x371964u;
            goto label_371964;
        }
    }
    ctx->pc = 0x371964u;
label_371964:
    // 0x371964: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x371964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x371968: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x371968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x37196c: 0x8d660060  lw          $a2, 0x60($t3)
    ctx->pc = 0x37196cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 96)));
    // 0x371970: 0x1812  mflo        $v1
    ctx->pc = 0x371970u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x371974: 0x1431018  mult        $v0, $t2, $v1
    ctx->pc = 0x371974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x371978: 0x692018  mult        $a0, $v1, $t1
    ctx->pc = 0x371978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x37197c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37197cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x371980: 0x2442027c  addiu       $v0, $v0, 0x27C
    ctx->pc = 0x371980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 636));
    // 0x371984: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x371984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x371988: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x371988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37198c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x37198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x371990: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x371990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x371994: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x371994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x371998: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x371998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37199c: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x37199Cu;
    {
        const bool branch_taken_0x37199c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3719A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37199Cu;
        // 0x3719a0: 0x441825  or          $v1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37199c) {
            ctx->pc = 0x371A60u;
            goto label_371a60;
        }
    }
    ctx->pc = 0x3719A4u;
    // 0x3719a4: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x3719a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3719a8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3719A8u;
    {
        const bool branch_taken_0x3719a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3719ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719A8u;
        // 0x3719ac: 0x4e1023  subu        $v0, $v0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3719a8) {
            ctx->pc = 0x371A64u;
            goto label_371a64;
        }
    }
    ctx->pc = 0x3719B0u;
label_3719b0:
    // 0x3719b0: 0x25050019  addiu       $a1, $t0, 0x19
    ctx->pc = 0x3719b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 25));
    // 0x3719b4: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x3719b4u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3719b8: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x3719b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x3719bc: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x3719bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x3719c0: 0x1ae3023  subu        $a2, $t5, $t6
    ctx->pc = 0x3719c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x3719c4: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3719C4u;
    {
        const bool branch_taken_0x3719c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3719c4) {
            ctx->pc = 0x3719C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3719C4u;
            // 0x3719c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3719CCu;
            goto label_3719cc;
        }
    }
    ctx->pc = 0x3719CCu;
label_3719cc:
    // 0x3719cc: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x3719ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x3719d0: 0x1812  mflo        $v1
    ctx->pc = 0x3719d0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3719d4: 0x1431018  mult        $v0, $t2, $v1
    ctx->pc = 0x3719d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3719d8: 0x692018  mult        $a0, $v1, $t1
    ctx->pc = 0x3719d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3719dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3719dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3719e0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3719E0u;
    {
        const bool branch_taken_0x3719e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3719E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719E0u;
        // 0x3719e4: 0x2442027c  addiu       $v0, $v0, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3719e0) {
            ctx->pc = 0x371AA8u;
            goto label_371aa8;
        }
    }
    ctx->pc = 0x3719E8u;
label_3719e8:
    // 0x3719e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3719e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3719ec: 0x14c20038  bne         $a2, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3719ECu;
    {
        const bool branch_taken_0x3719ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3719F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719ECu;
        // 0x3719f0: 0x2402060e  addiu       $v0, $zero, 0x60E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3719ec) {
            ctx->pc = 0x371AD0u;
            goto label_371ad0;
        }
    }
    ctx->pc = 0x3719F4u;
    // 0x3719f4: 0x8d630064  lw          $v1, 0x64($t3)
    ctx->pc = 0x3719f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 100)));
    // 0x3719f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3719f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3719fc: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3719FCu;
    {
        const bool branch_taken_0x3719fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x371A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719FCu;
        // 0x371a00: 0x252309ff  addiu       $v1, $t1, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3719fc) {
            ctx->pc = 0x371A74u;
            goto label_371a74;
        }
    }
    ctx->pc = 0x371A04u;
    // 0x371a04: 0x25050048  addiu       $a1, $t0, 0x48
    ctx->pc = 0x371a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
    // 0x371a08: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x371a08u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x371a0c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x371A0Cu;
    {
        const bool branch_taken_0x371a0c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x371a0c) {
            ctx->pc = 0x371A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371A0Cu;
            // 0x371a10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x371A14u;
            goto label_371a14;
        }
    }
    ctx->pc = 0x371A14u;
label_371a14:
    // 0x371a14: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x371a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x371a18: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x371a18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x371a1c: 0x8d670060  lw          $a3, 0x60($t3)
    ctx->pc = 0x371a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 96)));
    // 0x371a20: 0x1812  mflo        $v1
    ctx->pc = 0x371a20u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x371a24: 0x1433018  mult        $a2, $t2, $v1
    ctx->pc = 0x371a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x371a28: 0x692018  mult        $a0, $v1, $t1
    ctx->pc = 0x371a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x371a2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x371a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x371a30: 0x64c20290  daddiu      $v0, $a2, 0x290
    ctx->pc = 0x371a30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)656);
    // 0x371a34: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x371a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x371a38: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x371a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x371a3c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x371a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x371a40: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x371a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x371a44: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x371a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x371a48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x371a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x371a4c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x371A4Cu;
    {
        const bool branch_taken_0x371a4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x371A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A4Cu;
        // 0x371a50: 0x441825  or          $v1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a4c) {
            ctx->pc = 0x371A60u;
            goto label_371a60;
        }
    }
    ctx->pc = 0x371A54u;
    // 0x371a54: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x371a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x371a58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x371A58u;
    {
        const bool branch_taken_0x371a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A58u;
        // 0x371a5c: 0x4e1023  subu        $v0, $v0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a58) {
            ctx->pc = 0x371A64u;
            goto label_371a64;
        }
    }
    ctx->pc = 0x371A60u;
label_371a60:
    // 0x371a60: 0x1ae1023  subu        $v0, $t5, $t6
    ctx->pc = 0x371a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_371a64:
    // 0x371a64: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x371a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x371a68: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x371a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x371a6c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x371A6Cu;
    {
        const bool branch_taken_0x371a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A6Cu;
        // 0x371a70: 0xfd620010  sd          $v0, 0x10($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371a6c) {
            ctx->pc = 0x371B1Cu;
            goto label_371b1c;
        }
    }
    ctx->pc = 0x371A74u;
label_371a74:
    // 0x371a74: 0x25050024  addiu       $a1, $t0, 0x24
    ctx->pc = 0x371a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
    // 0x371a78: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x371a78u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x371a7c: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x371a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x371a80: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x371a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x371a84: 0x1ae3023  subu        $a2, $t5, $t6
    ctx->pc = 0x371a84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x371a88: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x371A88u;
    {
        const bool branch_taken_0x371a88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x371a88) {
            ctx->pc = 0x371A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371A88u;
            // 0x371a8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x371A90u;
            goto label_371a90;
        }
    }
    ctx->pc = 0x371A90u;
label_371a90:
    // 0x371a90: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x371a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x371a94: 0x1812  mflo        $v1
    ctx->pc = 0x371a94u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x371a98: 0x1433818  mult        $a3, $t2, $v1
    ctx->pc = 0x371a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x371a9c: 0x692018  mult        $a0, $v1, $t1
    ctx->pc = 0x371a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x371aa0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x371aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x371aa4: 0x64e20290  daddiu      $v0, $a3, 0x290
    ctx->pc = 0x371aa4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)656);
label_371aa8:
    // 0x371aa8: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x371aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x371aac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x371aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x371ab0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x371ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x371ab4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x371ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x371ab8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x371ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x371abc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x371abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x371ac0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x371ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x371ac4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x371ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x371ac8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x371AC8u;
    {
        const bool branch_taken_0x371ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371AC8u;
        // 0x371acc: 0xfd620010  sd          $v0, 0x10($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ac8) {
            ctx->pc = 0x371B1Cu;
            goto label_371b1c;
        }
    }
    ctx->pc = 0x371AD0u;
label_371ad0:
    // 0x371ad0: 0x25040023  addiu       $a0, $t0, 0x23
    ctx->pc = 0x371ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 35));
    // 0x371ad4: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x371ad4u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x371ad8: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x371ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x371adc: 0x254300e8  addiu       $v1, $t2, 0xE8
    ctx->pc = 0x371adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 232));
    // 0x371ae0: 0x1ae2823  subu        $a1, $t5, $t6
    ctx->pc = 0x371ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x371ae4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x371ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x371ae8: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x371AE8u;
    {
        const bool branch_taken_0x371ae8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x371ae8) {
            ctx->pc = 0x371AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371AE8u;
            // 0x371aec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x371AF0u;
            goto label_371af0;
        }
    }
    ctx->pc = 0x371AF0u;
label_371af0:
    // 0x371af0: 0x52b3c  dsll32      $a1, $a1, 12
    ctx->pc = 0x371af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 12));
    // 0x371af4: 0x1012  mflo        $v0
    ctx->pc = 0x371af4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x371af8: 0x1222018  mult        $a0, $t1, $v0
    ctx->pc = 0x371af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x371afc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x371afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x371b00: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x371b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x371b04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x371b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x371b08: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x371b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x371b0c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x371b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x371b10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x371b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x371b14: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x371b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x371b18: 0xfd630010  sd          $v1, 0x10($t3)
    ctx->pc = 0x371b18u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 3));
label_371b1c:
    // 0x371b1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x371b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x371b20: 0x8c44ccc0  lw          $a0, -0x3340($v0)
    ctx->pc = 0x371b20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x371b24: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x371b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x371b28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x371B28u;
    {
        const bool branch_taken_0x371b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x371B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B28u;
        // 0x371b2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371b28) {
            ctx->pc = 0x371B3Cu;
            goto label_371b3c;
        }
    }
    ctx->pc = 0x371B30u;
    // 0x371b30: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x371b30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x371b34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x371b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x371b38: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x371b38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_371b3c:
    // 0x371b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x371B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371B44u;
    // 0x371b44: 0x0  nop
    ctx->pc = 0x371b44u;
    // NOP
    ctx->pc = 0x371b48u;
}
