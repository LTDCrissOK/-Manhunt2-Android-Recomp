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

// Function: sub_001E12F0
// Address: 0x1e12f0 - 0x1e17f0
void sub_001E12F0_0x1e12f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E12F0_0x1e12f0");
#endif

    switch (ctx->pc) {
        case 0x1e1360u: goto label_1e1360;
        case 0x1e13b0u: goto label_1e13b0;
        case 0x1e13b8u: goto label_1e13b8;
        case 0x1e1460u: goto label_1e1460;
        case 0x1e163cu: goto label_1e163c;
        case 0x1e1660u: goto label_1e1660;
        case 0x1e167cu: goto label_1e167c;
        case 0x1e16b8u: goto label_1e16b8;
        case 0x1e1738u: goto label_1e1738;
        case 0x1e1758u: goto label_1e1758;
        case 0x1e1774u: goto label_1e1774;
        case 0x1e17a8u: goto label_1e17a8;
        default: break;
    }

    ctx->pc = 0x1e12f0u;

    // 0x1e12f0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1e12f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1e12f4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1e12f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1e12f8: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x1e12f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x1e12fc: 0x246202f0  addiu       $v0, $v1, 0x2F0
    ctx->pc = 0x1e12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x1e1300: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x1e1300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x1e1304: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e1304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1308: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x1e1308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x1e130c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e130cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1310: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x1e1310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x1e1314: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1e1314u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1318: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x1e1318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x1e131c: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x1e131cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x1e1320: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x1e1320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x1e1324: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x1e1324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x1e1328: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1e1328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1e132c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1e132cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1e1330: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e1330u;
    { uint32_t bits = FAST_READ32(0x4902F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1334: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e1334u;
    { uint32_t bits = FAST_READ32(0x4902F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1338: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e1338u;
    { uint32_t bits = FAST_READ32(0x4902F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e133c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e133cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e1340: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e1340u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e1344: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e1344u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e1348: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1e1348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e134c: 0x0  nop
    ctx->pc = 0x1e134cu;
    // NOP
    // 0x1e1350: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1e1350u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1354: 0x0  nop
    ctx->pc = 0x1e1354u;
    // NOP
    // 0x1e1358: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1358u;
    {
        const bool branch_taken_0x1e1358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1358) {
            ctx->pc = 0x1E135Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1358u;
            // 0x1e135c: 0xc443000c  lwc1        $f3, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1368u;
            goto label_1e1368;
        }
    }
    ctx->pc = 0x1E1360u;
label_1e1360:
    // 0x1e1360: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x1E1360u;
    {
        const bool branch_taken_0x1e1360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1360u;
        // 0x1e1364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1360) {
            ctx->pc = 0x1E17BCu;
            goto label_1e17bc;
        }
    }
    ctx->pc = 0x1E1368u;
label_1e1368:
    // 0x1e1368: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e1368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e136c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1e136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1370: 0xc46202f0  lwc1        $f2, 0x2F0($v1)
    ctx->pc = 0x1e1370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1374: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1e1374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e1378: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1e1378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e137c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e137cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e1380: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1e1380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e1384: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e1384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1388: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1e1388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e138c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1e138cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1390: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1e1390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e1394: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e1394u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e1398: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e1398u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e139c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1e139cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e13a0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e13a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e13a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e13a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E13A8u;
    SET_GPR_U32(ctx, 31, 0x1E13B0u);
    ctx->pc = 0x1E13ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E13A8u;
    // 0x1e13ac: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E13A8u, 0x1E13B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13B0u;
label_1e13b0:
    // 0x1e13b0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E13B0u;
    SET_GPR_U32(ctx, 31, 0x1E13B8u);
    ctx->pc = 0x1E13B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E13B0u;
    // 0x1e13b4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E13B0u, 0x1E13B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13B8u;
label_1e13b8:
    // 0x1e13b8: 0x7a620040  lq          $v0, 0x40($s3)
    ctx->pc = 0x1e13b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1e13bc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1e13bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e13c0: 0x7a630010  lq          $v1, 0x10($s3)
    ctx->pc = 0x1e13c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1e13c4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e13c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e13c8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e13c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e13cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e13ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e13d0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1e13d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1e13d4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e13d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e13d8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e13d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e13dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e13dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e13e0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e13e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e13e4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1e13e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e13e8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1e13e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e13ec: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1e13ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e13f0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e13f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e13f4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e13f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e13f8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e13f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e13fc: 0x0  nop
    ctx->pc = 0x1e13fcu;
    // NOP
    // 0x1e1400: 0x0  nop
    ctx->pc = 0x1e1400u;
    // NOP
    // 0x1e1404: 0x46000044  c1          0x44
    ctx->pc = 0x1e1404u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e1408: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1e1408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e140c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1e140cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1410: 0x0  nop
    ctx->pc = 0x1e1410u;
    // NOP
    // 0x1e1414: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1E1414u;
    {
        const bool branch_taken_0x1e1414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1414u;
        // 0x1e1418: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1414) {
            ctx->pc = 0x1E1440u;
            goto label_1e1440;
        }
    }
    ctx->pc = 0x1E141Cu;
    // 0x1e141c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e141cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1420: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e1420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1424: 0x0  nop
    ctx->pc = 0x1e1424u;
    // NOP
    // 0x1e1428: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e1428u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e142c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e142cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e1430: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1e1430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e1434: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e1434u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e1438: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e1438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e143c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e143cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e1440:
    // 0x1e1440: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1e1440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1444: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e1444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e1448: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e1448u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e144c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e144cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e1450: 0xe44091cc  swc1        $f0, -0x6E34($v0)
    ctx->pc = 0x1e1450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F91CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91CCu, _value); } while (0); }
    // 0x1e1454: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1458: 0xc077824  jal         func_1DE090
    ctx->pc = 0x1E1458u;
    SET_GPR_U32(ctx, 31, 0x1E1460u);
    ctx->pc = 0x1E145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1458u;
    // 0x1e145c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x1E1458u, 0x1E1460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1460u;
label_1e1460:
    // 0x1e1460: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1E1460u;
    {
        const bool branch_taken_0x1e1460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1460u;
        // 0x1e1464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1460) {
            ctx->pc = 0x1E172Cu;
            goto label_1e172c;
        }
    }
    ctx->pc = 0x1E1468u;
    // 0x1e1468: 0xae530024  sw          $s3, 0x24($s2)
    ctx->pc = 0x1e1468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 19));
    // 0x1e146c: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1e146cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1e1470: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e1470u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e1474: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1e1474u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1478: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e1478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e147c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1480: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1e1480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1484: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1e1484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e1488: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1e1488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e148c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1e148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1490: 0xc7a5008c  lwc1        $f5, 0x8C($sp)
    ctx->pc = 0x1e1490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e1494: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1e1494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e1498: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1e1498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1e149c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1e149cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1e14a0: 0xe7a5007c  swc1        $f5, 0x7C($sp)
    ctx->pc = 0x1e14a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1e14a4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e14a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e14a8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e14a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e14ac: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e14acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e14b0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e14b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e14b4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e14b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e14b8: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1e14b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e14bc: 0x46050144  c1          0x50144
    ctx->pc = 0x1e14bcu;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e14c0: 0x46142832  c.eq.s      $f5, $f20
    ctx->pc = 0x1e14c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e14c4: 0x0  nop
    ctx->pc = 0x1e14c4u;
    // NOP
    // 0x1e14c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E14C8u;
    {
        const bool branch_taken_0x1e14c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e14c8) {
            ctx->pc = 0x1E14E4u;
            goto label_1e14e4;
        }
    }
    ctx->pc = 0x1E14D0u;
    // 0x1e14d0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1e14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1e14d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e14d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e14d8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e14d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e14dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E14DCu;
    {
        const bool branch_taken_0x1e14dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14DCu;
        // 0x1e14e0: 0xc6640020  lwc1        $f4, 0x20($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14dc) {
            ctx->pc = 0x1E1508u;
            goto label_1e1508;
        }
    }
    ctx->pc = 0x1E14E4u;
label_1e14e4:
    // 0x1e14e4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e14e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e14e8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1e14e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e14ec: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1e14ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e14f0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1e14f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e14f4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e14f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e14f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e14f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e14fc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1e14fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1500: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e1500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1504: 0xc6640020  lwc1        $f4, 0x20($s3)
    ctx->pc = 0x1e1504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e1508:
    // 0x1e1508: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1e1508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e150c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1e150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1510: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1e1510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1514: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x1e1514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1518: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1e1518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1e151c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1e151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1520: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1e1520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1e1524: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1e1524u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1e1528: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1e1528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e152c: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x1e152cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e1530: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x1e1530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1e1534: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x1e1534u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1e1538: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1e1538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1e153c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e153cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1540: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e1540u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1544: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e1544u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1548: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1e1548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e154c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1e154cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1e1550: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1e1550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1e1554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e1554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1558: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1e1558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e155c: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x1e155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1560: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1e1560u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e1564: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1e1564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1568: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1e1568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e156c: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x1e156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1570: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x1e1570u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1e1574: 0xc66b0010  lwc1        $f11, 0x10($s3)
    ctx->pc = 0x1e1574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1e1578: 0xc60a0004  lwc1        $f10, 0x4($s0)
    ctx->pc = 0x1e1578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1e157c: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x1e157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e1580: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1e1580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e1584: 0xc6460000  lwc1        $f6, 0x0($s2)
    ctx->pc = 0x1e1584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e1588: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1e1588u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1e158c: 0xc6470004  lwc1        $f7, 0x4($s2)
    ctx->pc = 0x1e158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e1590: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1e1590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1e1594: 0xc6480008  lwc1        $f8, 0x8($s2)
    ctx->pc = 0x1e1594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1e1598: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1e1598u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1e159c: 0xc649000c  lwc1        $f9, 0xC($s2)
    ctx->pc = 0x1e159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1e15a0: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x1e15a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e15a4: 0xc7ad00a0  lwc1        $f13, 0xA0($sp)
    ctx->pc = 0x1e15a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e15a8: 0xc7ae00a4  lwc1        $f14, 0xA4($sp)
    ctx->pc = 0x1e15a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e15ac: 0xc7af00a8  lwc1        $f15, 0xA8($sp)
    ctx->pc = 0x1e15acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e15b0: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1e15b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e15b4: 0xe7ad0080  swc1        $f13, 0x80($sp)
    ctx->pc = 0x1e15b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e15b8: 0xe7ae0084  swc1        $f14, 0x84($sp)
    ctx->pc = 0x1e15b8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1e15bc: 0xe7af0088  swc1        $f15, 0x88($sp)
    ctx->pc = 0x1e15bcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1e15c0: 0xe7ac008c  swc1        $f12, 0x8C($sp)
    ctx->pc = 0x1e15c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1e15c4: 0xe7ab0090  swc1        $f11, 0x90($sp)
    ctx->pc = 0x1e15c4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e15c8: 0xe7aa0094  swc1        $f10, 0x94($sp)
    ctx->pc = 0x1e15c8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1e15cc: 0xe7a50098  swc1        $f5, 0x98($sp)
    ctx->pc = 0x1e15ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1e15d0: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x1e15d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1e15d4: 0xe7a600a0  swc1        $f6, 0xA0($sp)
    ctx->pc = 0x1e15d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e15d8: 0xe7a700a4  swc1        $f7, 0xA4($sp)
    ctx->pc = 0x1e15d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1e15dc: 0xe7a800a8  swc1        $f8, 0xA8($sp)
    ctx->pc = 0x1e15dcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e15e0: 0xe7a900ac  swc1        $f9, 0xAC($sp)
    ctx->pc = 0x1e15e0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1e15e4: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x1e15e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e15e8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1e15e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e15ec: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x1e15ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e15f0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e15f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e15f4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e15f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e15f8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e15f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e15fc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e15fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1600: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1e1600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1604: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x1e1604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1608: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e1608u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e160c: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x1e160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e1610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1614: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1e1614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1618: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e1618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e161c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1620: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x1e1620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e1624: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x1e1624u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e1628: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1e1628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e162c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e162cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e1630: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1e1630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e1634: 0xc07a768  jal         func_1E9DA0
    ctx->pc = 0x1E1634u;
    SET_GPR_U32(ctx, 31, 0x1E163Cu);
    ctx->pc = 0x1E1638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1634u;
    // 0x1e1638: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9DA0u, 0x1E1634u, 0x1E163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E163Cu;
label_1e163c:
    // 0x1e163c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e1640: 0x8c4391f4  lw          $v1, -0x6E0C($v0)
    ctx->pc = 0x1e1640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1e1644: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E1644u;
    {
        const bool branch_taken_0x1e1644 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1E1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1644u;
        // 0x1e1648: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1644) {
            ctx->pc = 0x1E168Cu;
            goto label_1e168c;
        }
    }
    ctx->pc = 0x1E164Cu;
    // 0x1e164c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1e164cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1e1650: 0x3c14001e  lui         $s4, 0x1E
    ctx->pc = 0x1e1650u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)30 << 16));
    // 0x1e1654: 0x2450c758  addiu       $s0, $v0, -0x38A8
    ctx->pc = 0x1e1654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x1e1658: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1e1658u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66C758u));
    // 0x1e165c: 0x0  nop
    ctx->pc = 0x1e165cu;
    // NOP
label_1e1660:
    // 0x1e1660: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e1660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1664: 0x26871018  addiu       $a3, $s4, 0x1018
    ctx->pc = 0x1e1664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4120));
    // 0x1e1668: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1e1668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e166c: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1e166cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e1670: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e1670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e1674: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x1E1674u;
    SET_GPR_U32(ctx, 31, 0x1E167Cu);
    ctx->pc = 0x1E1678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1674u;
    // 0x1e1678: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x1E1674u, 0x1E167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E167Cu;
label_1e167c:
    // 0x1e167c: 0x8ea391f4  lw          $v1, -0x6E0C($s5)
    ctx->pc = 0x1e167cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939124)));
    // 0x1e1680: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1e1680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e1684: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E1684u;
    {
        const bool branch_taken_0x1e1684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1684) {
            ctx->pc = 0x1E1688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1684u;
            // 0x1e1688: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1660;
        }
    }
    ctx->pc = 0x1E168Cu;
label_1e168c:
    // 0x1e168c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1e168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1e1690: 0x1040ff33  beqz        $v0, . + 4 + (-0xCD << 2)
    ctx->pc = 0x1E1690u;
    {
        const bool branch_taken_0x1e1690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1690u;
        // 0x1e1694: 0x3c110049  lui         $s1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1690) {
            ctx->pc = 0x1E1360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1360;
        }
    }
    ctx->pc = 0x1E1698u;
    // 0x1e1698: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x1e1698u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1e169c: 0x263101a0  addiu       $s1, $s1, 0x1A0
    ctx->pc = 0x1e169cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x1e16a0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1e16a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e16a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e16a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16a8: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1e16a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e16ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e16acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16b0: 0xc07a814  jal         func_1EA050
    ctx->pc = 0x1E16B0u;
    SET_GPR_U32(ctx, 31, 0x1E16B8u);
    ctx->pc = 0x1E16B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E16B0u;
    // 0x1e16b4: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA050u, 0x1E16B0u, 0x1E16B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E16B8u;
label_1e16b8:
    // 0x1e16b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e16bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e16bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e16c0: 0xae51002c  sw          $s1, 0x2C($s2)
    ctx->pc = 0x1e16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 17));
    // 0x1e16c4: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x1e16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x1e16c8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e16c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e16cc: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e16ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e16d0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x1e16d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e16d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e16d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e16d8: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1e16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x1e16dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e16dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e16e0: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x1e16e0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
    // 0x1e16e4: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1e16e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1e16e8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e16e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e16ec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e16ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e16f0: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1e16f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e16f4: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x1e16f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e16f8: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x1e16f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e16fc: 0xc6e40008  lwc1        $f4, 0x8($s7)
    ctx->pc = 0x1e16fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e1700: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e1700u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e1704: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e1704u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e1708: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e1708u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e170c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e170cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e1710: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x1e1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1714: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e1714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1718: 0x0  nop
    ctx->pc = 0x1e1718u;
    // NOP
    // 0x1e171c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E171Cu;
    {
        const bool branch_taken_0x1e171c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e171c) {
            ctx->pc = 0x1E1720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E171Cu;
            // 0x1e1720: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1724u;
            goto label_1e1724;
        }
    }
    ctx->pc = 0x1E1724u;
label_1e1724:
    // 0x1e1724: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E1724u;
    {
        const bool branch_taken_0x1e1724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1724u;
        // 0x1e1728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1724) {
            ctx->pc = 0x1E17BCu;
            goto label_1e17bc;
        }
    }
    ctx->pc = 0x1E172Cu;
label_1e172c:
    // 0x1e172c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e172cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1730: 0xc07a768  jal         func_1E9DA0
    ctx->pc = 0x1E1730u;
    SET_GPR_U32(ctx, 31, 0x1E1738u);
    ctx->pc = 0x1E1734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1730u;
    // 0x1e1734: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9DA0u, 0x1E1730u, 0x1E1738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1738u;
label_1e1738:
    // 0x1e1738: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e1738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e173c: 0x8c4391f4  lw          $v1, -0x6E0C($v0)
    ctx->pc = 0x1e173cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1e1740: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E1740u;
    {
        const bool branch_taken_0x1e1740 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1E1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1740u;
        // 0x1e1744: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1740) {
            ctx->pc = 0x1E1784u;
            goto label_1e1784;
        }
    }
    ctx->pc = 0x1E1748u;
    // 0x1e1748: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1e1748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1e174c: 0x3c14001e  lui         $s4, 0x1E
    ctx->pc = 0x1e174cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)30 << 16));
    // 0x1e1750: 0x2451c758  addiu       $s1, $v0, -0x38A8
    ctx->pc = 0x1e1750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x1e1754: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1e1754u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66C758u));
label_1e1758:
    // 0x1e1758: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e1758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e175c: 0x26871018  addiu       $a3, $s4, 0x1018
    ctx->pc = 0x1e175cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4120));
    // 0x1e1760: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1e1760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1764: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1e1764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e1768: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e1768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e176c: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x1E176Cu;
    SET_GPR_U32(ctx, 31, 0x1E1774u);
    ctx->pc = 0x1E1770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E176Cu;
    // 0x1e1770: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x1E176Cu, 0x1E1774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1774u;
label_1e1774:
    // 0x1e1774: 0x8ea391f4  lw          $v1, -0x6E0C($s5)
    ctx->pc = 0x1e1774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939124)));
    // 0x1e1778: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1e1778u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e177c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E177Cu;
    {
        const bool branch_taken_0x1e177c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e177c) {
            ctx->pc = 0x1E1780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E177Cu;
            // 0x1e1780: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1758;
        }
    }
    ctx->pc = 0x1E1784u;
label_1e1784:
    // 0x1e1784: 0x8e480034  lw          $t0, 0x34($s2)
    ctx->pc = 0x1e1784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1e1788: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1788u;
    {
        const bool branch_taken_0x1e1788 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1788u;
        // 0x1e178c: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1788) {
            ctx->pc = 0x1E17B4u;
            goto label_1e17b4;
        }
    }
    ctx->pc = 0x1E1790u;
    // 0x1e1790: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x1e1790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x1e1794: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x1e1794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1e1798: 0x8d060018  lw          $a2, 0x18($t0)
    ctx->pc = 0x1e1798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1e179c: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x1e179cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1e17a0: 0xc07a814  jal         func_1EA050
    ctx->pc = 0x1E17A0u;
    SET_GPR_U32(ctx, 31, 0x1E17A8u);
    ctx->pc = 0x1E17A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17A0u;
    // 0x1e17a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA050u, 0x1E17A0u, 0x1E17A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17A8u;
label_1e17a8:
    // 0x1e17a8: 0xae50002c  sw          $s0, 0x2C($s2)
    ctx->pc = 0x1e17a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 16));
    // 0x1e17ac: 0xc6e091cc  lwc1        $f0, -0x6E34($s7)
    ctx->pc = 0x1e17acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294939084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e17b0: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1e17b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_1e17b4:
    // 0x1e17b4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1e17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1e17b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e17b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e17bc:
    // 0x1e17bc: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x1e17bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e17c0: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x1e17c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1e17c4: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x1e17c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e17c8: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x1e17c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1e17cc: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x1e17ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e17d0: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x1e17d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1e17d4: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x1e17d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e17d8: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x1e17d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1e17dc: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1e17dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e17e0: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1e17e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e17e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E17E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17E4u;
        // 0x1e17e8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E17E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E17ECu;
    // 0x1e17ec: 0x0  nop
    ctx->pc = 0x1e17ecu;
    // NOP
    ctx->pc = 0x1e17f0u;
}
