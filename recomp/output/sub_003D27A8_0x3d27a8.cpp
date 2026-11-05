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

// Function: sub_003D27A8
// Address: 0x3d27a8 - 0x3d2e10
void sub_003D27A8_0x3d27a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D27A8_0x3d27a8");
#endif

    ctx->pc = 0x3d27a8u;

    // 0x3d27a8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3d27a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d27ac: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d27acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d27b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3d27b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3d27b4: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x3d27b4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3d27b8: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x3d27b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3d27bc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3d27bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3d27c0: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D27C0u;
    {
        const bool branch_taken_0x3d27c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3D27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27C0u;
        // 0x3d27c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d27c0) {
            ctx->pc = 0x3D281Cu;
            goto label_3d281c;
        }
    }
    ctx->pc = 0x3D27C8u;
    // 0x3d27c8: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x3d27c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3d27cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d27ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d27d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d27d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d27d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d27d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d27d8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3d27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3d27dc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3d27dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3d27e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d27e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d27e4: 0x41823  negu        $v1, $a0
    ctx->pc = 0x3d27e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3d27e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d27e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d27ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3d27ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3d27f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3d27f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3d27f4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3d27f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3d27f8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3d27f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d27fc: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3d27fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3d2800: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d2800u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d2804: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3d2804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d2808: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x3d2808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3d280c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3d280cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d2810: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d2810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d2814: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x3d2814u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3d2818: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x3d2818u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_3d281c:
    // 0x3d281c: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x3d281cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3d2820: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D2820u;
    {
        const bool branch_taken_0x3d2820 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3D2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2820u;
        // 0x3d2824: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2820) {
            ctx->pc = 0x3D2870u;
            goto label_3d2870;
        }
    }
    ctx->pc = 0x3D2828u;
    // 0x3d2828: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3d2828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3d282c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d282cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d2830: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d2830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d2834: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d2834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d2838: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3d2838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3d283c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x3d283cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x3d2840: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d2840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d2844: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d2844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d2848: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3d2848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x3d284c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d284cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d2850: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3d2850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3d2854: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3d2854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3d2858: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d2858u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d285c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3d285cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d2860: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x3d2860u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x3d2864: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x3d2864u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d2868: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3d2868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3d286c: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x3d286cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_3d2870:
    // 0x3d2870: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x3d2870u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3d2874: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x3d2874u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x3d2878: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x3d2878u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3d287c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x3d287cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3d2880: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x3d2880u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x3d2884: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x3d2884u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3d2888: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3d2888u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3d288c: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x3D288Cu;
    {
        const bool branch_taken_0x3d288c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D288Cu;
        // 0x3d2890: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d288c) {
            ctx->pc = 0x3D2B5Cu;
            goto label_3d2b5c;
        }
    }
    ctx->pc = 0x3D2894u;
    // 0x3d2894: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x3d2894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d2898: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3D2898u;
    {
        const bool branch_taken_0x3d2898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2898u;
        // 0x3d289c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2898) {
            ctx->pc = 0x3D2928u;
            goto label_3d2928;
        }
    }
    ctx->pc = 0x3D28A0u;
    // 0x3d28a0: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3d28a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d28a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D28A4u;
    {
        const bool branch_taken_0x3d28a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D28A4u;
        // 0x3d28a8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d28a4) {
            ctx->pc = 0x3D28C0u;
            goto label_3d28c0;
        }
    }
    ctx->pc = 0x3D28ACu;
    // 0x3d28ac: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x3d28acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3d28b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d28b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d28b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D28B4u;
    {
        const bool branch_taken_0x3d28b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D28B4u;
        // 0x3d28b8: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d28b4) {
            ctx->pc = 0x3D28D8u;
            goto label_3d28d8;
        }
    }
    ctx->pc = 0x3D28BCu;
    // 0x3d28bc: 0x0  nop
    ctx->pc = 0x3d28bcu;
    // NOP
label_3d28c0:
    // 0x3d28c0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3d28c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3d28c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d28c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d28c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d28c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d28cc: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3d28ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d28d0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3d28d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3d28d4: 0x0  nop
    ctx->pc = 0x3d28d4u;
    // NOP
label_3d28d8:
    // 0x3d28d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d28dc: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x3d28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3d28e0: 0x24422118  addiu       $v0, $v0, 0x2118
    ctx->pc = 0x3d28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8472));
    // 0x3d28e4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3d28e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d28e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d28e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d28ec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d28ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d28f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d28f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d28f4: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x3d28f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d28f8: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D28F8u;
    {
        const bool branch_taken_0x3d28f8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D28F8u;
        // 0x3d28fc: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d28f8) {
            ctx->pc = 0x3D2914u;
            goto label_3d2914;
        }
    }
    ctx->pc = 0x3D2900u;
    // 0x3d2900: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3d2900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d2904: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x3d2904u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x3d2908: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3d2908u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d290c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3d290cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d2910: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3d2910u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_3d2914:
    // 0x3d2914: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3d2914u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3d2918: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x3d2918u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3d291c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3D291Cu;
    {
        const bool branch_taken_0x3d291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D291Cu;
        // 0x3d2920: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d291c) {
            ctx->pc = 0x3D2AA0u;
            goto label_3d2aa0;
        }
    }
    ctx->pc = 0x3D2924u;
    // 0x3d2924: 0x0  nop
    ctx->pc = 0x3d2924u;
    // NOP
label_3d2928:
    // 0x3d2928: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2928u;
    {
        const bool branch_taken_0x3d2928 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2928u;
        // 0x3d292c: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2928) {
            ctx->pc = 0x3D2950u;
            goto label_3d2950;
        }
    }
    ctx->pc = 0x3D2930u;
    // 0x3d2930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d2930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2934: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2934u;
    {
        const bool branch_taken_0x3d2934 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2934) {
            ctx->pc = 0x3D2938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2934u;
            // 0x3d2938: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D293Cu;
            goto label_3d293c;
        }
    }
    ctx->pc = 0x3D293Cu;
label_3d293c:
    // 0x3d293c: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x3d293cu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3d2940: 0x1012  mflo        $v0
    ctx->pc = 0x3d2940u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d2944: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3d2944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2948: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3d2948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3d294c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3d294cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3d2950:
    // 0x3d2950: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2950u;
    {
        const bool branch_taken_0x3d2950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2950u;
        // 0x3d2954: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2950) {
            ctx->pc = 0x3D2968u;
            goto label_3d2968;
        }
    }
    ctx->pc = 0x3D2958u;
    // 0x3d2958: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x3d2958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3d295c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d295cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d2960: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2960u;
    {
        const bool branch_taken_0x3d2960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2960u;
        // 0x3d2964: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2960) {
            ctx->pc = 0x3D2980u;
            goto label_3d2980;
        }
    }
    ctx->pc = 0x3D2968u;
label_3d2968:
    // 0x3d2968: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3d2968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3d296c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d2970: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d2970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d2974: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3d2974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d2978: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3d2978u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3d297c: 0x0  nop
    ctx->pc = 0x3d297cu;
    // NOP
label_3d2980:
    // 0x3d2980: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d2980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d2984: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x3d2984u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3d2988: 0x24422118  addiu       $v0, $v0, 0x2118
    ctx->pc = 0x3d2988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8472));
    // 0x3d298c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3d298cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d2990: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d2990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d2994: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d2994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d2998: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d2998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d299c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x3d299cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d29a0: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D29A0u;
    {
        const bool branch_taken_0x3d29a0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D29A0u;
        // 0x3d29a4: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d29a0) {
            ctx->pc = 0x3D29B8u;
            goto label_3d29b8;
        }
    }
    ctx->pc = 0x3D29A8u;
    // 0x3d29a8: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x3d29a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3d29ac: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3d29acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3d29b0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3D29B0u;
    {
        const bool branch_taken_0x3d29b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D29B0u;
        // 0x3d29b4: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d29b0) {
            ctx->pc = 0x3D2A94u;
            goto label_3d2a94;
        }
    }
    ctx->pc = 0x3D29B8u;
label_3d29b8:
    // 0x3d29b8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3d29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d29bc: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x3d29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d29c0: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x3d29c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d29c4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3d29c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d29c8: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3d29c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d29cc: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3d29ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d29d0: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3d29d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3d29d4: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x3d29d4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3d29d8: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x3d29d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3d29dc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3d29dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d29e0: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x3d29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x3d29e4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D29E4u;
    {
        const bool branch_taken_0x3d29e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d29e4) {
            ctx->pc = 0x3D29E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D29E4u;
            // 0x3d29e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D29ECu;
            goto label_3d29ec;
        }
    }
    ctx->pc = 0x3D29ECu;
label_3d29ec:
    // 0x3d29ec: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x3d29ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d29f0: 0x1012  mflo        $v0
    ctx->pc = 0x3d29f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d29f4: 0x1810  mfhi        $v1
    ctx->pc = 0x3d29f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d29f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d29f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d29fc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d29fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d2a00: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d2a00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d2a04: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x3d2a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d2a08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d2a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d2a0c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d2a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d2a10: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3D2A10u;
    {
        const bool branch_taken_0x3d2a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2a10) {
            ctx->pc = 0x3D2A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2A10u;
            // 0x3d2a14: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2A3Cu;
            goto label_3d2a3c;
        }
    }
    ctx->pc = 0x3D2A18u;
    // 0x3d2a18: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d2a1c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3d2a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d2a20: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D2A20u;
    {
        const bool branch_taken_0x3d2a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2a20) {
            ctx->pc = 0x3D2A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2A20u;
            // 0x3d2a24: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2A3Cu;
            goto label_3d2a3c;
        }
    }
    ctx->pc = 0x3D2A28u;
    // 0x3d2a28: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d2a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d2a2c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D2A2Cu;
    {
        const bool branch_taken_0x3d2a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2a2c) {
            ctx->pc = 0x3D2A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2A2Cu;
            // 0x3d2a30: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2A38u;
            goto label_3d2a38;
        }
    }
    ctx->pc = 0x3D2A34u;
    // 0x3d2a34: 0x0  nop
    ctx->pc = 0x3d2a34u;
    // NOP
label_3d2a38:
    // 0x3d2a38: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3d2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d2a3c:
    // 0x3d2a3c: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x3d2a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3d2a40: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x3d2a40u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3d2a44: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2A44u;
    {
        const bool branch_taken_0x3d2a44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2a44) {
            ctx->pc = 0x3D2A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2A44u;
            // 0x3d2a48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2A4Cu;
            goto label_3d2a4c;
        }
    }
    ctx->pc = 0x3D2A4Cu;
label_3d2a4c:
    // 0x3d2a4c: 0x1012  mflo        $v0
    ctx->pc = 0x3d2a4cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d2a50: 0x1810  mfhi        $v1
    ctx->pc = 0x3d2a50u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d2a54: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d2a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d2a58: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d2a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d2a5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d2a5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d2a60: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x3d2a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d2a64: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d2a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d2a68: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d2a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d2a6c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2A6Cu;
    {
        const bool branch_taken_0x3d2a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2a6c) {
            ctx->pc = 0x3D2A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2A6Cu;
            // 0x3d2a70: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2A94u;
            goto label_3d2a94;
        }
    }
    ctx->pc = 0x3D2A74u;
    // 0x3d2a74: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d2a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d2a78: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3d2a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d2a7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2A7Cu;
    {
        const bool branch_taken_0x3d2a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A7Cu;
        // 0x3d2a80: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2a7c) {
            ctx->pc = 0x3D2A94u;
            goto label_3d2a94;
        }
    }
    ctx->pc = 0x3D2A84u;
    // 0x3d2a84: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d2a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d2a88: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2A88u;
    {
        const bool branch_taken_0x3d2a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2a88) {
            ctx->pc = 0x3D2A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2A88u;
            // 0x3d2a8c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2A90u;
            goto label_3d2a90;
        }
    }
    ctx->pc = 0x3D2A90u;
label_3d2a90:
    // 0x3d2a90: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x3d2a90u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d2a94:
    // 0x3d2a94: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x3d2a94u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x3d2a98: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3d2a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2a9c: 0x0  nop
    ctx->pc = 0x3d2a9cu;
    // NOP
label_3d2aa0:
    // 0x3d2aa0: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x3d2aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x3d2aa4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2AA4u;
    {
        const bool branch_taken_0x3d2aa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2aa4) {
            ctx->pc = 0x3D2AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2AA4u;
            // 0x3d2aa8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2AACu;
            goto label_3d2aac;
        }
    }
    ctx->pc = 0x3D2AACu;
label_3d2aac:
    // 0x3d2aac: 0x1012  mflo        $v0
    ctx->pc = 0x3d2aacu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d2ab0: 0x1810  mfhi        $v1
    ctx->pc = 0x3d2ab0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d2ab4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d2ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d2ab8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d2ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d2abc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d2abcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d2ac0: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x3d2ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d2ac4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d2ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d2ac8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d2ac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d2acc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2ACCu;
    {
        const bool branch_taken_0x3d2acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2acc) {
            ctx->pc = 0x3D2AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2ACCu;
            // 0x3d2ad0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2AF4u;
            goto label_3d2af4;
        }
    }
    ctx->pc = 0x3D2AD4u;
    // 0x3d2ad4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d2ad8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3d2ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d2adc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2ADCu;
    {
        const bool branch_taken_0x3d2adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2adc) {
            ctx->pc = 0x3D2AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2ADCu;
            // 0x3d2ae0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2AF4u;
            goto label_3d2af4;
        }
    }
    ctx->pc = 0x3D2AE4u;
    // 0x3d2ae4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d2ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d2ae8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2AE8u;
    {
        const bool branch_taken_0x3d2ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2ae8) {
            ctx->pc = 0x3D2AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2AE8u;
            // 0x3d2aec: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2AF0u;
            goto label_3d2af0;
        }
    }
    ctx->pc = 0x3D2AF0u;
label_3d2af0:
    // 0x3d2af0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3d2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3d2af4:
    // 0x3d2af4: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x3d2af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3d2af8: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3d2af8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3d2afc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2AFCu;
    {
        const bool branch_taken_0x3d2afc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2afc) {
            ctx->pc = 0x3D2B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2AFCu;
            // 0x3d2b00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2B04u;
            goto label_3d2b04;
        }
    }
    ctx->pc = 0x3D2B04u;
label_3d2b04:
    // 0x3d2b04: 0x1012  mflo        $v0
    ctx->pc = 0x3d2b04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d2b08: 0x1810  mfhi        $v1
    ctx->pc = 0x3d2b08u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d2b0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d2b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d2b10: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d2b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d2b14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d2b14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d2b18: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x3d2b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d2b1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d2b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d2b20: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3d2b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d2b24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2B24u;
    {
        const bool branch_taken_0x3d2b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2b24) {
            ctx->pc = 0x3D2B44u;
            goto label_3d2b44;
        }
    }
    ctx->pc = 0x3D2B2Cu;
    // 0x3d2b2c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3d2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3d2b30: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3d2b30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d2b34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2B34u;
    {
        const bool branch_taken_0x3d2b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B34u;
        // 0x3d2b38: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b34) {
            ctx->pc = 0x3D2B44u;
            goto label_3d2b44;
        }
    }
    ctx->pc = 0x3D2B3Cu;
    // 0x3d2b3c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2B3Cu;
    {
        const bool branch_taken_0x3d2b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2b3c) {
            ctx->pc = 0x3D2B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2B3Cu;
            // 0x3d2b40: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2B44u;
            goto label_3d2b44;
        }
    }
    ctx->pc = 0x3D2B44u;
label_3d2b44:
    // 0x3d2b44: 0x13200097  beqz        $t9, . + 4 + (0x97 << 2)
    ctx->pc = 0x3D2B44u;
    {
        const bool branch_taken_0x3d2b44 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B44u;
        // 0x3d2b48: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b44) {
            ctx->pc = 0x3D2DA4u;
            goto label_3d2da4;
        }
    }
    ctx->pc = 0x3D2B4Cu;
    // 0x3d2b4c: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x3d2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d2b50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d2b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d2b54: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x3D2B54u;
    {
        const bool branch_taken_0x3d2b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B54u;
        // 0x3d2b58: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b54) {
            ctx->pc = 0x3D2DA0u;
            goto label_3d2da0;
        }
    }
    ctx->pc = 0x3D2B5Cu;
label_3d2b5c:
    // 0x3d2b5c: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x3d2b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d2b60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D2B60u;
    {
        const bool branch_taken_0x3d2b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B60u;
        // 0x3d2b64: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b60) {
            ctx->pc = 0x3D2B7Cu;
            goto label_3d2b7c;
        }
    }
    ctx->pc = 0x3D2B68u;
    // 0x3d2b68: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x3d2b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3d2b6c: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x3d2b6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d2b70: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x3d2b70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x3d2b74: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3D2B74u;
    {
        const bool branch_taken_0x3d2b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B74u;
        // 0x3d2b78: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b74) {
            ctx->pc = 0x3D2DA4u;
            goto label_3d2da4;
        }
    }
    ctx->pc = 0x3D2B7Cu;
label_3d2b7c:
    // 0x3d2b7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3d2b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3d2b80: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3d2b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d2b84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D2B84u;
    {
        const bool branch_taken_0x3d2b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B84u;
        // 0x3d2b88: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b84) {
            ctx->pc = 0x3D2BA0u;
            goto label_3d2ba0;
        }
    }
    ctx->pc = 0x3D2B8Cu;
    // 0x3d2b8c: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x3d2b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3d2b90: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3d2b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d2b94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D2B94u;
    {
        const bool branch_taken_0x3d2b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B94u;
        // 0x3d2b98: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b94) {
            ctx->pc = 0x3D2BB8u;
            goto label_3d2bb8;
        }
    }
    ctx->pc = 0x3D2B9Cu;
    // 0x3d2b9c: 0x0  nop
    ctx->pc = 0x3d2b9cu;
    // NOP
label_3d2ba0:
    // 0x3d2ba0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x3d2ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3d2ba4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d2ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d2ba8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d2ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d2bac: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3d2bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d2bb0: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x3d2bb0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x3d2bb4: 0x0  nop
    ctx->pc = 0x3d2bb4u;
    // NOP
label_3d2bb8:
    // 0x3d2bb8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d2bbc: 0xc92006  srlv        $a0, $t1, $a2
    ctx->pc = 0x3d2bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3d2bc0: 0x24422118  addiu       $v0, $v0, 0x2118
    ctx->pc = 0x3d2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8472));
    // 0x3d2bc4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3d2bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d2bc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d2bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d2bcc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3d2bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d2bd0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3d2bd4: 0xa36823  subu        $t5, $a1, $v1
    ctx->pc = 0x3d2bd4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3d2bd8: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D2BD8u;
    {
        const bool branch_taken_0x3d2bd8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2BD8u;
        // 0x3d2bdc: 0xad7023  subu        $t6, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2bd8) {
            ctx->pc = 0x3D2C20u;
            goto label_3d2c20;
        }
    }
    ctx->pc = 0x3D2BE0u;
    // 0x3d2be0: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x3d2be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3d2be4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2BE4u;
    {
        const bool branch_taken_0x3d2be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2BE4u;
        // 0x3d2be8: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2be4) {
            ctx->pc = 0x3D2BF8u;
            goto label_3d2bf8;
        }
    }
    ctx->pc = 0x3D2BECu;
    // 0x3d2bec: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x3d2becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3d2bf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2BF0u;
    {
        const bool branch_taken_0x3d2bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2bf0) {
            ctx->pc = 0x3D2C08u;
            goto label_3d2c08;
        }
    }
    ctx->pc = 0x3D2BF8u;
label_3d2bf8:
    // 0x3d2bf8: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x3d2bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3d2bfc: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3d2bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d2c00: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x3d2c00u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d2c04: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3d2c04u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d2c08:
    // 0x3d2c08: 0x13200066  beqz        $t9, . + 4 + (0x66 << 2)
    ctx->pc = 0x3D2C08u;
    {
        const bool branch_taken_0x3d2c08 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C08u;
        // 0x3d2c0c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c08) {
            ctx->pc = 0x3D2DA4u;
            goto label_3d2da4;
        }
    }
    ctx->pc = 0x3D2C10u;
    // 0x3d2c10: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x3d2c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3d2c14: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x3d2c14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d2c18: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3D2C18u;
    {
        const bool branch_taken_0x3d2c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C18u;
        // 0x3d2c1c: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c18) {
            ctx->pc = 0x3D2DA0u;
            goto label_3d2da0;
        }
    }
    ctx->pc = 0x3D2C20u;
label_3d2c20:
    // 0x3d2c20: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3d2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d2c24: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x3d2c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d2c28: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x3d2c28u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d2c2c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x3d2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d2c30: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x3d2c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d2c34: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3d2c34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d2c38: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x3d2c38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3d2c3c: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3d2c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d2c40: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3d2c40u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d2c44: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x3d2c44u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3d2c48: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x3d2c48u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3d2c4c: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x3d2c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3d2c50: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x3d2c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x3d2c54: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2C54u;
    {
        const bool branch_taken_0x3d2c54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2c54) {
            ctx->pc = 0x3D2C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2C54u;
            // 0x3d2c58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2C5Cu;
            goto label_3d2c5c;
        }
    }
    ctx->pc = 0x3D2C5Cu;
label_3d2c5c:
    // 0x3d2c5c: 0x1012  mflo        $v0
    ctx->pc = 0x3d2c5cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d2c60: 0x1810  mfhi        $v1
    ctx->pc = 0x3d2c60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d2c64: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3d2c64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2c68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d2c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d2c6c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d2c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d2c70: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d2c70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d2c74: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x3d2c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3d2c78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d2c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d2c7c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3d2c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d2c80: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3D2C80u;
    {
        const bool branch_taken_0x3d2c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2c80) {
            ctx->pc = 0x3D2C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2C80u;
            // 0x3d2c84: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2CB4u;
            goto label_3d2cb4;
        }
    }
    ctx->pc = 0x3D2C88u;
    // 0x3d2c88: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3d2c8c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3d2c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d2c90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2C90u;
    {
        const bool branch_taken_0x3d2c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C90u;
        // 0x3d2c94: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c90) {
            ctx->pc = 0x3D2CB0u;
            goto label_3d2cb0;
        }
    }
    ctx->pc = 0x3D2C98u;
    // 0x3d2c98: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3d2c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d2c9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2C9Cu;
    {
        const bool branch_taken_0x3d2c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2c9c) {
            ctx->pc = 0x3D2CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2C9Cu;
            // 0x3d2ca0: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2CB4u;
            goto label_3d2cb4;
        }
    }
    ctx->pc = 0x3D2CA4u;
    // 0x3d2ca4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3d2ca4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3d2ca8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3d2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3d2cac: 0x0  nop
    ctx->pc = 0x3d2cacu;
    // NOP
label_3d2cb0:
    // 0x3d2cb0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3d2cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3d2cb4:
    // 0x3d2cb4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2CB4u;
    {
        const bool branch_taken_0x3d2cb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2cb4) {
            ctx->pc = 0x3D2CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2CB4u;
            // 0x3d2cb8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2CBCu;
            goto label_3d2cbc;
        }
    }
    ctx->pc = 0x3D2CBCu;
label_3d2cbc:
    // 0x3d2cbc: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x3d2cbcu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3d2cc0: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x3d2cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3d2cc4: 0x1012  mflo        $v0
    ctx->pc = 0x3d2cc4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d2cc8: 0x1810  mfhi        $v1
    ctx->pc = 0x3d2cc8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3d2ccc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3d2cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2cd0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d2cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d2cd4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3d2cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3d2cd8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d2cd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d2cdc: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x3d2cdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3d2ce0: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x3d2ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d2ce4: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3d2ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d2ce8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D2CE8u;
    {
        const bool branch_taken_0x3d2ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2CE8u;
        // 0x3d2cec: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2ce8) {
            ctx->pc = 0x3D2D18u;
            goto label_3d2d18;
        }
    }
    ctx->pc = 0x3D2CF0u;
    // 0x3d2cf0: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3d2cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3d2cf4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3d2cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3d2cf8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D2CF8u;
    {
        const bool branch_taken_0x3d2cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2CF8u;
        // 0x3d2cfc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2cf8) {
            ctx->pc = 0x3D2D14u;
            goto label_3d2d14;
        }
    }
    ctx->pc = 0x3D2D00u;
    // 0x3d2d00: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3d2d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d2d04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2D04u;
    {
        const bool branch_taken_0x3d2d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2D04u;
        // 0x3d2d08: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2d04) {
            ctx->pc = 0x3D2D18u;
            goto label_3d2d18;
        }
    }
    ctx->pc = 0x3D2D0Cu;
    // 0x3d2d0c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3d2d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3d2d10: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3d2d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_3d2d14:
    // 0x3d2d14: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x3d2d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_3d2d18:
    // 0x3d2d18: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x3d2d18u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3d2d1c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3d2d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3d2d20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d2d20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d2d24: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3d2d24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2d28: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3d2d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3d2d2c: 0x480019  multu       $v0, $t0
    ctx->pc = 0x3d2d2cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3d2d30: 0x3810  mfhi        $a3
    ctx->pc = 0x3d2d30u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x3d2d34: 0x3012  mflo        $a2
    ctx->pc = 0x3d2d34u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3d2d38: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x3d2d38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d2d3c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D2D3Cu;
    {
        const bool branch_taken_0x3d2d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2D3Cu;
        // 0x3d2d40: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2d3c) {
            ctx->pc = 0x3D2D58u;
            goto label_3d2d58;
        }
    }
    ctx->pc = 0x3D2D44u;
    // 0x3d2d44: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D2D44u;
    {
        const bool branch_taken_0x3d2d44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x3D2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2D44u;
        // 0x3d2d48: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2d44) {
            ctx->pc = 0x3D2D68u;
            goto label_3d2d68;
        }
    }
    ctx->pc = 0x3D2D4Cu;
    // 0x3d2d4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D2D4Cu;
    {
        const bool branch_taken_0x3d2d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2d4c) {
            ctx->pc = 0x3D2D68u;
            goto label_3d2d68;
        }
    }
    ctx->pc = 0x3D2D54u;
    // 0x3d2d54: 0x0  nop
    ctx->pc = 0x3d2d54u;
    // NOP
label_3d2d58:
    // 0x3d2d58: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x3d2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3d2d5c: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x3d2d5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d2d60: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x3d2d60u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d2d64: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d2d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d2d68:
    // 0x3d2d68: 0x1320000e  beqz        $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x3D2D68u;
    {
        const bool branch_taken_0x3d2d68 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2D68u;
        // 0x3d2d6c: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2d68) {
            ctx->pc = 0x3D2DA4u;
            goto label_3d2da4;
        }
    }
    ctx->pc = 0x3D2D70u;
    // 0x3d2d70: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x3d2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3d2d74: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3d2d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d2d78: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x3d2d78u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d2d7c: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x3d2d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3d2d80: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x3d2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d2d84: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x3d2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3d2d88: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3d2d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3d2d8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d2d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d2d90: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3d2d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3d2d94: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x3d2d94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d2d98: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x3d2d98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x3d2d9c: 0x0  nop
    ctx->pc = 0x3d2d9cu;
    // NOP
label_3d2da0:
    // 0x3d2da0: 0xff2f0000  sd          $t7, 0x0($t9)
    ctx->pc = 0x3d2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 15));
label_3d2da4:
    // 0x3d2da4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D2DA4u;
    {
        const bool branch_taken_0x3d2da4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2DA4u;
        // 0x3d2da8: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2da4) {
            ctx->pc = 0x3D2E00u;
            goto label_3d2e00;
        }
    }
    ctx->pc = 0x3D2DACu;
    // 0x3d2dac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3d2dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d2db0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3d2db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3d2db4: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x3d2db4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x3d2db8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3d2db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d2dbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d2dbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d2dc0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3d2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3d2dc4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d2dc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d2dc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d2dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d2dcc: 0x31823  negu        $v1, $v1
    ctx->pc = 0x3d2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3d2dd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d2dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d2dd4: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x3d2dd4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x3d2dd8: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x3d2dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x3d2ddc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3d2ddcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3d2de0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3d2de4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d2de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d2de8: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x3d2de8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3d2dec: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x3d2decu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x3d2df0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3d2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d2df4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d2df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d2df8: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x3d2df8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x3d2dfc: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x3d2dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_3d2e00:
    // 0x3d2e00: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x3d2e00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d2e04: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3d2e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d2e08: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E08u;
        // 0x3d2e0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2E10u;
}
