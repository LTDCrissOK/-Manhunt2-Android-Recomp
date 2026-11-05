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

// Function: sub_0021E2A0
// Address: 0x21e2a0 - 0x21e3c8
void sub_0021E2A0_0x21e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E2A0_0x21e2a0");
#endif

    ctx->pc = 0x21e2a0u;

    // 0x21e2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21e2a4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x21e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x21e2a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x21e2a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e2ac: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x21e2acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e2b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x21e2b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21e2b4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x21e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21e2b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21e2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21e2bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e2c0: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x21e2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x21e2c4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x21e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e2c8: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x21e2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21e2cc: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x21e2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21e2d0: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x21e2d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e2d4: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x21e2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21e2d8: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x21e2d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x21e2dc: 0x460038c2  mul.s       $f3, $f7, $f0
    ctx->pc = 0x21e2dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x21e2e0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x21e2e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21e2e4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x21e2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x21e2e8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x21e2e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21e2ec: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x21e2ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21e2f0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x21e2f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21e2f4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x21e2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x21e2f8: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x21e2f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x21e2fc: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x21e2fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x21e300: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x21e300u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x21e304: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x21e304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e308: 0xf8810120  sqc2        $vf1, 0x120($a0)
    ctx->pc = 0x21e308u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21e30c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x21e30cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e310: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x21e310u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e314: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x21e314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21e318: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x21e318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21e31c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x21e31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e320: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x21e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e324: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x21e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e328: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x21e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e32c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x21e32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21e330: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x21e330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21e334: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x21e334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21e338: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x21e338u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x21e33c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x21e33cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e340: 0xf8810110  sqc2        $vf1, 0x110($a0)
    ctx->pc = 0x21e340u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21e344: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21e344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21e348: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x21e348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x21e34c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21E34Cu;
    {
        const bool branch_taken_0x21e34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E34Cu;
        // 0x21e350: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e34c) {
            ctx->pc = 0x21E378u;
            goto label_21e378;
        }
    }
    ctx->pc = 0x21E354u;
    // 0x21e354: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E354u;
    {
        const bool branch_taken_0x21e354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E354u;
        // 0x21e358: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e354) {
            ctx->pc = 0x21E378u;
            goto label_21e378;
        }
    }
    ctx->pc = 0x21E35Cu;
    // 0x21e35c: 0x84830054  lh          $v1, 0x54($a0)
    ctx->pc = 0x21e35cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x21e360: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E360u;
    {
        const bool branch_taken_0x21e360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E360u;
        // 0x21e364: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e360) {
            ctx->pc = 0x21E378u;
            goto label_21e378;
        }
    }
    ctx->pc = 0x21E368u;
    // 0x21e368: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E368u;
    {
        const bool branch_taken_0x21e368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E368u;
        // 0x21e36c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e368) {
            ctx->pc = 0x21E378u;
            goto label_21e378;
        }
    }
    ctx->pc = 0x21E370u;
    // 0x21e370: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21E370u;
    {
        const bool branch_taken_0x21e370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e370) {
            ctx->pc = 0x21E39Cu;
            goto label_21e39c;
        }
    }
    ctx->pc = 0x21E378u;
label_21e378:
    // 0x21e378: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x21e378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x21e37c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e380: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x21e380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x21e384: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x21e384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21e388: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x21e388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e38c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21e38cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21e390: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x21e390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21e394: 0xf8810120  sqc2        $vf1, 0x120($a0)
    ctx->pc = 0x21e394u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21e398: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21e398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e39c:
    // 0x21e39c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x21e39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e3a0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x21e3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21e3a4: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x21e3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21e3a8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x21e3a8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x21e3ac: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x21e3acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x21e3b0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x21e3b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x21e3b4: 0x46000004  c1          0x4
    ctx->pc = 0x21e3b4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x21e3b8: 0xe4800130  swc1        $f0, 0x130($a0)
    ctx->pc = 0x21e3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 304), bits); }
    // 0x21e3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x21E3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3BCu;
        // 0x21e3c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E3C4u;
    // 0x21e3c4: 0x0  nop
    ctx->pc = 0x21e3c4u;
    // NOP
    ctx->pc = 0x21e3c8u;
}
