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

// Function: sub_001884D0
// Address: 0x1884d0 - 0x1886e8
void sub_001884D0_0x1884d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001884D0_0x1884d0");
#endif

    switch (ctx->pc) {
        case 0x188508u: goto label_188508;
        case 0x18856cu: goto label_18856c;
        case 0x18858cu: goto label_18858c;
        case 0x1885d0u: goto label_1885d0;
        case 0x188624u: goto label_188624;
        case 0x1886b0u: goto label_1886b0;
        case 0x1886c0u: goto label_1886c0;
        default: break;
    }

    ctx->pc = 0x1884d0u;

    // 0x1884d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1884d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1884d4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1884d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1884d8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1884d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1884dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1884dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884e0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1884e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1884e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1884e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884e8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1884e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1884ec: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1884ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884f0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1884f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1884f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1884f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884f8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1884f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1884fc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1884fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188500: 0xc061a12  jal         func_186848
    ctx->pc = 0x188500u;
    SET_GPR_U32(ctx, 31, 0x188508u);
    ctx->pc = 0x188504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188500u;
    // 0x188504: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x188500u, 0x188508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188508u;
label_188508:
    // 0x188508: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x188508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x18850c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x18850cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188510: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x188510u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188514: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x188514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x188518: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x188518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18851c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x18851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188520: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x188520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x188524: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x188524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188528: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x188528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18852c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x18852cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x188530: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x188530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x188534: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x188534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x188538: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x188538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x18853c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188540: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x188540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x188544: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x188544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x188548: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x188548u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18854c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18854cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x188550: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x188550u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x188554: 0x46140504  c1          0x140504
    ctx->pc = 0x188554u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x188558: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x188558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18855c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18855cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x188560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188564: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x188564u;
    SET_GPR_U32(ctx, 31, 0x18856Cu);
    ctx->pc = 0x188568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188564u;
    // 0x188568: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x188564u, 0x18856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18856Cu;
label_18856c:
    // 0x18856c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18856cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188570: 0x0  nop
    ctx->pc = 0x188570u;
    // NOP
    // 0x188574: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x188574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188578: 0x0  nop
    ctx->pc = 0x188578u;
    // NOP
    // 0x18857c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x18857Cu;
    {
        const bool branch_taken_0x18857c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18857c) {
            ctx->pc = 0x188594u;
            goto label_188594;
        }
    }
    ctx->pc = 0x188584u;
    // 0x188584: 0xc061a12  jal         func_186848
    ctx->pc = 0x188584u;
    SET_GPR_U32(ctx, 31, 0x18858Cu);
    ctx->pc = 0x188588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188584u;
    // 0x188588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x188584u, 0x18858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18858Cu;
label_18858c:
    // 0x18858c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18858Cu;
    {
        const bool branch_taken_0x18858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18858Cu;
        // 0x188590: 0x244201e0  addiu       $v0, $v0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18858c) {
            ctx->pc = 0x188608u;
            goto label_188608;
        }
    }
    ctx->pc = 0x188594u;
label_188594:
    // 0x188594: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x188594u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188598: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x188598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18859c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x18859cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1885a0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1885a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1885a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1885a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1885a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1885a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1885ac: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1885acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1885b0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1885b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1885b4: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1885b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1885b8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1885b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1885bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1885bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1885c0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1885c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1885c4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1885c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1885c8: 0xc061a12  jal         func_186848
    ctx->pc = 0x1885C8u;
    SET_GPR_U32(ctx, 31, 0x1885D0u);
    ctx->pc = 0x1885CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885C8u;
    // 0x1885cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1885C8u, 0x1885D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885D0u;
label_1885d0:
    // 0x1885d0: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1885d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1885d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1885d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1885d8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1885d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1885dc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1885dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1885e0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1885e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1885e4: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1885e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1885e8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1885e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1885ec: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1885ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1885f0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1885f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1885f4: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x1885f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1885f8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1885f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1885fc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1885fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x188600: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x188600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x188604: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x188604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_188608:
    // 0x188608: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x188608u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18860c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x18860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x188610: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x188610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x188614: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x188614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x188618: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x188618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18861c: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x18861Cu;
    SET_GPR_U32(ctx, 31, 0x188624u);
    ctx->pc = 0x188620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18861Cu;
    // 0x188620: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x18861Cu, 0x188624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188624u;
label_188624:
    // 0x188624: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x188624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188628: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x188628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x18862c: 0xe6210040  swc1        $f1, 0x40($s1)
    ctx->pc = 0x18862cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x188630: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x188630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188634: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x188634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x188638: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x188638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18863c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x18863cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x188640: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x188640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x188644: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x188644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x188648: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x188648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x18864c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x18864cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x188650: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x188650u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x188654: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x188654u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x188658: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x188658u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18865c: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x18865cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x188660: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x188660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x188664: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x188664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x188668: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x188668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18866c: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x18866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x188670: 0x3c013efa  lui         $at, 0x3EFA
    ctx->pc = 0x188670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16122 << 16));
    // 0x188674: 0x3421e147  ori         $at, $at, 0xE147
    ctx->pc = 0x188674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57671);
    // 0x188678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18867c: 0x262300f0  addiu       $v1, $s1, 0xF0
    ctx->pc = 0x18867cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x188680: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x188680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x188684: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x188684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x188688: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x188688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x18868c: 0x2484ef50  addiu       $a0, $a0, -0x10B0
    ctx->pc = 0x18868cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963024));
    // 0x188690: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x188690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x188694: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x188694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x188698: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x188698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x18869c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x18869cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x1886a0: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x1886a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1886a4: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x1886a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
    // 0x1886a8: 0xc0f71b8  jal         func_3DC6E0
    ctx->pc = 0x1886A8u;
    SET_GPR_U32(ctx, 31, 0x1886B0u);
    ctx->pc = 0x1886ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1886A8u;
    // 0x1886ac: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x1886A8u, 0x1886B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1886B0u;
label_1886b0:
    // 0x1886b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1886b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1886b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1886b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886b8: 0xc062222  jal         func_188888
    ctx->pc = 0x1886B8u;
    SET_GPR_U32(ctx, 31, 0x1886C0u);
    ctx->pc = 0x1886BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1886B8u;
    // 0x1886bc: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188888u, 0x1886B8u, 0x1886C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1886C0u;
label_1886c0:
    // 0x1886c0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1886c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1886c4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1886c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1886c8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1886c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1886cc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1886ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1886d0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1886d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1886d4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1886d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1886d8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1886d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1886dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1886DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1886E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886DCu;
        // 0x1886e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1886DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1886E4u;
    // 0x1886e4: 0x0  nop
    ctx->pc = 0x1886e4u;
    // NOP
    ctx->pc = 0x1886e8u;
}
