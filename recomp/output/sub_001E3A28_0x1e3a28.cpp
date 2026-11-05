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

// Function: sub_001E3A28
// Address: 0x1e3a28 - 0x1e3d70
void sub_001E3A28_0x1e3a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3A28_0x1e3a28");
#endif

    ctx->pc = 0x1e3a28u;

    // 0x1e3a28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e3a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e3a2c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1e3a2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e3a30: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1e3a30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e3a34: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e3a34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3a38: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e3a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3a3c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1e3a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3a40: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e3a44: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1e3a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a48: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1e3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3a4c: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1e3a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3a50: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1e3a50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e3a54: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1e3a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e3a58: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e3a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e3a5c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1e3a5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e3a60: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e3a60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3a64: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1e3a64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e3a68: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e3a68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3a6c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e3a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3a70: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e3a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3a74: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1e3a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3a78: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1e3a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3a7c: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x1e3a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3a80: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e3a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e3a84: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1e3a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e3a88: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1e3a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e3a8c: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x1e3a8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e3a90: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x1e3a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3a94: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1e3a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3a98: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e3a98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3a9c: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x1e3a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3aa0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3aa4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e3aa4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e3aa8: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x1e3aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3aac: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1e3aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3ab0: 0x460311dc  madd.s      $f7, $f2, $f3
    ctx->pc = 0x1e3ab0u;
    ctx->f[7] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3ab4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e3ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3ab8: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1e3ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3abc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e3abcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3ac0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1e3ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3ac4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e3ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3ac8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e3ac8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e3acc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1e3accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3ad0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1e3ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3ad4: 0x4603119c  madd.s      $f6, $f2, $f3
    ctx->pc = 0x1e3ad4u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3ad8: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x1e3ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3adc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1e3adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3ae0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e3ae0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3ae4: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x1e3ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3ae8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e3ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3aec: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e3aecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e3af0: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x1e3af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3af4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1e3af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3af8: 0x4603125c  madd.s      $f9, $f2, $f3
    ctx->pc = 0x1e3af8u;
    ctx->f[9] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3afc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e3afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3b00: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1e3b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3b04: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e3b04u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3b08: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1e3b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3b0c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e3b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3b10: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e3b10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e3b14: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1e3b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3b18: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1e3b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3b1c: 0x4603115c  madd.s      $f5, $f2, $f3
    ctx->pc = 0x1e3b1cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e3b20: 0x46066082  mul.s       $f2, $f12, $f6
    ctx->pc = 0x1e3b20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x1e3b24: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1e3b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1e3b28: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1e3b28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1e3b2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3b30: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x1e3b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x1e3b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b38: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x1e3b38u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1e3b3c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1e3b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3b40: 0x0  nop
    ctx->pc = 0x1e3b40u;
    // NOP
    // 0x1e3b44: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3B44u;
    {
        const bool branch_taken_0x1e3b44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B44u;
        // 0x1e3b48: 0x46002206  mov.s       $f8, $f4 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b44) {
            ctx->pc = 0x1E3B64u;
            goto label_1e3b64;
        }
    }
    ctx->pc = 0x1E3B4Cu;
    // 0x1e3b4c: 0x460028c6  mov.s       $f3, $f5
    ctx->pc = 0x1e3b4cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[5]);
    // 0x1e3b50: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e3b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e3b54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e3b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3b58: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1e3b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1e3b5c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E3B5Cu;
    {
        const bool branch_taken_0x1e3b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B5Cu;
        // 0x1e3b60: 0x46003106  mov.s       $f4, $f6 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b5c) {
            ctx->pc = 0x1E3BB4u;
            goto label_1e3bb4;
        }
    }
    ctx->pc = 0x1E3B64u;
label_1e3b64:
    // 0x1e3b64: 0x46053882  mul.s       $f2, $f7, $f5
    ctx->pc = 0x1e3b64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x1e3b68: 0x46093042  mul.s       $f1, $f6, $f9
    ctx->pc = 0x1e3b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x1e3b6c: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x1e3b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1e3b70: 0x460560c2  mul.s       $f3, $f12, $f5
    ctx->pc = 0x1e3b70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x1e3b74: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1e3b74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1e3b78: 0x46093802  mul.s       $f0, $f7, $f9
    ctx->pc = 0x1e3b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x1e3b7c: 0x460a1034  c.lt.s      $f2, $f10
    ctx->pc = 0x1e3b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3b80: 0x0  nop
    ctx->pc = 0x1e3b80u;
    // NOP
    // 0x1e3b84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3B84u;
    {
        const bool branch_taken_0x1e3b84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B84u;
        // 0x1e3b88: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b84) {
            ctx->pc = 0x1E3B98u;
            goto label_1e3b98;
        }
    }
    ctx->pc = 0x1E3B8Cu;
    // 0x1e3b8c: 0x46005086  mov.s       $f2, $f10
    ctx->pc = 0x1e3b8cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[10]);
    // 0x1e3b90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3B90u;
    {
        const bool branch_taken_0x1e3b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B90u;
        // 0x1e3b94: 0x460028c6  mov.s       $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b90) {
            ctx->pc = 0x1E3BB0u;
            goto label_1e3bb0;
        }
    }
    ctx->pc = 0x1E3B98u;
label_1e3b98:
    // 0x1e3b98: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x1e3b98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3b9c: 0x0  nop
    ctx->pc = 0x1e3b9cu;
    // NOP
    // 0x1e3ba0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3BA0u;
    {
        const bool branch_taken_0x1e3ba0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3ba0) {
            ctx->pc = 0x1E3BB4u;
            goto label_1e3bb4;
        }
    }
    ctx->pc = 0x1E3BA8u;
    // 0x1e3ba8: 0x460728c0  add.s       $f3, $f5, $f7
    ctx->pc = 0x1e3ba8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x1e3bac: 0x46002086  mov.s       $f2, $f4
    ctx->pc = 0x1e3bacu;
    ctx->f[2] = FPU_MOV_S(ctx->f[4]);
label_1e3bb0:
    // 0x1e3bb0: 0x46003106  mov.s       $f4, $f6
    ctx->pc = 0x1e3bb0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[6]);
label_1e3bb4:
    // 0x1e3bb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e3bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3bb8: 0x0  nop
    ctx->pc = 0x1e3bb8u;
    // NOP
    // 0x1e3bbc: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1e3bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3bc0: 0x0  nop
    ctx->pc = 0x1e3bc0u;
    // NOP
    // 0x1e3bc4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3BC4u;
    {
        const bool branch_taken_0x1e3bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3bc4) {
            ctx->pc = 0x1E3BE8u;
            goto label_1e3be8;
        }
    }
    ctx->pc = 0x1E3BCCu;
    // 0x1e3bcc: 0x46004807  neg.s       $f0, $f9
    ctx->pc = 0x1e3bccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[9]);
    // 0x1e3bd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e3bd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3bd4: 0x0  nop
    ctx->pc = 0x1e3bd4u;
    // NOP
    // 0x1e3bd8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1E3BD8u;
    {
        const bool branch_taken_0x1e3bd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BD8u;
        // 0x1e3bdc: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3bd8) {
            ctx->pc = 0x1E3C0Cu;
            goto label_1e3c0c;
        }
    }
    ctx->pc = 0x1E3BE0u;
    // 0x1e3be0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E3BE0u;
    {
        const bool branch_taken_0x1e3be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3be0) {
            ctx->pc = 0x1E3C18u;
            goto label_1e3c18;
        }
    }
    ctx->pc = 0x1E3BE8u;
label_1e3be8:
    // 0x1e3be8: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x1e3be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3bec: 0x0  nop
    ctx->pc = 0x1e3becu;
    // NOP
    // 0x1e3bf0: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3BF0u;
    {
        const bool branch_taken_0x1e3bf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3bf0) {
            ctx->pc = 0x1E3BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3BF0u;
            // 0x1e3bf4: 0x46001005  abs.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_ABS_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3C34u;
            goto label_1e3c34;
        }
    }
    ctx->pc = 0x1E3BF8u;
    // 0x1e3bf8: 0x46093801  sub.s       $f0, $f7, $f9
    ctx->pc = 0x1e3bf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[9]);
    // 0x1e3bfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e3bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3c00: 0x0  nop
    ctx->pc = 0x1e3c00u;
    // NOP
    // 0x1e3c04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3C04u;
    {
        const bool branch_taken_0x1e3c04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C04u;
        // 0x1e3c08: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c04) {
            ctx->pc = 0x1E3C18u;
            goto label_1e3c18;
        }
    }
    ctx->pc = 0x1E3C0Cu;
label_1e3c0c:
    // 0x1e3c0c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e3c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e3c10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3C10u;
    {
        const bool branch_taken_0x1e3c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C10u;
        // 0x1e3c14: 0x46001005  abs.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c10) {
            ctx->pc = 0x1E3C34u;
            goto label_1e3c34;
        }
    }
    ctx->pc = 0x1E3C18u;
label_1e3c18:
    // 0x1e3c18: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1e3c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3c1c: 0x0  nop
    ctx->pc = 0x1e3c1cu;
    // NOP
    // 0x1e3c20: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3C20u;
    {
        const bool branch_taken_0x1e3c20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C20u;
        // 0x1e3c24: 0x46004086  mov.s       $f2, $f8 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c20) {
            ctx->pc = 0x1E3C30u;
            goto label_1e3c30;
        }
    }
    ctx->pc = 0x1E3C28u;
    // 0x1e3c28: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1e3c28u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1e3c2c: 0x46006206  mov.s       $f8, $f12
    ctx->pc = 0x1e3c2cu;
    ctx->f[8] = FPU_MOV_S(ctx->f[12]);
label_1e3c30:
    // 0x1e3c30: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1e3c30u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
label_1e3c34:
    // 0x1e3c34: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1e3c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1e3c38: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1e3c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1e3c3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3c40: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1e3c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1e3c44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3c48: 0x0  nop
    ctx->pc = 0x1e3c48u;
    // NOP
    // 0x1e3c4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3C4Cu;
    {
        const bool branch_taken_0x1e3c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C4Cu;
        // 0x1e3c50: 0x46001805  abs.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c4c) {
            ctx->pc = 0x1E3C60u;
            goto label_1e3c60;
        }
    }
    ctx->pc = 0x1E3C54u;
    // 0x1e3c54: 0x0  nop
    ctx->pc = 0x1e3c54u;
    // NOP
    // 0x1e3c58: 0x0  nop
    ctx->pc = 0x1e3c58u;
    // NOP
    // 0x1e3c5c: 0x46081143  div.s       $f5, $f2, $f8
    ctx->pc = 0x1e3c5cu;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[2], ctx->f[8]); }
label_1e3c60:
    // 0x1e3c60: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1e3c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1e3c64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3c68: 0x0  nop
    ctx->pc = 0x1e3c68u;
    // NOP
    // 0x1e3c6c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3C6Cu;
    {
        const bool branch_taken_0x1e3c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3c6c) {
            ctx->pc = 0x1E3C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3C6Cu;
            // 0x1e3c70: 0xc4e3000c  lwc1        $f3, 0xC($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3C84u;
            goto label_1e3c84;
        }
    }
    ctx->pc = 0x1E3C74u;
    // 0x1e3c74: 0x0  nop
    ctx->pc = 0x1e3c74u;
    // NOP
    // 0x1e3c78: 0x0  nop
    ctx->pc = 0x1e3c78u;
    // NOP
    // 0x1e3c7c: 0x46041a03  div.s       $f8, $f3, $f4
    ctx->pc = 0x1e3c7cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x1e3c80: 0xc4e3000c  lwc1        $f3, 0xC($a3)
    ctx->pc = 0x1e3c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e3c84:
    // 0x1e3c84: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1e3c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e3c88: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1e3c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3c8c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1e3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e3c90: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1e3c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3c94: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x1e3c94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1e3c98: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x1e3c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3c9c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1e3c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1e3ca0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1e3ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1e3ca4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1e3ca4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1e3ca8: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x1e3ca8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1e3cac: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1e3cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1e3cb0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1e3cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1e3cb4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1e3cb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1e3cb8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e3cb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3cbc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e3cbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3cc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e3cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3cc4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e3cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3cc8: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x1e3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e3ccc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1e3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e3cd0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1e3cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3cd4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1e3cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3cd8: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x1e3cd8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x1e3cdc: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1e3cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3ce0: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x1e3ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x1e3ce4: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x1e3ce4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x1e3ce8: 0xc7a70050  lwc1        $f7, 0x50($sp)
    ctx->pc = 0x1e3ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e3cec: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x1e3cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x1e3cf0: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x1e3cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3cf4: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x1e3cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3cf8: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x1e3cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e3cfc: 0xe7a70030  swc1        $f7, 0x30($sp)
    ctx->pc = 0x1e3cfcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e3d00: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x1e3d00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e3d04: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x1e3d04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e3d08: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x1e3d08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1e3d0c: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x1e3d0cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e3d10: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1e3d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e3d14: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1e3d14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e3d18: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1e3d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1e3d1c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e3d1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3d20: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e3d20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3d24: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e3d24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3d28: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1e3d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3d2c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1e3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3d30: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1e3d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e3d34: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1e3d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3d38: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1e3d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3d3c: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x1e3d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e3d40: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1e3d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e3d44: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1e3d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e3d48: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1e3d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e3d4c: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x1e3d4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e3d50: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e3d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3d54: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e3d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3d58: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e3d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3d5c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e3d5cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e3d60: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e3d60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e3d64: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e3d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e3d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D68u;
        // 0x1e3d6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3D70u;
}
