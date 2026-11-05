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

// Function: sub_001E40D8
// Address: 0x1e40d8 - 0x1e4778
void sub_001E40D8_0x1e40d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E40D8_0x1e40d8");
#endif

    ctx->pc = 0x1e40d8u;

    // 0x1e40d8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1e40d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e40dc: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e40dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e40e0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1e40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1e40e4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1e40e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1e40e8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e40e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e40ec: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e40ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e40f0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e40f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e40f4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e40f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e40f8: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1e40f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e40fc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1e40fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e4100: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1e4100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4104: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1e4104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4108: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1e4108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e410c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1e410cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e4110: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1e4110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e4114: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e4114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e4118: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1e4118u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e411c: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x1e411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1e4120: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e4120u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4124: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e4124u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4128: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e4128u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e412c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4130: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1e4130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4134: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1e4134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e4138: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1e4138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e413c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1e413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4140: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1e4140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4144: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1e4144u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e4148: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1e4148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e414c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1e414cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e4150: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1e4150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e4154: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e4154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4158: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e4158u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e415c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e415cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4160: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e4160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4164: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e4164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4168: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1e4168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e416c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1e416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4170: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x1e4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e4174: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e4174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e4178: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1e4178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e417c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1e417cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e4180: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x1e4180u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e4184: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e4184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4188: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e418c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e4190: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e4190u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e4194: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e4194u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e4198: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x1e4198u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e419c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e41a0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1e41a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e41a4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e41a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e41a8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1e41a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e41ac: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1e41acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e41b0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e41b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e41b4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1e41b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e41b8: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x1e41b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e41bc: 0x4603129c  madd.s      $f10, $f2, $f3
    ctx->pc = 0x1e41bcu;
    ctx->f[10] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e41c0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1e41c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e41c4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1e41c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e41c8: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x1e41c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e41cc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e41ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e41d0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e41d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e41d4: 0x460422dc  madd.s      $f11, $f4, $f4
    ctx->pc = 0x1e41d4u;
    ctx->f[11] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e41d8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e41d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e41dc: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1e41dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e41e0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e41e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e41e4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e41e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e41e8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e41e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e41ec: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e41ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e41f0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1e41f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e41f4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1e41f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e41f8: 0x460311dc  madd.s      $f7, $f2, $f3
    ctx->pc = 0x1e41f8u;
    ctx->f[7] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e41fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e41fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4200: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1e4200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4204: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e4204u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e4208: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e420c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1e420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4210: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e4210u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e4214: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1e4214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4218: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x1e4218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e421c: 0x4603121c  madd.s      $f8, $f2, $f3
    ctx->pc = 0x1e421cu;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e4220: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e4220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4224: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e4224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4228: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e4228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e422c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e422cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e4230: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e4230u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e4234: 0x4604235c  madd.s      $f13, $f4, $f4
    ctx->pc = 0x1e4234u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e4238: 0x46086002  mul.s       $f0, $f12, $f8
    ctx->pc = 0x1e4238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x1e423c: 0x460b6042  mul.s       $f1, $f12, $f11
    ctx->pc = 0x1e423cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
    // 0x1e4240: 0x460a5102  mul.s       $f4, $f10, $f10
    ctx->pc = 0x1e4240u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x1e4244: 0x46085142  mul.s       $f5, $f10, $f8
    ctx->pc = 0x1e4244u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x1e4248: 0x46075882  mul.s       $f2, $f11, $f7
    ctx->pc = 0x1e4248u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x1e424c: 0x460750c2  mul.s       $f3, $f10, $f7
    ctx->pc = 0x1e424cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x1e4250: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1e4250u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1e4254: 0x46022981  sub.s       $f6, $f5, $f2
    ctx->pc = 0x1e4254u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x1e4258: 0x46001a41  sub.s       $f9, $f3, $f0
    ctx->pc = 0x1e4258u;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1e425c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1e425cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1e4260: 0x46093000  add.s       $f0, $f6, $f9
    ctx->pc = 0x1e4260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x1e4264: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e4264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4268: 0x0  nop
    ctx->pc = 0x1e4268u;
    // NOP
    // 0x1e426c: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x1E426Cu;
    {
        const bool branch_taken_0x1e426c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e426c) {
            ctx->pc = 0x1E441Cu;
            goto label_1e441c;
        }
    }
    ctx->pc = 0x1E4274u;
    // 0x1e4274: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1e4274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e4278: 0x0  nop
    ctx->pc = 0x1e4278u;
    // NOP
    // 0x1e427c: 0x46043034  c.lt.s      $f6, $f4
    ctx->pc = 0x1e427cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4280: 0x0  nop
    ctx->pc = 0x1e4280u;
    // NOP
    // 0x1e4284: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x1E4284u;
    {
        const bool branch_taken_0x1e4284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4284) {
            ctx->pc = 0x1E4380u;
            goto label_1e4380;
        }
    }
    ctx->pc = 0x1E428Cu;
    // 0x1e428c: 0x46044834  c.lt.s      $f9, $f4
    ctx->pc = 0x1e428cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4290: 0x0  nop
    ctx->pc = 0x1e4290u;
    // NOP
    // 0x1e4294: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x1E4294u;
    {
        const bool branch_taken_0x1e4294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4294u;
        // 0x1e4298: 0x46002186  mov.s       $f6, $f4 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4294) {
            ctx->pc = 0x1E4334u;
            goto label_1e4334;
        }
    }
    ctx->pc = 0x1E429Cu;
    // 0x1e429c: 0x46043834  c.lt.s      $f7, $f4
    ctx->pc = 0x1e429cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e42a0: 0x0  nop
    ctx->pc = 0x1e42a0u;
    // NOP
    // 0x1e42a4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1E42A4u;
    {
        const bool branch_taken_0x1e42a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e42a4) {
            ctx->pc = 0x1E42E8u;
            goto label_1e42e8;
        }
    }
    ctx->pc = 0x1E42ACu;
    // 0x1e42ac: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x1e42acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x1e42b0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1e42b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e42b4: 0x0  nop
    ctx->pc = 0x1e42b4u;
    // NOP
    // 0x1e42b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E42B8u;
    {
        const bool branch_taken_0x1e42b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42B8u;
        // 0x1e42bc: 0x46002246  mov.s       $f9, $f4 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42b8) {
            ctx->pc = 0x1E42D4u;
            goto label_1e42d4;
        }
    }
    ctx->pc = 0x1E42C0u;
    // 0x1e42c0: 0x46073800  add.s       $f0, $f7, $f7
    ctx->pc = 0x1e42c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x1e42c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e42c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e42c8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e42c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1e42cc: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x1E42CCu;
    {
        const bool branch_taken_0x1e42cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42CCu;
        // 0x1e42d0: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42cc) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E42D4u;
label_1e42d4:
    // 0x1e42d4: 0x0  nop
    ctx->pc = 0x1e42d4u;
    // NOP
    // 0x1e42d8: 0x0  nop
    ctx->pc = 0x1e42d8u;
    // NOP
    // 0x1e42dc: 0x460c0183  div.s       $f6, $f0, $f12
    ctx->pc = 0x1e42dcu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1e42e0: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x1E42E0u;
    {
        const bool branch_taken_0x1e42e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42E0u;
        // 0x1e42e4: 0x46063802  mul.s       $f0, $f7, $f6 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42e0) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E42E8u;
label_1e42e8:
    // 0x1e42e8: 0x46083036  c.le.s      $f6, $f8
    ctx->pc = 0x1e42e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e42ec: 0x0  nop
    ctx->pc = 0x1e42ecu;
    // NOP
    // 0x1e42f0: 0x45030071  bc1tl       . + 4 + (0x71 << 2)
    ctx->pc = 0x1E42F0u;
    {
        const bool branch_taken_0x1e42f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e42f0) {
            ctx->pc = 0x1E42F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E42F0u;
            // 0x1e42f4: 0x46006a06  mov.s       $f8, $f13 (Delay Slot)
            ctx->f[8] = FPU_MOV_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E44B8u;
            goto label_1e44b8;
        }
    }
    ctx->pc = 0x1E42F8u;
    // 0x1e42f8: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x1e42f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x1e42fc: 0x46005836  c.le.s      $f11, $f0
    ctx->pc = 0x1e42fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4300: 0x0  nop
    ctx->pc = 0x1e4300u;
    // NOP
    // 0x1e4304: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4304u;
    {
        const bool branch_taken_0x1e4304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4304) {
            ctx->pc = 0x1E4320u;
            goto label_1e4320;
        }
    }
    ctx->pc = 0x1E430Cu;
    // 0x1e430c: 0x46084000  add.s       $f0, $f8, $f8
    ctx->pc = 0x1e430cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x1e4310: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4314: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1e4314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1e4318: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x1E4318u;
    {
        const bool branch_taken_0x1e4318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4318u;
        // 0x1e431c: 0x46005800  add.s       $f0, $f11, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4318) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E4320u;
label_1e4320:
    // 0x1e4320: 0x0  nop
    ctx->pc = 0x1e4320u;
    // NOP
    // 0x1e4324: 0x0  nop
    ctx->pc = 0x1e4324u;
    // NOP
    // 0x1e4328: 0x460b0243  div.s       $f9, $f0, $f11
    ctx->pc = 0x1e4328u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x1e432c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x1E432Cu;
    {
        const bool branch_taken_0x1e432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E432Cu;
        // 0x1e4330: 0x46094002  mul.s       $f0, $f8, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e432c) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E4334u;
label_1e4334:
    // 0x1e4334: 0x46083036  c.le.s      $f6, $f8
    ctx->pc = 0x1e4334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4338: 0x0  nop
    ctx->pc = 0x1e4338u;
    // NOP
    // 0x1e433c: 0x4503005e  bc1tl       . + 4 + (0x5E << 2)
    ctx->pc = 0x1E433Cu;
    {
        const bool branch_taken_0x1e433c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e433c) {
            ctx->pc = 0x1E4340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E433Cu;
            // 0x1e4340: 0x46006a06  mov.s       $f8, $f13 (Delay Slot)
            ctx->f[8] = FPU_MOV_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E44B8u;
            goto label_1e44b8;
        }
    }
    ctx->pc = 0x1E4344u;
    // 0x1e4344: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x1e4344u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x1e4348: 0x46005836  c.le.s      $f11, $f0
    ctx->pc = 0x1e4348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e434c: 0x0  nop
    ctx->pc = 0x1e434cu;
    // NOP
    // 0x1e4350: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4350u;
    {
        const bool branch_taken_0x1e4350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4350) {
            ctx->pc = 0x1E436Cu;
            goto label_1e436c;
        }
    }
    ctx->pc = 0x1E4358u;
    // 0x1e4358: 0x46084000  add.s       $f0, $f8, $f8
    ctx->pc = 0x1e4358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x1e435c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e435cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4360: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1e4360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1e4364: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x1E4364u;
    {
        const bool branch_taken_0x1e4364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4364u;
        // 0x1e4368: 0x46005800  add.s       $f0, $f11, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4364) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E436Cu;
label_1e436c:
    // 0x1e436c: 0x0  nop
    ctx->pc = 0x1e436cu;
    // NOP
    // 0x1e4370: 0x0  nop
    ctx->pc = 0x1e4370u;
    // NOP
    // 0x1e4374: 0x460b0243  div.s       $f9, $f0, $f11
    ctx->pc = 0x1e4374u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x1e4378: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x1E4378u;
    {
        const bool branch_taken_0x1e4378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4378u;
        // 0x1e437c: 0x46094002  mul.s       $f0, $f8, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4378) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E4380u;
label_1e4380:
    // 0x1e4380: 0x46044834  c.lt.s      $f9, $f4
    ctx->pc = 0x1e4380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4384: 0x0  nop
    ctx->pc = 0x1e4384u;
    // NOP
    // 0x1e4388: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x1E4388u;
    {
        const bool branch_taken_0x1e4388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4388) {
            ctx->pc = 0x1E438Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4388u;
            // 0x1e438c: 0x46084100  add.s       $f4, $f8, $f8 (Delay Slot)
            ctx->f[4] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E43E0u;
            goto label_1e43e0;
        }
    }
    ctx->pc = 0x1E4390u;
    // 0x1e4390: 0x46002246  mov.s       $f9, $f4
    ctx->pc = 0x1e4390u;
    ctx->f[9] = FPU_MOV_S(ctx->f[4]);
    // 0x1e4394: 0x46072036  c.le.s      $f4, $f7
    ctx->pc = 0x1e4394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4398: 0x0  nop
    ctx->pc = 0x1e4398u;
    // NOP
    // 0x1e439c: 0x45010087  bc1t        . + 4 + (0x87 << 2)
    ctx->pc = 0x1E439Cu;
    {
        const bool branch_taken_0x1e439c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E439Cu;
        // 0x1e43a0: 0x46006a06  mov.s       $f8, $f13 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e439c) {
            ctx->pc = 0x1E45BCu;
            goto label_1e45bc;
        }
    }
    ctx->pc = 0x1E43A4u;
    // 0x1e43a4: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x1e43a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x1e43a8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1e43a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e43ac: 0x0  nop
    ctx->pc = 0x1e43acu;
    // NOP
    // 0x1e43b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E43B0u;
    {
        const bool branch_taken_0x1e43b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e43b0) {
            ctx->pc = 0x1E43CCu;
            goto label_1e43cc;
        }
    }
    ctx->pc = 0x1E43B8u;
    // 0x1e43b8: 0x46073800  add.s       $f0, $f7, $f7
    ctx->pc = 0x1e43b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x1e43bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e43bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e43c0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e43c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1e43c4: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1E43C4u;
    {
        const bool branch_taken_0x1e43c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43C4u;
        // 0x1e43c8: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43c4) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E43CCu;
label_1e43cc:
    // 0x1e43cc: 0x0  nop
    ctx->pc = 0x1e43ccu;
    // NOP
    // 0x1e43d0: 0x0  nop
    ctx->pc = 0x1e43d0u;
    // NOP
    // 0x1e43d4: 0x460c0183  div.s       $f6, $f0, $f12
    ctx->pc = 0x1e43d4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1e43d8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x1E43D8u;
    {
        const bool branch_taken_0x1e43d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43D8u;
        // 0x1e43dc: 0x46063802  mul.s       $f0, $f7, $f6 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43d8) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E43E0u;
label_1e43e0:
    // 0x1e43e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e43e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e43e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e43e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e43e8: 0x46073940  add.s       $f5, $f7, $f7
    ctx->pc = 0x1e43e8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x1e43ec: 0x0  nop
    ctx->pc = 0x1e43ecu;
    // NOP
    // 0x1e43f0: 0x0  nop
    ctx->pc = 0x1e43f0u;
    // NOP
    // 0x1e43f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e43f4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e43f8: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x1e43f8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x1e43fc: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x1e43fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1e4400: 0x460958c2  mul.s       $f3, $f11, $f9
    ctx->pc = 0x1e4400u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[9]);
    // 0x1e4404: 0x46066002  mul.s       $f0, $f12, $f6
    ctx->pc = 0x1e4404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x1e4408: 0x46065042  mul.s       $f1, $f10, $f6
    ctx->pc = 0x1e4408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x1e440c: 0x46095082  mul.s       $f2, $f10, $f9
    ctx->pc = 0x1e440cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x1e4410: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e4410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1e4414: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1E4414u;
    {
        const bool branch_taken_0x1e4414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4414u;
        // 0x1e4418: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4414) {
            ctx->pc = 0x1E4670u;
            goto label_1e4670;
        }
    }
    ctx->pc = 0x1E441Cu;
label_1e441c:
    // 0x1e441c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1e441cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4420: 0x0  nop
    ctx->pc = 0x1e4420u;
    // NOP
    // 0x1e4424: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x1e4424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4428: 0x0  nop
    ctx->pc = 0x1e4428u;
    // NOP
    // 0x1e442c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x1E442Cu;
    {
        const bool branch_taken_0x1e442c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e442c) {
            ctx->pc = 0x1E44D8u;
            goto label_1e44d8;
        }
    }
    ctx->pc = 0x1E4434u;
    // 0x1e4434: 0x46075080  add.s       $f2, $f10, $f7
    ctx->pc = 0x1e4434u;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[7]);
    // 0x1e4438: 0x46085840  add.s       $f1, $f11, $f8
    ctx->pc = 0x1e4438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[8]);
    // 0x1e443c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e443cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4440: 0x0  nop
    ctx->pc = 0x1e4440u;
    // NOP
    // 0x1e4444: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1E4444u;
    {
        const bool branch_taken_0x1e4444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4444u;
        // 0x1e4448: 0x46001986  mov.s       $f6, $f3 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4444) {
            ctx->pc = 0x1E4480u;
            goto label_1e4480;
        }
    }
    ctx->pc = 0x1E444Cu;
    // 0x1e444c: 0x460a5000  add.s       $f0, $f10, $f10
    ctx->pc = 0x1e444cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
    // 0x1e4450: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e4450u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e4454: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1e4454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1e4458: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x1e4458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x1e445c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e445cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4460: 0x0  nop
    ctx->pc = 0x1e4460u;
    // NOP
    // 0x1e4464: 0x45000074  bc1f        . + 4 + (0x74 << 2)
    ctx->pc = 0x1E4464u;
    {
        const bool branch_taken_0x1e4464 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4464u;
        // 0x1e4468: 0x46001a46  mov.s       $f9, $f3 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4464) {
            ctx->pc = 0x1E4638u;
            goto label_1e4638;
        }
    }
    ctx->pc = 0x1E446Cu;
    // 0x1e446c: 0x46073800  add.s       $f0, $f7, $f7
    ctx->pc = 0x1e446cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x1e4470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4474: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e4474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1e4478: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1E4478u;
    {
        const bool branch_taken_0x1e4478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4478u;
        // 0x1e447c: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4478) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E4480u;
label_1e4480:
    // 0x1e4480: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x1e4480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4484: 0x0  nop
    ctx->pc = 0x1e4484u;
    // NOP
    // 0x1e4488: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4488u;
    {
        const bool branch_taken_0x1e4488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4488) {
            ctx->pc = 0x1E44A4u;
            goto label_1e44a4;
        }
    }
    ctx->pc = 0x1E4490u;
    // 0x1e4490: 0x46084000  add.s       $f0, $f8, $f8
    ctx->pc = 0x1e4490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x1e4494: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4498: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1e4498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1e449c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1E449Cu;
    {
        const bool branch_taken_0x1e449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E449Cu;
        // 0x1e44a0: 0x46005800  add.s       $f0, $f11, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e449c) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E44A4u;
label_1e44a4:
    // 0x1e44a4: 0x46083036  c.le.s      $f6, $f8
    ctx->pc = 0x1e44a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e44a8: 0x0  nop
    ctx->pc = 0x1e44a8u;
    // NOP
    // 0x1e44ac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1E44ACu;
    {
        const bool branch_taken_0x1e44ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e44ac) {
            ctx->pc = 0x1E44B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E44ACu;
            // 0x1e44b0: 0x46004007  neg.s       $f0, $f8 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E44C0u;
            goto label_1e44c0;
        }
    }
    ctx->pc = 0x1E44B4u;
    // 0x1e44b4: 0x46006a06  mov.s       $f8, $f13
    ctx->pc = 0x1e44b4u;
    ctx->f[8] = FPU_MOV_S(ctx->f[13]);
label_1e44b8:
    // 0x1e44b8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1E44B8u;
    {
        const bool branch_taken_0x1e44b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44B8u;
        // 0x1e44bc: 0x46003246  mov.s       $f9, $f6 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44b8) {
            ctx->pc = 0x1E4688u;
            goto label_1e4688;
        }
    }
    ctx->pc = 0x1E44C0u;
label_1e44c0:
    // 0x1e44c0: 0x0  nop
    ctx->pc = 0x1e44c0u;
    // NOP
    // 0x1e44c4: 0x0  nop
    ctx->pc = 0x1e44c4u;
    // NOP
    // 0x1e44c8: 0x460b0243  div.s       $f9, $f0, $f11
    ctx->pc = 0x1e44c8u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x1e44cc: 0x46094042  mul.s       $f1, $f8, $f9
    ctx->pc = 0x1e44ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x1e44d0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1E44D0u;
    {
        const bool branch_taken_0x1e44d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44D0u;
        // 0x1e44d4: 0x460d0a00  add.s       $f8, $f1, $f13 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44d0) {
            ctx->pc = 0x1E4688u;
            goto label_1e4688;
        }
    }
    ctx->pc = 0x1E44D8u;
label_1e44d8:
    // 0x1e44d8: 0x46034834  c.lt.s      $f9, $f3
    ctx->pc = 0x1e44d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e44dc: 0x0  nop
    ctx->pc = 0x1e44dcu;
    // NOP
    // 0x1e44e0: 0x4502003e  bc1fl       . + 4 + (0x3E << 2)
    ctx->pc = 0x1E44E0u;
    {
        const bool branch_taken_0x1e44e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e44e0) {
            ctx->pc = 0x1E44E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E44E0u;
            // 0x1e44e4: 0x46085800  add.s       $f0, $f11, $f8 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E45DCu;
            goto label_1e45dc;
        }
    }
    ctx->pc = 0x1E44E8u;
    // 0x1e44e8: 0x46085080  add.s       $f2, $f10, $f8
    ctx->pc = 0x1e44e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[10], ctx->f[8]);
    // 0x1e44ec: 0x46076040  add.s       $f1, $f12, $f7
    ctx->pc = 0x1e44ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[7]);
    // 0x1e44f0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e44f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e44f4: 0x0  nop
    ctx->pc = 0x1e44f4u;
    // NOP
    // 0x1e44f8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1E44F8u;
    {
        const bool branch_taken_0x1e44f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E44FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44F8u;
        // 0x1e44fc: 0x46001a46  mov.s       $f9, $f3 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44f8) {
            ctx->pc = 0x1E4588u;
            goto label_1e4588;
        }
    }
    ctx->pc = 0x1E4500u;
    // 0x1e4500: 0x460a5000  add.s       $f0, $f10, $f10
    ctx->pc = 0x1e4500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
    // 0x1e4504: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e4504u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e4508: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1e4508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1e450c: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x1e450cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x1e4510: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e4510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4514: 0x0  nop
    ctx->pc = 0x1e4514u;
    // NOP
    // 0x1e4518: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4518u;
    {
        const bool branch_taken_0x1e4518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4518u;
        // 0x1e451c: 0x46001986  mov.s       $f6, $f3 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4518) {
            ctx->pc = 0x1E4534u;
            goto label_1e4534;
        }
    }
    ctx->pc = 0x1E4520u;
    // 0x1e4520: 0x46084000  add.s       $f0, $f8, $f8
    ctx->pc = 0x1e4520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x1e4524: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4528: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1e4528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1e452c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1E452Cu;
    {
        const bool branch_taken_0x1e452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E452Cu;
        // 0x1e4530: 0x46005800  add.s       $f0, $f11, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e452c) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E4534u;
label_1e4534:
    // 0x1e4534: 0x0  nop
    ctx->pc = 0x1e4534u;
    // NOP
    // 0x1e4538: 0x0  nop
    ctx->pc = 0x1e4538u;
    // NOP
    // 0x1e453c: 0x46000a43  div.s       $f9, $f1, $f0
    ctx->pc = 0x1e453cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e4540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4544: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4548: 0x46084140  add.s       $f5, $f8, $f8
    ctx->pc = 0x1e4548u;
    ctx->f[5] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x1e454c: 0x46073900  add.s       $f4, $f7, $f7
    ctx->pc = 0x1e454cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x1e4550: 0x46090181  sub.s       $f6, $f0, $f9
    ctx->pc = 0x1e4550u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x1e4554: 0x460958c2  mul.s       $f3, $f11, $f9
    ctx->pc = 0x1e4554u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[9]);
    // 0x1e4558: 0x46095082  mul.s       $f2, $f10, $f9
    ctx->pc = 0x1e4558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x1e455c: 0x46066042  mul.s       $f1, $f12, $f6
    ctx->pc = 0x1e455cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x1e4560: 0x46065002  mul.s       $f0, $f10, $f6
    ctx->pc = 0x1e4560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x1e4564: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e4564u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e4568: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e4568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e456c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1e456cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1e4570: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1e4570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1e4574: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1e4574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1e4578: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x1e4578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x1e457c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e457cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e4580: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1E4580u;
    {
        const bool branch_taken_0x1e4580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4580u;
        // 0x1e4584: 0x460d0a00  add.s       $f8, $f1, $f13 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4580) {
            ctx->pc = 0x1E4688u;
            goto label_1e4688;
        }
    }
    ctx->pc = 0x1E4588u;
label_1e4588:
    // 0x1e4588: 0x46090836  c.le.s      $f1, $f9
    ctx->pc = 0x1e4588u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e458c: 0x0  nop
    ctx->pc = 0x1e458cu;
    // NOP
    // 0x1e4590: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4590u;
    {
        const bool branch_taken_0x1e4590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4590) {
            ctx->pc = 0x1E45ACu;
            goto label_1e45ac;
        }
    }
    ctx->pc = 0x1E4598u;
    // 0x1e4598: 0x46073800  add.s       $f0, $f7, $f7
    ctx->pc = 0x1e4598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x1e459c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e459cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e45a0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e45a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1e45a4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E45A4u;
    {
        const bool branch_taken_0x1e45a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45A4u;
        // 0x1e45a8: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45a4) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E45ACu;
label_1e45ac:
    // 0x1e45ac: 0x46074836  c.le.s      $f9, $f7
    ctx->pc = 0x1e45acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e45b0: 0x0  nop
    ctx->pc = 0x1e45b0u;
    // NOP
    // 0x1e45b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E45B4u;
    {
        const bool branch_taken_0x1e45b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45B4u;
        // 0x1e45b8: 0x46006a06  mov.s       $f8, $f13 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45b4) {
            ctx->pc = 0x1E45C4u;
            goto label_1e45c4;
        }
    }
    ctx->pc = 0x1E45BCu;
label_1e45bc:
    // 0x1e45bc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1E45BCu;
    {
        const bool branch_taken_0x1e45bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45BCu;
        // 0x1e45c0: 0x46004986  mov.s       $f6, $f9 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45bc) {
            ctx->pc = 0x1E4688u;
            goto label_1e4688;
        }
    }
    ctx->pc = 0x1E45C4u;
label_1e45c4:
    // 0x1e45c4: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x1e45c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x1e45c8: 0x0  nop
    ctx->pc = 0x1e45c8u;
    // NOP
    // 0x1e45cc: 0x460c0183  div.s       $f6, $f0, $f12
    ctx->pc = 0x1e45ccu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1e45d0: 0x46063842  mul.s       $f1, $f7, $f6
    ctx->pc = 0x1e45d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x1e45d4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1E45D4u;
    {
        const bool branch_taken_0x1e45d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45D4u;
        // 0x1e45d8: 0x460d0a00  add.s       $f8, $f1, $f13 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45d4) {
            ctx->pc = 0x1E4688u;
            goto label_1e4688;
        }
    }
    ctx->pc = 0x1E45DCu;
label_1e45dc:
    // 0x1e45dc: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x1e45dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x1e45e0: 0x46070041  sub.s       $f1, $f0, $f7
    ctx->pc = 0x1e45e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x1e45e4: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x1e45e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e45e8: 0x0  nop
    ctx->pc = 0x1e45e8u;
    // NOP
    // 0x1e45ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E45ECu;
    {
        const bool branch_taken_0x1e45ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E45F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45ECu;
        // 0x1e45f0: 0x46001986  mov.s       $f6, $f3 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45ec) {
            ctx->pc = 0x1E4608u;
            goto label_1e4608;
        }
    }
    ctx->pc = 0x1E45F4u;
    // 0x1e45f4: 0x46084000  add.s       $f0, $f8, $f8
    ctx->pc = 0x1e45f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x1e45f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e45f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e45fc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1e45fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1e4600: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1E4600u;
    {
        const bool branch_taken_0x1e4600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4600u;
        // 0x1e4604: 0x46005800  add.s       $f0, $f11, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4600) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E4608u;
label_1e4608:
    // 0x1e4608: 0x460a5000  add.s       $f0, $f10, $f10
    ctx->pc = 0x1e4608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
    // 0x1e460c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1e460cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1e4610: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x1e4610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x1e4614: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e4614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4618: 0x0  nop
    ctx->pc = 0x1e4618u;
    // NOP
    // 0x1e461c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E461Cu;
    {
        const bool branch_taken_0x1e461c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E461Cu;
        // 0x1e4620: 0x46001a46  mov.s       $f9, $f3 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e461c) {
            ctx->pc = 0x1E4638u;
            goto label_1e4638;
        }
    }
    ctx->pc = 0x1E4624u;
    // 0x1e4624: 0x46073800  add.s       $f0, $f7, $f7
    ctx->pc = 0x1e4624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x1e4628: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e462c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e462cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1e4630: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E4630u;
    {
        const bool branch_taken_0x1e4630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4630u;
        // 0x1e4634: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4630) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E4638u;
label_1e4638:
    // 0x1e4638: 0x0  nop
    ctx->pc = 0x1e4638u;
    // NOP
    // 0x1e463c: 0x0  nop
    ctx->pc = 0x1e463cu;
    // NOP
    // 0x1e4640: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x1e4640u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e4644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4648: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e464c: 0x46084100  add.s       $f4, $f8, $f8
    ctx->pc = 0x1e464cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x1e4650: 0x46073940  add.s       $f5, $f7, $f7
    ctx->pc = 0x1e4650u;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x1e4654: 0x46060a41  sub.s       $f9, $f1, $f6
    ctx->pc = 0x1e4654u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x1e4658: 0x46066002  mul.s       $f0, $f12, $f6
    ctx->pc = 0x1e4658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x1e465c: 0x46065042  mul.s       $f1, $f10, $f6
    ctx->pc = 0x1e465cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x1e4660: 0x46095882  mul.s       $f2, $f11, $f9
    ctx->pc = 0x1e4660u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[9]);
    // 0x1e4664: 0x460950c2  mul.s       $f3, $f10, $f9
    ctx->pc = 0x1e4664u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x1e4668: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e4668u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e466c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1e466cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1e4670:
    // 0x1e4670: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1e4670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1e4674: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1e4674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1e4678: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x1e4678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x1e467c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1e467cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1e4680: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e4680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e4684:
    // 0x1e4684: 0x460d0200  add.s       $f8, $f0, $f13
    ctx->pc = 0x1e4684u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_1e4688:
    // 0x1e4688: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1e4688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e468c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e4690: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1e4690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4694: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1e4694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e4698: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1e4698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e469c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x1e469cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1e46a0: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1e46a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e46a4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1e46a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x1e46a8: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1e46a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1e46ac: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1e46acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1e46b0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1e46b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1e46b4: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x1e46b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e46b8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1e46b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e46bc: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1e46bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e46c0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e46c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e46c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e46c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e46c8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e46c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e46cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e46ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e46d0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1e46d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e46d4: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x1e46d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e46d8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1e46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e46dc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e46dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e46e0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e46e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e46e4: 0x46064982  mul.s       $f6, $f9, $f6
    ctx->pc = 0x1e46e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x1e46e8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1e46e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e46ec: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x1e46ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x1e46f0: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x1e46f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x1e46f4: 0xc7a70060  lwc1        $f7, 0x60($sp)
    ctx->pc = 0x1e46f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e46f8: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x1e46f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x1e46fc: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x1e46fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4700: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x1e4700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e4704: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x1e4704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e4708: 0xe7a70040  swc1        $f7, 0x40($sp)
    ctx->pc = 0x1e4708u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e470c: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x1e470cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e4710: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x1e4710u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e4714: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x1e4714u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1e4718: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x1e4718u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e471c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1e471cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e4720: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1e4720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e4724: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1e4724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1e4728: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e4728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e472c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e472cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4730: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e4730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4734: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e4734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4738: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1e4738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e473c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1e473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e4740: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1e4740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4744: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1e4744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4748: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1e4748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e474c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1e474cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e4750: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1e4750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e4754: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1e4754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e4758: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x1e4758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1e475c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e475cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4760: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1e4760u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4764: 0x46004005  abs.s       $f0, $f8
    ctx->pc = 0x1e4764u;
    ctx->f[0] = FPU_ABS_S(ctx->f[8]);
    // 0x1e4768: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1e4768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1e476c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E476Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E476Cu;
        // 0x1e4770: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E476Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4774u;
    // 0x1e4774: 0x0  nop
    ctx->pc = 0x1e4774u;
    // NOP
    ctx->pc = 0x1e4778u;
}
