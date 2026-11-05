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

// Function: sub_001E07C8
// Address: 0x1e07c8 - 0x1e0f40
void sub_001E07C8_0x1e07c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E07C8_0x1e07c8");
#endif

    switch (ctx->pc) {
        case 0x1e0820u: goto label_1e0820;
        case 0x1e0878u: goto label_1e0878;
        case 0x1e08e8u: goto label_1e08e8;
        default: break;
    }

    ctx->pc = 0x1e07c8u;

    // 0x1e07c8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1e07c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1e07cc: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1e07ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x1e07d0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1e07d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1e07d4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1e07d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07d8: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x1e07d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x1e07dc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e07dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07e0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1e07e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1e07e4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1e07e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07e8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1e07e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1e07ec: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1e07ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07f0: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1e07f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x1e07f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e07f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07f8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1e07f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1e07fc: 0x26d50010  addiu       $s5, $s6, 0x10
    ctx->pc = 0x1e07fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1e0800: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1e0800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1e0804: 0x26920020  addiu       $s2, $s4, 0x20
    ctx->pc = 0x1e0804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1e0808: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1e0808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1e080c: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1e080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x1e0810: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1e0810u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e0814: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1e0814u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e0818: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E0818u;
    SET_GPR_U32(ctx, 31, 0x1E0820u);
    ctx->pc = 0x1E081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0818u;
    // 0x1e081c: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E0818u, 0x1E0820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0820u;
label_1e0820:
    // 0x1e0820: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1e0820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0824: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x1e0824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0828: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e0828u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e082c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1e082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0830: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1e0830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0834: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e0834u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e0838: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1e0838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e083c: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x1e083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0840: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x1e0840u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e0844: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x1e0844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0848: 0xc6c20020  lwc1        $f2, 0x20($s6)
    ctx->pc = 0x1e0848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e084c: 0x46012541  sub.s       $f21, $f4, $f1
    ctx->pc = 0x1e084cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1e0850: 0x4600a805  abs.s       $f0, $f21
    ctx->pc = 0x1e0850u;
    ctx->f[0] = FPU_ABS_S(ctx->f[21]);
    // 0x1e0854: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e0854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0858: 0x0  nop
    ctx->pc = 0x1e0858u;
    // NOP
    // 0x1e085c: 0x450101a9  bc1t        . + 4 + (0x1A9 << 2)
    ctx->pc = 0x1E085Cu;
    {
        const bool branch_taken_0x1e085c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E085Cu;
        // 0x1e0860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e085c) {
            ctx->pc = 0x1E0F04u;
            goto label_1e0f04;
        }
    }
    ctx->pc = 0x1E0864u;
    // 0x1e0864: 0x8e93000c  lw          $s3, 0xC($s4)
    ctx->pc = 0x1e0864u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1e0868: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e0868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e086c: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x1e086cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e0870: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E0870u;
    SET_GPR_U32(ctx, 31, 0x1E0878u);
    ctx->pc = 0x1E0874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0870u;
    // 0x1e0874: 0x8e910008  lw          $s1, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E0870u, 0x1E0878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0878u;
label_1e0878:
    // 0x1e0878: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e0878u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e087c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1e087cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0880: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0880u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0884: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e0884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0888: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x1e0888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e088c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e0890: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x1e0890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e0894: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x1e0894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1e0898: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e0898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e089c: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x1e089cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1e08a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e08a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e08a4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1e08a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1e08a8: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x1e08a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1e08ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e08acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e08b0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e08b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1e08b4: 0x0  nop
    ctx->pc = 0x1e08b4u;
    // NOP
    // 0x1e08b8: 0x0  nop
    ctx->pc = 0x1e08b8u;
    // NOP
    // 0x1e08bc: 0x46010504  c1          0x10504
    ctx->pc = 0x1e08bcu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e08c0: 0x0  nop
    ctx->pc = 0x1e08c0u;
    // NOP
    // 0x1e08c4: 0x0  nop
    ctx->pc = 0x1e08c4u;
    // NOP
    // 0x1e08c8: 0x4614b003  div.s       $f0, $f22, $f20
    ctx->pc = 0x1e08c8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
    // 0x1e08cc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1e08ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e08d0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1e08d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e08d4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x1e08d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1e08d8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1e08d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e08dc: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1e08dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e08e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E08E0u;
    SET_GPR_U32(ctx, 31, 0x1E08E8u);
    ctx->pc = 0x1E08E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08E0u;
    // 0x1e08e4: 0xe7a50014  swc1        $f5, 0x14($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E08E0u, 0x1E08E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08E8u;
label_1e08e8:
    // 0x1e08e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e08e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e08ec: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e08ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e08f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e08f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e08f4: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1e08f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e08f8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1e08f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e08fc: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1e08fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0900: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e0900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0904: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1e0904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1e0908: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e0908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e090c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1e090cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0910: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0910u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0914: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e0914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0918: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1e0918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e091c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e0920: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x1e0920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0924: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e0924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e0928: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1e0928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e092c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1e092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0930: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x1e0930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e0934: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x1e0934u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e0938: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1e0938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e093c: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x1e093cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1e0940: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e0940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0944: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1e0944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0948: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e0948u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e094c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0950: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1e0950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0954: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e0954u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e0958: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1e0958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e095c: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1e095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0960: 0x460311dc  madd.s      $f7, $f2, $f3
    ctx->pc = 0x1e0960u;
    ctx->f[7] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e0964: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1e0964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0968: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1e0968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e096c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e096cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e0970: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1e0970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0974: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1e0974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0978: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e0978u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e097c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1e097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0980: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1e0980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0984: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x1e0984u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e0988: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1e0988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e098c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1e098cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0990: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0990u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0994: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e0994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0998: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x1e0998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e099c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1e099cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e09a0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1e09a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e09a4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1e09a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e09a8: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x1e09a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e09ac: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1e09acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e09b0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1e09b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e09b4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1e09b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e09b8: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x1e09b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1e09bc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e09bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e09c0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e09c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e09c4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e09c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e09c8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1e09c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e09cc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e09ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e09d0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e09d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e09d4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1e09d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e09d8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e09d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e09dc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1e09dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e09e0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1e09e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e09e4: 0x4603119c  madd.s      $f6, $f2, $f3
    ctx->pc = 0x1e09e4u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e09e8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1e09e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e09ec: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1e09ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e09f0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e09f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e09f4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1e09f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e09f8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1e09f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e09fc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e09fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e0a00: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1e0a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0a04: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1e0a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0a08: 0x4603115c  madd.s      $f5, $f2, $f3
    ctx->pc = 0x1e0a08u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e0a0c: 0x4605a002  mul.s       $f0, $f20, $f5
    ctx->pc = 0x1e0a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x1e0a10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e0a10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e0a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a18: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x1e0a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0a1c: 0x0  nop
    ctx->pc = 0x1e0a1cu;
    // NOP
    // 0x1e0a20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0A20u;
    {
        const bool branch_taken_0x1e0a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A20u;
        // 0x1e0a24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a20) {
            ctx->pc = 0x1E0A30u;
            goto label_1e0a30;
        }
    }
    ctx->pc = 0x1E0A28u;
    // 0x1e0a28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e0a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0a30:
    // 0x1e0a30: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x1e0a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x1e0a34: 0x46053842  mul.s       $f1, $f7, $f5
    ctx->pc = 0x1e0a34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x1e0a38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e0a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e0a3c: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x1e0a3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0a40: 0x0  nop
    ctx->pc = 0x1e0a40u;
    // NOP
    // 0x1e0a44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0A44u;
    {
        const bool branch_taken_0x1e0a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A44u;
        // 0x1e0a48: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a44) {
            ctx->pc = 0x1E0A58u;
            goto label_1e0a58;
        }
    }
    ctx->pc = 0x1E0A4Cu;
    // 0x1e0a4c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e0a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1e0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e0a54: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1e0a54u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1e0a58:
    // 0x1e0a58: 0x461438c1  sub.s       $f3, $f7, $f20
    ctx->pc = 0x1e0a58u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[20]);
    // 0x1e0a5c: 0x46143081  sub.s       $f2, $f6, $f20
    ctx->pc = 0x1e0a5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[20]);
    // 0x1e0a60: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x1e0a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1e0a64: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x1e0a64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1e0a68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e0a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e0a6c: 0x46004036  c.le.s      $f8, $f0
    ctx->pc = 0x1e0a6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0a70: 0x0  nop
    ctx->pc = 0x1e0a70u;
    // NOP
    // 0x1e0a74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0A74u;
    {
        const bool branch_taken_0x1e0a74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A74u;
        // 0x1e0a78: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a74) {
            ctx->pc = 0x1E0A84u;
            goto label_1e0a84;
        }
    }
    ctx->pc = 0x1E0A7Cu;
    // 0x1e0a7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1e0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e0a80: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1e0a80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1e0a84:
    // 0x1e0a84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0a88: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E0A88u;
    {
        const bool branch_taken_0x1e0a88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A88u;
        // 0x1e0a8c: 0x28a20003  slti        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a88) {
            ctx->pc = 0x1E0B04u;
            goto label_1e0b04;
        }
    }
    ctx->pc = 0x1E0A90u;
    // 0x1e0a90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0A90u;
    {
        const bool branch_taken_0x1e0a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A90u;
        // 0x1e0a94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a90) {
            ctx->pc = 0x1E0AA8u;
            goto label_1e0aa8;
        }
    }
    ctx->pc = 0x1E0A98u;
    // 0x1e0a98: 0x10a200a4  beq         $a1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1E0A98u;
    {
        const bool branch_taken_0x1e0a98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A98u;
        // 0x1e0a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a98) {
            ctx->pc = 0x1E0D2Cu;
            goto label_1e0d2c;
        }
    }
    ctx->pc = 0x1E0AA0u;
    // 0x1e0aa0: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x1E0AA0u;
    {
        const bool branch_taken_0x1e0aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AA0u;
        // 0x1e0aa4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0aa0) {
            ctx->pc = 0x1E0F08u;
            goto label_1e0f08;
        }
    }
    ctx->pc = 0x1E0AA8u;
label_1e0aa8:
    // 0x1e0aa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e0aac: 0x14a20115  bne         $a1, $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x1E0AACu;
    {
        const bool branch_taken_0x1e0aac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E0AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AACu;
        // 0x1e0ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0aac) {
            ctx->pc = 0x1E0F04u;
            goto label_1e0f04;
        }
    }
    ctx->pc = 0x1E0AB4u;
    // 0x1e0ab4: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1e0ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0ab8: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1e0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0abc: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x1e0abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0ac0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1e0ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1e0ac4: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1e0ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ac8: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1e0ac8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1e0acc: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x1e0accu;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x1e0ad0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1e0ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1e0ad4: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x1e0ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1e0ad8: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1e0ad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e0adc: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1e0adcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e0ae0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1e0ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e0ae4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e0ae4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e0ae8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e0ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0aec: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1e0aecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e0af0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1e0af0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e0af4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0af4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0af8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e0af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0afc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1E0AFCu;
    {
        const bool branch_taken_0x1e0afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AFCu;
        // 0x1e0b00: 0xc6c70020  lwc1        $f7, 0x20($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0afc) {
            ctx->pc = 0x1E0D68u;
            goto label_1e0d68;
        }
    }
    ctx->pc = 0x1E0B04u;
label_1e0b04:
    // 0x1e0b04: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E0B04u;
    {
        const bool branch_taken_0x1e0b04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0b04) {
            ctx->pc = 0x1E0BA8u;
            goto label_1e0ba8;
        }
    }
    ctx->pc = 0x1E0B0Cu;
    // 0x1e0b0c: 0x46143002  mul.s       $f0, $f6, $f20
    ctx->pc = 0x1e0b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x1e0b10: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x1e0b10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1e0b14: 0x0  nop
    ctx->pc = 0x1e0b14u;
    // NOP
    // 0x1e0b18: 0x0  nop
    ctx->pc = 0x1e0b18u;
    // NOP
    // 0x1e0b1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0b1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0b20: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x1e0b20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0b24: 0x0  nop
    ctx->pc = 0x1e0b24u;
    // NOP
    // 0x1e0b28: 0x4501008c  bc1t        . + 4 + (0x8C << 2)
    ctx->pc = 0x1E0B28u;
    {
        const bool branch_taken_0x1e0b28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0b28) {
            ctx->pc = 0x1E0D5Cu;
            goto label_1e0d5c;
        }
    }
    ctx->pc = 0x1E0B30u;
    // 0x1e0b30: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x1e0b30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0b34: 0x0  nop
    ctx->pc = 0x1e0b34u;
    // NOP
    // 0x1e0b38: 0x45010084  bc1t        . + 4 + (0x84 << 2)
    ctx->pc = 0x1E0B38u;
    {
        const bool branch_taken_0x1e0b38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0b38) {
            ctx->pc = 0x1E0D4Cu;
            goto label_1e0d4c;
        }
    }
    ctx->pc = 0x1E0B40u;
    // 0x1e0b40: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e0b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e0b44: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1e0b44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0b48: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0b48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0b4c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e0b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0b50: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1e0b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0b54: 0xc7a60074  lwc1        $f6, 0x74($sp)
    ctx->pc = 0x1e0b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e0b58: 0xc7a70078  lwc1        $f7, 0x78($sp)
    ctx->pc = 0x1e0b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e0b5c: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x1e0b5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e0b60: 0xc7a5007c  lwc1        $f5, 0x7C($sp)
    ctx->pc = 0x1e0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e0b64: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x1e0b64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1e0b68: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x1e0b68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1e0b6c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1e0b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e0b70: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e0b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e0b74: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x1e0b74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e0b78: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1e0b78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e0b7c: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x1e0b7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e0b80: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e0b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e0b84: 0xe7a60064  swc1        $f6, 0x64($sp)
    ctx->pc = 0x1e0b84u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e0b88: 0xe7a70068  swc1        $f7, 0x68($sp)
    ctx->pc = 0x1e0b88u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e0b8c: 0xe7a5006c  swc1        $f5, 0x6C($sp)
    ctx->pc = 0x1e0b8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1e0b90: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e0b90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0b94: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e0b94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0b98: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0b98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0b9c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e0b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0ba0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1E0BA0u;
    {
        const bool branch_taken_0x1e0ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BA0u;
        // 0x1e0ba4: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ba0) {
            ctx->pc = 0x1E0D00u;
            goto label_1e0d00;
        }
    }
    ctx->pc = 0x1E0BA8u;
label_1e0ba8:
    // 0x1e0ba8: 0x5500002c  bnel        $t0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E0BA8u;
    {
        const bool branch_taken_0x1e0ba8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ba8) {
            ctx->pc = 0x1E0BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0BA8u;
            // 0x1e0bac: 0x46031002  mul.s       $f0, $f2, $f3 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0C5Cu;
            goto label_1e0c5c;
        }
    }
    ctx->pc = 0x1E0BB0u;
    // 0x1e0bb0: 0x46073002  mul.s       $f0, $f6, $f7
    ctx->pc = 0x1e0bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x1e0bb4: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x1e0bb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1e0bb8: 0x460738c2  mul.s       $f3, $f7, $f7
    ctx->pc = 0x1e0bb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x1e0bbc: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x1e0bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1e0bc0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e0bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e0bc4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1e0bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1e0bc8: 0x0  nop
    ctx->pc = 0x1e0bc8u;
    // NOP
    // 0x1e0bcc: 0x0  nop
    ctx->pc = 0x1e0bccu;
    // NOP
    // 0x1e0bd0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0bd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0bd4: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x1e0bd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0bd8: 0x0  nop
    ctx->pc = 0x1e0bd8u;
    // NOP
    // 0x1e0bdc: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
    ctx->pc = 0x1E0BDCu;
    {
        const bool branch_taken_0x1e0bdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0bdc) {
            ctx->pc = 0x1E0D5Cu;
            goto label_1e0d5c;
        }
    }
    ctx->pc = 0x1E0BE4u;
    // 0x1e0be4: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x1e0be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0be8: 0x0  nop
    ctx->pc = 0x1e0be8u;
    // NOP
    // 0x1e0bec: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x1E0BECu;
    {
        const bool branch_taken_0x1e0bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0bec) {
            ctx->pc = 0x1E0D34u;
            goto label_1e0d34;
        }
    }
    ctx->pc = 0x1E0BF4u;
    // 0x1e0bf4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e0bf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e0bf8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1e0bf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0bfc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0bfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0c00: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e0c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0c04: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1e0c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0c08: 0xc7a60074  lwc1        $f6, 0x74($sp)
    ctx->pc = 0x1e0c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e0c0c: 0xc7a70078  lwc1        $f7, 0x78($sp)
    ctx->pc = 0x1e0c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e0c10: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x1e0c10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e0c14: 0xc7a5007c  lwc1        $f5, 0x7C($sp)
    ctx->pc = 0x1e0c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e0c18: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x1e0c18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1e0c1c: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x1e0c1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1e0c20: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1e0c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e0c24: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e0c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e0c28: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x1e0c28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e0c2c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1e0c2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e0c30: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x1e0c30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e0c34: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e0c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e0c38: 0xe7a60064  swc1        $f6, 0x64($sp)
    ctx->pc = 0x1e0c38u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e0c3c: 0xe7a70068  swc1        $f7, 0x68($sp)
    ctx->pc = 0x1e0c3cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e0c40: 0xe7a5006c  swc1        $f5, 0x6C($sp)
    ctx->pc = 0x1e0c40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1e0c44: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e0c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0c48: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e0c48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0c4c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0c4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0c50: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e0c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0c54: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1E0C54u;
    {
        const bool branch_taken_0x1e0c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C54u;
        // 0x1e0c58: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c54) {
            ctx->pc = 0x1E0D00u;
            goto label_1e0d00;
        }
    }
    ctx->pc = 0x1E0C5Cu;
label_1e0c5c:
    // 0x1e0c5c: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x1e0c5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1e0c60: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x1e0c60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1e0c64: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x1e0c64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1e0c68: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e0c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e0c6c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1e0c6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1e0c70: 0x0  nop
    ctx->pc = 0x1e0c70u;
    // NOP
    // 0x1e0c74: 0x0  nop
    ctx->pc = 0x1e0c74u;
    // NOP
    // 0x1e0c78: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0c78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0c7c: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x1e0c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0c80: 0x0  nop
    ctx->pc = 0x1e0c80u;
    // NOP
    // 0x1e0c84: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x1E0C84u;
    {
        const bool branch_taken_0x1e0c84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0c84) {
            ctx->pc = 0x1E0D4Cu;
            goto label_1e0d4c;
        }
    }
    ctx->pc = 0x1E0C8Cu;
    // 0x1e0c8c: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x1e0c8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0c90: 0x0  nop
    ctx->pc = 0x1e0c90u;
    // NOP
    // 0x1e0c94: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x1E0C94u;
    {
        const bool branch_taken_0x1e0c94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0c94) {
            ctx->pc = 0x1E0D34u;
            goto label_1e0d34;
        }
    }
    ctx->pc = 0x1E0C9Cu;
    // 0x1e0c9c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e0c9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e0ca0: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1e0ca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e0ca4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0ca4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0ca8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e0ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0cac: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1e0cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0cb0: 0xc7a60074  lwc1        $f6, 0x74($sp)
    ctx->pc = 0x1e0cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e0cb4: 0xc7a70078  lwc1        $f7, 0x78($sp)
    ctx->pc = 0x1e0cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e0cb8: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x1e0cb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e0cbc: 0xc7a5007c  lwc1        $f5, 0x7C($sp)
    ctx->pc = 0x1e0cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e0cc0: 0x46060082  mul.s       $f2, $f0, $f6
    ctx->pc = 0x1e0cc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1e0cc4: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x1e0cc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1e0cc8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1e0cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e0ccc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e0cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e0cd0: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x1e0cd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e0cd4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1e0cd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e0cd8: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x1e0cd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e0cdc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e0cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e0ce0: 0xe7a60064  swc1        $f6, 0x64($sp)
    ctx->pc = 0x1e0ce0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e0ce4: 0xe7a70068  swc1        $f7, 0x68($sp)
    ctx->pc = 0x1e0ce4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e0ce8: 0xe7a5006c  swc1        $f5, 0x6C($sp)
    ctx->pc = 0x1e0ce8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1e0cec: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e0cecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e0cf0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e0cf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0cf4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0cf8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e0cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0cfc: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1e0cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e0d00:
    // 0x1e0d00: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1e0d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0d04: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1e0d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0d08: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x1e0d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0d0c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1e0d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e0d10: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1e0d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e0d14: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1e0d14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e0d18: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x1e0d18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1e0d1c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e0d1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e0d20: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e0d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0d24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E0D24u;
    {
        const bool branch_taken_0x1e0d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D24u;
        // 0x1e0d28: 0xc6c70020  lwc1        $f7, 0x20($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d24) {
            ctx->pc = 0x1E0D68u;
            goto label_1e0d68;
        }
    }
    ctx->pc = 0x1E0D2Cu;
label_1e0d2c:
    // 0x1e0d2c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0D2Cu;
    {
        const bool branch_taken_0x1e0d2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0d2c) {
            ctx->pc = 0x1E0D44u;
            goto label_1e0d44;
        }
    }
    ctx->pc = 0x1E0D34u;
label_1e0d34:
    // 0x1e0d34: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e0d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e0d38: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e0d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0d3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E0D3Cu;
    {
        const bool branch_taken_0x1e0d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D3Cu;
        // 0x1e0d40: 0xc6c70020  lwc1        $f7, 0x20($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d3c) {
            ctx->pc = 0x1E0D68u;
            goto label_1e0d68;
        }
    }
    ctx->pc = 0x1E0D44u;
label_1e0d44:
    // 0x1e0d44: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0D44u;
    {
        const bool branch_taken_0x1e0d44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0d44) {
            ctx->pc = 0x1E0D5Cu;
            goto label_1e0d5c;
        }
    }
    ctx->pc = 0x1E0D4Cu;
label_1e0d4c:
    // 0x1e0d4c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e0d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e0d50: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e0d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0d54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0D54u;
    {
        const bool branch_taken_0x1e0d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D54u;
        // 0x1e0d58: 0xc6c70020  lwc1        $f7, 0x20($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d54) {
            ctx->pc = 0x1E0D68u;
            goto label_1e0d68;
        }
    }
    ctx->pc = 0x1E0D5Cu;
label_1e0d5c:
    // 0x1e0d5c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e0d5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0d60: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e0d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0d64: 0xc6c70020  lwc1        $f7, 0x20($s6)
    ctx->pc = 0x1e0d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e0d68:
    // 0x1e0d68: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x1e0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1e0d6c: 0x46073982  mul.s       $f6, $f7, $f7
    ctx->pc = 0x1e0d6cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x1e0d70: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e0d70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0d74: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e0d74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0d78: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0d78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0d7c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e0d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0d80: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1e0d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0d84: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1e0d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0d88: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1e0d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0d8c: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x1e0d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e0d90: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1e0d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e0d94: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1e0d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e0d98: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1e0d98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e0d9c: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x1e0d9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1e0da0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1e0da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0da4: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1e0da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0da8: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1e0da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e0dac: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e0dacu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e0db0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e0db0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e0db4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1e0db4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e0db8: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x1e0db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0dbc: 0x0  nop
    ctx->pc = 0x1e0dbcu;
    // NOP
    // 0x1e0dc0: 0x4501004f  bc1t        . + 4 + (0x4F << 2)
    ctx->pc = 0x1E0DC0u;
    {
        const bool branch_taken_0x1e0dc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DC0u;
        // 0x1e0dc4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dc0) {
            ctx->pc = 0x1E0F00u;
            goto label_1e0f00;
        }
    }
    ctx->pc = 0x1E0DC8u;
    // 0x1e0dc8: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x1e0dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1e0dcc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1e0dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0dd0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1e0dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0dd4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e0dd4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e0dd8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1e0dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0ddc: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1e0ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0de0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e0de0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e0de4: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1e0de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0de8: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x1e0de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0dec: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1e0decu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e0df0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1e0df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e0df4: 0x0  nop
    ctx->pc = 0x1e0df4u;
    // NOP
    // 0x1e0df8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e0df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0dfc: 0x0  nop
    ctx->pc = 0x1e0dfcu;
    // NOP
    // 0x1e0e00: 0x45030040  bc1tl       . + 4 + (0x40 << 2)
    ctx->pc = 0x1E0E00u;
    {
        const bool branch_taken_0x1e0e00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0e00) {
            ctx->pc = 0x1E0E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0E00u;
            // 0x1e0e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0F04u;
            goto label_1e0f04;
        }
    }
    ctx->pc = 0x1E0E08u;
    // 0x1e0e08: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1e0e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e0e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0e10: 0x0  nop
    ctx->pc = 0x1e0e10u;
    // NOP
    // 0x1e0e14: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x1E0E14u;
    {
        const bool branch_taken_0x1e0e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0e14) {
            ctx->pc = 0x1E0E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0E14u;
            // 0x1e0e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0F04u;
            goto label_1e0f04;
        }
    }
    ctx->pc = 0x1E0E1Cu;
    // 0x1e0e1c: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x1e0e1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0e20: 0x0  nop
    ctx->pc = 0x1e0e20u;
    // NOP
    // 0x1e0e24: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0E24u;
    {
        const bool branch_taken_0x1e0e24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E24u;
        // 0x1e0e28: 0xe7c10000  swc1        $f1, 0x0($fp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e24) {
            ctx->pc = 0x1E0E3Cu;
            goto label_1e0e3c;
        }
    }
    ctx->pc = 0x1E0E2Cu;
    // 0x1e0e2c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e0e2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0e30: 0xfae10010  sqc2        $vf1, 0x10($s7)
    ctx->pc = 0x1e0e30u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0e34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E0E34u;
    {
        const bool branch_taken_0x1e0e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E34u;
        // 0x1e0e38: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e34) {
            ctx->pc = 0x1E0E90u;
            goto label_1e0e90;
        }
    }
    ctx->pc = 0x1E0E3Cu;
label_1e0e3c:
    // 0x1e0e3c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e0e3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e0e40: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1e0e40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e0e44: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1e0e44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e0e48: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1e0e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e0e4c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e0e4cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e0e50: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e0e50u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e0e54: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1e0e54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0e58: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e0e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0e5c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1e0e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e60: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1e0e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0e64: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1e0e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0e68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e0e68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e0e6c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1e0e6cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1e0e70: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x1e0e70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e0e74: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1e0e74u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1e0e78: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1e0e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e0e7c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1e0e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e0e80: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1e0e80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e0e84: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e0e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0e88: 0xfae10010  sqc2        $vf1, 0x10($s7)
    ctx->pc = 0x1e0e88u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0e8c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1e0e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e0e90:
    // 0x1e0e90: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1e0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e0e94: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1e0e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0e98: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1e0e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0e9c: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x1e0e9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x1e0ea0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1e0ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ea4: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x1e0ea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x1e0ea8: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x1e0ea8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x1e0eac: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x1e0eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x1e0eb0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1e0eb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e0eb4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1e0eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e0eb8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1e0eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e0ebc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1e0ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1e0ec0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1e0ec0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e0ec4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e0ec4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0ec8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e0ec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0ecc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e0eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0ed0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1e0ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ed4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1e0ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0ed8: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1e0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0edc: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x1e0edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e0ee0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1e0ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e0ee4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1e0ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e0ee8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1e0ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e0eec: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x1e0eecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e0ef0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e0ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0ef4: 0xfae10000  sqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1e0ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0ef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0EF8u;
    {
        const bool branch_taken_0x1e0ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EF8u;
        // 0x1e0efc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ef8) {
            ctx->pc = 0x1E0F04u;
            goto label_1e0f04;
        }
    }
    ctx->pc = 0x1E0F00u;
label_1e0f00:
    // 0x1e0f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f04:
    // 0x1e0f04: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1e0f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1e0f08:
    // 0x1e0f08: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1e0f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e0f0c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1e0f0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e0f10: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1e0f10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e0f14: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1e0f14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0f18: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1e0f18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e0f1c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1e0f1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0f20: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1e0f20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e0f24: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1e0f24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0f28: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1e0f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e0f2c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1e0f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e0f30: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1e0f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e0f34: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1e0f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e0f38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F38u;
        // 0x1e0f3c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0F40u;
}
