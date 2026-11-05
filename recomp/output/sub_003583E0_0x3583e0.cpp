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

// Function: sub_003583E0
// Address: 0x3583e0 - 0x358530
void sub_003583E0_0x3583e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003583E0_0x3583e0");
#endif

    ctx->pc = 0x3583e0u;

    // 0x3583e0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3583e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3583e4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x3583e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x3583e8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3583E8u;
    {
        const bool branch_taken_0x3583e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3583ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583E8u;
        // 0x3583ec: 0x27bdffc0  addiu       $sp, $sp, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3583e8) {
            ctx->pc = 0x358404u;
            goto label_358404;
        }
    }
    ctx->pc = 0x3583F0u;
    // 0x3583f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3583f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3583f4: 0x0  nop
    ctx->pc = 0x3583f4u;
    // NOP
    // 0x3583f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3583f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3583fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3583FCu;
    {
        const bool branch_taken_0x3583fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3583fc) {
            ctx->pc = 0x358420u;
            goto label_358420;
        }
    }
    ctx->pc = 0x358404u;
label_358404:
    // 0x358404: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x358404u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x358408: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x358408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35840c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35840cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x358410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x358410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x358414: 0x0  nop
    ctx->pc = 0x358414u;
    // NOP
    // 0x358418: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x358418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35841c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x35841cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_358420:
    // 0x358420: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x358420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x358424: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x358424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x358428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x358428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35842c: 0xc482003c  lwc1        $f2, 0x3C($a0)
    ctx->pc = 0x35842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358430: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x358430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x358434: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x358434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x358438: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x358438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x35843c: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x35843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358440: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x358440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x358444: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x358444u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x358448: 0x0  nop
    ctx->pc = 0x358448u;
    // NOP
    // 0x35844c: 0x46010203  div.s       $f8, $f0, $f1
    ctx->pc = 0x35844cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x358450: 0x46034034  c.lt.s      $f8, $f3
    ctx->pc = 0x358450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x358454: 0x0  nop
    ctx->pc = 0x358454u;
    // NOP
    // 0x358458: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x358458u;
    {
        const bool branch_taken_0x358458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x358458) {
            ctx->pc = 0x358468u;
            goto label_358468;
        }
    }
    ctx->pc = 0x358460u;
    // 0x358460: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x358460u;
    {
        const bool branch_taken_0x358460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358460u;
        // 0x358464: 0x46001a06  mov.s       $f8, $f3 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358460) {
            ctx->pc = 0x358478u;
            goto label_358478;
        }
    }
    ctx->pc = 0x358468u;
label_358468:
    // 0x358468: 0x46082034  c.lt.s      $f4, $f8
    ctx->pc = 0x358468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35846c: 0x0  nop
    ctx->pc = 0x35846cu;
    // NOP
    // 0x358470: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x358470u;
    {
        const bool branch_taken_0x358470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x358470) {
            ctx->pc = 0x358474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358470u;
            // 0x358474: 0x46002206  mov.s       $f8, $f4 (Delay Slot)
            ctx->f[8] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x358478u;
            goto label_358478;
        }
    }
    ctx->pc = 0x358478u;
label_358478:
    // 0x358478: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x358478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x35847c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35847cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x358480: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x358480u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358484: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x358484u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x358488: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x358488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35848c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x35848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x358490: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x358490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x358494: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x358494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x358498: 0xc7a70038  lwc1        $f7, 0x38($sp)
    ctx->pc = 0x358498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x35849c: 0x46034102  mul.s       $f4, $f8, $f3
    ctx->pc = 0x35849cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x3584a0: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x3584a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3584a4: 0x46064042  mul.s       $f1, $f8, $f6
    ctx->pc = 0x3584a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x3584a8: 0x46074082  mul.s       $f2, $f8, $f7
    ctx->pc = 0x3584a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x3584ac: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x3584acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3584b0: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x3584b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x3584b4: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x3584b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3584b8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3584b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3584bc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3584bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3584c0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3584c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3584c4: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x3584c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3584c8: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x3584c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3584cc: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x3584ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3584d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3584d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3584d4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3584d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3584d8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3584d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3584dc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x3584dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3584e0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3584e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3584e4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3584e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3584e8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x3584e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3584ec: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x3584ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3584f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3584f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3584f4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3584f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3584f8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3584f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3584fc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x3584fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x358500: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x358500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358504: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x358504u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x358508: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x358508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35850c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35850cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358510: 0x0  nop
    ctx->pc = 0x358510u;
    // NOP
    // 0x358514: 0x46004032  c.eq.s      $f8, $f0
    ctx->pc = 0x358514u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x358518: 0x0  nop
    ctx->pc = 0x358518u;
    // NOP
    // 0x35851c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x35851Cu;
    {
        const bool branch_taken_0x35851c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x358520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35851Cu;
        // 0x358520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35851c) {
            ctx->pc = 0x358528u;
            goto label_358528;
        }
    }
    ctx->pc = 0x358524u;
    // 0x358524: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358528:
    // 0x358528: 0x3e00008  jr          $ra
    ctx->pc = 0x358528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358528u;
        // 0x35852c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358530u;
}
