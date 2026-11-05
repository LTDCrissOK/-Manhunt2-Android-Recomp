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

// Function: sub_00352250
// Address: 0x352250 - 0x3524f0
void sub_00352250_0x352250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352250_0x352250");
#endif

    switch (ctx->pc) {
        case 0x352270u: goto label_352270;
        case 0x352278u: goto label_352278;
        case 0x352290u: goto label_352290;
        case 0x352298u: goto label_352298;
        case 0x3522a0u: goto label_3522a0;
        case 0x3522a8u: goto label_3522a8;
        case 0x3522b0u: goto label_3522b0;
        case 0x3522b8u: goto label_3522b8;
        case 0x3522c0u: goto label_3522c0;
        case 0x3522c8u: goto label_3522c8;
        case 0x3522d0u: goto label_3522d0;
        case 0x352300u: goto label_352300;
        default: break;
    }

    ctx->pc = 0x352250u;

    // 0x352250: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x352250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x352254: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x352254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x352258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x352258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35225c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x35225cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x352260: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x352260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x352264: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x352264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x352268: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x352268u;
    SET_GPR_U32(ctx, 31, 0x352270u);
    ctx->pc = 0x35226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352268u;
    // 0x35226c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x352268u, 0x352270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352270u;
label_352270:
    // 0x352270: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x352270u;
    SET_GPR_U32(ctx, 31, 0x352278u);
    ctx->pc = 0x352274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352270u;
    // 0x352274: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x352270u, 0x352278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352278u;
label_352278:
    // 0x352278: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x352278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x35227c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35227cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x352280: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x352280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x352284: 0x8e300124  lw          $s0, 0x124($s1)
    ctx->pc = 0x352284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x352288: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x352288u;
    SET_GPR_U32(ctx, 31, 0x352290u);
    ctx->pc = 0x35228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352288u;
    // 0x35228c: 0x8c720100  lw          $s2, 0x100($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x352288u, 0x352290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352290u;
label_352290:
    // 0x352290: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x352290u;
    SET_GPR_U32(ctx, 31, 0x352298u);
    ctx->pc = 0x352294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352290u;
    // 0x352294: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x352290u, 0x352298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352298u;
label_352298:
    // 0x352298: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x352298u;
    SET_GPR_U32(ctx, 31, 0x3522A0u);
    ctx->pc = 0x35229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352298u;
    // 0x35229c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x352298u, 0x3522A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522A0u;
label_3522a0:
    // 0x3522a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3522A0u;
    SET_GPR_U32(ctx, 31, 0x3522A8u);
    ctx->pc = 0x3522A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3522A0u;
    // 0x3522a4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3522A0u, 0x3522A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522A8u;
label_3522a8:
    // 0x3522a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3522A8u;
    SET_GPR_U32(ctx, 31, 0x3522B0u);
    ctx->pc = 0x3522ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3522A8u;
    // 0x3522ac: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3522A8u, 0x3522B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522B0u;
label_3522b0:
    // 0x3522b0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3522B0u;
    SET_GPR_U32(ctx, 31, 0x3522B8u);
    ctx->pc = 0x3522B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3522B0u;
    // 0x3522b4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3522B0u, 0x3522B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522B8u;
label_3522b8:
    // 0x3522b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3522B8u;
    SET_GPR_U32(ctx, 31, 0x3522C0u);
    ctx->pc = 0x3522BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3522B8u;
    // 0x3522bc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3522B8u, 0x3522C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522C0u;
label_3522c0:
    // 0x3522c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3522C0u;
    SET_GPR_U32(ctx, 31, 0x3522C8u);
    ctx->pc = 0x3522C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3522C0u;
    // 0x3522c4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3522C0u, 0x3522C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522C8u;
label_3522c8:
    // 0x3522c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3522C8u;
    SET_GPR_U32(ctx, 31, 0x3522D0u);
    ctx->pc = 0x3522CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3522C8u;
    // 0x3522cc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3522C8u, 0x3522D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522D0u;
label_3522d0:
    // 0x3522d0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3522d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3522d4: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x3522D4u;
    {
        const bool branch_taken_0x3522d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3522D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3522D4u;
        // 0x3522d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3522d4) {
            ctx->pc = 0x3524D4u;
            goto label_3524d4;
        }
    }
    ctx->pc = 0x3522DCu;
    // 0x3522dc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x3522dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x3522e0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x3522e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x3522e4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3522e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3522e8: 0x264a0070  addiu       $t2, $s2, 0x70
    ctx->pc = 0x3522e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x3522ec: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x3522ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3522f0: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x3522f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3522f4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3522f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3522f8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x3522f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3522fc: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x3522fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_352300:
    // 0x352300: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x352300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x352304: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x352304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x352308: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x352308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35230c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35230cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352310: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x352310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352314: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x352314u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x352318: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x352318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35231c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35231cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x352320: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x352320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x352324: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x352324u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x352328: 0x4a0003bf  vwaitq
    ctx->pc = 0x352328u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x35232c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35232cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352330: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x352330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352334: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x352334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x352338: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x352338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x35233c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35233cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352340: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x352340u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x352344: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x352344u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352348: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x352348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35234c: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x35234cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x352350: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x352350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x352354: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x352354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x352358: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x352358u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35235c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35235cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x352360: 0x4a0003bf  vwaitq
    ctx->pc = 0x352360u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x352364: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x352364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352368: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x352368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35236c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x35236cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x352370: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x352370u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x352374: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x352374u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x352378: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x352378u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35237c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x35237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352380: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x352380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x352384: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x352384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x352388: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x352388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35238c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35238cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x352390: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x352390u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x352394: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x352394u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x352398: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x352398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35239c: 0x0  nop
    ctx->pc = 0x35239cu;
    // NOP
    // 0x3523a0: 0x45030048  bc1tl       . + 4 + (0x48 << 2)
    ctx->pc = 0x3523A0u;
    {
        const bool branch_taken_0x3523a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3523a0) {
            ctx->pc = 0x3523A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3523A0u;
            // 0x3523a4: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3524C4u;
            goto label_3524c4;
        }
    }
    ctx->pc = 0x3523A8u;
    // 0x3523a8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3523a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3523ac: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x3523acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3523b0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3523b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3523b4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3523b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3523b8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3523b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3523bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x3523bcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3523c0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3523c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3523c4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3523c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3523c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3523c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3523cc: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x3523ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3523d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3523d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3523d4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3523d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3523d8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3523d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3523dc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3523dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3523e0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3523e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3523e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3523e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3523e8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3523e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3523ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3523ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3523f0: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x3523f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3523f4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3523f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3523f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3523f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3523fc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x3523fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352400: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x352400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x352404: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x352404u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352408: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x352408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35240c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x35240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352410: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x352410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352414: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x352414u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352418: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x352418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35241c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x35241cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352420: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x352420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352424: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x352424u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352428: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x352428u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35242c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x35242cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352430: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x352430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x352434: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x352434u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352438: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x352438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35243c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x35243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352440: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x352440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x352444: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x352444u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352448: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x352448u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35244c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x35244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352450: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x352450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352454: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x352454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352458: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x352458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35245c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x35245cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x352460: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x352460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x352464: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x352464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x352468: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x352468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x35246c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x35246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352470: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x352470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352474: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x352474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x352478: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x352478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x35247c: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x35247cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x352480: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x352480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x352484: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x352484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x352488: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x352488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35248c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x35248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352490: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x352490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x352494: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x352494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x352498: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x352498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x35249c: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x35249cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x3524a0: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3524a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3524a4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x3524a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3524a8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x3524a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3524ac: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x3524acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3524b0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3524b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3524b4: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x3524b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x3524b8: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x3524b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x3524bc: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3524bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3524c0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3524c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3524c4:
    // 0x3524c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3524c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3524c8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3524c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3524cc: 0x5440ff8c  bnel        $v0, $zero, . + 4 + (-0x74 << 2)
    ctx->pc = 0x3524CCu;
    {
        const bool branch_taken_0x3524cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3524cc) {
            ctx->pc = 0x3524D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3524CCu;
            // 0x3524d0: 0x8e240118  lw          $a0, 0x118($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352300;
        }
    }
    ctx->pc = 0x3524D4u;
label_3524d4:
    // 0x3524d4: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x3524d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3524d8: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x3524d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3524dc: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x3524dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3524e0: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x3524e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3524e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3524E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3524E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524E4u;
        // 0x3524e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3524E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3524ECu;
    // 0x3524ec: 0x0  nop
    ctx->pc = 0x3524ecu;
    // NOP
    ctx->pc = 0x3524f0u;
}
