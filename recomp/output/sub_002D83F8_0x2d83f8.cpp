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

// Function: sub_002D83F8
// Address: 0x2d83f8 - 0x2d8530
void sub_002D83F8_0x2d83f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D83F8_0x2d83f8");
#endif

    switch (ctx->pc) {
        case 0x2d84f8u: goto label_2d84f8;
        case 0x2d8510u: goto label_2d8510;
        default: break;
    }

    ctx->pc = 0x2d83f8u;

    // 0x2d83f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d83f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d83fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d83fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d8400: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d8400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2d8404: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2d8404u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d8408: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2d8408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d840c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2d840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d8410: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x2d8410u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d8414: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2d8414u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d8418: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D8418u;
    {
        const bool branch_taken_0x2d8418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8418u;
        // 0x2d841c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8418) {
            ctx->pc = 0x2D8514u;
            goto label_2d8514;
        }
    }
    ctx->pc = 0x2D8420u;
    // 0x2d8420: 0x8c90fffc  lw          $s0, -0x4($a0)
    ctx->pc = 0x2d8420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x2d8424: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2D8424u;
    {
        const bool branch_taken_0x2d8424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8424u;
        // 0x2d8428: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8424) {
            ctx->pc = 0x2D8514u;
            goto label_2d8514;
        }
    }
    ctx->pc = 0x2D842Cu;
    // 0x2d842c: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D842Cu;
    {
        const bool branch_taken_0x2d842c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d842c) {
            ctx->pc = 0x2D8508u;
            goto label_2d8508;
        }
    }
    ctx->pc = 0x2D8434u;
    // 0x2d8434: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x2d8434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2d8438: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8438u;
    {
        const bool branch_taken_0x2d8438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8438u;
        // 0x2d843c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8438) {
            ctx->pc = 0x2D8448u;
            goto label_2d8448;
        }
    }
    ctx->pc = 0x2D8440u;
    // 0x2d8440: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2D8440u;
    {
        const bool branch_taken_0x2d8440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8440u;
        // 0x2d8444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8440) {
            ctx->pc = 0x2D8514u;
            goto label_2d8514;
        }
    }
    ctx->pc = 0x2D8448u;
label_2d8448:
    // 0x2d8448: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D8448u;
    {
        const bool branch_taken_0x2d8448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8448) {
            ctx->pc = 0x2D8508u;
            goto label_2d8508;
        }
    }
    ctx->pc = 0x2D8450u;
    // 0x2d8450: 0xc4ac0020  lwc1        $f12, 0x20($a1)
    ctx->pc = 0x2d8450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d8454: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2d8454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2d8458: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d8458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2d845c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d845cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8460: 0x0  nop
    ctx->pc = 0x2d8460u;
    // NOP
    // 0x2d8464: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2d8464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8468: 0x0  nop
    ctx->pc = 0x2d8468u;
    // NOP
    // 0x2d846c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x2D846Cu;
    {
        const bool branch_taken_0x2d846c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d846c) {
            ctx->pc = 0x2D8508u;
            goto label_2d8508;
        }
    }
    ctx->pc = 0x2D8474u;
    // 0x2d8474: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d8474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d8478: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2d8478u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d847c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2d847cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8480: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d8480u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d8484: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2d8484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d8488: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d8488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d848c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2d848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8490: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2d8490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d8494: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2d8494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d8498: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d8498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d849c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d849cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d84a0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2d84a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d84a4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2d84a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d84a8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2d84a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d84ac: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2d84acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d84b0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2d84b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d84b4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2d84b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d84b8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2d84b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2d84bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d84bcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2d84c0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2d84c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d84c4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2d84c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d84c8: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2d84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2d84cc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2d84ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d84d0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2d84d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d84d4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2d84d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2d84d8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2d84d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d84dc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2d84dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d84e0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2d84e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2d84e4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2d84e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d84e8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2d84e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d84ec: 0x4603151c  madd.s      $f20, $f2, $f3
    ctx->pc = 0x2d84ecu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2d84f0: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2D84F0u;
    SET_GPR_U32(ctx, 31, 0x2D84F8u);
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2D84F0u, 0x2D84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D84F8u;
label_2d84f8:
    // 0x2d84f8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2d84f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d84fc: 0x0  nop
    ctx->pc = 0x2d84fcu;
    // NOP
    // 0x2d8500: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8500u;
    {
        const bool branch_taken_0x2d8500 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8500u;
        // 0x2d8504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8500) {
            ctx->pc = 0x2D8514u;
            goto label_2d8514;
        }
    }
    ctx->pc = 0x2D8508u;
label_2d8508:
    // 0x2d8508: 0xc0414a2  jal         func_105288
    ctx->pc = 0x2D8508u;
    SET_GPR_U32(ctx, 31, 0x2D8510u);
    ctx->pc = 0x2D850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8508u;
    // 0x2d850c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x2D8508u, 0x2D8510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8510u;
label_2d8510:
    // 0x2d8510: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d8510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d8514:
    // 0x2d8514: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d8514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8518: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d8518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d851c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2d851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d8520: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8520u;
        // 0x2d8524: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8528u;
    // 0x2d8528: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2d8528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d852c: 0x0  nop
    ctx->pc = 0x2d852cu;
    // NOP
    ctx->pc = 0x2d8530u;
}
