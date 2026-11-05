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

// Function: sub_001E2300
// Address: 0x1e2300 - 0x1e24c8
void sub_001E2300_0x1e2300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2300_0x1e2300");
#endif

    ctx->pc = 0x1e2300u;

    // 0x1e2300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2304: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1e2304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1e2308: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1e2308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1e230c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e230cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2310: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e2310u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2314: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e2314u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2318: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e2318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e231c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2320: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x1e2320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1e2324: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e2324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2328: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e2328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e232c: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x1e232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2330: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e2330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e2334: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e2334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e2338: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e2338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e233c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1e233cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e2340: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e2340u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2344: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1e2344u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2348: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e2348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e234c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2350: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e2350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e2354: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e2354u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e2358: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e2358u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e235c: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1e235cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e2360: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1e2360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2364: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x1e2364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2368: 0x0  nop
    ctx->pc = 0x1e2368u;
    // NOP
    // 0x1e236c: 0x45020053  bc1fl       . + 4 + (0x53 << 2)
    ctx->pc = 0x1E236Cu;
    {
        const bool branch_taken_0x1e236c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e236c) {
            ctx->pc = 0x1E2370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E236Cu;
            // 0x1e2370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E24BCu;
            goto label_1e24bc;
        }
    }
    ctx->pc = 0x1E2374u;
    // 0x1e2374: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1e2374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2378: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x1e2378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e237c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e237cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e2380: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e2380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e2384: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x1e2384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2388: 0x0  nop
    ctx->pc = 0x1e2388u;
    // NOP
    // 0x1e238c: 0x4502004b  bc1fl       . + 4 + (0x4B << 2)
    ctx->pc = 0x1E238Cu;
    {
        const bool branch_taken_0x1e238c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e238c) {
            ctx->pc = 0x1E2390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E238Cu;
            // 0x1e2390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E24BCu;
            goto label_1e24bc;
        }
    }
    ctx->pc = 0x1E2394u;
    // 0x1e2394: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x1e2394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2398: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1e2398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1e239c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1e239cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1e23a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e23a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e23a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e23a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e23a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e23a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e23ac: 0x0  nop
    ctx->pc = 0x1e23acu;
    // NOP
    // 0x1e23b0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1E23B0u;
    {
        const bool branch_taken_0x1e23b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23B0u;
        // 0x1e23b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23b0) {
            ctx->pc = 0x1E23E8u;
            goto label_1e23e8;
        }
    }
    ctx->pc = 0x1E23B8u;
    // 0x1e23b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e23b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e23bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e23bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e23c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e23c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e23c4: 0x0  nop
    ctx->pc = 0x1e23c4u;
    // NOP
    // 0x1e23c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E23C8u;
    {
        const bool branch_taken_0x1e23c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e23c8) {
            ctx->pc = 0x1E23E8u;
            goto label_1e23e8;
        }
    }
    ctx->pc = 0x1E23D0u;
    // 0x1e23d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e23d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e23d4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e23d4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e23d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e23d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e23dc: 0x0  nop
    ctx->pc = 0x1e23dcu;
    // NOP
    // 0x1e23e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E23E0u;
    {
        const bool branch_taken_0x1e23e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e23e0) {
            ctx->pc = 0x1E23E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E23E0u;
            // 0x1e23e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E23E8u;
            goto label_1e23e8;
        }
    }
    ctx->pc = 0x1E23E8u;
label_1e23e8:
    // 0x1e23e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E23E8u;
    {
        const bool branch_taken_0x1e23e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23E8u;
        // 0x1e23ec: 0x24c40010  addiu       $a0, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23e8) {
            ctx->pc = 0x1E2400u;
            goto label_1e2400;
        }
    }
    ctx->pc = 0x1E23F0u;
    // 0x1e23f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e23f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e23f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e23f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e23f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E23F8u;
    {
        const bool branch_taken_0x1e23f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23F8u;
        // 0x1e23fc: 0xe4c00018  swc1        $f0, 0x18($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23f8) {
            ctx->pc = 0x1E2428u;
            goto label_1e2428;
        }
    }
    ctx->pc = 0x1E2400u;
label_1e2400:
    // 0x1e2400: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x1e2400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1e2404: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e2404u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2408: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1e2408u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e240c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1e240cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2410: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1e2410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2414: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e2414u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e2418: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e2418u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e241c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1e241cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2420: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1e2420u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2428:
    // 0x1e2428: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1e2428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e242c: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1e242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1e2430: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x1e2430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2434: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e2434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e2438: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1e2438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e243c: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x1e243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2440: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1e2440u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e2444: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1e2444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e2448: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1e2448u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e244c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1e244cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e2450: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e2450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e2454: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1e2454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e2458: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1e2458u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e245c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1e245cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e2460: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1e2460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e2464: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e2464u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2468: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e2468u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e246c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e246cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2470: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e2470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2474: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e2474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2478: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1e2478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e247c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1e247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2480: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x1e2480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2484: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e2484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e2488: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e2488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e248c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e248cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e2490: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1e2490u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e2494: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e2494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2498: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1e2498u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e249c: 0x0  nop
    ctx->pc = 0x1e249cu;
    // NOP
    // 0x1e24a0: 0x0  nop
    ctx->pc = 0x1e24a0u;
    // NOP
    // 0x1e24a4: 0x46050004  c1          0x50004
    ctx->pc = 0x1e24a4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e24a8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x1e24a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e24ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e24acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e24b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e24b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e24b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e24b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e24b8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1e24b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_1e24bc:
    // 0x1e24bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E24BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24BCu;
        // 0x1e24c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E24BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E24C4u;
    // 0x1e24c4: 0x0  nop
    ctx->pc = 0x1e24c4u;
    // NOP
    ctx->pc = 0x1e24c8u;
}
