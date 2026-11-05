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

// Function: sub_0036BBB0
// Address: 0x36bbb0 - 0x36bf58
void sub_0036BBB0_0x36bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BBB0_0x36bbb0");
#endif

    switch (ctx->pc) {
        case 0x36be44u: goto label_36be44;
        case 0x36beb8u: goto label_36beb8;
        case 0x36bf2cu: goto label_36bf2c;
        case 0x36bf34u: goto label_36bf34;
        default: break;
    }

    ctx->pc = 0x36bbb0u;

    // 0x36bbb0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x36bbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x36bbb4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x36bbb4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbb8: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x36bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x36bbbc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x36bbbcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbc0: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x36bbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x36bbc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x36bbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbc8: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x36bbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x36bbcc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x36bbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbd0: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x36bbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x36bbd4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x36bbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbd8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x36bbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x36bbdc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x36bbdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbe0: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BBE0u;
    {
        const bool branch_taken_0x36bbe0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBE0u;
        // 0x36bbe4: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bbe0) {
            ctx->pc = 0x36BBF0u;
            goto label_36bbf0;
        }
    }
    ctx->pc = 0x36BBE8u;
    // 0x36bbe8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36bbec: 0x8c4bbd48  lw          $t3, -0x42B8($v0)
    ctx->pc = 0x36bbecu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3FBD48u));
label_36bbf0:
    // 0x36bbf0: 0x8d630100  lw          $v1, 0x100($t3)
    ctx->pc = 0x36bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 256)));
    // 0x36bbf4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x36bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x36bbf8: 0xc5a20004  lwc1        $f2, 0x4($t5)
    ctx->pc = 0x36bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36bbfc: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x36bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bc00: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x36bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x36bc04: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x36bc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x36bc08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36bc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36bc0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x36bc0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36bc10: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x36bc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x36bc14: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x36bc14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x36bc18: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x36bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bc1c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x36bc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x36bc20: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x36bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bc24: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x36bc24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x36bc28: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x36bc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bc2c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x36bc2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36bc30: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x36bc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x36bc34: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x36bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bc38: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x36bc38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x36bc3c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36bc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bc40: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x36bc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x36bc44: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x36bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bc48: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x36bc48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x36bc4c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x36bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bc50: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x36bc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x36bc54: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x36bc54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36bc58: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x36bc58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x36bc5c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x36bc5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36bc60: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x36bc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bc64: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x36bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bc68: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x36bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36bc6c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x36bc6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x36bc70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x36bc70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x36bc74: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x36bc74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36bc78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x36bc78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x36bc7c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x36bc7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36bc80: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x36bc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bc84: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36bc84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36bc88: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36bc88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36bc8c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36bc8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36bc90: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36bc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bc94: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x36bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36bc98: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36bc9c: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x36bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bca0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x36bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bca4: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x36bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36bca8: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x36bca8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36bcac: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x36bcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36bcb0: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x36bcb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36bcb4: 0xe7a200dc  swc1        $f2, 0xDC($sp)
    ctx->pc = 0x36bcb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36bcb8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36bcb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36bcbc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36bcbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36bcc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36bcc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36bcc4: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36bcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bcc8: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x36bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36bccc: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x36bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36bcd0: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x36bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bcd4: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x36bcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bcd8: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x36bcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36bcdc: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x36bcdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36bce0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x36bce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x36bce4: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x36bce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36bce8: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x36bce8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x36bcec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36bcecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36bcf0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x36bcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bcf4: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36bcf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36bcf8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36bcf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36bcfc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36bcfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36bd00: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36bd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bd04: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bd08: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36bd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bd0c: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36bd10: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36bd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36bd14: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x36bd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36bd18: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x36bd18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36bd1c: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x36bd1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36bd20: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x36bd20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36bd24: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36bd24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36bd28: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36bd28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36bd2c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36bd2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36bd30: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bd34: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bd38: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bd3c: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36bd40: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36bd44: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x36bd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36bd48: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x36bd48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x36bd4c: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x36bd4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36bd50: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x36bd50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x36bd54: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36bd54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36bd58: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x36bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bd5c: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36bd5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36bd60: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36bd60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36bd64: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36bd64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36bd68: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bd6c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bd70: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36bd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bd74: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36bd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36bd78: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36bd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36bd7c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x36bd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36bd80: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x36bd80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36bd84: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x36bd84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36bd88: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x36bd88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36bd8c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36bd8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36bd90: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36bd90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36bd94: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36bd94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36bd98: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36bd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bd9c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bda0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bda4: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36bda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36bda8: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36bdac: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x36bdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36bdb0: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x36bdb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x36bdb4: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x36bdb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36bdb8: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x36bdb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x36bdbc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36bdbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36bdc0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x36bdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bdc4: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36bdc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36bdc8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36bdc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36bdcc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36bdccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36bdd0: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36bdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36bdd4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bdd8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36bdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bddc: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36bde0: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36bde4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x36bde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36bde8: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x36bde8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36bdec: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x36bdecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36bdf0: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x36bdf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36bdf4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36bdf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36bdf8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36bdf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36bdfc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36bdfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36be00: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x36be00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36be04: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x36be04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36be08: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x36be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36be0c: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x36be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36be10: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x36be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36be14: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x36be14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36be18: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x36be18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x36be1c: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x36be1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36be20: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x36be20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x36be24: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36be24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36be28: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x36be28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36be2c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x36be2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36be30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36be34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36be38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x36be38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x36be3c: 0xc0dab74  jal         func_36ADD0
    ctx->pc = 0x36BE3Cu;
    SET_GPR_U32(ctx, 31, 0x36BE44u);
    ctx->pc = 0x36BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE3Cu;
    // 0x36be40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x36BE3Cu, 0x36BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE44u;
label_36be44:
    // 0x36be44: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x36be44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36be48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36be48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be4c: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x36be4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36be50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36be50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be54: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x36be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36be58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36be58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be5c: 0xc7ae0068  lwc1        $f14, 0x68($sp)
    ctx->pc = 0x36be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36be60: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36be60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be64: 0xc7af0070  lwc1        $f15, 0x70($sp)
    ctx->pc = 0x36be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36be68: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x36be68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be6c: 0xc7b00074  lwc1        $f16, 0x74($sp)
    ctx->pc = 0x36be6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x36be70: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x36be70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be74: 0xc7b10078  lwc1        $f17, 0x78($sp)
    ctx->pc = 0x36be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x36be78: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x36be78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be7c: 0xc7b20090  lwc1        $f18, 0x90($sp)
    ctx->pc = 0x36be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x36be80: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x36be80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be84: 0xc7b30094  lwc1        $f19, 0x94($sp)
    ctx->pc = 0x36be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x36be88: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36be88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36be8c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x36be8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36be90: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x36be90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36be94: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x36be94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36be98: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x36be98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x36be9c: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x36be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    // 0x36bea0: 0xafb20048  sw          $s2, 0x48($sp)
    ctx->pc = 0x36bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
    // 0x36bea4: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x36bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x36bea8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x36bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x36beac: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x36beacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x36beb0: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x36BEB0u;
    SET_GPR_U32(ctx, 31, 0x36BEB8u);
    ctx->pc = 0x36BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BEB0u;
    // 0x36beb4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x36BEB0u, 0x36BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BEB8u;
label_36beb8:
    // 0x36beb8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x36beb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36bec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bec4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36bec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bec8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36bec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36becc: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x36beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36bed0: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x36bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36bed4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x36bed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bed8: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x36bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36bedc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x36bedcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bee0: 0xc7af0080  lwc1        $f15, 0x80($sp)
    ctx->pc = 0x36bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36bee4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x36bee4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bee8: 0xc7b00084  lwc1        $f16, 0x84($sp)
    ctx->pc = 0x36bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x36beec: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x36beecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bef0: 0xc7b10088  lwc1        $f17, 0x88($sp)
    ctx->pc = 0x36bef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x36bef4: 0xc7b20090  lwc1        $f18, 0x90($sp)
    ctx->pc = 0x36bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x36bef8: 0xc7b30094  lwc1        $f19, 0x94($sp)
    ctx->pc = 0x36bef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x36befc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x36befcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36bf00: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x36bf00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36bf04: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x36bf04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36bf08: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x36bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x36bf0c: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x36bf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    // 0x36bf10: 0xafb20048  sw          $s2, 0x48($sp)
    ctx->pc = 0x36bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
    // 0x36bf14: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x36bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x36bf18: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36bf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36bf1c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36bf20: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x36bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x36bf24: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x36BF24u;
    SET_GPR_U32(ctx, 31, 0x36BF2Cu);
    ctx->pc = 0x36BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF24u;
    // 0x36bf28: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x36BF24u, 0x36BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF2Cu;
label_36bf2c:
    // 0x36bf2c: 0xc0dab7e  jal         func_36ADF8
    ctx->pc = 0x36BF2Cu;
    SET_GPR_U32(ctx, 31, 0x36BF34u);
    ctx->pc = 0x36BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF2Cu;
    // 0x36bf30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x36BF2Cu, 0x36BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF34u;
label_36bf34:
    // 0x36bf34: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x36bf34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x36bf38: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x36bf38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x36bf3c: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x36bf3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x36bf40: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x36bf40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x36bf44: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x36bf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x36bf48: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x36bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36bf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x36BF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF4Cu;
        // 0x36bf50: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BF54u;
    // 0x36bf54: 0x0  nop
    ctx->pc = 0x36bf54u;
    // NOP
    ctx->pc = 0x36bf58u;
}
