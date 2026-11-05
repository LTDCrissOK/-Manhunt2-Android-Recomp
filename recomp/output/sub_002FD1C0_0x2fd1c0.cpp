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

// Function: sub_002FD1C0
// Address: 0x2fd1c0 - 0x2fd3b8
void sub_002FD1C0_0x2fd1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD1C0_0x2fd1c0");
#endif

    switch (ctx->pc) {
        case 0x2fd1e4u: goto label_2fd1e4;
        case 0x2fd1f8u: goto label_2fd1f8;
        case 0x2fd358u: goto label_2fd358;
        case 0x2fd360u: goto label_2fd360;
        case 0x2fd368u: goto label_2fd368;
        case 0x2fd37cu: goto label_2fd37c;
        case 0x2fd38cu: goto label_2fd38c;
        default: break;
    }

    ctx->pc = 0x2fd1c0u;

    // 0x2fd1c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fd1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fd1c4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2fd1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2fd1c8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2fd1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2fd1cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fd1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd1d0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2fd1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2fd1d4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2fd1d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fd1d8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2fd1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2fd1dc: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x2FD1DCu;
    SET_GPR_U32(ctx, 31, 0x2FD1E4u);
    ctx->pc = 0x2FD1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD1DCu;
    // 0x2fd1e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x2FD1DCu, 0x2FD1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD1E4u;
label_2fd1e4:
    // 0x2fd1e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2fd1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2fd1e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2fd1e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2fd1ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fd1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fd1f0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2FD1F0u;
    {
        const bool branch_taken_0x2fd1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1F0u;
        // 0x2fd1f4: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1f0) {
            ctx->pc = 0x2FD368u;
            goto label_2fd368;
        }
    }
    ctx->pc = 0x2FD1F8u;
label_2fd1f8:
    // 0x2fd1f8: 0x28420015  slti        $v0, $v0, 0x15
    ctx->pc = 0x2fd1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x2fd1fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD1FCu;
    {
        const bool branch_taken_0x2fd1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1FCu;
        // 0x2fd200: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1fc) {
            ctx->pc = 0x2FD20Cu;
            goto label_2fd20c;
        }
    }
    ctx->pc = 0x2FD204u;
    // 0x2fd204: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2FD204u;
    {
        const bool branch_taken_0x2fd204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD204u;
        // 0x2fd208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd204) {
            ctx->pc = 0x2FD398u;
            goto label_2fd398;
        }
    }
    ctx->pc = 0x2FD20Cu;
label_2fd20c:
    // 0x2fd20c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2fd20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2fd210: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2fd210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2fd214: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2fd214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2fd218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fd218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fd21c: 0x8c832b20  lw          $v1, 0x2B20($a0)
    ctx->pc = 0x2fd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B20u));
    // 0x2fd220: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fd220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd224: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2fd224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd228: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2fd228u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2fd22c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fd22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd230: 0x0  nop
    ctx->pc = 0x2fd230u;
    // NOP
    // 0x2fd234: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x2FD234u;
    {
        const bool branch_taken_0x2fd234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD234u;
        // 0x2fd238: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd234) {
            ctx->pc = 0x2FD2D4u;
            goto label_2fd2d4;
        }
    }
    ctx->pc = 0x2FD23Cu;
    // 0x2fd23c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2fd23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd240: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2fd240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2fd244: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2fd244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fd248: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2fd248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd24c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2fd24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fd250: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2fd250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd254: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2fd254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fd258: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2fd258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd25c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2fd25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2fd260: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fd260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd264: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2fd264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2fd268: 0x8c822b20  lw          $v0, 0x2B20($a0)
    ctx->pc = 0x2fd268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x2fd26c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fd26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd270: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2fd270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2fd274: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2fd274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd278: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2fd278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fd27c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2fd27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fd280: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fd280u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fd284: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fd284u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2fd288: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2fd288u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2fd28c: 0x46010044  c1          0x10044
    ctx->pc = 0x2fd28cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fd290: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2fd290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd294: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2fd294u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd298: 0x0  nop
    ctx->pc = 0x2fd298u;
    // NOP
    // 0x2fd29c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2FD29Cu;
    {
        const bool branch_taken_0x2fd29c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd29c) {
            ctx->pc = 0x2FD2CCu;
            goto label_2fd2cc;
        }
    }
    ctx->pc = 0x2FD2A4u;
    // 0x2fd2a4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fd2a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fd2a8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2fd2a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fd2ac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fd2acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fd2b0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fd2b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fd2b4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2fd2b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2fd2b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fd2b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2fd2bc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2fd2bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fd2c0: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2fd2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd2c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD2C4u;
    {
        const bool branch_taken_0x2fd2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2C4u;
        // 0x2fd2c8: 0x8ca22b20  lw          $v0, 0x2B20($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd2c4) {
            ctx->pc = 0x2FD2D8u;
            goto label_2fd2d8;
        }
    }
    ctx->pc = 0x2FD2CCu;
label_2fd2cc:
    // 0x2fd2cc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fd2ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd2d0: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2fd2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fd2d4:
    // 0x2fd2d4: 0x8ca22b20  lw          $v0, 0x2B20($a1)
    ctx->pc = 0x2fd2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11040)));
label_2fd2d8:
    // 0x2fd2d8: 0x8e0513c0  lw          $a1, 0x13C0($s0)
    ctx->pc = 0x2fd2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5056)));
    // 0x2fd2dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fd2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd2e0: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x2fd2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2fd2e4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2fd2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2fd2e8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2fd2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd2ec: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2fd2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd2f0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2fd2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fd2f4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2fd2f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2fd2f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2fd2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd2fc: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2fd2fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2fd300: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x2fd300u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2fd304: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2fd304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2fd308: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2fd308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fd30c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2fd30cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2fd310: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2fd310u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2fd314: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2fd314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2fd318: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fd318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fd31c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2fd31cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fd320: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fd320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fd324: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2fd324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd328: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2fd328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd32c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2fd32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd330: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2fd330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd334: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2fd334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fd338: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fd338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fd33c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fd33cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fd340: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2fd340u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fd344: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2fd344u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2fd348: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fd348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd34c: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x2fd34cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd350: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x2FD350u;
    SET_GPR_U32(ctx, 31, 0x2FD358u);
    ctx->pc = 0x2FD354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD350u;
    // 0x2fd354: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x2FD350u, 0x2FD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD358u;
label_2fd358:
    // 0x2fd358: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2FD358u;
    SET_GPR_U32(ctx, 31, 0x2FD360u);
    ctx->pc = 0x2FD35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD358u;
    // 0x2fd35c: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FD358u, 0x2FD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD360u;
label_2fd360:
    // 0x2fd360: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x2FD360u;
    SET_GPR_U32(ctx, 31, 0x2FD368u);
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x2FD360u, 0x2FD368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD368u;
label_2fd368:
    // 0x2fd368: 0x8e0313c4  lw          $v1, 0x13C4($s0)
    ctx->pc = 0x2fd368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    // 0x2fd36c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fd36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd370: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2fd370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2fd374: 0xc079848  jal         func_1E6120
    ctx->pc = 0x2FD374u;
    SET_GPR_U32(ctx, 31, 0x2FD37Cu);
    ctx->pc = 0x2FD378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD374u;
    // 0x2fd378: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x2FD374u, 0x2FD37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD37Cu;
label_2fd37c:
    // 0x2fd37c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fd37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd380: 0x24053210  addiu       $a1, $zero, 0x3210
    ctx->pc = 0x2fd380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x2fd384: 0xc07a4ce  jal         func_1E9338
    ctx->pc = 0x2FD384u;
    SET_GPR_U32(ctx, 31, 0x2FD38Cu);
    ctx->pc = 0x2FD388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD384u;
    // 0x2fd388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9338u, 0x2FD384u, 0x2FD38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD38Cu;
label_2fd38c:
    // 0x2fd38c: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x2FD38Cu;
    {
        const bool branch_taken_0x2fd38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD38Cu;
        // 0x2fd390: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd38c) {
            ctx->pc = 0x2FD1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd1f8;
        }
    }
    ctx->pc = 0x2FD394u;
    // 0x2fd394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd398:
    // 0x2fd398: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2fd398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fd39c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2fd39cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2fd3a0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2fd3a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fd3a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2fd3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2fd3a8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2fd3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fd3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3ACu;
        // 0x2fd3b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD3B4u;
    // 0x2fd3b4: 0x0  nop
    ctx->pc = 0x2fd3b4u;
    // NOP
    ctx->pc = 0x2fd3b8u;
}
