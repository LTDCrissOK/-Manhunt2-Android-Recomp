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

// Function: sub_00359D18
// Address: 0x359d18 - 0x359fb8
void sub_00359D18_0x359d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359D18_0x359d18");
#endif

    ctx->pc = 0x359d18u;

    // 0x359d18: 0x1520004e  bnez        $t1, . + 4 + (0x4E << 2)
    ctx->pc = 0x359D18u;
    {
        const bool branch_taken_0x359d18 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x359D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D18u;
        // 0x359d1c: 0x27bdffc0  addiu       $sp, $sp, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359d18) {
            ctx->pc = 0x359E54u;
            goto label_359e54;
        }
    }
    ctx->pc = 0x359D20u;
    // 0x359d20: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x359d20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x359d24: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x359d24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x359d28: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x359d28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359d2c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x359d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359d30: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x359d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359d34: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x359d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x359d38: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x359d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359d3c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x359d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359d40: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x359d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359d44: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x359d44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x359d48: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x359d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x359d4c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x359d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x359d50: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x359d50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x359d54: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x359d54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359d58: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x359d58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x359d5c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x359d5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359d60: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x359d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359d64: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x359d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359d68: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x359d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x359d6c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x359d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359d70: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x359d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359d74: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x359d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x359d78: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x359d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x359d7c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x359d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x359d80: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x359d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x359d84: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x359d84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x359d88: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x359d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359d8c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x359d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359d90: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x359d90u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x359d94: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x359d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359d98: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x359d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359d9c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x359d9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x359da0: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x359da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359da4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x359da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359da8: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x359da8u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x359dac: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x359dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359db0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x359db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359db4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x359db4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x359db8: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x359db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359dbc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x359dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359dc0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x359dc0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x359dc4: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x359dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359dc8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x359dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359dcc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x359dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x359dd0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x359dd0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x359dd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x359dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x359dd8: 0x0  nop
    ctx->pc = 0x359dd8u;
    // NOP
    // 0x359ddc: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x359ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x359de0: 0x0  nop
    ctx->pc = 0x359de0u;
    // NOP
    // 0x359de4: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x359DE4u;
    {
        const bool branch_taken_0x359de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x359de4) {
            ctx->pc = 0x359DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359DE4u;
            // 0x359de8: 0xc4c00000  lwc1        $f0, 0x0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x359E34u;
            goto label_359e34;
        }
    }
    ctx->pc = 0x359DECu;
    // 0x359dec: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x359decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359df0: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x359df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359df4: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x359df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359df8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x359df8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x359dfc: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x359dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359e00: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x359e00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x359e04: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x359e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x359e08: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x359e08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x359e0c: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x359e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x359e10: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x359e10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x359e14: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x359e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x359e18: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x359e18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x359e1c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x359e1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359e20: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x359e20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x359e24: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x359e24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359e28: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x359e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359e2c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x359E2Cu;
    {
        const bool branch_taken_0x359e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E2Cu;
        // 0x359e30: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e2c) {
            ctx->pc = 0x359F90u;
            goto label_359f90;
        }
    }
    ctx->pc = 0x359E34u;
label_359e34:
    // 0x359e34: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x359e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x359e38: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x359e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359e3c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x359e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x359e40: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x359e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359e44: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x359e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x359e48: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x359e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359e4c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x359E4Cu;
    {
        const bool branch_taken_0x359e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E4Cu;
        // 0x359e50: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e4c) {
            ctx->pc = 0x359FACu;
            goto label_359fac;
        }
    }
    ctx->pc = 0x359E54u;
label_359e54:
    // 0x359e54: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x359e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x359e58: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x359e58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x359e5c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x359e5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359e60: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x359e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359e64: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x359e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359e68: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x359e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x359e6c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x359e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359e70: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x359e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359e74: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x359e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359e78: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x359e78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x359e7c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x359e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x359e80: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x359e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x359e84: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x359e84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x359e88: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x359e88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359e8c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x359e8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x359e90: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x359e90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359e94: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x359e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359e98: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x359e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359e9c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x359e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x359ea0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x359ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359ea4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x359ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359ea8: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x359ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359eac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x359eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x359eb0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x359eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x359eb4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x359eb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x359eb8: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x359eb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x359ebc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359ebcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359ec0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x359ec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x359ec4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x359ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x359ec8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x359ec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x359ecc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x359eccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x359ed0: 0x4a0003bf  vwaitq
    ctx->pc = 0x359ed0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x359ed4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x359ed4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359ed8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x359ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359edc: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x359edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359ee0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x359ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359ee4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x359ee4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x359ee8: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x359ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359eec: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x359eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359ef0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x359ef0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x359ef4: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x359ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359ef8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x359ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359efc: 0x4603115c  madd.s      $f5, $f2, $f3
    ctx->pc = 0x359efcu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x359f00: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x359f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359f04: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x359f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359f08: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x359f08u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x359f0c: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x359f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359f10: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x359f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359f14: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x359f14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x359f18: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x359f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359f1c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x359f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359f20: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x359f20u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x359f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x359f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359f28: 0x0  nop
    ctx->pc = 0x359f28u;
    // NOP
    // 0x359f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x359f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x359f30: 0x0  nop
    ctx->pc = 0x359f30u;
    // NOP
    // 0x359f34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x359F34u;
    {
        const bool branch_taken_0x359f34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x359F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359F34u;
        // 0x359f38: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359f34) {
            ctx->pc = 0x359F48u;
            goto label_359f48;
        }
    }
    ctx->pc = 0x359F3Cu;
    // 0x359f3c: 0x0  nop
    ctx->pc = 0x359f3cu;
    // NOP
    // 0x359f40: 0x0  nop
    ctx->pc = 0x359f40u;
    // NOP
    // 0x359f44: 0x46012903  div.s       $f4, $f5, $f1
    ctx->pc = 0x359f44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
label_359f48:
    // 0x359f48: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x359f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359f4c: 0x460c2129  min.s       $f4, $f4, $f12
    ctx->pc = 0x359f4cu;
    ctx->f[4] = std::min(ctx->f[4], ctx->f[12]);
    // 0x359f50: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x359f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359f54: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x359f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359f58: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x359f58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x359f5c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x359f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359f60: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x359f60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x359f64: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x359f64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x359f68: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x359f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x359f6c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x359f6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x359f70: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x359f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x359f74: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x359f74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x359f78: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x359f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x359f7c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x359f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x359f80: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x359f80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x359f84: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x359f84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359f88: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x359f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359f8c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x359f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_359f90:
    // 0x359f90: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x359f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359f94: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x359f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359f98: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x359f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359f9c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x359f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x359fa0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x359fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x359fa4: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x359fa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x359fa8: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x359fa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_359fac:
    // 0x359fac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x359facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x359FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359FB0u;
        // 0x359fb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359FB8u;
}
