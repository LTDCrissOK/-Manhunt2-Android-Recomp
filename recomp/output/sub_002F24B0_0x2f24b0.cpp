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

// Function: sub_002F24B0
// Address: 0x2f24b0 - 0x2f25f0
void sub_002F24B0_0x2f24b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F24B0_0x2f24b0");
#endif

    switch (ctx->pc) {
        case 0x2f24b0u: goto label_2f24b0;
        case 0x2f24b4u: goto label_2f24b4;
        case 0x2f24b8u: goto label_2f24b8;
        case 0x2f24bcu: goto label_2f24bc;
        case 0x2f24c0u: goto label_2f24c0;
        case 0x2f24c4u: goto label_2f24c4;
        case 0x2f24c8u: goto label_2f24c8;
        case 0x2f24ccu: goto label_2f24cc;
        case 0x2f24d0u: goto label_2f24d0;
        case 0x2f24d4u: goto label_2f24d4;
        case 0x2f24d8u: goto label_2f24d8;
        case 0x2f24dcu: goto label_2f24dc;
        case 0x2f24e0u: goto label_2f24e0;
        case 0x2f24e4u: goto label_2f24e4;
        case 0x2f24e8u: goto label_2f24e8;
        case 0x2f24ecu: goto label_2f24ec;
        case 0x2f24f0u: goto label_2f24f0;
        case 0x2f24f4u: goto label_2f24f4;
        case 0x2f24f8u: goto label_2f24f8;
        case 0x2f24fcu: goto label_2f24fc;
        case 0x2f2500u: goto label_2f2500;
        case 0x2f2504u: goto label_2f2504;
        case 0x2f2508u: goto label_2f2508;
        case 0x2f250cu: goto label_2f250c;
        case 0x2f2510u: goto label_2f2510;
        case 0x2f2514u: goto label_2f2514;
        case 0x2f2518u: goto label_2f2518;
        case 0x2f251cu: goto label_2f251c;
        case 0x2f2520u: goto label_2f2520;
        case 0x2f2524u: goto label_2f2524;
        case 0x2f2528u: goto label_2f2528;
        case 0x2f252cu: goto label_2f252c;
        case 0x2f2530u: goto label_2f2530;
        case 0x2f2534u: goto label_2f2534;
        case 0x2f2538u: goto label_2f2538;
        case 0x2f253cu: goto label_2f253c;
        case 0x2f2540u: goto label_2f2540;
        case 0x2f2544u: goto label_2f2544;
        case 0x2f2548u: goto label_2f2548;
        case 0x2f254cu: goto label_2f254c;
        case 0x2f2550u: goto label_2f2550;
        case 0x2f2554u: goto label_2f2554;
        case 0x2f2558u: goto label_2f2558;
        case 0x2f255cu: goto label_2f255c;
        case 0x2f2560u: goto label_2f2560;
        case 0x2f2564u: goto label_2f2564;
        case 0x2f2568u: goto label_2f2568;
        case 0x2f256cu: goto label_2f256c;
        case 0x2f2570u: goto label_2f2570;
        case 0x2f2574u: goto label_2f2574;
        case 0x2f2578u: goto label_2f2578;
        case 0x2f257cu: goto label_2f257c;
        case 0x2f2580u: goto label_2f2580;
        case 0x2f2584u: goto label_2f2584;
        case 0x2f2588u: goto label_2f2588;
        case 0x2f258cu: goto label_2f258c;
        case 0x2f2590u: goto label_2f2590;
        case 0x2f2594u: goto label_2f2594;
        case 0x2f2598u: goto label_2f2598;
        case 0x2f259cu: goto label_2f259c;
        case 0x2f25a0u: goto label_2f25a0;
        case 0x2f25a4u: goto label_2f25a4;
        case 0x2f25a8u: goto label_2f25a8;
        case 0x2f25acu: goto label_2f25ac;
        case 0x2f25b0u: goto label_2f25b0;
        case 0x2f25b4u: goto label_2f25b4;
        case 0x2f25b8u: goto label_2f25b8;
        case 0x2f25bcu: goto label_2f25bc;
        case 0x2f25c0u: goto label_2f25c0;
        case 0x2f25c4u: goto label_2f25c4;
        case 0x2f25c8u: goto label_2f25c8;
        case 0x2f25ccu: goto label_2f25cc;
        case 0x2f25d0u: goto label_2f25d0;
        case 0x2f25d4u: goto label_2f25d4;
        case 0x2f25d8u: goto label_2f25d8;
        case 0x2f25dcu: goto label_2f25dc;
        case 0x2f25e0u: goto label_2f25e0;
        case 0x2f25e4u: goto label_2f25e4;
        case 0x2f25e8u: goto label_2f25e8;
        case 0x2f25ecu: goto label_2f25ec;
        default: break;
    }

    ctx->pc = 0x2f24b0u;

label_2f24b0:
    // 0x2f24b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f24b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f24b4:
    // 0x2f24b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f24b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f24b8:
    // 0x2f24b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f24b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2f24bc:
    // 0x2f24bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2f24bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2f24c0:
    // 0x2f24c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f24c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f24c4:
    // 0x2f24c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f24c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f24c8:
    // 0x2f24c8: 0x8e0411e4  lw          $a0, 0x11E4($s0)
    ctx->pc = 0x2f24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_2f24cc:
    // 0x2f24cc: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x2f24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_2f24d0:
    // 0x2f24d0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2f24d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f24d4:
    // 0x2f24d4: 0xc084cba  jal         func_2132E8
label_2f24d8:
    if (ctx->pc == 0x2F24D8u) {
        ctx->pc = 0x2F24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24D4u;
        // 0x2f24d8: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F24DCu;
        goto label_2f24dc;
    }
    ctx->pc = 0x2F24D4u;
    SET_GPR_U32(ctx, 31, 0x2F24DCu);
    ctx->pc = 0x2F24D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24D4u;
    // 0x2f24d8: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132E8u, 0x2F24D4u, 0x2F24DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F24DCu;
label_2f24dc:
    // 0x2f24dc: 0x8e0511e4  lw          $a1, 0x11E4($s0)
    ctx->pc = 0x2f24dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_2f24e0:
    // 0x2f24e0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2f24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_2f24e4:
    // 0x2f24e4: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x2f24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
label_2f24e8:
    // 0x2f24e8: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x2f24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_2f24ec:
    // 0x2f24ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f24f0:
    // 0x2f24f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f24f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f24f4:
    // 0x2f24f4: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x2f24f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f24f8:
    // 0x2f24f8: 0x8e0311e4  lw          $v1, 0x11E4($s0)
    ctx->pc = 0x2f24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_2f24fc:
    // 0x2f24fc: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2f24fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2f2500:
    // 0x2f2500: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x2f2500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2f2504:
    // 0x2f2504: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f2504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f2508:
    // 0x2f2508: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2f2508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f250c:
    // 0x2f250c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2f250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2f2510:
    // 0x2f2510: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f2510u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2514:
    // 0x2f2514: 0xf8c10060  sqc2        $vf1, 0x60($a2)
    ctx->pc = 0x2f2514u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f2518:
    // 0x2f2518: 0x8e0311e4  lw          $v1, 0x11E4($s0)
    ctx->pc = 0x2f2518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_2f251c:
    // 0x2f251c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x2f251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2f2520:
    // 0x2f2520: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f2520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2524:
    // 0x2f2524: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2f2524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2f2528:
    // 0x2f2528: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2f2528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2f252c:
    // 0x2f252c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f252cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f2530:
    // 0x2f2530: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f2530u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2534:
    // 0x2f2534: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2f2534u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2f2538:
    // 0x2f2538: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2f2538u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f253c:
    // 0x2f253c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f2540:
    // 0x2f2540: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f2540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2544:
    // 0x2f2544: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f2544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f2548:
    // 0x2f2548: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2f2548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f254c:
    // 0x2f254c: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2f254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f2550:
    // 0x2f2550: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f2550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f2554:
    // 0x2f2554: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f2554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2f2558:
    // 0x2f2558: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2f2558u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f255c:
    // 0x2f255c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2f255cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2f2560:
    // 0x2f2560: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f2560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f2564:
    // 0x2f2564: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x2f2564u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f2568:
    // 0x2f2568: 0x8e0211e4  lw          $v0, 0x11E4($s0)
    ctx->pc = 0x2f2568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_2f256c:
    // 0x2f256c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2f256cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2f2570:
    // 0x2f2570: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f2570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f2574:
    // 0x2f2574: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2f2574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2f2578:
    // 0x2f2578: 0xc0b14ae  jal         func_2C52B8
label_2f257c:
    if (ctx->pc == 0x2F257Cu) {
        ctx->pc = 0x2F257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2578u;
        // 0x2f257c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2580u;
        goto label_2f2580;
    }
    ctx->pc = 0x2F2578u;
    SET_GPR_U32(ctx, 31, 0x2F2580u);
    ctx->pc = 0x2F257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2578u;
    // 0x2f257c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x2F2578u, 0x2F2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2580u;
label_2f2580:
    // 0x2f2580: 0x8e0211e4  lw          $v0, 0x11E4($s0)
    ctx->pc = 0x2f2580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
label_2f2584:
    // 0x2f2584: 0x8c460104  lw          $a2, 0x104($v0)
    ctx->pc = 0x2f2584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2f2588:
    // 0x2f2588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f258c:
    // 0x2f258c: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x2f258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_2f2590:
    // 0x2f2590: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2f2590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f2594:
    // 0x2f2594: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2f2594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2f2598:
    // 0x2f2598: 0x40f809  jalr        $v0
label_2f259c:
    if (ctx->pc == 0x2F259Cu) {
        ctx->pc = 0x2F259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2598u;
        // 0x2f259c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F25A0u;
        goto label_2f25a0;
    }
    ctx->pc = 0x2F2598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F25A0u);
        ctx->pc = 0x2F259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2598u;
        // 0x2f259c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2598u, 0x2F25A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F25A0u;
label_2f25a0:
    // 0x2f25a0: 0xc083bc0  jal         func_20EF00
label_2f25a4:
    if (ctx->pc == 0x2F25A4u) {
        ctx->pc = 0x2F25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25A0u;
        // 0x2f25a4: 0x8e0411e4  lw          $a0, 0x11E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F25A8u;
        goto label_2f25a8;
    }
    ctx->pc = 0x2F25A0u;
    SET_GPR_U32(ctx, 31, 0x2F25A8u);
    ctx->pc = 0x2F25A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25A0u;
    // 0x2f25a4: 0x8e0411e4  lw          $a0, 0x11E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x2F25A0u, 0x2F25A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25A8u;
label_2f25a8:
    // 0x2f25a8: 0x8e040ffc  lw          $a0, 0xFFC($s0)
    ctx->pc = 0x2f25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
label_2f25ac:
    // 0x2f25ac: 0xc071e1a  jal         func_1C7868
label_2f25b0:
    if (ctx->pc == 0x2F25B0u) {
        ctx->pc = 0x2F25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25ACu;
        // 0x2f25b0: 0x8e0511e4  lw          $a1, 0x11E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F25B4u;
        goto label_2f25b4;
    }
    ctx->pc = 0x2F25ACu;
    SET_GPR_U32(ctx, 31, 0x2F25B4u);
    ctx->pc = 0x2F25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25ACu;
    // 0x2f25b0: 0x8e0511e4  lw          $a1, 0x11E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7868u, 0x2F25ACu, 0x2F25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25B4u;
label_2f25b4:
    // 0x2f25b4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2f25b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2f25b8:
    // 0x2f25b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f25b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f25bc:
    // 0x2f25bc: 0xc069bfc  jal         func_1A6FF0
label_2f25c0:
    if (ctx->pc == 0x2F25C0u) {
        ctx->pc = 0x2F25C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25BCu;
        // 0x2f25c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F25C4u;
        goto label_2f25c4;
    }
    ctx->pc = 0x2F25BCu;
    SET_GPR_U32(ctx, 31, 0x2F25C4u);
    ctx->pc = 0x2F25C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25BCu;
    // 0x2f25c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FF0u, 0x2F25BCu, 0x2F25C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25C4u;
label_2f25c4:
    // 0x2f25c4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2f25c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_2f25c8:
    // 0x2f25c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f25c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f25cc:
    // 0x2f25cc: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2f25ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_2f25d0:
    // 0x2f25d0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2f25d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2f25d4:
    // 0x2f25d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f25d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f25d8:
    // 0x2f25d8: 0xc046642  jal         func_119908
label_2f25dc:
    if (ctx->pc == 0x2F25DCu) {
        ctx->pc = 0x2F25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25D8u;
        // 0x2f25dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F25E0u;
        goto label_2f25e0;
    }
    ctx->pc = 0x2F25D8u;
    SET_GPR_U32(ctx, 31, 0x2F25E0u);
    ctx->pc = 0x2F25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25D8u;
    // 0x2f25dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x2F25D8u, 0x2F25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25E0u;
label_2f25e0:
    // 0x2f25e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f25e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f25e4:
    // 0x2f25e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2f25e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f25e8:
    // 0x2f25e8: 0x3e00008  jr          $ra
label_2f25ec:
    if (ctx->pc == 0x2F25ECu) {
        ctx->pc = 0x2F25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25E8u;
        // 0x2f25ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F25F0u;
        goto label_fallthrough_0x2f25e8;
    }
    ctx->pc = 0x2F25E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25E8u;
        // 0x2f25ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F25E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f25e8:
    ctx->pc = 0x2F25F0u;
}
