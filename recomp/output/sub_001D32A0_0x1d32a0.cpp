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

// Function: sub_001D32A0
// Address: 0x1d32a0 - 0x1d3450
void sub_001D32A0_0x1d32a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D32A0_0x1d32a0");
#endif

    switch (ctx->pc) {
        case 0x1d33f0u: goto label_1d33f0;
        default: break;
    }

    ctx->pc = 0x1d32a0u;

    // 0x1d32a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d32a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d32a4: 0x46006206  mov.s       $f8, $f12
    ctx->pc = 0x1d32a4u;
    ctx->f[8] = FPU_MOV_S(ctx->f[12]);
    // 0x1d32a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d32a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d32ac: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1d32acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32b0: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x1d32b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d32b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d32b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d32b8: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
    ctx->pc = 0x1D32B8u;
    {
        const bool branch_taken_0x1d32b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D32BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32B8u;
        // 0x1d32bc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32b8) {
            ctx->pc = 0x1D33F8u;
            goto label_1d33f8;
        }
    }
    ctx->pc = 0x1D32C0u;
    // 0x1d32c0: 0x91020090  lbu         $v0, 0x90($t0)
    ctx->pc = 0x1d32c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 144)));
    // 0x1d32c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d32c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d32c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D32C8u;
    {
        const bool branch_taken_0x1d32c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d32c8) {
            ctx->pc = 0x1D32CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D32C8u;
            // 0x1d32cc: 0xc5000060  lwc1        $f0, 0x60($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D32E0u;
            goto label_1d32e0;
        }
    }
    ctx->pc = 0x1D32D0u;
    // 0x1d32d0: 0xc5010078  lwc1        $f1, 0x78($t0)
    ctx->pc = 0x1d32d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d32d4: 0xc5000070  lwc1        $f0, 0x70($t0)
    ctx->pc = 0x1d32d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d32d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D32D8u;
    {
        const bool branch_taken_0x1d32d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32D8u;
        // 0x1d32dc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32d8) {
            ctx->pc = 0x1D32F0u;
            goto label_1d32f0;
        }
    }
    ctx->pc = 0x1D32E0u;
label_1d32e0:
    // 0x1d32e0: 0xc5010078  lwc1        $f1, 0x78($t0)
    ctx->pc = 0x1d32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d32e4: 0xc5020070  lwc1        $f2, 0x70($t0)
    ctx->pc = 0x1d32e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d32e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d32e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d32ec: 0x46020302  mul.s       $f12, $f0, $f2
    ctx->pc = 0x1d32ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d32f0:
    // 0x1d32f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d32f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d32f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d32f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d32f8: 0x0  nop
    ctx->pc = 0x1d32f8u;
    // NOP
    // 0x1d32fc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1d32fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3300: 0x0  nop
    ctx->pc = 0x1d3300u;
    // NOP
    // 0x1d3304: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D3304u;
    {
        const bool branch_taken_0x1d3304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3304) {
            ctx->pc = 0x1D3308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3304u;
            // 0x1d3308: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D330Cu;
            goto label_1d330c;
        }
    }
    ctx->pc = 0x1D330Cu;
label_1d330c:
    // 0x1d330c: 0x91020090  lbu         $v0, 0x90($t0)
    ctx->pc = 0x1d330cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 144)));
    // 0x1d3310: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d3310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3314: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d3314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d3318: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3318u;
    {
        const bool branch_taken_0x1d3318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3318u;
        // 0x1d331c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3318) {
            ctx->pc = 0x1D333Cu;
            goto label_1d333c;
        }
    }
    ctx->pc = 0x1D3320u;
    // 0x1d3320: 0xc5010060  lwc1        $f1, 0x60($t0)
    ctx->pc = 0x1d3320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3324: 0xc4400b6c  lwc1        $f0, 0xB6C($v0)
    ctx->pc = 0x1d3324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d3328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d332c: 0x0  nop
    ctx->pc = 0x1d332cu;
    // NOP
    // 0x1d3330: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3330u;
    {
        const bool branch_taken_0x1d3330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3330u;
        // 0x1d3334: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3330) {
            ctx->pc = 0x1D3340u;
            goto label_1d3340;
        }
    }
    ctx->pc = 0x1D3338u;
    // 0x1d3338: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d3338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d333c:
    // 0x1d333c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1d3340:
    // 0x1d3340: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D3340u;
    {
        const bool branch_taken_0x1d3340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3340) {
            ctx->pc = 0x1D33DCu;
            goto label_1d33dc;
        }
    }
    ctx->pc = 0x1D3348u;
    // 0x1d3348: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D3348u;
    {
        const bool branch_taken_0x1d3348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3348u;
        // 0x1d334c: 0x25020080  addiu       $v0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3348) {
            ctx->pc = 0x1D33DCu;
            goto label_1d33dc;
        }
    }
    ctx->pc = 0x1D3350u;
    // 0x1d3350: 0xc5020080  lwc1        $f2, 0x80($t0)
    ctx->pc = 0x1d3350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d3354: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1d3354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d3358: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d3358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d335c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3360: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x1d3360u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x1d3364: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1d3364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3368: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x1d3368u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x1d336c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x1d336cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1d3370: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1d3370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1d3374: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1d3374u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d3378: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x1d3378u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1d337c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1d337cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1d3380: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1d3380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1d3384: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1d3384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d3388: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1d3388u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d338c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d338cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d3390: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1d3390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d3394: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1d3394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3398: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x1d3398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1d339c: 0xc7a70038  lwc1        $f7, 0x38($sp)
    ctx->pc = 0x1d339cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1d33a0: 0x46014102  mul.s       $f4, $f8, $f1
    ctx->pc = 0x1d33a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x1d33a4: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x1d33a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d33a8: 0x46064082  mul.s       $f2, $f8, $f6
    ctx->pc = 0x1d33a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x1d33ac: 0x460740c2  mul.s       $f3, $f8, $f7
    ctx->pc = 0x1d33acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x1d33b0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d33b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d33b4: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x1d33b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x1d33b8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x1d33b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d33bc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1d33bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d33c0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x1d33c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d33c4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1d33c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d33c8: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x1d33c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d33cc: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x1d33ccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d33d0: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x1d33d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1d33d4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1d33d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d33d8: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1d33d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d33dc:
    // 0x1d33dc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D33DCu;
    {
        const bool branch_taken_0x1d33dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33DCu;
        // 0x1d33e0: 0x25070030  addiu       $a3, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33dc) {
            ctx->pc = 0x1D3440u;
            goto label_1d3440;
        }
    }
    ctx->pc = 0x1D33E4u;
    // 0x1d33e4: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x1d33e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1d33e8: 0xc0b1a26  jal         func_2C6898
    ctx->pc = 0x1D33E8u;
    SET_GPR_U32(ctx, 31, 0x1D33F0u);
    ctx->pc = 0x1D33ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D33E8u;
    // 0x1d33ec: 0x25060050  addiu       $a2, $t0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6898u, 0x1D33E8u, 0x1D33F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D33F0u;
label_1d33f0:
    // 0x1d33f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D33F0u;
    {
        const bool branch_taken_0x1d33f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33F0u;
        // 0x1d33f4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33f0) {
            ctx->pc = 0x1D3444u;
            goto label_1d3444;
        }
    }
    ctx->pc = 0x1D33F8u;
label_1d33f8:
    // 0x1d33f8: 0x91020090  lbu         $v0, 0x90($t0)
    ctx->pc = 0x1d33f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 144)));
    // 0x1d33fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d33fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d3400: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3400u;
    {
        const bool branch_taken_0x1d3400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3400) {
            ctx->pc = 0x1D3414u;
            goto label_1d3414;
        }
    }
    ctx->pc = 0x1D3408u;
    // 0x1d3408: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3408u;
    {
        const bool branch_taken_0x1d3408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3408) {
            ctx->pc = 0x1D3414u;
            goto label_1d3414;
        }
    }
    ctx->pc = 0x1D3410u;
    // 0x1d3410: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x1d3410u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
label_1d3414:
    // 0x1d3414: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3414u;
    {
        const bool branch_taken_0x1d3414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3414u;
        // 0x1d3418: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3414) {
            ctx->pc = 0x1D3440u;
            goto label_1d3440;
        }
    }
    ctx->pc = 0x1D341Cu;
    // 0x1d341c: 0xc4415b00  lwc1        $f1, 0x5B00($v0)
    ctx->pc = 0x1d341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3420: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x1d3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x1d3424: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1d3424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d3428: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d3428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d342c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1d342cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d3430: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1d3430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3434: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1d3434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d3438: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1d3438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d343c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1d343cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1d3440:
    // 0x1d3440: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d3440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d3444:
    // 0x1d3444: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3444u;
        // 0x1d3448: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D344Cu;
    // 0x1d344c: 0x0  nop
    ctx->pc = 0x1d344cu;
    // NOP
    ctx->pc = 0x1d3450u;
}
