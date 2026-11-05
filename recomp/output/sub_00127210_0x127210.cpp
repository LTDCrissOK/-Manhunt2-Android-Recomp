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

// Function: sub_00127210
// Address: 0x127210 - 0x127520
void sub_00127210_0x127210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127210_0x127210");
#endif

    switch (ctx->pc) {
        case 0x1273c4u: goto label_1273c4;
        case 0x1273d4u: goto label_1273d4;
        case 0x12743cu: goto label_12743c;
        case 0x127474u: goto label_127474;
        case 0x127494u: goto label_127494;
        case 0x1274b0u: goto label_1274b0;
        case 0x1274b4u: goto label_1274b4;
        case 0x1274b8u: goto label_1274b8;
        case 0x1274c0u: goto label_1274c0;
        case 0x1274c8u: goto label_1274c8;
        case 0x1274e0u: goto label_1274e0;
        case 0x1274e4u: goto label_1274e4;
        default: break;
    }

    ctx->pc = 0x127210u;

    // 0x127210: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x127210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x127214: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x127214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x127218: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x127218u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12721c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x12721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x127220: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x127220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127224: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x127224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x127228: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x127228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12722c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x12722cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x127230: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x127230u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x127234: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x127234u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x127238: 0x0  nop
    ctx->pc = 0x127238u;
    // NOP
    // 0x12723c: 0x0  nop
    ctx->pc = 0x12723cu;
    // NOP
    // 0x127240: 0x46000044  c1          0x44
    ctx->pc = 0x127240u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x127244: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x127244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x127248: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x127248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x12724c: 0x0  nop
    ctx->pc = 0x12724cu;
    // NOP
    // 0x127250: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x127250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127254: 0x0  nop
    ctx->pc = 0x127254u;
    // NOP
    // 0x127258: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x127258u;
    {
        const bool branch_taken_0x127258 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127258u;
        // 0x12725c: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127258) {
            ctx->pc = 0x127284u;
            goto label_127284;
        }
    }
    ctx->pc = 0x127260u;
    // 0x127260: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x127260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x127264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x127264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127268: 0x0  nop
    ctx->pc = 0x127268u;
    // NOP
    // 0x12726c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x12726cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x127270: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x127270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x127274: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x127274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x127278: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x127278u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12727c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12727cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x127280: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x127280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_127284:
    // 0x127284: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x127284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x127288: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x127288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12728c: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x12728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x127290: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x127290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x127294: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x127294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x127298: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x127298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12729c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x12729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1272a0: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x1272a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1272a4: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1272a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1272a8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1272a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1272ac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1272acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1272b0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1272b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1272b4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1272b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1272b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1272b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1272bc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1272bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1272c0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1272c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1272c4: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x1272c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1272c8: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x1272c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1272cc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1272ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1272d0: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x1272d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1272d4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1272d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1272d8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1272d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1272dc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1272dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1272e0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1272e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1272e4: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1272e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1272e8: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1272e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1272ec: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x1272ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1272f0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1272f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1272f4: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x1272f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1272f8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1272f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1272fc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1272fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x127300: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x127300u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x127304: 0xe7a500b0  swc1        $f5, 0xB0($sp)
    ctx->pc = 0x127304u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x127308: 0xe4c60004  swc1        $f6, 0x4($a2)
    ctx->pc = 0x127308u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x12730c: 0xe7a500b8  swc1        $f5, 0xB8($sp)
    ctx->pc = 0x12730cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x127310: 0xe7a500bc  swc1        $f5, 0xBC($sp)
    ctx->pc = 0x127310u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x127314: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x127314u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x127318: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x127318u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12731c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x12731cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x127320: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x127320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x127324: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x127324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127328: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x127328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12732c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x12732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127330: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x127330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x127334: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x127334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x127338: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x127338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x12733c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x12733cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x127340: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x127340u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x127344: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x127344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127348: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x127348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x12734c: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x12734cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x127350: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x127350u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x127354: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x127354u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x127358: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x127358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12735c: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x12735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127360: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x127360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x127364: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x127364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x127368: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x127368u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x12736c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x12736cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x127370: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x127370u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x127374: 0x0  nop
    ctx->pc = 0x127374u;
    // NOP
    // 0x127378: 0x0  nop
    ctx->pc = 0x127378u;
    // NOP
    // 0x12737c: 0x46000044  c1          0x44
    ctx->pc = 0x12737cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x127380: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x127380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x127384: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x127384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127388: 0x0  nop
    ctx->pc = 0x127388u;
    // NOP
    // 0x12738c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x12738Cu;
    {
        const bool branch_taken_0x12738c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x127390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12738Cu;
        // 0x127390: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12738c) {
            ctx->pc = 0x1273B8u;
            goto label_1273b8;
        }
    }
    ctx->pc = 0x127394u;
    // 0x127394: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x127394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x127398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x127398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12739c: 0x0  nop
    ctx->pc = 0x12739cu;
    // NOP
    // 0x1273a0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1273a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1273a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1273a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1273a8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1273a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1273ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1273acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1273b0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1273b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1273b4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1273b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_1273b8:
    // 0x1273b8: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x1273b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1273bc: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1273BCu;
    SET_GPR_U32(ctx, 31, 0x1273C4u);
    ctx->pc = 0x1273C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273BCu;
    // 0x1273c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1273BCu, 0x1273C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273C4u;
label_1273c4:
    // 0x1273c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1273c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1273c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1273cc: 0xc0779da  jal         func_1DE768
    ctx->pc = 0x1273CCu;
    SET_GPR_U32(ctx, 31, 0x1273D4u);
    ctx->pc = 0x1273D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273CCu;
    // 0x1273d0: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE768u, 0x1273CCu, 0x1273D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273D4u;
label_1273d4:
    // 0x1273d4: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1273D4u;
    {
        const bool branch_taken_0x1273d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1273D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273D4u;
        // 0x1273d8: 0xc7a10130  lwc1        $f1, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273d4) {
            ctx->pc = 0x1274B4u;
            goto label_1274b4;
        }
    }
    ctx->pc = 0x1273DCu;
    // 0x1273dc: 0x3c014066  lui         $at, 0x4066
    ctx->pc = 0x1273dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16486 << 16));
    // 0x1273e0: 0x34218dca  ori         $at, $at, 0x8DCA
    ctx->pc = 0x1273e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36298);
    // 0x1273e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1273e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1273e8: 0x0  nop
    ctx->pc = 0x1273e8u;
    // NOP
    // 0x1273ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1273ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1273f0: 0x0  nop
    ctx->pc = 0x1273f0u;
    // NOP
    // 0x1273f4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1273F4u;
    {
        const bool branch_taken_0x1273f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1273F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273F4u;
        // 0x1273f8: 0x24150085  addiu       $s5, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273f4) {
            ctx->pc = 0x127420u;
            goto label_127420;
        }
    }
    ctx->pc = 0x1273FCu;
    // 0x1273fc: 0x3c013fd5  lui         $at, 0x3FD5
    ctx->pc = 0x1273fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16341 << 16));
    // 0x127400: 0x3421db91  ori         $at, $at, 0xDB91
    ctx->pc = 0x127400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56209);
    // 0x127404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x127404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127408: 0x0  nop
    ctx->pc = 0x127408u;
    // NOP
    // 0x12740c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12740cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127410: 0x0  nop
    ctx->pc = 0x127410u;
    // NOP
    // 0x127414: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x127414u;
    {
        const bool branch_taken_0x127414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x127418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127414u;
        // 0x127418: 0x24150083  addiu       $s5, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127414) {
            ctx->pc = 0x127420u;
            goto label_127420;
        }
    }
    ctx->pc = 0x12741Cu;
    // 0x12741c: 0x24150084  addiu       $s5, $zero, 0x84
    ctx->pc = 0x12741cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_127420:
    // 0x127420: 0xafb50140  sw          $s5, 0x140($sp)
    ctx->pc = 0x127420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 21));
    // 0x127424: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x127424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x127428: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x127428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12742c: 0x24426a00  addiu       $v0, $v0, 0x6A00
    ctx->pc = 0x12742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27136));
    // 0x127430: 0xa4430104  sh          $v1, 0x104($v0)
    ctx->pc = 0x127430u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F6B04u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3F6B04u, _value); } while (0);
    // 0x127434: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x127434u;
    {
        const bool branch_taken_0x127434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127434u;
        // 0x127438: 0xa44300ec  sh          $v1, 0xEC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 236), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127434) {
            ctx->pc = 0x1274B4u;
            goto label_1274b4;
        }
    }
    ctx->pc = 0x12743Cu;
label_12743c:
    // 0x12743c: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x12743Cu;
    {
        const bool branch_taken_0x12743c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x127440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12743Cu;
        // 0x127440: 0x8fa40138  lw          $a0, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12743c) {
            ctx->pc = 0x127468u;
            goto label_127468;
        }
    }
    ctx->pc = 0x127444u;
    // 0x127444: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127444u;
    {
        const bool branch_taken_0x127444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127444u;
        // 0x127448: 0x240200ad  addiu       $v0, $zero, 0xAD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127444) {
            ctx->pc = 0x127458u;
            goto label_127458;
        }
    }
    ctx->pc = 0x12744Cu;
    // 0x12744c: 0x241500ac  addiu       $s5, $zero, 0xAC
    ctx->pc = 0x12744cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x127450: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x127450u;
    {
        const bool branch_taken_0x127450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127450u;
        // 0x127454: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127450) {
            ctx->pc = 0x1274B4u;
            goto label_1274b4;
        }
    }
    ctx->pc = 0x127458u;
label_127458:
    // 0x127458: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x127458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x12745c: 0x241500aa  addiu       $s5, $zero, 0xAA
    ctx->pc = 0x12745cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x127460: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x127460u;
    {
        const bool branch_taken_0x127460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127460u;
        // 0x127464: 0xafa30140  sw          $v1, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127460) {
            ctx->pc = 0x1274B4u;
            goto label_1274b4;
        }
    }
    ctx->pc = 0x127468u;
label_127468:
    // 0x127468: 0x240400a9  addiu       $a0, $zero, 0xA9
    ctx->pc = 0x127468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x12746c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12746Cu;
    {
        const bool branch_taken_0x12746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12746Cu;
        // 0x127470: 0x241500a6  addiu       $s5, $zero, 0xA6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12746c) {
            ctx->pc = 0x1274B0u;
            goto label_1274b0;
        }
    }
    ctx->pc = 0x127474u;
label_127474:
    // 0x127474: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x127474u;
    {
        const bool branch_taken_0x127474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x127478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127474u;
        // 0x127478: 0x24150075  addiu       $s5, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127474) {
            ctx->pc = 0x127484u;
            goto label_127484;
        }
    }
    ctx->pc = 0x12747Cu;
    // 0x12747c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12747Cu;
    {
        const bool branch_taken_0x12747c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12747Cu;
        // 0x127480: 0xafb50140  sw          $s5, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12747c) {
            ctx->pc = 0x1274B4u;
            goto label_1274b4;
        }
    }
    ctx->pc = 0x127484u;
label_127484:
    // 0x127484: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x127484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x127488: 0x24150076  addiu       $s5, $zero, 0x76
    ctx->pc = 0x127488u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x12748c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12748Cu;
    {
        const bool branch_taken_0x12748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12748Cu;
        // 0x127490: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12748c) {
            ctx->pc = 0x1274B4u;
            goto label_1274b4;
        }
    }
    ctx->pc = 0x127494u;
label_127494:
    // 0x127494: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x127494u;
    {
        const bool branch_taken_0x127494 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x127498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127494u;
        // 0x127498: 0x24030079  addiu       $v1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127494) {
            ctx->pc = 0x1274A8u;
            goto label_1274a8;
        }
    }
    ctx->pc = 0x12749Cu;
    // 0x12749c: 0x24150078  addiu       $s5, $zero, 0x78
    ctx->pc = 0x12749cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1274a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1274A0u;
    {
        const bool branch_taken_0x1274a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1274A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274A0u;
        // 0x1274a4: 0xafa30140  sw          $v1, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274a0) {
            ctx->pc = 0x1274B4u;
            goto label_1274b4;
        }
    }
    ctx->pc = 0x1274A8u;
label_1274a8:
    // 0x1274a8: 0x24040077  addiu       $a0, $zero, 0x77
    ctx->pc = 0x1274a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x1274ac: 0x24150076  addiu       $s5, $zero, 0x76
    ctx->pc = 0x1274acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_1274b0:
    // 0x1274b0: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x1274b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_1274b4:
    // 0x1274b4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1274b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1274b8:
    // 0x1274b8: 0x12a20009  beq         $s5, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1274B8u;
    {
        const bool branch_taken_0x1274b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1274BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274B8u;
        // 0x1274bc: 0x558023  subu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274b8) {
            ctx->pc = 0x1274E0u;
            goto label_1274e0;
        }
    }
    ctx->pc = 0x1274C0u;
label_1274c0:
    // 0x1274c0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x1274C0u;
    SET_GPR_U32(ctx, 31, 0x1274C8u);
    ctx->pc = 0x1274C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1274C0u;
    // 0x1274c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x1274C0u, 0x1274C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1274C8u;
label_1274c8:
    // 0x1274c8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x1274c8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1274cc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1274CCu;
    {
        const bool branch_taken_0x1274cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1274cc) {
            ctx->pc = 0x1274D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1274CCu;
            // 0x1274d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1274D4u;
            goto label_1274d4;
        }
    }
    ctx->pc = 0x1274D4u;
label_1274d4:
    // 0x1274d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1274d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1274d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1274D8u;
    {
        const bool branch_taken_0x1274d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1274DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274D8u;
        // 0x1274dc: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274d8) {
            ctx->pc = 0x1274E4u;
            goto label_1274e4;
        }
    }
    ctx->pc = 0x1274E0u;
label_1274e0:
    // 0x1274e0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1274e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1274e4:
    // 0x1274e4: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x1274e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1274e8: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x1274e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1274ec: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x1274ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1274f0: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x1274f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1274f4: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x1274f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1274f8: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x1274f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1274fc: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x1274fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x127500: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x127500u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x127504: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x127504u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x127508: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x127508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x12750c: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x12750cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x127510: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x127510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x127514: 0x3e00008  jr          $ra
    ctx->pc = 0x127514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127514u;
        // 0x127518: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12751Cu;
    // 0x12751c: 0x0  nop
    ctx->pc = 0x12751cu;
    // NOP
    ctx->pc = 0x127520u;
}
