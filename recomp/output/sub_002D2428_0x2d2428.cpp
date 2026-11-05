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

// Function: sub_002D2428
// Address: 0x2d2428 - 0x2d2740
void sub_002D2428_0x2d2428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2428_0x2d2428");
#endif

    switch (ctx->pc) {
        case 0x2d2664u: goto label_2d2664;
        default: break;
    }

    ctx->pc = 0x2d2428u;

    // 0x2d2428: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d2428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d242c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d242cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d2430: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d2430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d2434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2438: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d2438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2d243c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d243cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2440: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d2440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2444: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d2444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d2448: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d2448u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d244c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x2d244cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2d2450: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2d2450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2454: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2d2454u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2458: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d2458u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d245c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2d245cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d2460: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d2460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2464: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2d2464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2468: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2d2468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d246c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x2d246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d2470: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d2470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d2474: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d2474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d2478: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2d2478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d247c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x2d247cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d2480: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2d2480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2484: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2d2484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d2488: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2d2488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d248c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2d248cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2d2490: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2d2490u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2d2494: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2d2494u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2d2498: 0x46000004  c1          0x4
    ctx->pc = 0x2d2498u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d249c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2d249cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2d24a0: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x2d24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2d24a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2d24a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d24a8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2d24a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d24ac: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d24acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d24b0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2d24b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d24b4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d24b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d24b8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2d24b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d24bc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2d24bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d24c0: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2d24c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d24c4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d24c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d24c8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d24c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d24cc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2d24ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d24d0: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2d24d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d24d4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2d24d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d24d8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2d24d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d24dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d24dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d24e0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2d24e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d24e4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2d24e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d24e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d24e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24ec: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2d24ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x2d24f0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2d24f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x2d24f4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2d24f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d24f8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d24f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2d24fc: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2d24fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d2500: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2d2500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2504: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2d2504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2508: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2d2508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d250c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x2d250cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2510: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2d2510u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d2514: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2d2514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d2518: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2d2518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d251c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2D251Cu;
    {
        const bool branch_taken_0x2d251c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D251Cu;
        // 0x2d2520: 0xe7a3001c  swc1        $f3, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d251c) {
            ctx->pc = 0x2D2550u;
            goto label_2d2550;
        }
    }
    ctx->pc = 0x2D2524u;
    // 0x2d2524: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2d2524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2528: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d2528u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2d252c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x2d252cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2530: 0x0  nop
    ctx->pc = 0x2d2530u;
    // NOP
    // 0x2d2534: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2534u;
    {
        const bool branch_taken_0x2d2534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2534u;
        // 0x2d2538: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2534) {
            ctx->pc = 0x2D2550u;
            goto label_2d2550;
        }
    }
    ctx->pc = 0x2D253Cu;
    // 0x2d253c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d253cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2d2540: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x2d2540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2544: 0x0  nop
    ctx->pc = 0x2d2544u;
    // NOP
    // 0x2d2548: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D2548u;
    {
        const bool branch_taken_0x2d2548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2548) {
            ctx->pc = 0x2D254Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2548u;
            // 0x2d254c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2550u;
            goto label_2d2550;
        }
    }
    ctx->pc = 0x2D2550u;
label_2d2550:
    // 0x2d2550: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2550u;
    {
        const bool branch_taken_0x2d2550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2550u;
        // 0x2d2554: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2550) {
            ctx->pc = 0x2D257Cu;
            goto label_2d257c;
        }
    }
    ctx->pc = 0x2D2558u;
    // 0x2d2558: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2d2558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d255c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2d255cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d2560: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2d2560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d2564: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2d2564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d2568: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2d2568u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2d256c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d256cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2d2570: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2d2570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d2574: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2d2574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d2578: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d2578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d257c:
    // 0x2d257c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2d257cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x2d2580: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2d2580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x2d2584: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d2584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2588: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d2588u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2d258c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d258cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2590: 0x0  nop
    ctx->pc = 0x2d2590u;
    // NOP
    // 0x2d2594: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2D2594u;
    {
        const bool branch_taken_0x2d2594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2594u;
        // 0x2d2598: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2594) {
            ctx->pc = 0x2D25C8u;
            goto label_2d25c8;
        }
    }
    ctx->pc = 0x2D259Cu;
    // 0x2d259c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2d259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d25a0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d25a0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2d25a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d25a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d25a8: 0x0  nop
    ctx->pc = 0x2d25a8u;
    // NOP
    // 0x2d25ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2D25ACu;
    {
        const bool branch_taken_0x2d25ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25ACu;
        // 0x2d25b0: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25ac) {
            ctx->pc = 0x2D25C8u;
            goto label_2d25c8;
        }
    }
    ctx->pc = 0x2D25B4u;
    // 0x2d25b4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d25b4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2d25b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d25b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d25bc: 0x0  nop
    ctx->pc = 0x2d25bcu;
    // NOP
    // 0x2d25c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D25C0u;
    {
        const bool branch_taken_0x2d25c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d25c0) {
            ctx->pc = 0x2D25C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D25C0u;
            // 0x2d25c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D25C8u;
            goto label_2d25c8;
        }
    }
    ctx->pc = 0x2D25C8u;
label_2d25c8:
    // 0x2d25c8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D25C8u;
    {
        const bool branch_taken_0x2d25c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25C8u;
        // 0x2d25cc: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25c8) {
            ctx->pc = 0x2D25F0u;
            goto label_2d25f0;
        }
    }
    ctx->pc = 0x2D25D0u;
    // 0x2d25d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2d25d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d25d4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2d25d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d25d8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2d25d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d25dc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2d25dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d25e0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2d25e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2d25e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2d25e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2d25e8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2d25e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d25ec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2d25ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d25f0:
    // 0x2d25f0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d25f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d25f4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2d25f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d25f8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2d25f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2d25fc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2d25fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2600: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2d2600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d2604: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2d2604u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2d2608: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2d2608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d260c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2d260cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d2610: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2d2610u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2d2614: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d2614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d2618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d2618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d261c: 0x0  nop
    ctx->pc = 0x2d261cu;
    // NOP
    // 0x2d2620: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d2620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2624: 0x0  nop
    ctx->pc = 0x2d2624u;
    // NOP
    // 0x2d2628: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D2628u;
    {
        const bool branch_taken_0x2d2628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2628) {
            ctx->pc = 0x2D262Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2628u;
            // 0x2d262c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2630u;
            goto label_2d2630;
        }
    }
    ctx->pc = 0x2D2630u;
label_2d2630:
    // 0x2d2630: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2634: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d2634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d2638: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2d2638u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2d263c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2d263cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2640: 0x0  nop
    ctx->pc = 0x2d2640u;
    // NOP
    // 0x2d2644: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2644u;
    {
        const bool branch_taken_0x2d2644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2644u;
        // 0x2d2648: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2644) {
            ctx->pc = 0x2D2650u;
            goto label_2d2650;
        }
    }
    ctx->pc = 0x2D264Cu;
    // 0x2d264c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2d264cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2d2650:
    // 0x2d2650: 0x46000302  mul.s       $f12, $f0, $f0
    ctx->pc = 0x2d2650u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d2654: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x2d2654u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x2d2658: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2d2658u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d265c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2D265Cu;
    SET_GPR_U32(ctx, 31, 0x2D2664u);
    ctx->pc = 0x2D2660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D265Cu;
    // 0x2d2660: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2D265Cu, 0x2D2664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2664u;
label_2d2664:
    // 0x2d2664: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2d2664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2d2668: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2d2668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2d266c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d266cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2670: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d2670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d2674: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2d2674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d2678: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d2678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d267c: 0xc442b4c0  lwc1        $f2, -0x4B40($v0)
    ctx->pc = 0x2d267cu;
    { uint32_t bits = FAST_READ32(0x3FB4C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2680: 0x0  nop
    ctx->pc = 0x2d2680u;
    // NOP
    // 0x2d2684: 0x0  nop
    ctx->pc = 0x2d2684u;
    // NOP
    // 0x2d2688: 0x46030103  div.s       $f4, $f0, $f3
    ctx->pc = 0x2d2688u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x2d268c: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x2d268cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2690: 0x0  nop
    ctx->pc = 0x2d2690u;
    // NOP
    // 0x2d2694: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D2694u;
    {
        const bool branch_taken_0x2d2694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2694u;
        // 0x2d2698: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2694) {
            ctx->pc = 0x2D26CCu;
            goto label_2d26cc;
        }
    }
    ctx->pc = 0x2D269Cu;
    // 0x2d269c: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x2d269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d26a0: 0xc440b4c4  lwc1        $f0, -0x4B3C($v0)
    ctx->pc = 0x2d26a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d26a4: 0x4600a086  mov.s       $f2, $f20
    ctx->pc = 0x2d26a4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[20]);
    // 0x2d26a8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d26a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d26ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d26acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d26b0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2d26b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d26b4: 0x0  nop
    ctx->pc = 0x2d26b4u;
    // NOP
    // 0x2d26b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D26B8u;
    {
        const bool branch_taken_0x2d26b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D26B8u;
        // 0x2d26bc: 0xe601006c  swc1        $f1, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d26b8) {
            ctx->pc = 0x2D26C4u;
            goto label_2d26c4;
        }
    }
    ctx->pc = 0x2D26C0u;
    // 0x2d26c0: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2d26c0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_2d26c4:
    // 0x2d26c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D26C4u;
    {
        const bool branch_taken_0x2d26c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D26C4u;
        // 0x2d26c8: 0xe602006c  swc1        $f2, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d26c4) {
            ctx->pc = 0x2D2700u;
            goto label_2d2700;
        }
    }
    ctx->pc = 0x2D26CCu;
label_2d26cc:
    // 0x2d26cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d26d0: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x2d26d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d26d4: 0xc440b4c8  lwc1        $f0, -0x4B38($v0)
    ctx->pc = 0x2d26d4u;
    { uint32_t bits = FAST_READ32(0x3FB4C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d26d8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2d26dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d26dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d26e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d26e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d26e4: 0xe601006c  swc1        $f1, 0x6C($s0)
    ctx->pc = 0x2d26e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x2d26e8: 0xc460b4cc  lwc1        $f0, -0x4B34($v1)
    ctx->pc = 0x2d26e8u;
    { uint32_t bits = FAST_READ32(0x3FB4CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d26ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d26ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d26f0: 0x0  nop
    ctx->pc = 0x2d26f0u;
    // NOP
    // 0x2d26f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D26F4u;
    {
        const bool branch_taken_0x2d26f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d26f4) {
            ctx->pc = 0x2D26F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D26F4u;
            // 0x2d26f8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D26FCu;
            goto label_2d26fc;
        }
    }
    ctx->pc = 0x2D26FCu;
label_2d26fc:
    // 0x2d26fc: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x2d26fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_2d2700:
    // 0x2d2700: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x2d2700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2704: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2d2704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2d2708: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2d2708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2d270c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2d270cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2710: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x2d2710u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d2714: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2d2714u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d2718: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x2d2718u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d271c: 0xe6040060  swc1        $f4, 0x60($s0)
    ctx->pc = 0x2d271cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2d2720: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d2720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2724: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d2724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d2728: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2d2728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d272c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d272cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2730: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d2730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d2734: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2734u;
        // 0x2d2738: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D273Cu;
    // 0x2d273c: 0x0  nop
    ctx->pc = 0x2d273cu;
    // NOP
    ctx->pc = 0x2d2740u;
}
