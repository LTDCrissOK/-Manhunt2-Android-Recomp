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

// Function: sub_002BF410
// Address: 0x2bf410 - 0x2bf560
void sub_002BF410_0x2bf410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF410_0x2bf410");
#endif

    switch (ctx->pc) {
        case 0x2bf438u: goto label_2bf438;
        case 0x2bf440u: goto label_2bf440;
        case 0x2bf448u: goto label_2bf448;
        case 0x2bf450u: goto label_2bf450;
        case 0x2bf4a0u: goto label_2bf4a0;
        case 0x2bf4a8u: goto label_2bf4a8;
        default: break;
    }

    ctx->pc = 0x2bf410u;

    // 0x2bf410: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2bf410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2bf414: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bf414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bf418: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2bf418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2bf41c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bf41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf420: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2bf420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2bf424: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2bf424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf428: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2bf428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2bf42c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bf42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bf430: 0xc0b0370  jal         func_2C0DC0
    ctx->pc = 0x2BF430u;
    SET_GPR_U32(ctx, 31, 0x2BF438u);
    ctx->pc = 0x2BF434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF430u;
    // 0x2bf434: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DC0u, 0x2BF430u, 0x2BF438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF438u;
label_2bf438:
    // 0x2bf438: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BF438u;
    SET_GPR_U32(ctx, 31, 0x2BF440u);
    ctx->pc = 0x2BF43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF438u;
    // 0x2bf43c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BF438u, 0x2BF440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF440u;
label_2bf440:
    // 0x2bf440: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BF440u;
    SET_GPR_U32(ctx, 31, 0x2BF448u);
    ctx->pc = 0x2BF444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF440u;
    // 0x2bf444: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BF440u, 0x2BF448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF448u;
label_2bf448:
    // 0x2bf448: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BF448u;
    SET_GPR_U32(ctx, 31, 0x2BF450u);
    ctx->pc = 0x2BF44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF448u;
    // 0x2bf44c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BF448u, 0x2BF450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF450u;
label_2bf450:
    // 0x2bf450: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2bf450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf454: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2bf454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bf458: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2bf458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf45c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2bf45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bf460: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bf460u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bf464: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2bf464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bf468: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bf468u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bf46c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2bf46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf470: 0xc7a5000c  lwc1        $f5, 0xC($sp)
    ctx->pc = 0x2bf470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bf474: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2bf474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf478: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2bf478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bf47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf480: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2bf480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bf484: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x2bf484u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bf488: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2bf488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bf48c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2bf48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bf490: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x2bf490u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bf494: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x2bf494u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2bf498: 0xc0af726  jal         func_2BDC98
    ctx->pc = 0x2BF498u;
    SET_GPR_U32(ctx, 31, 0x2BF4A0u);
    ctx->pc = 0x2BF49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF498u;
    // 0x2bf49c: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDC98u, 0x2BF498u, 0x2BF4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4A0u;
label_2bf4a0:
    // 0x2bf4a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BF4A0u;
    SET_GPR_U32(ctx, 31, 0x2BF4A8u);
    ctx->pc = 0x2BF4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4A0u;
    // 0x2bf4a4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BF4A0u, 0x2BF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4A8u;
label_2bf4a8:
    // 0x2bf4a8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2bf4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bf4ac: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2bf4acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf4b0: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2bf4b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bf4b4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bf4b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf4b8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2bf4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf4bc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2bf4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf4c0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2bf4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bf4c4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2bf4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bf4c8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2bf4c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2bf4cc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2bf4ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2bf4d0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2bf4d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2bf4d4: 0x46010044  c1          0x10044
    ctx->pc = 0x2bf4d4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bf4d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bf4d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf4dc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2bf4dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf4e0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bf4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf4e4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bf4e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf4e8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bf4e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bf4ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bf4ecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bf4f0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2bf4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf4f4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2bf4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf4f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2bf4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2bf4fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2bf4fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2bf500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf504: 0x0  nop
    ctx->pc = 0x2bf504u;
    // NOP
    // 0x2bf508: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bf508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf50c: 0x0  nop
    ctx->pc = 0x2bf50cu;
    // NOP
    // 0x2bf510: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2BF510u;
    {
        const bool branch_taken_0x2bf510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF510u;
        // 0x2bf514: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf510) {
            ctx->pc = 0x2BF544u;
            goto label_2bf544;
        }
    }
    ctx->pc = 0x2BF518u;
    // 0x2bf518: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bf518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bf51c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bf51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bf520: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bf520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf524: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2bf524u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bf528: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2bf528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf52c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2bf52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf530: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2bf530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2bf534: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bf534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf538: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2bf538u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf53c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bf53cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf540: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x2bf540u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2bf544:
    // 0x2bf544: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2bf544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bf548: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2bf548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2bf54c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bf54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bf550: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2bf550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bf554: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF554u;
        // 0x2bf558: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF55Cu;
    // 0x2bf55c: 0x0  nop
    ctx->pc = 0x2bf55cu;
    // NOP
    ctx->pc = 0x2bf560u;
}
