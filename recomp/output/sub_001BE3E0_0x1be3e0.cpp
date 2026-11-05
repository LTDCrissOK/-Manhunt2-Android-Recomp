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

// Function: sub_001BE3E0
// Address: 0x1be3e0 - 0x1be5f8
void sub_001BE3E0_0x1be3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE3E0_0x1be3e0");
#endif

    switch (ctx->pc) {
        case 0x1be3fcu: goto label_1be3fc;
        case 0x1be408u: goto label_1be408;
        case 0x1be418u: goto label_1be418;
        case 0x1be5d4u: goto label_1be5d4;
        default: break;
    }

    ctx->pc = 0x1be3e0u;

    // 0x1be3e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1be3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1be3e4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1be3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1be3e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be3e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3ec: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1be3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1be3f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1be3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1be3f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BE3F4u;
    SET_GPR_U32(ctx, 31, 0x1BE3FCu);
    ctx->pc = 0x1BE3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3F4u;
    // 0x1be3f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BE3F4u, 0x1BE3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3FCu;
label_1be3fc:
    // 0x1be3fc: 0x26300310  addiu       $s0, $s1, 0x310
    ctx->pc = 0x1be3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x1be400: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BE400u;
    SET_GPR_U32(ctx, 31, 0x1BE408u);
    ctx->pc = 0x1BE404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE400u;
    // 0x1be404: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BE400u, 0x1BE408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE408u;
label_1be408:
    // 0x1be408: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1be408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1be40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be410: 0xc041162  jal         func_104588
    ctx->pc = 0x1BE410u;
    SET_GPR_U32(ctx, 31, 0x1BE418u);
    ctx->pc = 0x1BE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE410u;
    // 0x1be414: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104588u, 0x1BE410u, 0x1BE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE418u;
label_1be418:
    // 0x1be418: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be418u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be41c: 0x5060006f  beql        $v1, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x1BE41Cu;
    {
        const bool branch_taken_0x1be41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be41c) {
            ctx->pc = 0x1BE420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE41Cu;
            // 0x1be420: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE5DCu;
            goto label_1be5dc;
        }
    }
    ctx->pc = 0x1BE424u;
    // 0x1be424: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1be424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1be428: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE428u;
    {
        const bool branch_taken_0x1be428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE428u;
        // 0x1be42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be428) {
            ctx->pc = 0x1BE434u;
            goto label_1be434;
        }
    }
    ctx->pc = 0x1BE430u;
    // 0x1be430: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1be430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1be434:
    // 0x1be434: 0x10a00068  beqz        $a1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1BE434u;
    {
        const bool branch_taken_0x1be434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE434u;
        // 0x1be438: 0x262201e0  addiu       $v0, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be434) {
            ctx->pc = 0x1BE5D8u;
            goto label_1be5d8;
        }
    }
    ctx->pc = 0x1BE43Cu;
    // 0x1be43c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1be43cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be440: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1be440u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be444: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1be444u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1be448: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1be448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1be44c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1be44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1be450: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1be450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1be454: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1be454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be458: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1be458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be45c: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x1be45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be460: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1be460u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1be464: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1be464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1be468: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1be468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1be46c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x1be46cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1be470: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1be470u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be474: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1be474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1be478: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1be478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be47c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1be47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be480: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1be480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1be484: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1be484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1be488: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1be488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be48c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1be48cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1be490: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be494: 0x0  nop
    ctx->pc = 0x1be494u;
    // NOP
    // 0x1be498: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE498u;
    {
        const bool branch_taken_0x1be498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE498u;
        // 0x1be49c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be498) {
            ctx->pc = 0x1BE4B8u;
            goto label_1be4b8;
        }
    }
    ctx->pc = 0x1BE4A0u;
    // 0x1be4a0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1be4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be4a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1be4a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1be4a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be4a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be4ac: 0x0  nop
    ctx->pc = 0x1be4acu;
    // NOP
    // 0x1be4b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BE4B0u;
    {
        const bool branch_taken_0x1be4b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be4b0) {
            ctx->pc = 0x1BE4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE4B0u;
            // 0x1be4b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE4B8u;
            goto label_1be4b8;
        }
    }
    ctx->pc = 0x1BE4B8u;
label_1be4b8:
    // 0x1be4b8: 0x14800048  bnez        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1BE4B8u;
    {
        const bool branch_taken_0x1be4b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4B8u;
        // 0x1be4bc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4b8) {
            ctx->pc = 0x1BE5DCu;
            goto label_1be5dc;
        }
    }
    ctx->pc = 0x1BE4C0u;
    // 0x1be4c0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1be4c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be4c4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1be4c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1be4c8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1be4c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1be4cc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1be4ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1be4d0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1be4d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1be4d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1be4d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1be4d8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1be4d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1be4dc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1be4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1be4e0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1be4e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be4e4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1be4e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be4e8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1be4e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1be4ec: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1be4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1be4f0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1be4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be4f4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1be4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be4f8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1be4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be4fc: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x1be4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1be500: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1be500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1be504: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1be504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1be508: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1be508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1be50c: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x1be50cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1be510: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1be510u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be514: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1be514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1be518: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1be518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be51c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be51cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be520: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1be520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1be524: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1be524u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1be528: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1be528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be52c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1be52cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1be530: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be534: 0x0  nop
    ctx->pc = 0x1be534u;
    // NOP
    // 0x1be538: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE538u;
    {
        const bool branch_taken_0x1be538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE538u;
        // 0x1be53c: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be538) {
            ctx->pc = 0x1BE558u;
            goto label_1be558;
        }
    }
    ctx->pc = 0x1BE540u;
    // 0x1be540: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1be540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be544: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1be544u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1be548: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be54c: 0x0  nop
    ctx->pc = 0x1be54cu;
    // NOP
    // 0x1be550: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BE550u;
    {
        const bool branch_taken_0x1be550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be550) {
            ctx->pc = 0x1BE554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE550u;
            // 0x1be554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE558u;
            goto label_1be558;
        }
    }
    ctx->pc = 0x1BE558u;
label_1be558:
    // 0x1be558: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BE558u;
    {
        const bool branch_taken_0x1be558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE558u;
        // 0x1be55c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be558) {
            ctx->pc = 0x1BE5DCu;
            goto label_1be5dc;
        }
    }
    ctx->pc = 0x1BE560u;
    // 0x1be560: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1be560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1be564: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1be564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be568: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1be568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1be56c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1be56cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1be570: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1be570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1be574: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1be574u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1be578: 0x4a0003bf  vwaitq
    ctx->pc = 0x1be578u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1be57c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1be57cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1be580: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1be580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1be584: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1be584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be588: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1be588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1be58c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1be58cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1be590: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1be590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be594: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1be594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1be598: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1be598u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1be59c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1be59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be5a0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1be5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1be5a4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1be5a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1be5a8: 0x3c01bf14  lui         $at, 0xBF14
    ctx->pc = 0x1be5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48916 << 16));
    // 0x1be5ac: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1be5acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1be5b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1be5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be5b4: 0x0  nop
    ctx->pc = 0x1be5b4u;
    // NOP
    // 0x1be5b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be5bc: 0x0  nop
    ctx->pc = 0x1be5bcu;
    // NOP
    // 0x1be5c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE5C0u;
    {
        const bool branch_taken_0x1be5c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5C0u;
        // 0x1be5c4: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5c0) {
            ctx->pc = 0x1BE5D8u;
            goto label_1be5d8;
        }
    }
    ctx->pc = 0x1BE5C8u;
    // 0x1be5c8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1be5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1be5cc: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1BE5CCu;
    SET_GPR_U32(ctx, 31, 0x1BE5D4u);
    ctx->pc = 0x1BE5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5CCu;
    // 0x1be5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1BE5CCu, 0x1BE5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5D4u;
label_1be5d4:
    // 0x1be5d4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1be5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1be5d8:
    // 0x1be5d8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1be5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1be5dc:
    // 0x1be5dc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1be5dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1be5e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1be5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5E4u;
        // 0x1be5e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE5ECu;
    // 0x1be5ec: 0x0  nop
    ctx->pc = 0x1be5ecu;
    // NOP
    // 0x1be5f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1be5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1be5f4: 0x0  nop
    ctx->pc = 0x1be5f4u;
    // NOP
    ctx->pc = 0x1be5f8u;
}
