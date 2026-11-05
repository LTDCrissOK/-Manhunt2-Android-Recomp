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

// Function: sub_003C27E0
// Address: 0x3c27e0 - 0x3c29f0
void sub_003C27E0_0x3c27e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C27E0_0x3c27e0");
#endif

    switch (ctx->pc) {
        case 0x3c2830u: goto label_3c2830;
        case 0x3c28dcu: goto label_3c28dc;
        case 0x3c28ecu: goto label_3c28ec;
        case 0x3c2900u: goto label_3c2900;
        case 0x3c2940u: goto label_3c2940;
        default: break;
    }

    ctx->pc = 0x3c27e0u;

    // 0x3c27e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3c27e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3c27e4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3c27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3c27e8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3c27e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3c27ec: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3c27ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3c27f0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3c27f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3c27f4: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x3c27f4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x3c27f8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3c27f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3c27fc: 0x26e50c11  addiu       $a1, $s7, 0xC11
    ctx->pc = 0x3c27fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3089));
    // 0x3c2800: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3c2800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3c2804: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3c2804u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2808: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3c2808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3c280c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3c280cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2810: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3c2810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3c2814: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c2814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3c2818: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3c2818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3c281c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c2820: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3c2820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3c2824: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x3c2824u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3c2828: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3c2828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3c282c: 0x0  nop
    ctx->pc = 0x3c282cu;
    // NOP
label_3c2830:
    // 0x3c2830: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3c2830u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c2834: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x3c2834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3c2838: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3c2838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c283c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3c283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3c2840: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C2840u;
    {
        const bool branch_taken_0x3c2840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2840u;
        // 0x3c2844: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2840) {
            ctx->pc = 0x3C2830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2830;
        }
    }
    ctx->pc = 0x3C2848u;
    // 0x3c2848: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3c2848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3c284c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C284Cu;
    {
        const bool branch_taken_0x3c284c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C284Cu;
        // 0x3c2850: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c284c) {
            ctx->pc = 0x3C2864u;
            goto label_3c2864;
        }
    }
    ctx->pc = 0x3C2854u;
    // 0x3c2854: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3c2854u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c2858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c2858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c285c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C285Cu;
    {
        const bool branch_taken_0x3c285c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C285Cu;
        // 0x3c2860: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c285c) {
            ctx->pc = 0x3C2870u;
            goto label_3c2870;
        }
    }
    ctx->pc = 0x3C2864u;
label_3c2864:
    // 0x3c2864: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2864u;
    {
        const bool branch_taken_0x3c2864 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c2864) {
            ctx->pc = 0x3C2874u;
            goto label_3c2874;
        }
    }
    ctx->pc = 0x3C286Cu;
    // 0x3c286c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3c286cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3c2870:
    // 0x3c2870: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c2870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3c2874:
    // 0x3c2874: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2874u;
    {
        const bool branch_taken_0x3c2874 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2874u;
        // 0x3c2878: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2874) {
            ctx->pc = 0x3C2884u;
            goto label_3c2884;
        }
    }
    ctx->pc = 0x3C287Cu;
    // 0x3c287c: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C287Cu;
    {
        const bool branch_taken_0x3c287c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c287c) {
            ctx->pc = 0x3C28B0u;
            goto label_3c28b0;
        }
    }
    ctx->pc = 0x3C2884u;
label_3c2884:
    // 0x3c2884: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3c2884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3c2888: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C2888u;
    {
        const bool branch_taken_0x3c2888 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2888u;
        // 0x3c288c: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2888) {
            ctx->pc = 0x3C28B0u;
            goto label_3c28b0;
        }
    }
    ctx->pc = 0x3C2890u;
    // 0x3c2890: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3c2890u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c2894: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2894u;
    {
        const bool branch_taken_0x3c2894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2894u;
        // 0x3c2898: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2894) {
            ctx->pc = 0x3C28A4u;
            goto label_3c28a4;
        }
    }
    ctx->pc = 0x3C289Cu;
    // 0x3c289c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C289Cu;
    {
        const bool branch_taken_0x3c289c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c289c) {
            ctx->pc = 0x3C28B0u;
            goto label_3c28b0;
        }
    }
    ctx->pc = 0x3C28A4u;
label_3c28a4:
    // 0x3c28a4: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x3c28a4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3c28a8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x3c28a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c28ac: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c28acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_3c28b0:
    // 0x3c28b0: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C28B0u;
    {
        const bool branch_taken_0x3c28b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28B0u;
        // 0x3c28b4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c28b0) {
            ctx->pc = 0x3C28CCu;
            goto label_3c28cc;
        }
    }
    ctx->pc = 0x3C28B8u;
    // 0x3c28b8: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x3c28b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c28bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3c28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3c28c0: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x3c28c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x3c28c4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x3c28c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x3c28c8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3c28c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c28cc:
    // 0x3c28cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c28ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c28d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c28d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c28d4: 0xc0f4b9e  jal         func_3D2E78
    ctx->pc = 0x3C28D4u;
    SET_GPR_U32(ctx, 31, 0x3C28DCu);
    ctx->pc = 0x3C28D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C28D4u;
    // 0x3c28d8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E78u, 0x3C28D4u, 0x3C28DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C28DCu;
label_3c28dc:
    // 0x3c28dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c28e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c28e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c28e4: 0xc0f4d12  jal         func_3D3448
    ctx->pc = 0x3C28E4u;
    SET_GPR_U32(ctx, 31, 0x3C28ECu);
    ctx->pc = 0x3C28E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C28E4u;
    // 0x3c28e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3448u, 0x3C28E4u, 0x3C28ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C28ECu;
label_3c28ec:
    // 0x3c28ec: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x3c28ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c28f0: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x3c28f0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x3c28f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3C28F4u;
    {
        const bool branch_taken_0x3c28f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C28F4u;
        // 0x3c28f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c28f4) {
            ctx->pc = 0x3C294Cu;
            goto label_3c294c;
        }
    }
    ctx->pc = 0x3C28FCu;
    // 0x3c28fc: 0x0  nop
    ctx->pc = 0x3c28fcu;
    // NOP
label_3c2900:
    // 0x3c2900: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x3c2900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3c2904: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3C2904u;
    {
        const bool branch_taken_0x3c2904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2904) {
            ctx->pc = 0x3C2984u;
            goto label_3c2984;
        }
    }
    ctx->pc = 0x3C290Cu;
    // 0x3c290c: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C290Cu;
    {
        const bool branch_taken_0x3c290c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x3C2910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C290Cu;
        // 0x3c2910: 0x2a4102b  sltu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c290c) {
            ctx->pc = 0x3C2930u;
            goto label_3c2930;
        }
    }
    ctx->pc = 0x3C2914u;
    // 0x3c2914: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3C2914u;
    {
        const bool branch_taken_0x3c2914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2914) {
            ctx->pc = 0x3C2918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2914u;
            // 0x3c2918: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2944u;
            goto label_3c2944;
        }
    }
    ctx->pc = 0x3C291Cu;
    // 0x3c291c: 0x14950006  bne         $a0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C291Cu;
    {
        const bool branch_taken_0x3c291c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x3C2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C291Cu;
        // 0x3c2920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c291c) {
            ctx->pc = 0x3C2938u;
            goto label_3c2938;
        }
    }
    ctx->pc = 0x3C2924u;
    // 0x3c2924: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x3c2924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3c2928: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2928u;
    {
        const bool branch_taken_0x3c2928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2928) {
            ctx->pc = 0x3C2938u;
            goto label_3c2938;
        }
    }
    ctx->pc = 0x3C2930u;
label_3c2930:
    // 0x3c2930: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C2930u;
    {
        const bool branch_taken_0x3c2930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2930u;
        // 0x3c2934: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2930) {
            ctx->pc = 0x3C2944u;
            goto label_3c2944;
        }
    }
    ctx->pc = 0x3C2938u;
label_3c2938:
    // 0x3c2938: 0xc0f4b84  jal         func_3D2E10
    ctx->pc = 0x3C2938u;
    SET_GPR_U32(ctx, 31, 0x3C2940u);
    ctx->pc = 0x3C293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2938u;
    // 0x3c293c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E10u, 0x3C2938u, 0x3C2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2940u;
label_3c2940:
    // 0x3c2940: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x3c2940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_3c2944:
    // 0x3c2944: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3c2944u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c2948: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c2948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3c294c:
    // 0x3c294c: 0x26e20c11  addiu       $v0, $s7, 0xC11
    ctx->pc = 0x3c294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 3089));
    // 0x3c2950: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3c2950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c2954: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3c2954u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c2958: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x3c2958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3c295c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C295Cu;
    {
        const bool branch_taken_0x3c295c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C295Cu;
        // 0x3c2960: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c295c) {
            ctx->pc = 0x3C296Cu;
            goto label_3c296c;
        }
    }
    ctx->pc = 0x3C2964u;
    // 0x3c2964: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x3C2964u;
    {
        const bool branch_taken_0x3c2964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2964u;
        // 0x3c2968: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2964) {
            ctx->pc = 0x3C2900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2900;
        }
    }
    ctx->pc = 0x3C296Cu;
label_3c296c:
    // 0x3c296c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C296Cu;
    {
        const bool branch_taken_0x3c296c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C296Cu;
        // 0x3c2970: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c296c) {
            ctx->pc = 0x3C2984u;
            goto label_3c2984;
        }
    }
    ctx->pc = 0x3C2974u;
    // 0x3c2974: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3c2974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3c2978: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x3c2978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x3c297c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x3C297Cu;
    {
        const bool branch_taken_0x3c297c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C297Cu;
        // 0x3c2980: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c297c) {
            ctx->pc = 0x3C2900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2900;
        }
    }
    ctx->pc = 0x3C2984u;
label_3c2984:
    // 0x3c2984: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C2984u;
    {
        const bool branch_taken_0x3c2984 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x3C2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2984u;
        // 0x3c2988: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2984) {
            ctx->pc = 0x3C29A0u;
            goto label_3c29a0;
        }
    }
    ctx->pc = 0x3C298Cu;
    // 0x3c298c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c2990: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3c2990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3c2994: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c2994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c2998: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2998u;
    {
        const bool branch_taken_0x3c2998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2998u;
        // 0x3c299c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2998) {
            ctx->pc = 0x3C29A8u;
            goto label_3c29a8;
        }
    }
    ctx->pc = 0x3C29A0u;
label_3c29a0:
    // 0x3c29a0: 0x4102f  dsubu       $v0, $zero, $a0
    ctx->pc = 0x3c29a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x3c29a4: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x3c29a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3c29a8:
    // 0x3c29a8: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C29A8u;
    {
        const bool branch_taken_0x3c29a8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C29ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29A8u;
        // 0x3c29ac: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c29a8) {
            ctx->pc = 0x3C29BCu;
            goto label_3c29bc;
        }
    }
    ctx->pc = 0x3C29B0u;
    // 0x3c29b0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x3c29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3c29b4: 0x74100a  movz        $v0, $v1, $s4
    ctx->pc = 0x3c29b4u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3c29b8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3c29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_3c29bc:
    // 0x3c29bc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3c29bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3c29c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c29c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c29c4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3c29c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c29c8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3c29c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c29cc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3c29ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c29d0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3c29d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c29d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c29d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c29d8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3c29d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c29dc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3c29dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c29e0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3c29e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c29e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c29e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c29e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C29E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C29E8u;
        // 0x3c29ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C29E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C29F0u;
}
