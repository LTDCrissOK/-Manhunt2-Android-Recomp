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

// Function: sub_001C2680
// Address: 0x1c2680 - 0x1c27c0
void sub_001C2680_0x1c2680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2680_0x1c2680");
#endif

    switch (ctx->pc) {
        case 0x1c26a8u: goto label_1c26a8;
        case 0x1c27a4u: goto label_1c27a4;
        default: break;
    }

    ctx->pc = 0x1c2680u;

    // 0x1c2680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c2684: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c2684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c2688: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c2688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c268c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c268cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2690: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c2690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c2694: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c2694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2698: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1c2698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1c269c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c269cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C26A0u;
    SET_GPR_U32(ctx, 31, 0x1C26A8u);
    ctx->pc = 0x1C26A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26A0u;
    // 0x1c26a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C26A0u, 0x1C26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C26A8u;
label_1c26a8:
    // 0x1c26a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c26ac: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C26ACu;
    {
        const bool branch_taken_0x1c26ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c26ac) {
            ctx->pc = 0x1C2774u;
            goto label_1c2774;
        }
    }
    ctx->pc = 0x1C26B4u;
    // 0x1c26b4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1c26b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c26b8: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c26bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c26c0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1c26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1c26c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c26c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c26c8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c26c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c26cc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c26d0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1c26d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c26d4: 0xc461c61c  lwc1        $f1, -0x39E4($v1)
    ctx->pc = 0x1c26d4u;
    { uint32_t bits = FAST_READ32(0x45C61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c26d8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1c26d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1c26dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c26dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c26e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c26e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c26e4: 0x8ca6036c  lw          $a2, 0x36C($a1)
    ctx->pc = 0x1c26e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x1c26e8: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x1c26e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1c26ec: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C26ECu;
    {
        const bool branch_taken_0x1c26ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26ECu;
        // 0x1c26f0: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26ec) {
            ctx->pc = 0x1C2718u;
            goto label_1c2718;
        }
    }
    ctx->pc = 0x1C26F4u;
    // 0x1c26f4: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c26f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c26fc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1c26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1c2700: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2704: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c2704u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2708: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c270c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2710: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C2710u;
    {
        const bool branch_taken_0x1c2710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2710u;
        // 0x1c2714: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2710) {
            ctx->pc = 0x1C2744u;
            goto label_1c2744;
        }
    }
    ctx->pc = 0x1C2718u;
label_1c2718:
    // 0x1c2718: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x1c2718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c271c: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C271Cu;
    {
        const bool branch_taken_0x1c271c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c271c) {
            ctx->pc = 0x1C277Cu;
            goto label_1c277c;
        }
    }
    ctx->pc = 0x1C2724u;
    // 0x1c2724: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c2724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c2728: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c272c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1c272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1c2730: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2730u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2734: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c2734u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2738: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2738u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c273c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2740: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1c2740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2744:
    // 0x1c2744: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c2744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c2748: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1c2748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c274c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1c274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2750: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1c2750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c2754: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1c2754u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c2758: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c2758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c275c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c275cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c2760: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1c2760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c2764: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c2764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2768: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c276c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C276Cu;
    {
        const bool branch_taken_0x1c276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c276c) {
            ctx->pc = 0x1C277Cu;
            goto label_1c277c;
        }
    }
    ctx->pc = 0x1C2774u;
label_1c2774:
    // 0x1c2774: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c2774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2778: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c277c:
    // 0x1c277c: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C277Cu;
    {
        const bool branch_taken_0x1c277c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c277c) {
            ctx->pc = 0x1C2780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C277Cu;
            // 0x1c2780: 0x8e4204bc  lw          $v0, 0x4BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2790u;
            goto label_1c2790;
        }
    }
    ctx->pc = 0x1C2784u;
    // 0x1c2784: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1c2784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1c2788: 0x2451f140  addiu       $s1, $v0, -0xEC0
    ctx->pc = 0x1c2788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x1c278c: 0x8e4204bc  lw          $v0, 0x4BC($s2)
    ctx->pc = 0x1c278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
label_1c2790:
    // 0x1c2790: 0x264601e0  addiu       $a2, $s2, 0x1E0
    ctx->pc = 0x1c2790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x1c2794: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c2794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2798: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c2798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c279c: 0xc0717e6  jal         func_1C5F98
    ctx->pc = 0x1C279Cu;
    SET_GPR_U32(ctx, 31, 0x1C27A4u);
    ctx->pc = 0x1C27A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C279Cu;
    // 0x1c27a0: 0x8c440ffc  lw          $a0, 0xFFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F98u, 0x1C279Cu, 0x1C27A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27A4u;
label_1c27a4:
    // 0x1c27a4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c27a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c27a8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c27a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c27ac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c27acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c27b0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1c27b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c27b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C27B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27B4u;
        // 0x1c27b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C27B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C27BCu;
    // 0x1c27bc: 0x0  nop
    ctx->pc = 0x1c27bcu;
    // NOP
    ctx->pc = 0x1c27c0u;
}
