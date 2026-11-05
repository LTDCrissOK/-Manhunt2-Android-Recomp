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

// Function: sub_0026A2B8
// Address: 0x26a2b8 - 0x26a3d8
void sub_0026A2B8_0x26a2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A2B8_0x26a2b8");
#endif

    switch (ctx->pc) {
        case 0x26a2b8u: goto label_26a2b8;
        case 0x26a2bcu: goto label_26a2bc;
        case 0x26a2c0u: goto label_26a2c0;
        case 0x26a2c4u: goto label_26a2c4;
        case 0x26a2c8u: goto label_26a2c8;
        case 0x26a2ccu: goto label_26a2cc;
        case 0x26a2d0u: goto label_26a2d0;
        case 0x26a2d4u: goto label_26a2d4;
        case 0x26a2d8u: goto label_26a2d8;
        case 0x26a2dcu: goto label_26a2dc;
        case 0x26a2e0u: goto label_26a2e0;
        case 0x26a2e4u: goto label_26a2e4;
        case 0x26a2e8u: goto label_26a2e8;
        case 0x26a2ecu: goto label_26a2ec;
        case 0x26a2f0u: goto label_26a2f0;
        case 0x26a2f4u: goto label_26a2f4;
        case 0x26a2f8u: goto label_26a2f8;
        case 0x26a2fcu: goto label_26a2fc;
        case 0x26a300u: goto label_26a300;
        case 0x26a304u: goto label_26a304;
        case 0x26a308u: goto label_26a308;
        case 0x26a30cu: goto label_26a30c;
        case 0x26a310u: goto label_26a310;
        case 0x26a314u: goto label_26a314;
        case 0x26a318u: goto label_26a318;
        case 0x26a31cu: goto label_26a31c;
        case 0x26a320u: goto label_26a320;
        case 0x26a324u: goto label_26a324;
        case 0x26a328u: goto label_26a328;
        case 0x26a32cu: goto label_26a32c;
        case 0x26a330u: goto label_26a330;
        case 0x26a334u: goto label_26a334;
        case 0x26a338u: goto label_26a338;
        case 0x26a33cu: goto label_26a33c;
        case 0x26a340u: goto label_26a340;
        case 0x26a344u: goto label_26a344;
        case 0x26a348u: goto label_26a348;
        case 0x26a34cu: goto label_26a34c;
        case 0x26a350u: goto label_26a350;
        case 0x26a354u: goto label_26a354;
        case 0x26a358u: goto label_26a358;
        case 0x26a35cu: goto label_26a35c;
        case 0x26a360u: goto label_26a360;
        case 0x26a364u: goto label_26a364;
        case 0x26a368u: goto label_26a368;
        case 0x26a36cu: goto label_26a36c;
        case 0x26a370u: goto label_26a370;
        case 0x26a374u: goto label_26a374;
        case 0x26a378u: goto label_26a378;
        case 0x26a37cu: goto label_26a37c;
        case 0x26a380u: goto label_26a380;
        case 0x26a384u: goto label_26a384;
        case 0x26a388u: goto label_26a388;
        case 0x26a38cu: goto label_26a38c;
        case 0x26a390u: goto label_26a390;
        case 0x26a394u: goto label_26a394;
        case 0x26a398u: goto label_26a398;
        case 0x26a39cu: goto label_26a39c;
        case 0x26a3a0u: goto label_26a3a0;
        case 0x26a3a4u: goto label_26a3a4;
        case 0x26a3a8u: goto label_26a3a8;
        case 0x26a3acu: goto label_26a3ac;
        case 0x26a3b0u: goto label_26a3b0;
        case 0x26a3b4u: goto label_26a3b4;
        case 0x26a3b8u: goto label_26a3b8;
        case 0x26a3bcu: goto label_26a3bc;
        case 0x26a3c0u: goto label_26a3c0;
        case 0x26a3c4u: goto label_26a3c4;
        case 0x26a3c8u: goto label_26a3c8;
        case 0x26a3ccu: goto label_26a3cc;
        case 0x26a3d0u: goto label_26a3d0;
        case 0x26a3d4u: goto label_26a3d4;
        default: break;
    }

    ctx->pc = 0x26a2b8u;

label_26a2b8:
    // 0x26a2b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26a2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_26a2bc:
    // 0x26a2bc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x26a2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_26a2c0:
    // 0x26a2c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x26a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_26a2c4:
    // 0x26a2c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a2c8:
    // 0x26a2c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_26a2cc:
    // 0x26a2cc: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x26a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_26a2d0:
    // 0x26a2d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_26a2d4:
    // 0x26a2d4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_26a2d8:
    if (ctx->pc == 0x26A2D8u) {
        ctx->pc = 0x26A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2D4u;
        // 0x26a2d8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A2DCu;
        goto label_26a2dc;
    }
    ctx->pc = 0x26A2D4u;
    {
        const bool branch_taken_0x26a2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2D4u;
        // 0x26a2d8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2d4) {
            ctx->pc = 0x26A3C4u;
            goto label_26a3c4;
        }
    }
    ctx->pc = 0x26A2DCu;
label_26a2dc:
    // 0x26a2dc: 0xc0f6a96  jal         func_3DAA58
label_26a2e0:
    if (ctx->pc == 0x26A2E0u) {
        ctx->pc = 0x26A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2DCu;
        // 0x26a2e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A2E4u;
        goto label_26a2e4;
    }
    ctx->pc = 0x26A2DCu;
    SET_GPR_U32(ctx, 31, 0x26A2E4u);
    ctx->pc = 0x26A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A2DCu;
    // 0x26a2e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26A2DCu, 0x26A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2E4u;
label_26a2e4:
    // 0x26a2e4: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x26a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_26a2e8:
    // 0x26a2e8: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x26a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_26a2ec:
    // 0x26a2ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x26a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26a2f0:
    // 0x26a2f0: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x26a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
label_26a2f4:
    // 0x26a2f4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x26a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_26a2f8:
    // 0x26a2f8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26a2f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26a2fc:
    // 0x26a2fc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26a2fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26a300:
    // 0x26a300: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x26a300u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_26a304:
    // 0x26a304: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x26a304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_26a308:
    // 0x26a308: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x26a308u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_26a30c:
    // 0x26a30c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x26a30cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26a310:
    // 0x26a310: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x26a310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26a314:
    // 0x26a314: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x26a314u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_26a318:
    // 0x26a318: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x26a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_26a31c:
    // 0x26a31c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x26a31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26a320:
    // 0x26a320: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x26a320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26a324:
    // 0x26a324: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x26a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26a328:
    // 0x26a328: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x26a328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_26a32c:
    // 0x26a32c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x26a32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_26a330:
    // 0x26a330: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x26a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a334:
    // 0x26a334: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x26a334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_26a338:
    // 0x26a338: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x26a338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26a33c:
    // 0x26a33c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26a33cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_26a340:
    // 0x26a340: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x26a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a344:
    // 0x26a344: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26a344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_26a348:
    // 0x26a348: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x26a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26a34c:
    // 0x26a34c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26a34cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26a350:
    // 0x26a350: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x26a350u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26a354:
    // 0x26a354: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26a354u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26a358:
    // 0x26a358: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x26a358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_26a35c:
    // 0x26a35c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x26a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26a360:
    // 0x26a360: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x26a360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26a364:
    // 0x26a364: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x26a364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a368:
    // 0x26a368: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x26a368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26a36c:
    // 0x26a36c: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x26a36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26a370:
    // 0x26a370: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x26a370u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_26a374:
    // 0x26a374: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26a374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_26a378:
    // 0x26a378: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x26a378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_26a37c:
    // 0x26a37c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x26a37cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_26a380:
    // 0x26a380: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26a380u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26a384:
    // 0x26a384: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x26a384u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26a388:
    // 0x26a388: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_26a38c:
    // 0x26a38c: 0xc0c48da  jal         func_312368
label_26a390:
    if (ctx->pc == 0x26A390u) {
        ctx->pc = 0x26A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A38Cu;
        // 0x26a390: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A394u;
        goto label_26a394;
    }
    ctx->pc = 0x26A38Cu;
    SET_GPR_U32(ctx, 31, 0x26A394u);
    ctx->pc = 0x26A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A38Cu;
    // 0x26a390: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x26A38Cu, 0x26A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A394u;
label_26a394:
    // 0x26a394: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x26a394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_26a398:
    // 0x26a398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26a398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a39c:
    // 0x26a39c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x26a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_26a3a0:
    // 0x26a3a0: 0x40f809  jalr        $v0
label_26a3a4:
    if (ctx->pc == 0x26A3A4u) {
        ctx->pc = 0x26A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3A0u;
        // 0x26a3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A3A8u;
        goto label_26a3a8;
    }
    ctx->pc = 0x26A3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A3A8u);
        ctx->pc = 0x26A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3A0u;
        // 0x26a3a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A3A0u, 0x26A3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A3A8u;
label_26a3a8:
    // 0x26a3a8: 0xc084aba  jal         func_212AE8
label_26a3ac:
    if (ctx->pc == 0x26A3ACu) {
        ctx->pc = 0x26A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3A8u;
        // 0x26a3ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A3B0u;
        goto label_26a3b0;
    }
    ctx->pc = 0x26A3A8u;
    SET_GPR_U32(ctx, 31, 0x26A3B0u);
    ctx->pc = 0x26A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A3A8u;
    // 0x26a3ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x26A3A8u, 0x26A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3B0u;
label_26a3b0:
    // 0x26a3b0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_26a3b4:
    // 0x26a3b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a3b8:
    // 0x26a3b8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26a3b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26a3bc:
    // 0x26a3bc: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x26a3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26a3c0:
    // 0x26a3c0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x26a3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26a3c4:
    // 0x26a3c4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x26a3c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_26a3c8:
    // 0x26a3c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x26a3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26a3cc:
    // 0x26a3cc: 0x3e00008  jr          $ra
label_26a3d0:
    if (ctx->pc == 0x26A3D0u) {
        ctx->pc = 0x26A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3CCu;
        // 0x26a3d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A3D4u;
        goto label_26a3d4;
    }
    ctx->pc = 0x26A3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3CCu;
        // 0x26a3d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A3D4u;
label_26a3d4:
    // 0x26a3d4: 0x0  nop
    ctx->pc = 0x26a3d4u;
    // NOP
    ctx->pc = 0x26a3d8u;
}
