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

// Function: sub_001E25A0
// Address: 0x1e25a0 - 0x1e2758
void sub_001E25A0_0x1e25a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E25A0_0x1e25a0");
#endif

    switch (ctx->pc) {
        case 0x1e25c8u: goto label_1e25c8;
        default: break;
    }

    ctx->pc = 0x1e25a0u;

    // 0x1e25a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e25a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e25a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e25a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e25a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e25a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e25ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e25acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e25b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e25b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e25b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25b8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e25b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e25bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e25bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E25C0u;
    SET_GPR_U32(ctx, 31, 0x1E25C8u);
    ctx->pc = 0x1E25C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E25C0u;
    // 0x1e25c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E25C0u, 0x1E25C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E25C8u;
label_1e25c8:
    // 0x1e25c8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e25cc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1e25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e25d0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e25d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e25d4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e25d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e25d8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e25d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e25dc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e25dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e25e0: 0xc6050054  lwc1        $f5, 0x54($s0)
    ctx->pc = 0x1e25e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e25e4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1e25e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1e25e8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1e25e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e25ec: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1e25ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e25f0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e25f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e25f4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1e25f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e25f8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e25f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e25fc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e25fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e2600: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1e2600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2604: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1e2604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2608: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1e2608u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e260c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1e260cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x1e2610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e2610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2614: 0x0  nop
    ctx->pc = 0x1e2614u;
    // NOP
    // 0x1e2618: 0x46000982  mul.s       $f6, $f1, $f0
    ctx->pc = 0x1e2618u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e261c: 0x46063102  mul.s       $f4, $f6, $f6
    ctx->pc = 0x1e261cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1e2620: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e2620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2624: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1e2624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2628: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e2628u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e262c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1e262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2630: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e2630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2634: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e2634u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e2638: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1e2638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e263c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1e263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2640: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1e2640u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e2644: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1e2644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2648: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1e2648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1e264c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e264cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e2650: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e2650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e2654: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1e2654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e2658: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e2658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e265c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e265cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e2660: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1e2660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1e2664: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x1e2664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1e2668: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1e2668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e266c: 0x0  nop
    ctx->pc = 0x1e266cu;
    // NOP
    // 0x1e2670: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x1E2670u;
    {
        const bool branch_taken_0x1e2670 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2670u;
        // 0x1e2674: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2670) {
            ctx->pc = 0x1E273Cu;
            goto label_1e273c;
        }
    }
    ctx->pc = 0x1E2678u;
    // 0x1e2678: 0x0  nop
    ctx->pc = 0x1e2678u;
    // NOP
    // 0x1e267c: 0x0  nop
    ctx->pc = 0x1e267cu;
    // NOP
    // 0x1e2680: 0x46000004  c1          0x4
    ctx->pc = 0x1e2680u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e2684: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e2684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2688: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e2688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e268c: 0x0  nop
    ctx->pc = 0x1e268cu;
    // NOP
    // 0x1e2690: 0x46050943  div.s       $f5, $f1, $f5
    ctx->pc = 0x1e2690u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[1], ctx->f[5]); }
    // 0x1e2694: 0x46003080  add.s       $f2, $f6, $f0
    ctx->pc = 0x1e2694u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1e2698: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e2698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e269c: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x1e269cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x1e26a0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1e26a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1e26a4: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x1e26a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e26a8: 0x0  nop
    ctx->pc = 0x1e26a8u;
    // NOP
    // 0x1e26ac: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1E26ACu;
    {
        const bool branch_taken_0x1e26ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E26B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26ACu;
        // 0x1e26b0: 0x46002942  mul.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26ac) {
            ctx->pc = 0x1E26FCu;
            goto label_1e26fc;
        }
    }
    ctx->pc = 0x1E26B4u;
    // 0x1e26b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e26b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e26b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e26b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e26bc: 0x0  nop
    ctx->pc = 0x1e26bcu;
    // NOP
    // 0x1e26c0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1e26c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e26c4: 0x0  nop
    ctx->pc = 0x1e26c4u;
    // NOP
    // 0x1e26c8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1E26C8u;
    {
        const bool branch_taken_0x1e26c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e26c8) {
            ctx->pc = 0x1E26FCu;
            goto label_1e26fc;
        }
    }
    ctx->pc = 0x1E26D0u;
    // 0x1e26d0: 0x46051836  c.le.s      $f3, $f5
    ctx->pc = 0x1e26d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e26d4: 0x0  nop
    ctx->pc = 0x1e26d4u;
    // NOP
    // 0x1e26d8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1E26D8u;
    {
        const bool branch_taken_0x1e26d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e26d8) {
            ctx->pc = 0x1E26DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E26D8u;
            // 0x1e26dc: 0xe6420000  swc1        $f2, 0x0($s2) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E26F4u;
            goto label_1e26f4;
        }
    }
    ctx->pc = 0x1E26E0u;
    // 0x1e26e0: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x1e26e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e26e4: 0x0  nop
    ctx->pc = 0x1e26e4u;
    // NOP
    // 0x1e26e8: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1E26E8u;
    {
        const bool branch_taken_0x1e26e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e26e8) {
            ctx->pc = 0x1E26ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E26E8u;
            // 0x1e26ec: 0xe6450000  swc1        $f5, 0x0($s2) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2734u;
            goto label_1e2734;
        }
    }
    ctx->pc = 0x1E26F0u;
    // 0x1e26f0: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x1e26f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1e26f4:
    // 0x1e26f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E26F4u;
    {
        const bool branch_taken_0x1e26f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26F4u;
        // 0x1e26f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26f4) {
            ctx->pc = 0x1E2740u;
            goto label_1e2740;
        }
    }
    ctx->pc = 0x1E26FCu;
label_1e26fc:
    // 0x1e26fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e26fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2700: 0x0  nop
    ctx->pc = 0x1e2700u;
    // NOP
    // 0x1e2704: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x1e2704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2708: 0x0  nop
    ctx->pc = 0x1e2708u;
    // NOP
    // 0x1e270c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1E270Cu;
    {
        const bool branch_taken_0x1e270c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E270Cu;
        // 0x1e2710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e270c) {
            ctx->pc = 0x1E2740u;
            goto label_1e2740;
        }
    }
    ctx->pc = 0x1E2714u;
    // 0x1e2714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e2718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e271c: 0x0  nop
    ctx->pc = 0x1e271cu;
    // NOP
    // 0x1e2720: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x1e2720u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2724: 0x0  nop
    ctx->pc = 0x1e2724u;
    // NOP
    // 0x1e2728: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2728u;
    {
        const bool branch_taken_0x1e2728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2728u;
        // 0x1e272c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2728) {
            ctx->pc = 0x1E2744u;
            goto label_1e2744;
        }
    }
    ctx->pc = 0x1E2730u;
    // 0x1e2730: 0xe6450000  swc1        $f5, 0x0($s2)
    ctx->pc = 0x1e2730u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1e2734:
    // 0x1e2734: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2734u;
    {
        const bool branch_taken_0x1e2734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2734u;
        // 0x1e2738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2734) {
            ctx->pc = 0x1E2740u;
            goto label_1e2740;
        }
    }
    ctx->pc = 0x1E273Cu;
label_1e273c:
    // 0x1e273c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e273cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2740:
    // 0x1e2740: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e2740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2744:
    // 0x1e2744: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e2744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e2748: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e2748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e274c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e274cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e2750: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2750u;
        // 0x1e2754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2758u;
}
