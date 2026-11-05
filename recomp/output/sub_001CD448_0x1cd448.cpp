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

// Function: sub_001CD448
// Address: 0x1cd448 - 0x1cd7a0
void sub_001CD448_0x1cd448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD448_0x1cd448");
#endif

    switch (ctx->pc) {
        case 0x1cd4c8u: goto label_1cd4c8;
        case 0x1cd5f4u: goto label_1cd5f4;
        case 0x1cd618u: goto label_1cd618;
        case 0x1cd6f0u: goto label_1cd6f0;
        case 0x1cd6f8u: goto label_1cd6f8;
        case 0x1cd714u: goto label_1cd714;
        case 0x1cd72cu: goto label_1cd72c;
        case 0x1cd748u: goto label_1cd748;
        case 0x1cd764u: goto label_1cd764;
        case 0x1cd788u: goto label_1cd788;
        default: break;
    }

    ctx->pc = 0x1cd448u;

    // 0x1cd448: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1cd448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1cd44c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1cd44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1cd450: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1cd450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1cd454: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd458: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1cd458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1cd45c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1cd45cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd460: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1cd460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1cd464: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd468: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1cd468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1cd46c: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x1cd46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd470: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1cd470u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1cd474: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cd474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd478: 0x0  nop
    ctx->pc = 0x1cd478u;
    // NOP
    // 0x1cd47c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1CD47Cu;
    {
        const bool branch_taken_0x1cd47c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD47Cu;
        // 0x1cd480: 0x26220060  addiu       $v0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd47c) {
            ctx->pc = 0x1CD4B4u;
            goto label_1cd4b4;
        }
    }
    ctx->pc = 0x1CD484u;
    // 0x1cd484: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd488: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1cd488u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1cd48c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cd48cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd490: 0x0  nop
    ctx->pc = 0x1cd490u;
    // NOP
    // 0x1cd494: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD494u;
    {
        const bool branch_taken_0x1cd494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd494) {
            ctx->pc = 0x1CD4B4u;
            goto label_1cd4b4;
        }
    }
    ctx->pc = 0x1CD49Cu;
    // 0x1cd49c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cd49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd4a0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1cd4a0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1cd4a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cd4a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd4a8: 0x0  nop
    ctx->pc = 0x1cd4a8u;
    // NOP
    // 0x1cd4ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD4ACu;
    {
        const bool branch_taken_0x1cd4ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd4ac) {
            ctx->pc = 0x1CD4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD4ACu;
            // 0x1cd4b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD4B4u;
            goto label_1cd4b4;
        }
    }
    ctx->pc = 0x1CD4B4u;
label_1cd4b4:
    // 0x1cd4b4: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x1CD4B4u;
    {
        const bool branch_taken_0x1cd4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4B4u;
        // 0x1cd4b8: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4b4) {
            ctx->pc = 0x1CD680u;
            goto label_1cd680;
        }
    }
    ctx->pc = 0x1CD4BCu;
    // 0x1cd4bc: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1cd4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cd4c0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1CD4C0u;
    SET_GPR_U32(ctx, 31, 0x1CD4C8u);
    ctx->pc = 0x1CD4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD4C0u;
    // 0x1cd4c4: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1CD4C0u, 0x1CD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD4C8u;
label_1cd4c8:
    // 0x1cd4c8: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x1cd4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1cd4cc: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1cd4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1cd4d0: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x1cd4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x1cd4d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cd4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cd4d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd4dc: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1cd4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd4e0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1cd4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1cd4e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cd4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cd4e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cd4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd4ec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1cd4ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cd4f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cd4f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1cd4f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cd4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd4f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1cd4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cd4fc: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1cd4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cd500: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1cd500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cd504: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1cd504u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1cd508: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1cd508u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd50c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1cd50cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd510: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cd510u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd514: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1cd514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd518: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1cd518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cd51c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1cd51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cd520: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1cd520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd524: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1cd524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd528: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1cd528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cd52c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1cd52cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1cd530: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1cd530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1cd534: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1cd534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1cd538: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1cd538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1cd53c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1cd53cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd540: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1cd540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd544: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1cd544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd548: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1cd548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cd54c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1cd54cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1cd550: 0x4a0003bf  vwaitq
    ctx->pc = 0x1cd550u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1cd554: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1cd554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd558: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1cd558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd55c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1cd55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1cd560: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd564: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1cd564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd568: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd56c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cd56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cd570: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cd570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd574: 0x0  nop
    ctx->pc = 0x1cd574u;
    // NOP
    // 0x1cd578: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD578u;
    {
        const bool branch_taken_0x1cd578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD578u;
        // 0x1cd57c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd578) {
            ctx->pc = 0x1CD588u;
            goto label_1cd588;
        }
    }
    ctx->pc = 0x1CD580u;
    // 0x1cd580: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD580u;
    {
        const bool branch_taken_0x1cd580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD580u;
        // 0x1cd584: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd580) {
            ctx->pc = 0x1CD5A0u;
            goto label_1cd5a0;
        }
    }
    ctx->pc = 0x1CD588u;
label_1cd588:
    // 0x1cd588: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1cd588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd58c: 0x0  nop
    ctx->pc = 0x1cd58cu;
    // NOP
    // 0x1cd590: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD590u;
    {
        const bool branch_taken_0x1cd590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd590) {
            ctx->pc = 0x1CD594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD590u;
            // 0x1cd594: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD598u;
            goto label_1cd598;
        }
    }
    ctx->pc = 0x1CD598u;
label_1cd598:
    // 0x1cd598: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1cd598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1cd59c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd5a0:
    // 0x1cd5a0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1cd5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd5a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd5a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cd5a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cd5ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cd5acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd5b0: 0x0  nop
    ctx->pc = 0x1cd5b0u;
    // NOP
    // 0x1cd5b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD5B4u;
    {
        const bool branch_taken_0x1cd5b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd5b4) {
            ctx->pc = 0x1CD5C4u;
            goto label_1cd5c4;
        }
    }
    ctx->pc = 0x1CD5BCu;
    // 0x1cd5bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD5BCu;
    {
        const bool branch_taken_0x1cd5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5BCu;
        // 0x1cd5c0: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5bc) {
            ctx->pc = 0x1CD5D4u;
            goto label_1cd5d4;
        }
    }
    ctx->pc = 0x1CD5C4u;
label_1cd5c4:
    // 0x1cd5c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1cd5c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd5c8: 0x0  nop
    ctx->pc = 0x1cd5c8u;
    // NOP
    // 0x1cd5cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD5CCu;
    {
        const bool branch_taken_0x1cd5cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd5cc) {
            ctx->pc = 0x1CD5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD5CCu;
            // 0x1cd5d0: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD5D4u;
            goto label_1cd5d4;
        }
    }
    ctx->pc = 0x1CD5D4u;
label_1cd5d4:
    // 0x1cd5d4: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x1cd5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd5d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd5dc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1cd5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cd5e0: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1cd5e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1cd5e4: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x1cd5e4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x1cd5e8: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1cd5e8u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cd5ec: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1CD5ECu;
    SET_GPR_U32(ctx, 31, 0x1CD5F4u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1CD5ECu, 0x1CD5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5F4u;
label_1cd5f4:
    // 0x1cd5f4: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1cd5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1cd5f8: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1cd5f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1cd5fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd600: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x1cd600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x1cd604: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1cd604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cd608: 0x24a55b30  addiu       $a1, $a1, 0x5B30
    ctx->pc = 0x1cd608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
    // 0x1cd60c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd60cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd610: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x1CD610u;
    SET_GPR_U32(ctx, 31, 0x1CD618u);
    ctx->pc = 0x1CD614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD610u;
    // 0x1cd614: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x1CD610u, 0x1CD618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD618u;
label_1cd618:
    // 0x1cd618: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x1cd618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cd61c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1cd61cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd620: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1cd620u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd624: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1cd624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cd628: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1cd628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1cd62c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1cd62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1cd630: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1cd630u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cd634: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1cd634u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd638: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1cd638u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1cd63c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1cd63cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cd640: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1cd640u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd644: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1cd644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cd648: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1cd648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd64c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1cd64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd650: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1cd650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cd654: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cd654u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cd658: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1cd658u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1cd65c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1cd65cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1cd660: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cd660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1cd664: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1cd664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1cd668: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x1cd668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1cd66c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1cd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cd670: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1cd670u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd674: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1cd674u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd678: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1CD678u;
    {
        const bool branch_taken_0x1cd678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd678) {
            ctx->pc = 0x1CD780u;
            goto label_1cd780;
        }
    }
    ctx->pc = 0x1CD680u;
label_1cd680:
    // 0x1cd680: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cd680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cd684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd688: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x1cd688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1cd68c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1cd68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1cd690: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD690u;
    {
        const bool branch_taken_0x1cd690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD690u;
        // 0x1cd694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd690) {
            ctx->pc = 0x1CD6A4u;
            goto label_1cd6a4;
        }
    }
    ctx->pc = 0x1CD698u;
    // 0x1cd698: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1cd698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cd69c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD69Cu;
    {
        const bool branch_taken_0x1cd69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd69c) {
            ctx->pc = 0x1CD6A8u;
            goto label_1cd6a8;
        }
    }
    ctx->pc = 0x1CD6A4u;
label_1cd6a4:
    // 0x1cd6a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd6a8:
    // 0x1cd6a8: 0x50a00029  beql        $a1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CD6A8u;
    {
        const bool branch_taken_0x1cd6a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd6a8) {
            ctx->pc = 0x1CD6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD6A8u;
            // 0x1cd6ac: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD750u;
            goto label_1cd750;
        }
    }
    ctx->pc = 0x1CD6B0u;
    // 0x1cd6b0: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cd6b4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1cd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1cd6b8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1cd6b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd6bc: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1cd6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd6c0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1cd6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1cd6c4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1cd6c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd6c8: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x1cd6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd6cc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1cd6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1cd6d0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1cd6d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd6d4: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1cd6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd6d8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1cd6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1cd6dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1cd6dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd6e0: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x1cd6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cd6e4: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x1cd6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1cd6e8: 0xc0b1602  jal         func_2C5808
    ctx->pc = 0x1CD6E8u;
    SET_GPR_U32(ctx, 31, 0x1CD6F0u);
    ctx->pc = 0x1CD6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6E8u;
    // 0x1cd6ec: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5808u, 0x1CD6E8u, 0x1CD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6F0u;
label_1cd6f0:
    // 0x1cd6f0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1CD6F0u;
    SET_GPR_U32(ctx, 31, 0x1CD6F8u);
    ctx->pc = 0x1CD6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6F0u;
    // 0x1cd6f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1CD6F0u, 0x1CD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6F8u;
label_1cd6f8:
    // 0x1cd6f8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1cd6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cd6fc: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1cd6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1cd700: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd704: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x1cd704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x1cd708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd70c: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x1CD70Cu;
    SET_GPR_U32(ctx, 31, 0x1CD714u);
    ctx->pc = 0x1CD710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD70Cu;
    // 0x1cd710: 0x24a55b30  addiu       $a1, $a1, 0x5B30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x1CD70Cu, 0x1CD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD714u;
label_1cd714:
    // 0x1cd714: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x1cd714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x1cd718: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x1cd718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x1cd71c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd720: 0x24a55b50  addiu       $a1, $a1, 0x5B50
    ctx->pc = 0x1cd720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
    // 0x1cd724: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x1CD724u;
    SET_GPR_U32(ctx, 31, 0x1CD72Cu);
    ctx->pc = 0x1CD728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD724u;
    // 0x1cd728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x1CD724u, 0x1CD72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD72Cu;
label_1cd72c:
    // 0x1cd72c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1cd72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1cd730: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cd730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cd734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cd738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd73c: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1cd73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cd740: 0xc0b160a  jal         func_2C5828
    ctx->pc = 0x1CD740u;
    SET_GPR_U32(ctx, 31, 0x1CD748u);
    ctx->pc = 0x1CD744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD740u;
    // 0x1cd744: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5828u, 0x1CD740u, 0x1CD748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD748u;
label_1cd748:
    // 0x1cd748: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CD748u;
    {
        const bool branch_taken_0x1cd748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd748) {
            ctx->pc = 0x1CD780u;
            goto label_1cd780;
        }
    }
    ctx->pc = 0x1CD750u;
label_1cd750:
    // 0x1cd750: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1cd750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cd754: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1cd754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1cd758: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cd758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd75c: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x1CD75Cu;
    SET_GPR_U32(ctx, 31, 0x1CD764u);
    ctx->pc = 0x1CD760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD75Cu;
    // 0x1cd760: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x1CD75Cu, 0x1CD764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD764u;
label_1cd764:
    // 0x1cd764: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1cd764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cd768: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x1cd768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x1cd76c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd76cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd770: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1cd770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1cd774: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd778: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cd778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cd77c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1cd780:
    // 0x1cd780: 0xc076f7c  jal         func_1DBDF0
    ctx->pc = 0x1CD780u;
    SET_GPR_U32(ctx, 31, 0x1CD788u);
    ctx->pc = 0x1CD784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD780u;
    // 0x1cd784: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBDF0u, 0x1CD780u, 0x1CD788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD788u;
label_1cd788:
    // 0x1cd788: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1cd788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd78c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1cd78cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1cd790: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1cd790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cd794: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD794u;
        // 0x1cd798: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD79Cu;
    // 0x1cd79c: 0x0  nop
    ctx->pc = 0x1cd79cu;
    // NOP
    ctx->pc = 0x1cd7a0u;
}
