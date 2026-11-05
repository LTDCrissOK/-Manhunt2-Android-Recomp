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

// Function: sub_00247650
// Address: 0x247650 - 0x2477f0
void sub_00247650_0x247650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247650_0x247650");
#endif

    switch (ctx->pc) {
        case 0x247678u: goto label_247678;
        case 0x247688u: goto label_247688;
        case 0x247698u: goto label_247698;
        case 0x2476a4u: goto label_2476a4;
        case 0x2476b4u: goto label_2476b4;
        case 0x2476c0u: goto label_2476c0;
        case 0x2476d0u: goto label_2476d0;
        case 0x2476dcu: goto label_2476dc;
        case 0x2476ecu: goto label_2476ec;
        case 0x2476f8u: goto label_2476f8;
        case 0x247700u: goto label_247700;
        case 0x247728u: goto label_247728;
        default: break;
    }

    ctx->pc = 0x247650u;

    // 0x247650: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x247650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x247654: 0x24050446  addiu       $a1, $zero, 0x446
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1094));
    // 0x247658: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x247658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x24765c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x24765cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x247660: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x247660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x247664: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x247664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x247668: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x247668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x24766c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x24766cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x247670: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x247670u;
    SET_GPR_U32(ctx, 31, 0x247678u);
    ctx->pc = 0x247674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247670u;
    // 0x247674: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x247670u, 0x247678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247678u;
label_247678:
    // 0x247678: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24767c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24767cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247680: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x247680u;
    SET_GPR_U32(ctx, 31, 0x247688u);
    ctx->pc = 0x247684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247680u;
    // 0x247684: 0x240503eb  addiu       $a1, $zero, 0x3EB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x247680u, 0x247688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247688u;
label_247688:
    // 0x247688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24768c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24768cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247690: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x247690u;
    SET_GPR_U32(ctx, 31, 0x247698u);
    ctx->pc = 0x247694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247690u;
    // 0x247694: 0x24050421  addiu       $a1, $zero, 0x421 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x247690u, 0x247698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247698u;
label_247698:
    // 0x247698: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x247698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24769c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x24769Cu;
    SET_GPR_U32(ctx, 31, 0x2476A4u);
    ctx->pc = 0x2476A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24769Cu;
    // 0x2476a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x24769Cu, 0x2476A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476A4u;
label_2476a4:
    // 0x2476a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2476A4u;
    {
        const bool branch_taken_0x2476a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2476A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476A4u;
        // 0x2476a8: 0x261400b0  addiu       $s4, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476a4) {
            ctx->pc = 0x2476B8u;
            goto label_2476b8;
        }
    }
    ctx->pc = 0x2476ACu;
    // 0x2476ac: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2476ACu;
    SET_GPR_U32(ctx, 31, 0x2476B4u);
    ctx->pc = 0x2476B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476ACu;
    // 0x2476b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2476ACu, 0x2476B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476B4u;
label_2476b4:
    // 0x2476b4: 0x261400b0  addiu       $s4, $s0, 0xB0
    ctx->pc = 0x2476b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2476b8:
    // 0x2476b8: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2476B8u;
    SET_GPR_U32(ctx, 31, 0x2476C0u);
    ctx->pc = 0x2476BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476B8u;
    // 0x2476bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2476B8u, 0x2476C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476C0u;
label_2476c0:
    // 0x2476c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2476C0u;
    {
        const bool branch_taken_0x2476c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2476c0) {
            ctx->pc = 0x2476C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2476C0u;
            // 0x2476c4: 0x263100b0  addiu       $s1, $s1, 0xB0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2476D4u;
            goto label_2476d4;
        }
    }
    ctx->pc = 0x2476C8u;
    // 0x2476c8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2476C8u;
    SET_GPR_U32(ctx, 31, 0x2476D0u);
    ctx->pc = 0x2476CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476C8u;
    // 0x2476cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2476C8u, 0x2476D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476D0u;
label_2476d0:
    // 0x2476d0: 0x263100b0  addiu       $s1, $s1, 0xB0
    ctx->pc = 0x2476d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_2476d4:
    // 0x2476d4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2476D4u;
    SET_GPR_U32(ctx, 31, 0x2476DCu);
    ctx->pc = 0x2476D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476D4u;
    // 0x2476d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2476D4u, 0x2476DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476DCu;
label_2476dc:
    // 0x2476dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2476DCu;
    {
        const bool branch_taken_0x2476dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2476dc) {
            ctx->pc = 0x2476E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2476DCu;
            // 0x2476e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2476F0u;
            goto label_2476f0;
        }
    }
    ctx->pc = 0x2476E4u;
    // 0x2476e4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2476E4u;
    SET_GPR_U32(ctx, 31, 0x2476ECu);
    ctx->pc = 0x2476E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476E4u;
    // 0x2476e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2476E4u, 0x2476ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476ECu;
label_2476ec:
    // 0x2476ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2476ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2476f0:
    // 0x2476f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2476F0u;
    SET_GPR_U32(ctx, 31, 0x2476F8u);
    ctx->pc = 0x2476F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476F0u;
    // 0x2476f4: 0x265000b0  addiu       $s0, $s2, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2476F0u, 0x2476F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476F8u;
label_2476f8:
    // 0x2476f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2476F8u;
    SET_GPR_U32(ctx, 31, 0x247700u);
    ctx->pc = 0x2476FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476F8u;
    // 0x2476fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2476F8u, 0x247700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247700u;
label_247700:
    // 0x247700: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x247700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x247704: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x247704u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x247708: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x247708u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24770c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x247710: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x247710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247714: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x247714u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x247718: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x247718u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24771c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x24771cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x247720: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x247720u;
    SET_GPR_U32(ctx, 31, 0x247728u);
    ctx->pc = 0x247724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247720u;
    // 0x247724: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x247720u, 0x247728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247728u;
label_247728:
    // 0x247728: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x247728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24772c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24772cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247730: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x247730u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247734: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x247734u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x247738: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x247738u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24773c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x24773cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x247740: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x247740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x247744: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x247744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x247748: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x247748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24774c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247750: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x247750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247754: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x247754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247758: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x247758u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24775c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x24775cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x247760: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x247760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x247764: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x247764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x247768: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x247768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24776c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24776cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x247770: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x247770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x247774: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x247774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x247778: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x247778u;
    { uint32_t bits = FAST_READ32(0x575B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24777c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x24777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x247780: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x247780u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x247784: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x247784u;
    { uint32_t bits = FAST_READ32(0x575B44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x247788: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x247788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24778c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x24778cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x247790: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x247790u;
    { uint32_t bits = FAST_READ32(0x575B48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x247794: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x247794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x247798: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x247798u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24779c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24779cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2477a0: 0x0  nop
    ctx->pc = 0x2477a0u;
    // NOP
    // 0x2477a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2477a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2477a8: 0x0  nop
    ctx->pc = 0x2477a8u;
    // NOP
    // 0x2477ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2477ACu;
    {
        const bool branch_taken_0x2477ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2477B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477ACu;
        // 0x2477b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2477ac) {
            ctx->pc = 0x2477C0u;
            goto label_2477c0;
        }
    }
    ctx->pc = 0x2477B4u;
    // 0x2477b4: 0x8e630334  lw          $v1, 0x334($s3)
    ctx->pc = 0x2477b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x2477b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2477B8u;
    {
        const bool branch_taken_0x2477b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2477BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477B8u;
        // 0x2477bc: 0xa06201a4  sb          $v0, 0x1A4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 420), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2477b8) {
            ctx->pc = 0x2477C8u;
            goto label_2477c8;
        }
    }
    ctx->pc = 0x2477C0u;
label_2477c0:
    // 0x2477c0: 0x8e620334  lw          $v0, 0x334($s3)
    ctx->pc = 0x2477c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x2477c4: 0xa04001a4  sb          $zero, 0x1A4($v0)
    ctx->pc = 0x2477c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 420), (uint8_t)GPR_U32(ctx, 0));
label_2477c8:
    // 0x2477c8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2477c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2477cc: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2477ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2477d0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2477d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2477d4: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2477d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2477d8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2477d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2477dc: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2477dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2477e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2477E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2477E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477E0u;
        // 0x2477e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2477E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2477E8u;
    // 0x2477e8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2477e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2477ec: 0x0  nop
    ctx->pc = 0x2477ecu;
    // NOP
    ctx->pc = 0x2477f0u;
}
