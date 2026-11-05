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

// Function: sub_002E2680
// Address: 0x2e2680 - 0x2e27a8
void sub_002E2680_0x2e2680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2680_0x2e2680");
#endif

    switch (ctx->pc) {
        case 0x2e26a0u: goto label_2e26a0;
        case 0x2e26d0u: goto label_2e26d0;
        default: break;
    }

    ctx->pc = 0x2e2680u;

    // 0x2e2680: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x2e2680u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2e2684: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2e2684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e268c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2e268cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2690: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e2690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2694: 0x24e40030  addiu       $a0, $a3, 0x30
    ctx->pc = 0x2e2694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2e2698: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x2e2698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e269c: 0x0  nop
    ctx->pc = 0x2e269cu;
    // NOP
label_2e26a0:
    // 0x2e26a0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e26a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e26a4: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x2e26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e26a8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2e26a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2e26ac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2e26acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e26b0: 0x4c1fffb  bgez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E26B0u;
    {
        const bool branch_taken_0x2e26b0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2E26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26B0u;
        // 0x2e26b4: 0x43400b  movn        $t0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26b0) {
            ctx->pc = 0x2E26A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e26a0;
        }
    }
    ctx->pc = 0x2E26B8u;
    // 0x2e26b8: 0x19000037  blez        $t0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E26B8u;
    {
        const bool branch_taken_0x2e26b8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2E26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26B8u;
        // 0x2e26bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26b8) {
            ctx->pc = 0x2E2798u;
            goto label_2e2798;
        }
    }
    ctx->pc = 0x2E26C0u;
    // 0x2e26c0: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x2e26c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2e26c4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2e26c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e26c8: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x2e26c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e26cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e26d0:
    // 0x2e26d0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2e26d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e26d4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2e26d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e26d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e26dc: 0x28620032  slti        $v0, $v1, 0x32
    ctx->pc = 0x2e26dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2e26e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E26E0u;
    {
        const bool branch_taken_0x2e26e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E26E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26E0u;
        // 0x2e26e4: 0x6b2018  mult        $a0, $v1, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26e0) {
            ctx->pc = 0x2E2700u;
            goto label_2e2700;
        }
    }
    ctx->pc = 0x2E26E8u;
    // 0x2e26e8: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x2e26e8u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e26ec: 0x512c0001  beql        $t1, $t4, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E26ECu;
    {
        const bool branch_taken_0x2e26ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 12));
        if (branch_taken_0x2e26ec) {
            ctx->pc = 0x2E26F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E26ECu;
            // 0x2e26f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E26F4u;
            goto label_2e26f4;
        }
    }
    ctx->pc = 0x2E26F4u;
label_2e26f4:
    // 0x2e26f4: 0x1010  mfhi        $v0
    ctx->pc = 0x2e26f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e26f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e26f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e26fc: 0x6b2018  mult        $a0, $v1, $t3
    ctx->pc = 0x2e26fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2e2700:
    // 0x2e2700: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x2e2700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2e2704: 0x90430030  lbu         $v1, 0x30($v0)
    ctx->pc = 0x2e2704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2e2708: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2708u;
    {
        const bool branch_taken_0x2e2708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2708u;
        // 0x2e270c: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2708) {
            ctx->pc = 0x2E2718u;
            goto label_2e2718;
        }
    }
    ctx->pc = 0x2E2710u;
    // 0x2e2710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2710u;
    {
        const bool branch_taken_0x2e2710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2710u;
        // 0x2e2714: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2710) {
            ctx->pc = 0x2E271Cu;
            goto label_2e271c;
        }
    }
    ctx->pc = 0x2E2718u;
label_2e2718:
    // 0x2e2718: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e271c:
    // 0x2e271c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2e271cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2720: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2e2720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2724: 0x0  nop
    ctx->pc = 0x2e2724u;
    // NOP
    // 0x2e2728: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x2E2728u;
    {
        const bool branch_taken_0x2e2728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2728) {
            ctx->pc = 0x2E272Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2728u;
            // 0x2e272c: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E279Cu;
            goto label_2e279c;
        }
    }
    ctx->pc = 0x2E2730u;
    // 0x2e2730: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e2730u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2734: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2e2734u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2738: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e2738u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e273c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2e273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e2740: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e2740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2744: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e2744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2748: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2e2748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e274c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x2e274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e2750: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2e2750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e2754: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e2754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e2758: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2e2758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e275c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x2e275cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2e2760: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e2760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2764: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2e2764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2768: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2e2768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e276c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e276cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e2770: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e2770u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e2774: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2e2774u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e2778: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2e2778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e277c: 0x0  nop
    ctx->pc = 0x2e277cu;
    // NOP
    // 0x2e2780: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2780u;
    {
        const bool branch_taken_0x2e2780 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2780) {
            ctx->pc = 0x2E2784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2780u;
            // 0x2e2784: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2788u;
            goto label_2e2788;
        }
    }
    ctx->pc = 0x2E2788u;
label_2e2788:
    // 0x2e2788: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2e2788u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e278c: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x2e278cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2e2790: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2E2790u;
    {
        const bool branch_taken_0x2e2790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2790) {
            ctx->pc = 0x2E2794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2790u;
            // 0x2e2794: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E26D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e26d0;
        }
    }
    ctx->pc = 0x2E2798u;
label_2e2798:
    // 0x2e2798: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x2e2798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2e279c:
    // 0x2e279c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E279Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E279Cu;
        // 0x2e27a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E279Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E27A4u;
    // 0x2e27a4: 0x0  nop
    ctx->pc = 0x2e27a4u;
    // NOP
    ctx->pc = 0x2e27a8u;
}
