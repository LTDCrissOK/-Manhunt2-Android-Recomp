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

// Function: sub_002D18A8
// Address: 0x2d18a8 - 0x2d1d78
void sub_002D18A8_0x2d18a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D18A8_0x2d18a8");
#endif

    switch (ctx->pc) {
        case 0x2d1b18u: goto label_2d1b18;
        case 0x2d1d00u: goto label_2d1d00;
        default: break;
    }

    ctx->pc = 0x2d18a8u;

    // 0x2d18a8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2d18a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d18ac: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2d18acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d18b0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d18b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d18b8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2d18b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d18bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2d18bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d18c0: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x2D18C0u;
    {
        const bool branch_taken_0x2d18c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18C0u;
        // 0x2d18c4: 0x27bdff70  addiu       $sp, $sp, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18c0) {
            ctx->pc = 0x2D1D70u;
            goto label_2d1d70;
        }
    }
    ctx->pc = 0x2D18C8u;
    // 0x2d18c8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2d18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2d18cc: 0x8c62b074  lw          $v0, -0x4F8C($v1)
    ctx->pc = 0x2d18ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x57B074u));
    // 0x2d18d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D18D0u;
    {
        const bool branch_taken_0x2d18d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18D0u;
        // 0x2d18d4: 0x3c0a0058  lui         $t2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18d0) {
            ctx->pc = 0x2D18F4u;
            goto label_2d18f4;
        }
    }
    ctx->pc = 0x2D18D8u;
    // 0x2d18d8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2d18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d18dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d18e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d18e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d18e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d18e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d18e8: 0xac62b074  sw          $v0, -0x4F8C($v1)
    ctx->pc = 0x2d18e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946932), GPR_U32(ctx, 2));
    // 0x2d18ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d18ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d18f0: 0xe540b070  swc1        $f0, -0x4F90($t2)
    ctx->pc = 0x2d18f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294946928), bits); }
label_2d18f4:
    // 0x2d18f4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2d18f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d18f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d18f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d18fc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d18fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d1900: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2d1900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1904: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2d1904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2d1908: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2d1908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2d190c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2d190cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d1910: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d1910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1914: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d1914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d1918: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d1918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d191c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d191cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d1920: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2d1920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1924: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2d1924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d1928: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x2d1928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d192c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2d192cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d1930: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2d1930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1934: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d1934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d1938: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2d1938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d193c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2d193cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d1940: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2d1940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1944: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2d1944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d1948: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2d1948u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d194c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2d194cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1950: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d1950u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1954: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2d1954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1958: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d1958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d195c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2d195cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1960: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2d1960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1964: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x2d1964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d1968: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d1968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d196c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2d196cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d1970: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2d1970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d1974: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2d1974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2d1978: 0xc540b070  lwc1        $f0, -0x4F90($t2)
    ctx->pc = 0x2d1978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294946928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d197c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d197cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d1980: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2d1980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1984: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d1984u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d1988: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d1988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d198c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2d198cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1990: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2d1990u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1994: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2d1994u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1998: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d1998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d199c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2d199cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d19a0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2d19a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d19a4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2d19a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d19a8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2d19a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d19ac: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2d19acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d19b0: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2d19b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d19b4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2d19b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d19b8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2d19b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d19bc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2d19bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d19c0: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x2d19c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d19c4: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x2d19c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d19c8: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x2d19c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d19cc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2d19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d19d0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2d19d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d19d4: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x2d19d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d19d8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2d19d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d19dc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2d19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d19e0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2d19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d19e4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2d19e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d19e8: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2d19e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d19ec: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2d19ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2d19f0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2d19f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d19f4: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x2d19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2d19f8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2d19f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d19fc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2d19fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1a00: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2d1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2d1a04: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d1a08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d1a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d1a0c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2d1a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2d1a10: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2d1a10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1a14: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2d1a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1a18: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2d1a18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d1a1c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2d1a1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1a20: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d1a20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1a24: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2d1a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1a28: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x2d1a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d1a2c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2d1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d1a30: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2d1a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1a34: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2d1a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1a38: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x2d1a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1a3c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2d1a3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d1a40: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2d1a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d1a44: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2d1a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d1a48: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x2d1a48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d1a4c: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x2d1a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d1a50: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2d1a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1a54: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2d1a54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1a58: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2d1a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1a5c: 0xc540b070  lwc1        $f0, -0x4F90($t2)
    ctx->pc = 0x2d1a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294946928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1a60: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d1a60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d1a64: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2d1a64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1a68: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d1a68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d1a6c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d1a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1a70: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2d1a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1a74: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2d1a74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1a78: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x2d1a78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1a7c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d1a80: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2d1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d1a84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1a88: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2d1a88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d1a8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d1a90: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d1a94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d1a98: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2d1a98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1a9c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2d1a9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1aa0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d1aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1aa4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2d1aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1aa8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2d1aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1aac: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2d1aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1ab0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2d1ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1ab4: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2d1ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d1ab8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2d1ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d1abc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2d1abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d1ac0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2d1ac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d1ac4: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x2d1ac4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d1ac8: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x2d1ac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d1acc: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x2d1accu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1ad0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2d1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d1ad4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d1ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1ad8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d1ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d1adc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1ae0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2d1ae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d1ae4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d1ae8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2d1ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d1aec: 0x5040007a  beql        $v0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x2D1AECu;
    {
        const bool branch_taken_0x2d1aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1aec) {
            ctx->pc = 0x2D1AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1AECu;
            // 0x2d1af0: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1CD8u;
            goto label_2d1cd8;
        }
    }
    ctx->pc = 0x2D1AF4u;
    // 0x2d1af4: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x2d1af4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1af8: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x2d1af8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1afc: 0x27ab0050  addiu       $t3, $sp, 0x50
    ctx->pc = 0x2d1afcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d1b00: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2d1b00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d1b04: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2d1b04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d1b08: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2d1b08u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b0c: 0x240c0080  addiu       $t4, $zero, 0x80
    ctx->pc = 0x2d1b0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d1b10: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d1b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d1b14: 0x0  nop
    ctx->pc = 0x2d1b14u;
    // NOP
label_2d1b18:
    // 0x2d1b18: 0x73180  sll         $a2, $a3, 6
    ctx->pc = 0x2d1b18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2d1b1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d1b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d1b20: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x2d1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2d1b24: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x2d1b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d1b28: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2d1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d1b2c: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x2d1b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2d1b30: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2d1b30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1b34: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2d1b34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1b38: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d1b38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1b3c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2d1b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1b40: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x2d1b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d1b44: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x2d1b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2d1b48: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2d1b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1b4c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2d1b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2d1b50: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2d1b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1b54: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2d1b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1b58: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2d1b58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d1b5c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2d1b5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d1b60: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2d1b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d1b64: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x2d1b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d1b68: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2d1b68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1b6c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2d1b6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1b70: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d1b70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1b74: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2d1b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1b78: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2d1b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1b7c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2d1b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1b80: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2d1b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1b84: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x2d1b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d1b88: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2d1b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d1b8c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2d1b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2d1b90: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2d1b90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d1b94: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x2d1b94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2d1b98: 0xd9e10000  lqc2        $vf1, 0x0($t7)
    ctx->pc = 0x2d1b98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2d1b9c: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x2d1b9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2d1ba0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d1ba0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1ba4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2d1ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1ba8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2d1ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1bac: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2d1bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1bb0: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2d1bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1bb4: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x2d1bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d1bb8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2d1bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d1bbc: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2d1bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2d1bc0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2d1bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d1bc4: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x2d1bc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2d1bc8: 0xc5c0b070  lwc1        $f0, -0x4F90($t6)
    ctx->pc = 0x2d1bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4294946928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1bcc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d1bccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d1bd0: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x2d1bd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d1bd4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d1bd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d1bd8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d1bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1bdc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2d1bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1be0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2d1be0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1be4: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x2d1be4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d1be8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d1be8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1bec: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2d1becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1bf0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2d1bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1bf4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2d1bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1bf8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2d1bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1bfc: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x2d1bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d1c00: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2d1c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d1c04: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2d1c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2d1c08: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2d1c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d1c0c: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x2d1c0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2d1c10: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x2d1c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2d1c14: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x2d1c14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1c18: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x2d1c18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2d1c1c: 0xd9e20000  lqc2        $vf2, 0x0($t7)
    ctx->pc = 0x2d1c1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2d1c20: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d1c20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1c24: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2d1c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1c28: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2d1c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1c2c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2d1c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1c30: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2d1c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1c34: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x2d1c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d1c38: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2d1c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d1c3c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2d1c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2d1c40: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2d1c40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d1c44: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x2d1c44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2d1c48: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x2d1c48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2d1c4c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2d1c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1c50: 0xc5c0b070  lwc1        $f0, -0x4F90($t6)
    ctx->pc = 0x2d1c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4294946928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1c54: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d1c54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d1c58: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x2d1c58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d1c5c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d1c5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d1c60: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d1c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1c64: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2d1c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1c68: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d1c6c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d1c70: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2d1c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2d1c74: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2d1c74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1c78: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x2d1c78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d1c7c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d1c7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d1c80: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2d1c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1c84: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2d1c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1c88: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2d1c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1c8c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2d1c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1c90: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x2d1c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d1c94: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2d1c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d1c98: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2d1c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2d1c9c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2d1c9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d1ca0: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x2d1ca0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2d1ca4: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x2d1ca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2d1ca8: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x2d1ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1cac: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2d1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d1cb0: 0x25ad0040  addiu       $t5, $t5, 0x40
    ctx->pc = 0x2d1cb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x2d1cb4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d1cb8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1cbc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2d1cbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d1cc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d1cc4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2d1cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d1cc8: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x2D1CC8u;
    {
        const bool branch_taken_0x2d1cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CC8u;
        // 0x2d1ccc: 0x258c0040  addiu       $t4, $t4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cc8) {
            ctx->pc = 0x2D1B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1b18;
        }
    }
    ctx->pc = 0x2D1CD0u;
    // 0x2d1cd0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2d1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d1cd4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2d1cd8:
    // 0x2d1cd8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1cdc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2d1cdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d1ce0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d1ce4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D1CE4u;
    {
        const bool branch_taken_0x2d1ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CE4u;
        // 0x2d1ce8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ce4) {
            ctx->pc = 0x2D1D70u;
            goto label_2d1d70;
        }
    }
    ctx->pc = 0x2D1CECu;
    // 0x2d1cec: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2d1cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2d1cf0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2d1cf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2d1cf4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d1cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d1cf8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d1cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d1cfc: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x2d1cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2d1d00:
    // 0x2d1d00: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x2d1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d1d04: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x2d1d04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2d1d08: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2d1d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d1d0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d1d10: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2d1d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1d14: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d1d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1d18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d1d18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d1d1c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d1d1cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2d1d20: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d1d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1d24: 0x0  nop
    ctx->pc = 0x2d1d24u;
    // NOP
    // 0x2d1d28: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1D28u;
    {
        const bool branch_taken_0x2d1d28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D28u;
        // 0x2d1d2c: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d28) {
            ctx->pc = 0x2D1D4Cu;
            goto label_2d1d4c;
        }
    }
    ctx->pc = 0x2D1D30u;
    // 0x2d1d30: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2d1d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1d34: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x2d1d34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1d38: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d1d3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d1d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d1d40: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2d1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2d1d44: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2d1d44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1d48: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x2d1d48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d1d4c:
    // 0x2d1d4c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2d1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d1d50: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d1d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d54: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d1d58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1d5c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2d1d5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d1d60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d1d64: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2d1d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d1d68: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2D1D68u;
    {
        const bool branch_taken_0x2d1d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D68u;
        // 0x2d1d6c: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d68) {
            ctx->pc = 0x2D1D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1d00;
        }
    }
    ctx->pc = 0x2D1D70u;
label_2d1d70:
    // 0x2d1d70: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D70u;
        // 0x2d1d74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1D78u;
}
