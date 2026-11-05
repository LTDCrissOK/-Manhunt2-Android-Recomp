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

// Function: sub_001DFCD8
// Address: 0x1dfcd8 - 0x1dffb8
void sub_001DFCD8_0x1dfcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFCD8_0x1dfcd8");
#endif

    switch (ctx->pc) {
        case 0x1dfdecu: goto label_1dfdec;
        case 0x1dfdf4u: goto label_1dfdf4;
        case 0x1dfdfcu: goto label_1dfdfc;
        case 0x1dfec4u: goto label_1dfec4;
        case 0x1dff08u: goto label_1dff08;
        case 0x1dff24u: goto label_1dff24;
        case 0x1dff54u: goto label_1dff54;
        default: break;
    }

    ctx->pc = 0x1dfcd8u;

    // 0x1dfcd8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1dfcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1dfcdc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1dfcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1dfce0: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1dfce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1dfce4: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x1dfce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x1dfce8: 0x24500520  addiu       $s0, $v0, 0x520
    ctx->pc = 0x1dfce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1312));
    // 0x1dfcec: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1dfcecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcf0: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1dfcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x1dfcf4: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1dfcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x1dfcf8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1dfcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dfcfc: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x1dfcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x1dfd00: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x1dfd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x1dfd04: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x1dfd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x1dfd08: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1dfd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1dfd0c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1dfd0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1dfd10: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1dfd10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1dfd14: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dfd14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x490550u));
    // 0x1dfd18: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dfd18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dfd1c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1dfd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dfd20: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x1dfd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1dfd24: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1dfd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dfd28: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x1dfd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1dfd2c: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x1dfd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1dfd30: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1dfd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1dfd34: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x1dfd34u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dfd38: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x1dfd38u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1dfd3c: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x1dfd3cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1dfd40: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1dfd40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1dfd44: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1dfd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dfd48: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1dfd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dfd4c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1dfd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dfd50: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1dfd50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1dfd54: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1dfd54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1dfd58: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1dfd58u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1dfd5c: 0x46010044  c1          0x10044
    ctx->pc = 0x1dfd5cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1dfd60: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1dfd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1dfd64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfd64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfd68: 0x0  nop
    ctx->pc = 0x1dfd68u;
    // NOP
    // 0x1dfd6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dfd6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfd70: 0x0  nop
    ctx->pc = 0x1dfd70u;
    // NOP
    // 0x1dfd74: 0x45010058  bc1t        . + 4 + (0x58 << 2)
    ctx->pc = 0x1DFD74u;
    {
        const bool branch_taken_0x1dfd74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD74u;
        // 0x1dfd78: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd74) {
            ctx->pc = 0x1DFED8u;
            goto label_1dfed8;
        }
    }
    ctx->pc = 0x1DFD7Cu;
    // 0x1dfd7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dfd7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dfd80: 0x0  nop
    ctx->pc = 0x1dfd80u;
    // NOP
    // 0x1dfd84: 0x0  nop
    ctx->pc = 0x1dfd84u;
    // NOP
    // 0x1dfd88: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1dfd88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1dfd8c: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x1dfd8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1dfd90: 0x46080082  mul.s       $f2, $f0, $f8
    ctx->pc = 0x1dfd90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1dfd94: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x1dfd94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1dfd98: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1dfd98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1dfd9c: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x1dfd9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1dfda0: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1dfda0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1dfda4: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x1dfda4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1dfda8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1dfda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1dfdac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dfdacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfdb0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dfdb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dfdb4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dfdb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dfdb8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1dfdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dfdbc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1dfdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfdc0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1dfdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfdc4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1dfdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dfdc8: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x1dfdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dfdcc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1dfdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dfdd0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1dfdd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1dfdd4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1dfdd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1dfdd8: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1dfdd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1dfddc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dfddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dfde0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1dfde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dfde4: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x1DFDE4u;
    SET_GPR_U32(ctx, 31, 0x1DFDECu);
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x1DFDE4u, 0x1DFDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDECu;
label_1dfdec:
    // 0x1dfdec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DFDECu;
    SET_GPR_U32(ctx, 31, 0x1DFDF4u);
    ctx->pc = 0x1DFDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDECu;
    // 0x1dfdf0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DFDECu, 0x1DFDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDF4u;
label_1dfdf4:
    // 0x1dfdf4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DFDF4u;
    SET_GPR_U32(ctx, 31, 0x1DFDFCu);
    ctx->pc = 0x1DFDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDF4u;
    // 0x1dfdf8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DFDF4u, 0x1DFDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDFCu;
label_1dfdfc:
    // 0x1dfdfc: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1dfdfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1dfe00: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1dfe00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1dfe04: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1dfe04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfe08: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1dfe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dfe0c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1dfe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1dfe10: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1dfe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dfe14: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x1dfe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x1dfe18: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dfe18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dfe1c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dfe1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dfe20: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dfe20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dfe24: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dfe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dfe28: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1dfe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dfe2c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1dfe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dfe30: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1dfe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dfe34: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1dfe34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1dfe38: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1dfe38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1dfe3c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1dfe3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1dfe40: 0x0  nop
    ctx->pc = 0x1dfe40u;
    // NOP
    // 0x1dfe44: 0x0  nop
    ctx->pc = 0x1dfe44u;
    // NOP
    // 0x1dfe48: 0x46000044  c1          0x44
    ctx->pc = 0x1dfe48u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1dfe4c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1dfe4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1dfe50: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1dfe50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dfe54: 0x0  nop
    ctx->pc = 0x1dfe54u;
    // NOP
    // 0x1dfe58: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1dfe58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfe5c: 0x0  nop
    ctx->pc = 0x1dfe5cu;
    // NOP
    // 0x1dfe60: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1DFE60u;
    {
        const bool branch_taken_0x1dfe60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE60u;
        // 0x1dfe64: 0xe7a10090  swc1        $f1, 0x90($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe60) {
            ctx->pc = 0x1DFE8Cu;
            goto label_1dfe8c;
        }
    }
    ctx->pc = 0x1DFE68u;
    // 0x1dfe68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dfe68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfe6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfe6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfe70: 0x0  nop
    ctx->pc = 0x1dfe70u;
    // NOP
    // 0x1dfe74: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1dfe74u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1dfe78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1dfe78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1dfe7c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1dfe7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dfe80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1dfe80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dfe84: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1dfe84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dfe88: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1dfe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_1dfe8c:
    // 0x1dfe8c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1dfe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfe90: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1dfe90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfe94: 0x0  nop
    ctx->pc = 0x1dfe94u;
    // NOP
    // 0x1dfe98: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1DFE98u;
    {
        const bool branch_taken_0x1dfe98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE98u;
        // 0x1dfe9c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe98) {
            ctx->pc = 0x1DFED8u;
            goto label_1dfed8;
        }
    }
    ctx->pc = 0x1DFEA0u;
    // 0x1dfea0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dfea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfea4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1dfea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dfea8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1dfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1dfeac: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1dfeacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dfeb0: 0xe4540104  swc1        $f20, 0x104($v0)
    ctx->pc = 0x1dfeb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x490104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490104u, _value); } while (0); }
    // 0x1dfeb4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1dfeb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfeb8: 0xe4740108  swc1        $f20, 0x108($v1)
    ctx->pc = 0x1dfeb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x1dfebc: 0xc077e7a  jal         func_1DF9E8
    ctx->pc = 0x1DFEBCu;
    SET_GPR_U32(ctx, 31, 0x1DFEC4u);
    ctx->pc = 0x1DFEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEBCu;
    // 0x1dfec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9E8u, 0x1DFEBCu, 0x1DFEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFEC4u;
label_1dfec4:
    // 0x1dfec4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1dfec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1dfec8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1dfec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfecc: 0x8c4291f4  lw          $v0, -0x6E0C($v0)
    ctx->pc = 0x1dfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1dfed0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DFED0u;
    {
        const bool branch_taken_0x1dfed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfed0) {
            ctx->pc = 0x1DFEE8u;
            goto label_1dfee8;
        }
    }
    ctx->pc = 0x1DFED8u;
label_1dfed8:
    // 0x1dfed8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dfed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfedc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfee0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1DFEE0u;
    {
        const bool branch_taken_0x1dfee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEE0u;
        // 0x1dfee4: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfee0) {
            ctx->pc = 0x1DFF8Cu;
            goto label_1dff8c;
        }
    }
    ctx->pc = 0x1DFEE8u;
label_1dfee8:
    // 0x1dfee8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DFEE8u;
    {
        const bool branch_taken_0x1dfee8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DFEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEE8u;
        // 0x1dfeec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfee8) {
            ctx->pc = 0x1DFF34u;
            goto label_1dff34;
        }
    }
    ctx->pc = 0x1DFEF0u;
    // 0x1dfef0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1dfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1dfef4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1dfef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfef8: 0x2451c758  addiu       $s1, $v0, -0x38A8
    ctx->pc = 0x1dfef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x1dfefc: 0x3c13001e  lui         $s3, 0x1E
    ctx->pc = 0x1dfefcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)30 << 16));
    // 0x1dff00: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1dff00u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66C758u));
    // 0x1dff04: 0x0  nop
    ctx->pc = 0x1dff04u;
    // NOP
label_1dff08:
    // 0x1dff08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1dff08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff0c: 0x2667fc10  addiu       $a3, $s3, -0x3F0
    ctx->pc = 0x1dff0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966288));
    // 0x1dff10: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dff10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff14: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1dff14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1dff18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dff18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dff1c: 0xc0dbdf4  jal         func_36F7D0
    ctx->pc = 0x1DFF1Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF24u);
    ctx->pc = 0x1DFF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF1Cu;
    // 0x1dff20: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F7D0u, 0x1DFF1Cu, 0x1DFF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF24u;
label_1dff24:
    // 0x1dff24: 0x8e8391f4  lw          $v1, -0x6E0C($s4)
    ctx->pc = 0x1dff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939124)));
    // 0x1dff28: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1dff28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dff2c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DFF2Cu;
    {
        const bool branch_taken_0x1dff2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dff2c) {
            ctx->pc = 0x1DFF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFF2Cu;
            // 0x1dff30: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dff08;
        }
    }
    ctx->pc = 0x1DFF34u;
label_1dff34:
    // 0x1dff34: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1dff34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1dff38: 0x9043bd24  lbu         $v1, -0x42DC($v0)
    ctx->pc = 0x1dff38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x1dff3c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DFF3Cu;
    {
        const bool branch_taken_0x1dff3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF3Cu;
        // 0x1dff40: 0xc6b40108  lwc1        $f20, 0x108($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff3c) {
            ctx->pc = 0x1DFF6Cu;
            goto label_1dff6c;
        }
    }
    ctx->pc = 0x1DFF44u;
    // 0x1dff44: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1dff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1dff48: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1dff48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff4c: 0xc0b58de  jal         func_2D6378
    ctx->pc = 0x1DFF4Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF54u);
    ctx->pc = 0x1DFF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF4Cu;
    // 0x1dff50: 0x8c44bd20  lw          $a0, -0x42E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6378u, 0x1DFF4Cu, 0x1DFF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF54u;
label_1dff54:
    // 0x1dff54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DFF54u;
    {
        const bool branch_taken_0x1dff54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dff54) {
            ctx->pc = 0x1DFF6Cu;
            goto label_1dff6c;
        }
    }
    ctx->pc = 0x1DFF5Cu;
    // 0x1dff5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1dff5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1dff60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dff60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dff64: 0x0  nop
    ctx->pc = 0x1dff64u;
    // NOP
    // 0x1dff68: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1dff68u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1dff6c:
    // 0x1dff6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dff6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dff70: 0x0  nop
    ctx->pc = 0x1dff70u;
    // NOP
    // 0x1dff74: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1dff74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dff78: 0x0  nop
    ctx->pc = 0x1dff78u;
    // NOP
    // 0x1dff7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DFF7Cu;
    {
        const bool branch_taken_0x1dff7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dff7c) {
            ctx->pc = 0x1DFF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFF7Cu;
            // 0x1dff80: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFF84u;
            goto label_1dff84;
        }
    }
    ctx->pc = 0x1DFF84u;
label_1dff84:
    // 0x1dff84: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1dff84u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1dff88: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1dff88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1dff8c:
    // 0x1dff8c: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x1dff8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dff90: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x1dff90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dff94: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x1dff94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dff98: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x1dff98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dff9c: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x1dff9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1dffa0: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x1dffa0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dffa4: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1dffa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1dffa8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1dffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dffac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFACu;
        // 0x1dffb0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFFB4u;
    // 0x1dffb4: 0x0  nop
    ctx->pc = 0x1dffb4u;
    // NOP
    ctx->pc = 0x1dffb8u;
}
