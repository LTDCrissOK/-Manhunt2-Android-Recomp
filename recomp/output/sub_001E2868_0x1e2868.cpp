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

// Function: sub_001E2868
// Address: 0x1e2868 - 0x1e2b48
void sub_001E2868_0x1e2868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2868_0x1e2868");
#endif

    ctx->pc = 0x1e2868u;

    // 0x1e2868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e286c: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x1e286cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1e2870: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x1e2870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1e2874: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1e2874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2878: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x1e2878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e287c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e287cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e2880: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1e2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2884: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x1e2884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2888: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e2888u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e288c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x1e288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2890: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x1e2890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2894: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1e2894u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e2898: 0xc4a5002c  lwc1        $f5, 0x2C($a1)
    ctx->pc = 0x1e2898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e289c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1e289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1e28a0: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1e28a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1e28a4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1e28a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e28a8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1e28a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e28ac: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e28acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e28b0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1e28b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e28b4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e28b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e28b8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e28b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e28bc: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x1e28bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e28c0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1e28c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e28c4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1e28c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e28c8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x1e28c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1e28cc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e28ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e28d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e28d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e28d4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1e28d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e28d8: 0x0  nop
    ctx->pc = 0x1e28d8u;
    // NOP
    // 0x1e28dc: 0x45000097  bc1f        . + 4 + (0x97 << 2)
    ctx->pc = 0x1E28DCu;
    {
        const bool branch_taken_0x1e28dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28DCu;
        // 0x1e28e0: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28dc) {
            ctx->pc = 0x1E2B3Cu;
            goto label_1e2b3c;
        }
    }
    ctx->pc = 0x1E28E4u;
    // 0x1e28e4: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x1e28e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e28e8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1e28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e28ec: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1e28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e28f0: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x1e28f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e28f4: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x1e28f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e28f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e28f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e28fc: 0xc4870030  lwc1        $f7, 0x30($a0)
    ctx->pc = 0x1e28fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e2900: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x1e2900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e2904: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1e2904u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1e2908: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x1e2908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e290c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1e290cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1e2910: 0xc44a0008  lwc1        $f10, 0x8($v0)
    ctx->pc = 0x1e2910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1e2914: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1e2914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1e2918: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x1e2918u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x1e291c: 0xc4e80008  lwc1        $f8, 0x8($a3)
    ctx->pc = 0x1e291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1e2920: 0x460a1242  mul.s       $f9, $f2, $f10
    ctx->pc = 0x1e2920u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x1e2924: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x1e2924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e2928: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e2928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e292c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1e292cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1e2930: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x1e2930u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x1e2934: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1e2934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x1e2938: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e2938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e293c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e293cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e2940: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x1e2940u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e2944: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x1e2944u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1e2948: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x1e2948u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1e294c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x1e294cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x1e2950: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x1e2950u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e2954: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x1e2954u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e2958: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x1e2958u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e295c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1e295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e2960: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1e2960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e2964: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e2964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2968: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e2968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e296c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e296cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2970: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x1e2970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e2974: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1e2974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2978: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1e2978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e297c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1e297cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e2980: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1e2980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2984: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1e2984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2988: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1e2988u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e298c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1e298cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e2990: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e2990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e2994: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E2994u;
    {
        const bool branch_taken_0x1e2994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2994u;
        // 0x1e2998: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2994) {
            ctx->pc = 0x1E2ABCu;
            goto label_1e2abc;
        }
    }
    ctx->pc = 0x1E299Cu;
    // 0x1e299c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e299cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e29a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e29a4: 0x2442d8a0  addiu       $v0, $v0, -0x2760
    ctx->pc = 0x1e29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
    // 0x1e29a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e29a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e29ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e29acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e29b0: 0x800008  jr          $a0
    ctx->pc = 0x1E29B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E29B8u: goto label_1e29b8;
            case 0x1E29E0u: goto label_1e29e0;
            case 0x1E2A10u: goto label_1e2a10;
            case 0x1E2A38u: goto label_1e2a38;
            case 0x1E2A68u: goto label_1e2a68;
            case 0x1E2A90u: goto label_1e2a90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E29B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E29B8u;
label_1e29b8:
    // 0x1e29b8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1e29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e29bc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e29c0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1e29c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e29c4: 0xc4700008  lwc1        $f16, 0x8($v1)
    ctx->pc = 0x1e29c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1e29c8: 0xc4920008  lwc1        $f18, 0x8($a0)
    ctx->pc = 0x1e29c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1e29cc: 0xc4510008  lwc1        $f17, 0x8($v0)
    ctx->pc = 0x1e29ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1e29d0: 0xc46c0004  lwc1        $f12, 0x4($v1)
    ctx->pc = 0x1e29d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e29d4: 0xc48f0004  lwc1        $f15, 0x4($a0)
    ctx->pc = 0x1e29d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e29d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E29D8u;
    {
        const bool branch_taken_0x1e29d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29D8u;
        // 0x1e29dc: 0xc44d0004  lwc1        $f13, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29d8) {
            ctx->pc = 0x1E2A04u;
            goto label_1e2a04;
        }
    }
    ctx->pc = 0x1E29E0u;
label_1e29e0:
    // 0x1e29e0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1e29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e29e4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e29e8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1e29e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e29ec: 0xc4700008  lwc1        $f16, 0x8($v1)
    ctx->pc = 0x1e29ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1e29f0: 0xc4910008  lwc1        $f17, 0x8($a0)
    ctx->pc = 0x1e29f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1e29f4: 0xc4520008  lwc1        $f18, 0x8($v0)
    ctx->pc = 0x1e29f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1e29f8: 0xc46c0004  lwc1        $f12, 0x4($v1)
    ctx->pc = 0x1e29f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e29fc: 0xc48d0004  lwc1        $f13, 0x4($a0)
    ctx->pc = 0x1e29fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e2a00: 0xc44f0004  lwc1        $f15, 0x4($v0)
    ctx->pc = 0x1e2a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1e2a04:
    // 0x1e2a04: 0xc7ae0004  lwc1        $f14, 0x4($sp)
    ctx->pc = 0x1e2a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e2a08: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1E2A08u;
    {
        const bool branch_taken_0x1e2a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A08u;
        // 0x1e2a0c: 0xc7ab0008  lwc1        $f11, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a08) {
            ctx->pc = 0x1E2ABCu;
            goto label_1e2abc;
        }
    }
    ctx->pc = 0x1E2A10u;
label_1e2a10:
    // 0x1e2a10: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1e2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e2a14: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2a18: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1e2a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e2a1c: 0xc4700000  lwc1        $f16, 0x0($v1)
    ctx->pc = 0x1e2a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1e2a20: 0xc4920000  lwc1        $f18, 0x0($a0)
    ctx->pc = 0x1e2a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1e2a24: 0xc4510000  lwc1        $f17, 0x0($v0)
    ctx->pc = 0x1e2a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1e2a28: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x1e2a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2a2c: 0xc48f0008  lwc1        $f15, 0x8($a0)
    ctx->pc = 0x1e2a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e2a30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E2A30u;
    {
        const bool branch_taken_0x1e2a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A30u;
        // 0x1e2a34: 0xc44d0008  lwc1        $f13, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a30) {
            ctx->pc = 0x1E2A5Cu;
            goto label_1e2a5c;
        }
    }
    ctx->pc = 0x1E2A38u;
label_1e2a38:
    // 0x1e2a38: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1e2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e2a3c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e2a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2a40: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1e2a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e2a44: 0xc4700000  lwc1        $f16, 0x0($v1)
    ctx->pc = 0x1e2a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1e2a48: 0xc4910000  lwc1        $f17, 0x0($a0)
    ctx->pc = 0x1e2a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1e2a4c: 0xc4520000  lwc1        $f18, 0x0($v0)
    ctx->pc = 0x1e2a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1e2a50: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x1e2a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2a54: 0xc48d0008  lwc1        $f13, 0x8($a0)
    ctx->pc = 0x1e2a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e2a58: 0xc44f0008  lwc1        $f15, 0x8($v0)
    ctx->pc = 0x1e2a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1e2a5c:
    // 0x1e2a5c: 0xc7ae0008  lwc1        $f14, 0x8($sp)
    ctx->pc = 0x1e2a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e2a60: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E2A60u;
    {
        const bool branch_taken_0x1e2a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A60u;
        // 0x1e2a64: 0xc7ab0000  lwc1        $f11, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a60) {
            ctx->pc = 0x1E2ABCu;
            goto label_1e2abc;
        }
    }
    ctx->pc = 0x1E2A68u;
label_1e2a68:
    // 0x1e2a68: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1e2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e2a6c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2a70: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1e2a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e2a74: 0xc4700004  lwc1        $f16, 0x4($v1)
    ctx->pc = 0x1e2a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1e2a78: 0xc4920004  lwc1        $f18, 0x4($a0)
    ctx->pc = 0x1e2a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1e2a7c: 0xc4510004  lwc1        $f17, 0x4($v0)
    ctx->pc = 0x1e2a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1e2a80: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1e2a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2a84: 0xc48f0000  lwc1        $f15, 0x0($a0)
    ctx->pc = 0x1e2a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e2a88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E2A88u;
    {
        const bool branch_taken_0x1e2a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A88u;
        // 0x1e2a8c: 0xc44d0000  lwc1        $f13, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a88) {
            ctx->pc = 0x1E2AB4u;
            goto label_1e2ab4;
        }
    }
    ctx->pc = 0x1E2A90u;
label_1e2a90:
    // 0x1e2a90: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1e2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e2a94: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e2a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2a98: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1e2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e2a9c: 0xc4700004  lwc1        $f16, 0x4($v1)
    ctx->pc = 0x1e2a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1e2aa0: 0xc4910004  lwc1        $f17, 0x4($a0)
    ctx->pc = 0x1e2aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1e2aa4: 0xc4520004  lwc1        $f18, 0x4($v0)
    ctx->pc = 0x1e2aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1e2aa8: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1e2aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2aac: 0xc48d0000  lwc1        $f13, 0x0($a0)
    ctx->pc = 0x1e2aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e2ab0: 0xc44f0000  lwc1        $f15, 0x0($v0)
    ctx->pc = 0x1e2ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1e2ab4:
    // 0x1e2ab4: 0xc7ae0000  lwc1        $f14, 0x0($sp)
    ctx->pc = 0x1e2ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e2ab8: 0xc7ab0004  lwc1        $f11, 0x4($sp)
    ctx->pc = 0x1e2ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1e2abc:
    // 0x1e2abc: 0x460c6841  sub.s       $f1, $f13, $f12
    ctx->pc = 0x1e2abcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x1e2ac0: 0x461058c1  sub.s       $f3, $f11, $f16
    ctx->pc = 0x1e2ac0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[11], ctx->f[16]);
    // 0x1e2ac4: 0x46108801  sub.s       $f0, $f17, $f16
    ctx->pc = 0x1e2ac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
    // 0x1e2ac8: 0x460c7081  sub.s       $f2, $f14, $f12
    ctx->pc = 0x1e2ac8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x1e2acc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e2accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e2ad0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1e2ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e2ad4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e2ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e2ad8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e2ad8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e2adc: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x1e2adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2ae0: 0x0  nop
    ctx->pc = 0x1e2ae0u;
    // NOP
    // 0x1e2ae4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1E2AE4u;
    {
        const bool branch_taken_0x1e2ae4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AE4u;
        // 0x1e2ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ae4) {
            ctx->pc = 0x1E2B40u;
            goto label_1e2b40;
        }
    }
    ctx->pc = 0x1E2AECu;
    // 0x1e2aec: 0x460c7841  sub.s       $f1, $f15, $f12
    ctx->pc = 0x1e2aecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[12]);
    // 0x1e2af0: 0x46109001  sub.s       $f0, $f18, $f16
    ctx->pc = 0x1e2af0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[18], ctx->f[16]);
    // 0x1e2af4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e2af4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e2af8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e2af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e2afc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e2afcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e2b00: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1e2b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2b04: 0x0  nop
    ctx->pc = 0x1e2b04u;
    // NOP
    // 0x1e2b08: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1E2B08u;
    {
        const bool branch_taken_0x1e2b08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2b08) {
            ctx->pc = 0x1E2B40u;
            goto label_1e2b40;
        }
    }
    ctx->pc = 0x1E2B10u;
    // 0x1e2b10: 0x46119041  sub.s       $f1, $f18, $f17
    ctx->pc = 0x1e2b10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[18], ctx->f[17]);
    // 0x1e2b14: 0x460d70c1  sub.s       $f3, $f14, $f13
    ctx->pc = 0x1e2b14u;
    ctx->f[3] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x1e2b18: 0x460d7801  sub.s       $f0, $f15, $f13
    ctx->pc = 0x1e2b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[13]);
    // 0x1e2b1c: 0x46115881  sub.s       $f2, $f11, $f17
    ctx->pc = 0x1e2b1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[17]);
    // 0x1e2b20: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e2b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e2b24: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e2b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e2b28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e2b2c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1e2b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2b30: 0x0  nop
    ctx->pc = 0x1e2b30u;
    // NOP
    // 0x1e2b34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2B34u;
    {
        const bool branch_taken_0x1e2b34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B34u;
        // 0x1e2b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b34) {
            ctx->pc = 0x1E2B40u;
            goto label_1e2b40;
        }
    }
    ctx->pc = 0x1E2B3Cu;
label_1e2b3c:
    // 0x1e2b3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b40:
    // 0x1e2b40: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B40u;
        // 0x1e2b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2B48u;
}
