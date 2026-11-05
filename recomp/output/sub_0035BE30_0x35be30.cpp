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

// Function: sub_0035BE30
// Address: 0x35be30 - 0x35c038
void sub_0035BE30_0x35be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BE30_0x35be30");
#endif

    switch (ctx->pc) {
        case 0x35bef4u: goto label_35bef4;
        default: break;
    }

    ctx->pc = 0x35be30u;

    // 0x35be30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x35be30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x35be34: 0x24821520  addiu       $v0, $a0, 0x1520
    ctx->pc = 0x35be34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    // 0x35be38: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x35be38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x35be3c: 0x24841530  addiu       $a0, $a0, 0x1530
    ctx->pc = 0x35be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
    // 0x35be40: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x35be40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x35be44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35be44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be48: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35be48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be4c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x35be4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x35be50: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x35be50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x35be54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35be54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35be58: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x35be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x35be5c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x35be5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x35be60: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x35be60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x35be64: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x35be64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35be68: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35be68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35be6c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35be6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35be70: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x35be70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35be74: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x35be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35be78: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x35be78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35be7c: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x35be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x35be80: 0xc7a70038  lwc1        $f7, 0x38($sp)
    ctx->pc = 0x35be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x35be84: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x35be84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x35be88: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x35be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35be8c: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x35be8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x35be90: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x35be90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x35be94: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x35be94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35be98: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x35be98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x35be9c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x35be9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x35bea0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x35bea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x35bea4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x35bea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x35bea8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x35bea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x35beac: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x35beacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x35beb0: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x35beb0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x35beb4: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x35beb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x35beb8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35beb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35bebc: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x35bebcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35bec0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35bec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35bec4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x35bec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35bec8: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x35bec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35becc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x35beccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35bed0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x35bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35bed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35bed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bed8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x35bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bedc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x35bedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bee0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x35bee0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35bee4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x35bee4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x35bee8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x35bee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x35beec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35BEECu;
    SET_GPR_U32(ctx, 31, 0x35BEF4u);
    ctx->pc = 0x35BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BEECu;
    // 0x35bef0: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35BEECu, 0x35BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BEF4u;
label_35bef4:
    // 0x35bef4: 0xc60a0000  lwc1        $f10, 0x0($s0)
    ctx->pc = 0x35bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x35bef8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x35bef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35befc: 0xc6090004  lwc1        $f9, 0x4($s0)
    ctx->pc = 0x35befcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x35bf00: 0x46005387  neg.s       $f14, $f10
    ctx->pc = 0x35bf00u;
    ctx->f[14] = FPU_NEG_S(ctx->f[10]);
    // 0x35bf04: 0x460c5002  mul.s       $f0, $f10, $f12
    ctx->pc = 0x35bf04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x35bf08: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x35bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x35bf0c: 0xc607000c  lwc1        $f7, 0xC($s0)
    ctx->pc = 0x35bf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x35bf10: 0x46004ac7  neg.s       $f11, $f9
    ctx->pc = 0x35bf10u;
    ctx->f[11] = FPU_NEG_S(ctx->f[9]);
    // 0x35bf14: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x35bf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35bf18: 0x460848c2  mul.s       $f3, $f9, $f8
    ctx->pc = 0x35bf18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x35bf1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35bf1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x35bf20: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x35bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bf24: 0x46044882  mul.s       $f2, $f9, $f4
    ctx->pc = 0x35bf24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x35bf28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35bf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35bf2c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x35bf2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x35bf30: 0x460c3942  mul.s       $f5, $f7, $f12
    ctx->pc = 0x35bf30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x35bf34: 0x46040982  mul.s       $f6, $f1, $f4
    ctx->pc = 0x35bf34u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x35bf38: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x35bf38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x35bf3c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x35bf3cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x35bf40: 0x46045342  mul.s       $f13, $f10, $f4
    ctx->pc = 0x35bf40u;
    ctx->f[13] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x35bf44: 0x46083882  mul.s       $f2, $f7, $f8
    ctx->pc = 0x35bf44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x35bf48: 0x460808c2  mul.s       $f3, $f1, $f8
    ctx->pc = 0x35bf48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x35bf4c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x35bf4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x35bf50: 0x46000987  neg.s       $f6, $f1
    ctx->pc = 0x35bf50u;
    ctx->f[6] = FPU_NEG_S(ctx->f[1]);
    // 0x35bf54: 0x460d1081  sub.s       $f2, $f2, $f13
    ctx->pc = 0x35bf54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
    // 0x35bf58: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x35bf58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x35bf5c: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x35bf5cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x35bf60: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x35bf60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x35bf64: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x35bf64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x35bf68: 0x46085282  mul.s       $f10, $f10, $f8
    ctx->pc = 0x35bf68u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x35bf6c: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x35bf6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x35bf70: 0x460b2b42  mul.s       $f13, $f5, $f11
    ctx->pc = 0x35bf70u;
    ctx->f[13] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
    // 0x35bf74: 0x46072a02  mul.s       $f8, $f5, $f7
    ctx->pc = 0x35bf74u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x35bf78: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x35bf78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x35bf7c: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x35bf7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x35bf80: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x35bf80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x35bf84: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x35bf84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x35bf88: 0x460c4a42  mul.s       $f9, $f9, $f12
    ctx->pc = 0x35bf88u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x35bf8c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x35bf8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x35bf90: 0x460e1142  mul.s       $f5, $f2, $f14
    ctx->pc = 0x35bf90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x35bf94: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x35bf94u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x35bf98: 0x46061182  mul.s       $f6, $f2, $f6
    ctx->pc = 0x35bf98u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x35bf9c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x35bf9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x35bfa0: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x35bfa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x35bfa4: 0x460d18c0  add.s       $f3, $f3, $f13
    ctx->pc = 0x35bfa4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x35bfa8: 0x460721c2  mul.s       $f7, $f4, $f7
    ctx->pc = 0x35bfa8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x35bfac: 0x460b22c2  mul.s       $f11, $f4, $f11
    ctx->pc = 0x35bfacu;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x35bfb0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x35bfb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x35bfb4: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x35bfb4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x35bfb8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x35bfb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x35bfbc: 0x460e2102  mul.s       $f4, $f4, $f14
    ctx->pc = 0x35bfbcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
    // 0x35bfc0: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x35bfc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x35bfc4: 0x460b0841  sub.s       $f1, $f1, $f11
    ctx->pc = 0x35bfc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x35bfc8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x35bfc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x35bfcc: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x35bfccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x35bfd0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x35bfd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35bfd4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x35bfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x35bfd8: 0xe62f000c  swc1        $f15, 0xC($s1)
    ctx->pc = 0x35bfd8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x35bfdc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x35bfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bfe0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x35bfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bfe4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x35bfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35bfe8: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x35bfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35bfec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x35bfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x35bff0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x35bff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x35bff4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x35bff4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x35bff8: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x35bff8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x35bffc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x35bffcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35c000: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x35c000u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c004: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x35c004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35c008: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x35c008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35c00c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x35c00cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35c010: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x35c010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35c014: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x35c014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35c018: 0x3e00008  jr          $ra
    ctx->pc = 0x35C018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C018u;
        // 0x35c01c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C020u;
    // 0x35c020: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x35c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x35c024: 0x0  nop
    ctx->pc = 0x35c024u;
    // NOP
    // 0x35c028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c02c: 0x0  nop
    ctx->pc = 0x35c02cu;
    // NOP
    // 0x35c030: 0x27bd01f0  addiu       $sp, $sp, 0x1F0
    ctx->pc = 0x35c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x35c034: 0x0  nop
    ctx->pc = 0x35c034u;
    // NOP
    ctx->pc = 0x35c038u;
}
