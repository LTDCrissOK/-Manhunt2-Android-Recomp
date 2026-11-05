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

// Function: sub_001CB208
// Address: 0x1cb208 - 0x1cb398
void sub_001CB208_0x1cb208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB208_0x1cb208");
#endif

    switch (ctx->pc) {
        case 0x1cb328u: goto label_1cb328;
        default: break;
    }

    ctx->pc = 0x1cb208u;

    // 0x1cb208: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cb208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cb20c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1cb20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1cb210: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1cb210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1cb214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cb218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cb21c: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x1cb21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1cb220: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1cb220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb224: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cb224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb228: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x1cb228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb22c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1cb22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1cb230: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1cb230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cb234: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cb234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb238: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1cb238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cb23c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1cb23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb240: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1cb240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cb244: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1cb244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb248: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1cb248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cb24c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1cb24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1cb250: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1cb250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cb254: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1cb254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb258: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cb258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb25c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1cb25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cb260: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1cb260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb264: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1cb264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cb268: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1cb268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb26c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1cb26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb270: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1cb270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb274: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1cb274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1cb278: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1cb278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1cb27c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1cb27cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1cb280: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1cb280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1cb284: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1cb284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb288: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1cb288u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb28c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1cb28cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb290: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1cb290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cb294: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1cb294u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cb298: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cb298u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cb29c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1cb29cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cb2a0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1cb2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cb2a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cb2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb2a8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1cb2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1cb2ac: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1cb2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb2b0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1cb2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb2b4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1cb2b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cb2b8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1cb2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb2bc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1cb2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb2c0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1cb2c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1cb2c4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1cb2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb2c8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1cb2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb2cc: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1cb2ccu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cb2d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1cb2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1cb2d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb2d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cb2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb2dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb2e0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1cb2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb2e4: 0x0  nop
    ctx->pc = 0x1cb2e4u;
    // NOP
    // 0x1cb2e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB2E8u;
    {
        const bool branch_taken_0x1cb2e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2E8u;
        // 0x1cb2ec: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2e8) {
            ctx->pc = 0x1CB2F8u;
            goto label_1cb2f8;
        }
    }
    ctx->pc = 0x1CB2F0u;
    // 0x1cb2f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB2F0u;
    {
        const bool branch_taken_0x1cb2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2F0u;
        // 0x1cb2f4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2f0) {
            ctx->pc = 0x1CB308u;
            goto label_1cb308;
        }
    }
    ctx->pc = 0x1CB2F8u;
label_1cb2f8:
    // 0x1cb2f8: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x1cb2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb2fc: 0x0  nop
    ctx->pc = 0x1cb2fcu;
    // NOP
    // 0x1cb300: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB300u;
    {
        const bool branch_taken_0x1cb300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb300) {
            ctx->pc = 0x1CB304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB300u;
            // 0x1cb304: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB308u;
            goto label_1cb308;
        }
    }
    ctx->pc = 0x1CB308u;
label_1cb308:
    // 0x1cb308: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x1cb308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1cb30c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cb30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb310: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cb310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb314: 0x0  nop
    ctx->pc = 0x1cb314u;
    // NOP
    // 0x1cb318: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1cb318u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1cb31c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1cb31cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cb320: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1CB320u;
    SET_GPR_U32(ctx, 31, 0x1CB328u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1CB320u, 0x1CB328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB328u;
label_1cb328:
    // 0x1cb328: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x1cb328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1cb32c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1cb32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1cb330: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1cb330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1cb334: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb338: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cb338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb33c: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x1cb33cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb340: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1cb340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1cb344: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1cb344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb348: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1cb348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb34c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1cb34cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cb350: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1cb350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb354: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1cb354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb358: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1cb358u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1cb35c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1cb35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb360: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1cb360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb364: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1cb364u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cb368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb36c: 0x0  nop
    ctx->pc = 0x1cb36cu;
    // NOP
    // 0x1cb370: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb374: 0x0  nop
    ctx->pc = 0x1cb374u;
    // NOP
    // 0x1cb378: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB378u;
    {
        const bool branch_taken_0x1cb378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb378) {
            ctx->pc = 0x1CB37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB378u;
            // 0x1cb37c: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
            ctx->f[4] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB380u;
            goto label_1cb380;
        }
    }
    ctx->pc = 0x1CB380u;
label_1cb380:
    // 0x1cb380: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1cb380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb384: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x1cb384u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
    // 0x1cb388: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1cb388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cb38c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cb38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb390: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB390u;
        // 0x1cb394: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB398u;
}
