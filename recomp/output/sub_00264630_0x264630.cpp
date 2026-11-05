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

// Function: sub_00264630
// Address: 0x264630 - 0x264760
void sub_00264630_0x264630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264630_0x264630");
#endif

    switch (ctx->pc) {
        case 0x264650u: goto label_264650;
        case 0x264674u: goto label_264674;
        case 0x264684u: goto label_264684;
        case 0x2646c4u: goto label_2646c4;
        case 0x2646d4u: goto label_2646d4;
        case 0x264714u: goto label_264714;
        case 0x264724u: goto label_264724;
        case 0x264744u: goto label_264744;
        default: break;
    }

    ctx->pc = 0x264630u;

    // 0x264630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264634: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x264634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x264638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26463c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26463cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x264640: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x264640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x264644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x264644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x264648: 0xc0849e6  jal         func_212798
    ctx->pc = 0x264648u;
    SET_GPR_U32(ctx, 31, 0x264650u);
    ctx->pc = 0x26464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264648u;
    // 0x26464c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212798u, 0x264648u, 0x264650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264650u;
label_264650:
    // 0x264650: 0x8e45028c  lw          $a1, 0x28C($s2)
    ctx->pc = 0x264650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x264654: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x264654u;
    {
        const bool branch_taken_0x264654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x264658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264654u;
        // 0x264658: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264654) {
            ctx->pc = 0x264748u;
            goto label_264748;
        }
    }
    ctx->pc = 0x26465Cu;
    // 0x26465c: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x26465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x264660: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x264660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x264664: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x264664u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264668: 0x26330070  addiu       $s3, $s1, 0x70
    ctx->pc = 0x264668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x26466c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x26466Cu;
    SET_GPR_U32(ctx, 31, 0x264674u);
    ctx->pc = 0x264670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26466Cu;
    // 0x264670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26466Cu, 0x264674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264674u;
label_264674:
    // 0x264674: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264674u;
    {
        const bool branch_taken_0x264674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264674u;
        // 0x264678: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264674) {
            ctx->pc = 0x264688u;
            goto label_264688;
        }
    }
    ctx->pc = 0x26467Cu;
    // 0x26467c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x26467Cu;
    SET_GPR_U32(ctx, 31, 0x264684u);
    ctx->pc = 0x264680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26467Cu;
    // 0x264680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26467Cu, 0x264684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264684u;
label_264684:
    // 0x264684: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x264684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_264688:
    // 0x264688: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x264688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26468c: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x26468cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x264690: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x264690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x264694: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x264694u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264698: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x264698u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26469c: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x26469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2646a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2646a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2646a4: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x2646a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2646a8: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2646a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2646ac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2646acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2646b0: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x2646b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2646b4: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2646b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2646b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2646b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2646bc: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2646BCu;
    SET_GPR_U32(ctx, 31, 0x2646C4u);
    ctx->pc = 0x2646C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2646BCu;
    // 0x2646c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2646BCu, 0x2646C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2646C4u;
label_2646c4:
    // 0x2646c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2646C4u;
    {
        const bool branch_taken_0x2646c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2646c4) {
            ctx->pc = 0x2646C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2646C4u;
            // 0x2646c8: 0x8e4200b8  lw          $v0, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2646D8u;
            goto label_2646d8;
        }
    }
    ctx->pc = 0x2646CCu;
    // 0x2646cc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2646CCu;
    SET_GPR_U32(ctx, 31, 0x2646D4u);
    ctx->pc = 0x2646D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2646CCu;
    // 0x2646d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2646CCu, 0x2646D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2646D4u;
label_2646d4:
    // 0x2646d4: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x2646d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2646d8:
    // 0x2646d8: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2646d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2646dc: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x2646dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x2646e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2646e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2646e4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2646e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2646e8: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x2646e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2646ec: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x2646ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2646f0: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x2646f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2646f4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2646f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2646f8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2646f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2646fc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2646fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x264700: 0xfa250070  sqc2        $vf5, 0x70($s1)
    ctx->pc = 0x264700u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x264704: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x264704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x264708: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x264708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26470c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x26470Cu;
    SET_GPR_U32(ctx, 31, 0x264714u);
    ctx->pc = 0x264710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26470Cu;
    // 0x264710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26470Cu, 0x264714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264714u;
label_264714:
    // 0x264714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264714u;
    {
        const bool branch_taken_0x264714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264714u;
        // 0x264718: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264714) {
            ctx->pc = 0x264728u;
            goto label_264728;
        }
    }
    ctx->pc = 0x26471Cu;
    // 0x26471c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x26471Cu;
    SET_GPR_U32(ctx, 31, 0x264724u);
    ctx->pc = 0x264720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26471Cu;
    // 0x264720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26471Cu, 0x264724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264724u;
label_264724:
    // 0x264724: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x264724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_264728:
    // 0x264728: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x264728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26472c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26472cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264730: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x264730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x264734: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x264734u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x264738: 0x8e43028c  lw          $v1, 0x28C($s2)
    ctx->pc = 0x264738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x26473c: 0xc0c48da  jal         func_312368
    ctx->pc = 0x26473Cu;
    SET_GPR_U32(ctx, 31, 0x264744u);
    ctx->pc = 0x264740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26473Cu;
    // 0x264740: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x26473Cu, 0x264744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264744u;
label_264744:
    // 0x264744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264748:
    // 0x264748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x264748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26474c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26474cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264750: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x264750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264754: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x264754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264758: 0x3e00008  jr          $ra
    ctx->pc = 0x264758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264758u;
        // 0x26475c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264760u;
}
