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

// Function: sub_001D2868
// Address: 0x1d2868 - 0x1d29f0
void sub_001D2868_0x1d2868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2868_0x1d2868");
#endif

    switch (ctx->pc) {
        case 0x1d2868u: goto label_1d2868;
        case 0x1d286cu: goto label_1d286c;
        case 0x1d2870u: goto label_1d2870;
        case 0x1d2874u: goto label_1d2874;
        case 0x1d2878u: goto label_1d2878;
        case 0x1d287cu: goto label_1d287c;
        case 0x1d2880u: goto label_1d2880;
        case 0x1d2884u: goto label_1d2884;
        case 0x1d2888u: goto label_1d2888;
        case 0x1d288cu: goto label_1d288c;
        case 0x1d2890u: goto label_1d2890;
        case 0x1d2894u: goto label_1d2894;
        case 0x1d2898u: goto label_1d2898;
        case 0x1d289cu: goto label_1d289c;
        case 0x1d28a0u: goto label_1d28a0;
        case 0x1d28a4u: goto label_1d28a4;
        case 0x1d28a8u: goto label_1d28a8;
        case 0x1d28acu: goto label_1d28ac;
        case 0x1d28b0u: goto label_1d28b0;
        case 0x1d28b4u: goto label_1d28b4;
        case 0x1d28b8u: goto label_1d28b8;
        case 0x1d28bcu: goto label_1d28bc;
        case 0x1d28c0u: goto label_1d28c0;
        case 0x1d28c4u: goto label_1d28c4;
        case 0x1d28c8u: goto label_1d28c8;
        case 0x1d28ccu: goto label_1d28cc;
        case 0x1d28d0u: goto label_1d28d0;
        case 0x1d28d4u: goto label_1d28d4;
        case 0x1d28d8u: goto label_1d28d8;
        case 0x1d28dcu: goto label_1d28dc;
        case 0x1d28e0u: goto label_1d28e0;
        case 0x1d28e4u: goto label_1d28e4;
        case 0x1d28e8u: goto label_1d28e8;
        case 0x1d28ecu: goto label_1d28ec;
        case 0x1d28f0u: goto label_1d28f0;
        case 0x1d28f4u: goto label_1d28f4;
        case 0x1d28f8u: goto label_1d28f8;
        case 0x1d28fcu: goto label_1d28fc;
        case 0x1d2900u: goto label_1d2900;
        case 0x1d2904u: goto label_1d2904;
        case 0x1d2908u: goto label_1d2908;
        case 0x1d290cu: goto label_1d290c;
        case 0x1d2910u: goto label_1d2910;
        case 0x1d2914u: goto label_1d2914;
        case 0x1d2918u: goto label_1d2918;
        case 0x1d291cu: goto label_1d291c;
        case 0x1d2920u: goto label_1d2920;
        case 0x1d2924u: goto label_1d2924;
        case 0x1d2928u: goto label_1d2928;
        case 0x1d292cu: goto label_1d292c;
        case 0x1d2930u: goto label_1d2930;
        case 0x1d2934u: goto label_1d2934;
        case 0x1d2938u: goto label_1d2938;
        case 0x1d293cu: goto label_1d293c;
        case 0x1d2940u: goto label_1d2940;
        case 0x1d2944u: goto label_1d2944;
        case 0x1d2948u: goto label_1d2948;
        case 0x1d294cu: goto label_1d294c;
        case 0x1d2950u: goto label_1d2950;
        case 0x1d2954u: goto label_1d2954;
        case 0x1d2958u: goto label_1d2958;
        case 0x1d295cu: goto label_1d295c;
        case 0x1d2960u: goto label_1d2960;
        case 0x1d2964u: goto label_1d2964;
        case 0x1d2968u: goto label_1d2968;
        case 0x1d296cu: goto label_1d296c;
        case 0x1d2970u: goto label_1d2970;
        case 0x1d2974u: goto label_1d2974;
        case 0x1d2978u: goto label_1d2978;
        case 0x1d297cu: goto label_1d297c;
        case 0x1d2980u: goto label_1d2980;
        case 0x1d2984u: goto label_1d2984;
        case 0x1d2988u: goto label_1d2988;
        case 0x1d298cu: goto label_1d298c;
        case 0x1d2990u: goto label_1d2990;
        case 0x1d2994u: goto label_1d2994;
        case 0x1d2998u: goto label_1d2998;
        case 0x1d299cu: goto label_1d299c;
        case 0x1d29a0u: goto label_1d29a0;
        case 0x1d29a4u: goto label_1d29a4;
        case 0x1d29a8u: goto label_1d29a8;
        case 0x1d29acu: goto label_1d29ac;
        case 0x1d29b0u: goto label_1d29b0;
        case 0x1d29b4u: goto label_1d29b4;
        case 0x1d29b8u: goto label_1d29b8;
        case 0x1d29bcu: goto label_1d29bc;
        case 0x1d29c0u: goto label_1d29c0;
        case 0x1d29c4u: goto label_1d29c4;
        case 0x1d29c8u: goto label_1d29c8;
        case 0x1d29ccu: goto label_1d29cc;
        case 0x1d29d0u: goto label_1d29d0;
        case 0x1d29d4u: goto label_1d29d4;
        case 0x1d29d8u: goto label_1d29d8;
        case 0x1d29dcu: goto label_1d29dc;
        case 0x1d29e0u: goto label_1d29e0;
        case 0x1d29e4u: goto label_1d29e4;
        case 0x1d29e8u: goto label_1d29e8;
        case 0x1d29ecu: goto label_1d29ec;
        default: break;
    }

    ctx->pc = 0x1d2868u;

label_1d2868:
    // 0x1d2868: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d2868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d286c:
    // 0x1d286c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1d286cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1d2870:
    // 0x1d2870: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1d2870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1d2874:
    // 0x1d2874: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d2874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d2878:
    // 0x1d2878: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1d2878u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1d287c:
    // 0x1d287c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d287cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2880:
    // 0x1d2880: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d2880u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1d2884:
    // 0x1d2884: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d2884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1d2888:
    // 0x1d2888: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d2888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1d288c:
    // 0x1d288c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1d2890:
    // 0x1d2890: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d2890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1d2894:
    // 0x1d2894: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1d2894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1d2898:
    // 0x1d2898: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1d2898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1d289c:
    // 0x1d289c: 0x7e800000  sq          $zero, 0x0($s4)
    ctx->pc = 0x1d289cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 0));
label_1d28a0:
    // 0x1d28a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d28a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d28a4:
    // 0x1d28a4: 0x0  nop
    ctx->pc = 0x1d28a4u;
    // NOP
label_1d28a8:
    // 0x1d28a8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1d28a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d28ac:
    // 0x1d28ac: 0x0  nop
    ctx->pc = 0x1d28acu;
    // NOP
label_1d28b0:
    // 0x1d28b0: 0x45000044  bc1f        . + 4 + (0x44 << 2)
label_1d28b4:
    if (ctx->pc == 0x1D28B4u) {
        ctx->pc = 0x1D28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28B0u;
        // 0x1d28b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D28B8u;
        goto label_1d28b8;
    }
    ctx->pc = 0x1D28B0u;
    {
        const bool branch_taken_0x1d28b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28B0u;
        // 0x1d28b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28b0) {
            ctx->pc = 0x1D29C4u;
            goto label_1d29c4;
        }
    }
    ctx->pc = 0x1D28B8u;
label_1d28b8:
    // 0x1d28b8: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x1d28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_1d28bc:
    // 0x1d28bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d28c0:
    // 0x1d28c0: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x1d28c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
label_1d28c4:
    // 0x1d28c4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1d28c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_1d28c8:
    // 0x1d28c8: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
label_1d28cc:
    if (ctx->pc == 0x1D28CCu) {
        ctx->pc = 0x1D28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28C8u;
        // 0x1d28cc: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D28D0u;
        goto label_1d28d0;
    }
    ctx->pc = 0x1D28C8u;
    {
        const bool branch_taken_0x1d28c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28C8u;
        // 0x1d28cc: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28c8) {
            ctx->pc = 0x1D28D4u;
            goto label_1d28d4;
        }
    }
    ctx->pc = 0x1D28D0u;
label_1d28d0:
    // 0x1d28d0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1d28d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d28d4:
    // 0x1d28d4: 0x8eb20094  lw          $s2, 0x94($s5)
    ctx->pc = 0x1d28d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_1d28d8:
    // 0x1d28d8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d28d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1d28dc:
    // 0x1d28dc: 0x24638e90  addiu       $v1, $v1, -0x7170
    ctx->pc = 0x1d28dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938256));
label_1d28e0:
    // 0x1d28e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d28e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1d28e4:
    // 0x1d28e4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1d28e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d28e8:
    // 0x1d28e8: 0x3c160049  lui         $s6, 0x49
    ctx->pc = 0x1d28e8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)73 << 16));
label_1d28ec:
    // 0x1d28ec: 0x26d3f290  addiu       $s3, $s6, -0xD70
    ctx->pc = 0x1d28ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963856));
label_1d28f0:
    // 0x1d28f0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1d28f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1d28f4:
    // 0x1d28f4: 0x101742  srl         $v0, $s0, 29
    ctx->pc = 0x1d28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d28f8:
    // 0x1d28f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d28f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d28fc:
    // 0x1d28fc: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d28fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d2900:
    // 0x1d2900: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d2900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d2904:
    // 0x1d2904: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d2904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d2908:
    // 0x1d2908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d290c:
    // 0x1d290c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d290cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d2910:
    // 0x1d2910: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d2910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2914:
    // 0x1d2914: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x1d2914u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d2918:
    // 0x1d2918: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d291c:
    // 0x1d291c: 0xe0f809  jalr        $a3
label_1d2920:
    if (ctx->pc == 0x1D2920u) {
        ctx->pc = 0x1D2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D291Cu;
        // 0x1d2920: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2924u;
        goto label_1d2924;
    }
    ctx->pc = 0x1D291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D2924u);
        ctx->pc = 0x1D2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D291Cu;
        // 0x1d2920: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D291Cu, 0x1D2924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2924u;
label_1d2924:
    // 0x1d2924: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x1d2924u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d2928:
    // 0x1d2928: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
label_1d292c:
    if (ctx->pc == 0x1D292Cu) {
        ctx->pc = 0x1D292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2928u;
        // 0x1d292c: 0x8ea30094  lw          $v1, 0x94($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2930u;
        goto label_1d2930;
    }
    ctx->pc = 0x1D2928u;
    {
        const bool branch_taken_0x1d2928 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2928) {
            ctx->pc = 0x1D292Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2928u;
            // 0x1d292c: 0x8ea30094  lw          $v1, 0x94($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D293Cu;
            goto label_1d293c;
        }
    }
    ctx->pc = 0x1D2930u;
label_1d2930:
    // 0x1d2930: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1d2930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2934:
    // 0x1d2934: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1d2934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1d2938:
    // 0x1d2938: 0x8ea30094  lw          $v1, 0x94($s5)
    ctx->pc = 0x1d2938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_1d293c:
    // 0x1d293c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2940:
    // 0x1d2940: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1d2940u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_1d2944:
    // 0x1d2944: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2948:
    // 0x1d2948: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1d294c:
    if (ctx->pc == 0x1D294Cu) {
        ctx->pc = 0x1D294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2948u;
        // 0x1d294c: 0xc6c1f290  lwc1        $f1, -0xD70($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294963856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2950u;
        goto label_1d2950;
    }
    ctx->pc = 0x1D2948u;
    {
        const bool branch_taken_0x1d2948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2948u;
        // 0x1d294c: 0xc6c1f290  lwc1        $f1, -0xD70($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294963856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2948) {
            ctx->pc = 0x1D29C4u;
            goto label_1d29c4;
        }
    }
    ctx->pc = 0x1D2950u;
label_1d2950:
    // 0x1d2950: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x1d2950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d2954:
    // 0x1d2954: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x1d2954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d2958:
    // 0x1d2958: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1d2958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d295c:
    // 0x1d295c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1d295cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_1d2960:
    // 0x1d2960: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1d2960u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_1d2964:
    // 0x1d2964: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d2964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1d2968:
    // 0x1d2968: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1d2968u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1d296c:
    // 0x1d296c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1d296cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d2970:
    // 0x1d2970: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1d2970u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d2974:
    // 0x1d2974: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1d2974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d2978:
    // 0x1d2978: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1d2978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d297c:
    // 0x1d297c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d297cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2980:
    // 0x1d2980: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1d2980u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d2984:
    // 0x1d2984: 0x92a20090  lbu         $v0, 0x90($s5)
    ctx->pc = 0x1d2984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_1d2988:
    // 0x1d2988: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d298c:
    // 0x1d298c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1d2990:
    if (ctx->pc == 0x1D2990u) {
        ctx->pc = 0x1D2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D298Cu;
        // 0x1d2990: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2994u;
        goto label_1d2994;
    }
    ctx->pc = 0x1D298Cu;
    {
        const bool branch_taken_0x1d298c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D298Cu;
        // 0x1d2990: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d298c) {
            ctx->pc = 0x1D29C8u;
            goto label_1d29c8;
        }
    }
    ctx->pc = 0x1D2994u;
label_1d2994:
    // 0x1d2994: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1d2994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2998:
    // 0x1d2998: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1d2998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d299c:
    // 0x1d299c: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x1d299cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d29a0:
    // 0x1d29a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d29a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d29a4:
    // 0x1d29a4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1d29a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1d29a8:
    // 0x1d29a8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1d29a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_1d29ac:
    // 0x1d29ac: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1d29acu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1d29b0:
    // 0x1d29b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d29b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d29b4:
    // 0x1d29b4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1d29b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d29b8:
    // 0x1d29b8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1d29b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d29bc:
    // 0x1d29bc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d29bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d29c0:
    // 0x1d29c0: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1d29c0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d29c4:
    // 0x1d29c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d29c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d29c8:
    // 0x1d29c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d29c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d29cc:
    // 0x1d29cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d29ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d29d0:
    // 0x1d29d0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d29d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d29d4:
    // 0x1d29d4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d29d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d29d8:
    // 0x1d29d8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d29d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d29dc:
    // 0x1d29dc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d29dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d29e0:
    // 0x1d29e0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1d29e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1d29e4:
    // 0x1d29e4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1d29e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d29e8:
    // 0x1d29e8: 0x3e00008  jr          $ra
label_1d29ec:
    if (ctx->pc == 0x1D29ECu) {
        ctx->pc = 0x1D29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29E8u;
        // 0x1d29ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D29F0u;
        goto label_fallthrough_0x1d29e8;
    }
    ctx->pc = 0x1D29E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29E8u;
        // 0x1d29ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d29e8:
    ctx->pc = 0x1D29F0u;
}
