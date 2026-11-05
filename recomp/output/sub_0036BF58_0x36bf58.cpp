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

// Function: sub_0036BF58
// Address: 0x36bf58 - 0x36c320
void sub_0036BF58_0x36bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BF58_0x36bf58");
#endif

    switch (ctx->pc) {
        case 0x36c200u: goto label_36c200;
        case 0x36c274u: goto label_36c274;
        case 0x36c2e8u: goto label_36c2e8;
        case 0x36c2f0u: goto label_36c2f0;
        default: break;
    }

    ctx->pc = 0x36bf58u;

    // 0x36bf58: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x36bf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x36bf5c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x36bf5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf60: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x36bf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x36bf64: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x36bf64u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf68: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x36bf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x36bf6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x36bf6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf70: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x36bf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x36bf74: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x36bf74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf78: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x36bf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x36bf7c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x36bf7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf80: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x36bf80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x36bf84: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x36bf84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf88: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x36bf88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x36bf8c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x36bf8cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x36bf90: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x36bf90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x36bf94: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x36bf94u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x36bf98: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x36bf98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x36bf9c: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x36bf9cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x36bfa0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x36bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x36bfa4: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BFA4u;
    {
        const bool branch_taken_0x36bfa4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BFA4u;
        // 0x36bfa8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bfa4) {
            ctx->pc = 0x36BFB4u;
            goto label_36bfb4;
        }
    }
    ctx->pc = 0x36BFACu;
    // 0x36bfac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36bfb0: 0x8c4bbd48  lw          $t3, -0x42B8($v0)
    ctx->pc = 0x36bfb0u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3FBD48u));
label_36bfb4:
    // 0x36bfb4: 0x8d630100  lw          $v1, 0x100($t3)
    ctx->pc = 0x36bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 256)));
    // 0x36bfb8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x36bfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x36bfbc: 0xc5a20004  lwc1        $f2, 0x4($t5)
    ctx->pc = 0x36bfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36bfc0: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x36bfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bfc4: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x36bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x36bfc8: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x36bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x36bfcc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36bfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36bfd0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x36bfd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36bfd4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x36bfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x36bfd8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x36bfd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x36bfdc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x36bfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bfe0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x36bfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x36bfe4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x36bfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bfe8: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x36bfe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x36bfec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x36bfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bff0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x36bff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36bff4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x36bff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x36bff8: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x36bff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bffc: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x36bffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x36c000: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36c000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c004: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x36c004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x36c008: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x36c008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c00c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x36c00cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x36c010: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x36c010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c014: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x36c014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x36c018: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x36c018u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c01c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x36c01cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x36c020: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x36c020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36c024: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x36c024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c028: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x36c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c02c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x36c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36c030: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x36c030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x36c034: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x36c034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x36c038: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x36c038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c03c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x36c03cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x36c040: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x36c040u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36c044: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x36c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c048: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36c048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36c04c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36c04cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c050: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36c050u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36c054: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36c054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c058: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x36c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36c05c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36c060: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x36c060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c064: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x36c064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c068: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x36c068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36c06c: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x36c06cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36c070: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x36c070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36c074: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x36c074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36c078: 0xe7a200dc  swc1        $f2, 0xDC($sp)
    ctx->pc = 0x36c078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36c07c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36c07cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36c080: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36c080u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c084: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36c084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36c088: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c08c: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x36c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36c090: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x36c090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36c094: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x36c094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c098: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x36c098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c09c: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x36c09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36c0a0: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x36c0a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36c0a4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x36c0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x36c0a8: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x36c0a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36c0ac: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x36c0acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x36c0b0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36c0b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36c0b4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x36c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c0b8: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36c0b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36c0bc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36c0bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c0c0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36c0c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36c0c4: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36c0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c0c8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c0cc: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36c0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c0d0: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36c0d4: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36c0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36c0d8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x36c0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36c0dc: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x36c0dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36c0e0: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x36c0e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36c0e4: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x36c0e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36c0e8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36c0e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36c0ec: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36c0ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c0f0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36c0f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36c0f4: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36c0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c0f8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36c0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c0fc: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c100: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36c104: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36c108: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x36c108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36c10c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x36c10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x36c110: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x36c110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36c114: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x36c114u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x36c118: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36c118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36c11c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x36c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c120: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36c120u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36c124: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36c124u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c128: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36c128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36c12c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36c12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c130: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c134: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36c134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c138: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36c138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36c13c: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36c13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36c140: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x36c140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36c144: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x36c144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36c148: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x36c148u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36c14c: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x36c14cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36c150: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36c150u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36c154: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36c154u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c158: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36c158u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36c15c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36c15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c160: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36c160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c164: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36c164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c168: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36c168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36c16c: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36c16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36c170: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x36c170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36c174: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x36c174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x36c178: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x36c178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36c17c: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x36c17cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x36c180: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36c180u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36c184: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x36c184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c188: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36c188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36c18c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36c18cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c190: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36c190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36c194: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36c194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c198: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36c198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c19c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c1a0: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36c1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36c1a4: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36c1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36c1a8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x36c1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36c1ac: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x36c1acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36c1b0: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x36c1b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36c1b4: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x36c1b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36c1b8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36c1b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36c1bc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36c1bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36c1c0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36c1c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36c1c4: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36c1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c1c8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36c1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c1cc: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36c1d0: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36c1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36c1d4: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36c1d8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x36c1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36c1dc: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x36c1dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x36c1e0: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x36c1e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36c1e4: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x36c1e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x36c1e8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36c1e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36c1ec: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x36c1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36c1f0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x36c1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36c1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c1f8: 0xc0dab74  jal         func_36ADD0
    ctx->pc = 0x36C1F8u;
    SET_GPR_U32(ctx, 31, 0x36C200u);
    ctx->pc = 0x36C1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C1F8u;
    // 0x36c1fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x36C1F8u, 0x36C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C200u;
label_36c200:
    // 0x36c200: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x36c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c208: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x36c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36c20c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36c20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c210: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x36c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36c214: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36c214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c218: 0xc7ae0068  lwc1        $f14, 0x68($sp)
    ctx->pc = 0x36c218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36c21c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36c21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c220: 0xc7af0070  lwc1        $f15, 0x70($sp)
    ctx->pc = 0x36c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36c224: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x36c224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c228: 0xc7b00074  lwc1        $f16, 0x74($sp)
    ctx->pc = 0x36c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x36c22c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x36c22cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c230: 0xc7b10078  lwc1        $f17, 0x78($sp)
    ctx->pc = 0x36c230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x36c234: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x36c234u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c238: 0xc7b20090  lwc1        $f18, 0x90($sp)
    ctx->pc = 0x36c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x36c23c: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x36c23cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c240: 0xc7b30094  lwc1        $f19, 0x94($sp)
    ctx->pc = 0x36c240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x36c244: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36c244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36c248: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x36c248u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36c24c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x36c24cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36c250: 0xe7b70018  swc1        $f23, 0x18($sp)
    ctx->pc = 0x36c250u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36c254: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x36c254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36c258: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x36c258u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36c25c: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x36c25cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36c260: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x36c260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x36c264: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x36c264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    // 0x36c268: 0xafb20048  sw          $s2, 0x48($sp)
    ctx->pc = 0x36c268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
    // 0x36c26c: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x36C26Cu;
    SET_GPR_U32(ctx, 31, 0x36C274u);
    ctx->pc = 0x36C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C26Cu;
    // 0x36c270: 0xafb30050  sw          $s3, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x36C26Cu, 0x36C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C274u;
label_36c274:
    // 0x36c274: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x36c274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36c278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c27c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36c27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c280: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36c280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c284: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36c284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c288: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x36c288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36c28c: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x36c28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36c290: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x36c290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c294: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x36c294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36c298: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x36c298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c29c: 0xc7af0080  lwc1        $f15, 0x80($sp)
    ctx->pc = 0x36c29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36c2a0: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x36c2a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2a4: 0xc7b00084  lwc1        $f16, 0x84($sp)
    ctx->pc = 0x36c2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x36c2a8: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x36c2a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2ac: 0xc7b10088  lwc1        $f17, 0x88($sp)
    ctx->pc = 0x36c2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x36c2b0: 0xc7b20090  lwc1        $f18, 0x90($sp)
    ctx->pc = 0x36c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x36c2b4: 0xc7b30094  lwc1        $f19, 0x94($sp)
    ctx->pc = 0x36c2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x36c2b8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x36c2b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36c2bc: 0xe7b70018  swc1        $f23, 0x18($sp)
    ctx->pc = 0x36c2bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36c2c0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x36c2c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36c2c4: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x36c2c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36c2c8: 0xe7b70008  swc1        $f23, 0x8($sp)
    ctx->pc = 0x36c2c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36c2cc: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x36c2ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36c2d0: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x36c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x36c2d4: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x36c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    // 0x36c2d8: 0xafb20048  sw          $s2, 0x48($sp)
    ctx->pc = 0x36c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
    // 0x36c2dc: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x36c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x36c2e0: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x36C2E0u;
    SET_GPR_U32(ctx, 31, 0x36C2E8u);
    ctx->pc = 0x36C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C2E0u;
    // 0x36c2e4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x36C2E0u, 0x36C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2E8u;
label_36c2e8:
    // 0x36c2e8: 0xc0dab7e  jal         func_36ADF8
    ctx->pc = 0x36C2E8u;
    SET_GPR_U32(ctx, 31, 0x36C2F0u);
    ctx->pc = 0x36C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C2E8u;
    // 0x36c2ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x36C2E8u, 0x36C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2F0u;
label_36c2f0:
    // 0x36c2f0: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x36c2f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x36c2f4: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x36c2f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x36c2f8: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x36c2f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x36c2fc: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x36c2fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x36c300: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x36c300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x36c304: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x36c304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x36c308: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x36c308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36c30c: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x36c30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36c310: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x36c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36c314: 0x3e00008  jr          $ra
    ctx->pc = 0x36C314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C314u;
        // 0x36c318: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C31Cu;
    // 0x36c31c: 0x0  nop
    ctx->pc = 0x36c31cu;
    // NOP
    ctx->pc = 0x36c320u;
}
