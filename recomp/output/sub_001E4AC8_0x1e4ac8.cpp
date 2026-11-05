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

// Function: sub_001E4AC8
// Address: 0x1e4ac8 - 0x1e4c10
void sub_001E4AC8_0x1e4ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4AC8_0x1e4ac8");
#endif

    ctx->pc = 0x1e4ac8u;

    // 0x1e4ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4acc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e4accu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4ad0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e4ad0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4ad4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e4ad4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ad8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e4ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4adc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e4adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4ae0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e4ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4ae4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e4ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4ae8: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1e4ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e4aec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e4aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e4af0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e4af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e4af4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e4af4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e4af8: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1e4af8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e4afc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e4afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4b00: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e4b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4b04: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e4b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e4b08: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e4b08u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e4b0c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e4b0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e4b10: 0x460421dc  madd.s      $f7, $f4, $f4
    ctx->pc = 0x1e4b10u;
    ctx->f[7] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e4b14: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1e4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1e4b18: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e4b18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4b1c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e4b1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4b20: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e4b20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4b24: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e4b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4b28: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e4b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4b2c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e4b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4b30: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e4b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4b34: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1e4b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e4b38: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e4b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e4b3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e4b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e4b40: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e4b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e4b44: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1e4b44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e4b48: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e4b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4b4c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e4b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4b50: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e4b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e4b54: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e4b54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e4b58: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e4b58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e4b5c: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x1e4b5cu;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e4b60: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1e4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1e4b64: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e4b64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4b68: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e4b68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4b6c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e4b6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4b70: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e4b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4b74: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e4b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4b78: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e4b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4b7c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e4b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4b80: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1e4b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e4b84: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e4b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e4b88: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e4b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e4b8c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e4b8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e4b90: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1e4b90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e4b94: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e4b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4b98: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e4b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4b9c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e4b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e4ba0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e4ba0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e4ba4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e4ba4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e4ba8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e4ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e4bac: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x1e4bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4bb0: 0x0  nop
    ctx->pc = 0x1e4bb0u;
    // NOP
    // 0x1e4bb4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4BB4u;
    {
        const bool branch_taken_0x1e4bb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4bb4) {
            ctx->pc = 0x1E4BDCu;
            goto label_1e4bdc;
        }
    }
    ctx->pc = 0x1E4BBCu;
    // 0x1e4bbc: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x1e4bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4bc0: 0x0  nop
    ctx->pc = 0x1e4bc0u;
    // NOP
    // 0x1e4bc4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1E4BC4u;
    {
        const bool branch_taken_0x1e4bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4bc4) {
            ctx->pc = 0x1E4BFCu;
            goto label_1e4bfc;
        }
    }
    ctx->pc = 0x1E4BCCu;
    // 0x1e4bcc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e4bccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4bd0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e4bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4bd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E4BD4u;
    {
        const bool branch_taken_0x1e4bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bd4) {
            ctx->pc = 0x1E4C04u;
            goto label_1e4c04;
        }
    }
    ctx->pc = 0x1E4BDCu;
label_1e4bdc:
    // 0x1e4bdc: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x1e4bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4be0: 0x0  nop
    ctx->pc = 0x1e4be0u;
    // NOP
    // 0x1e4be4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4BE4u;
    {
        const bool branch_taken_0x1e4be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4be4) {
            ctx->pc = 0x1E4BFCu;
            goto label_1e4bfc;
        }
    }
    ctx->pc = 0x1E4BECu;
    // 0x1e4bec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e4becu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4bf0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e4bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4bf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4BF4u;
    {
        const bool branch_taken_0x1e4bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bf4) {
            ctx->pc = 0x1E4C04u;
            goto label_1e4c04;
        }
    }
    ctx->pc = 0x1E4BFCu;
label_1e4bfc:
    // 0x1e4bfc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e4bfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4c00: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e4c00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e4c04:
    // 0x1e4c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C04u;
        // 0x1e4c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4C0Cu;
    // 0x1e4c0c: 0x0  nop
    ctx->pc = 0x1e4c0cu;
    // NOP
    ctx->pc = 0x1e4c10u;
}
