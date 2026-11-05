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

// Function: sub_003E42D0
// Address: 0x3e42d0 - 0x3e4ca0
void sub_003E42D0_0x3e42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E42D0_0x3e42d0");
#endif

    switch (ctx->pc) {
        case 0x3e431cu: goto label_3e431c;
        case 0x3e4324u: goto label_3e4324;
        case 0x3e432cu: goto label_3e432c;
        case 0x3e4334u: goto label_3e4334;
        case 0x3e4348u: goto label_3e4348;
        case 0x3e4358u: goto label_3e4358;
        case 0x3e43a8u: goto label_3e43a8;
        case 0x3e4460u: goto label_3e4460;
        case 0x3e44a8u: goto label_3e44a8;
        case 0x3e44b0u: goto label_3e44b0;
        case 0x3e4594u: goto label_3e4594;
        case 0x3e469cu: goto label_3e469c;
        case 0x3e4714u: goto label_3e4714;
        case 0x3e471cu: goto label_3e471c;
        case 0x3e4724u: goto label_3e4724;
        case 0x3e472cu: goto label_3e472c;
        case 0x3e4ba4u: goto label_3e4ba4;
        case 0x3e4bccu: goto label_3e4bcc;
        case 0x3e4bf4u: goto label_3e4bf4;
        case 0x3e4c1cu: goto label_3e4c1c;
        case 0x3e4c44u: goto label_3e4c44;
        case 0x3e4c6cu: goto label_3e4c6c;
        default: break;
    }

    ctx->pc = 0x3e42d0u;

    // 0x3e42d0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x3e42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x3e42d4: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x3e42d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x3e42d8: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x3e42d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x3e42dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e42dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e42e0: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x3e42e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
    // 0x3e42e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e42e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e42e8: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x3e42e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x3e42ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3e42ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e42f0: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x3e42f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x3e42f4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3e42f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e42f8: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x3e42f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x3e42fc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3e42fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3e4300: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x3e4300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
    // 0x3e4304: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x3e4304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x3e4308: 0xffb70168  sd          $s7, 0x168($sp)
    ctx->pc = 0x3e4308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 23));
    // 0x3e430c: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x3e430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x3e4310: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x3e4310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x3e4314: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3E4314u;
    SET_GPR_U32(ctx, 31, 0x3E431Cu);
    ctx->pc = 0x3E4318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4314u;
    // 0x3e4318: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3E4314u, 0x3E431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E431Cu;
label_3e431c:
    // 0x3e431c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3E431Cu;
    SET_GPR_U32(ctx, 31, 0x3E4324u);
    ctx->pc = 0x3E4320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E431Cu;
    // 0x3e4320: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3E431Cu, 0x3E4324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4324u;
label_3e4324:
    // 0x3e4324: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3E4324u;
    SET_GPR_U32(ctx, 31, 0x3E432Cu);
    ctx->pc = 0x3E4328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4324u;
    // 0x3e4328: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3E4324u, 0x3E432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E432Cu;
label_3e432c:
    // 0x3e432c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3E432Cu;
    SET_GPR_U32(ctx, 31, 0x3E4334u);
    ctx->pc = 0x3E4330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E432Cu;
    // 0x3e4330: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3E432Cu, 0x3E4334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4334u;
label_3e4334:
    // 0x3e4334: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x3e4334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x3e4338: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E4338u;
    {
        const bool branch_taken_0x3e4338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4338u;
        // 0x3e433c: 0x26420010  addiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4338) {
            ctx->pc = 0x3E4390u;
            goto label_3e4390;
        }
    }
    ctx->pc = 0x3E4340u;
    // 0x3e4340: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3E4340u;
    SET_GPR_U32(ctx, 31, 0x3E4348u);
    ctx->pc = 0x3E4344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4340u;
    // 0x3e4344: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3E4340u, 0x3E4348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4348u;
label_3e4348:
    // 0x3e4348: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3e4348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e434c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x3e434cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3e4350: 0xc0b10a6  jal         func_2C4298
    ctx->pc = 0x3E4350u;
    SET_GPR_U32(ctx, 31, 0x3E4358u);
    ctx->pc = 0x3E4354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4350u;
    // 0x3e4354: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4298u, 0x3E4350u, 0x3E4358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4358u;
label_3e4358:
    // 0x3e4358: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3e4358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e435c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3e435cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e4360: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x3e4360u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e4364: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x3e4364u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3e4368: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x3e4368u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3e436c: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x3e436cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3e4370: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x3e4370u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3e4374: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x3e4374u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3e4378: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x3e4378u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3e437c: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x3e437cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4380: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x3e4380u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4384: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e4384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4388: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E4388u;
    {
        const bool branch_taken_0x3e4388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4388u;
        // 0x3e438c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4388) {
            ctx->pc = 0x3E43A0u;
            goto label_3e43a0;
        }
    }
    ctx->pc = 0x3E4390u;
label_3e4390:
    // 0x3e4390: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3e4390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e4394: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x3e4394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4398: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3e4398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e439c: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x3e439cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e43a0:
    // 0x3e43a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3E43A0u;
    SET_GPR_U32(ctx, 31, 0x3E43A8u);
    ctx->pc = 0x3E43A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E43A0u;
    // 0x3e43a4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3E43A0u, 0x3E43A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E43A8u;
label_3e43a8:
    // 0x3e43a8: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x3e43a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3e43ac: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x3e43acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3e43b0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3e43b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e43b4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3e43b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e43b8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x3e43b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e43bc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3e43bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e43c0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x3e43c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3e43c4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3e43c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3e43c8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3e43c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3e43cc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3e43ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3e43d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x3e43d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3e43d4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3e43d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e43d8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x3e43d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e43dc: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x3e43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3e43e0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3e43e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e43e4: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x3e43e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e43e8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x3e43e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3e43ec: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3e43ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e43f0: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x3e43f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e43f4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x3e43f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x3e43f8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3e43f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e43fc: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x3e43fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e4400: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x3e4400u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3e4404: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3e4404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3e4408: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e4408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e440c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x3e440cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e4410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3e4414: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e4414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e4418: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x3e4418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e441c: 0x0  nop
    ctx->pc = 0x3e441cu;
    // NOP
    // 0x3e4420: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3E4420u;
    {
        const bool branch_taken_0x3e4420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4420u;
        // 0x3e4424: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4420) {
            ctx->pc = 0x3E4430u;
            goto label_3e4430;
        }
    }
    ctx->pc = 0x3E4428u;
    // 0x3e4428: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E4428u;
    {
        const bool branch_taken_0x3e4428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4428u;
        // 0x3e442c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4428) {
            ctx->pc = 0x3E4440u;
            goto label_3e4440;
        }
    }
    ctx->pc = 0x3E4430u;
label_3e4430:
    // 0x3e4430: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x3e4430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e4434: 0x0  nop
    ctx->pc = 0x3e4434u;
    // NOP
    // 0x3e4438: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E4438u;
    {
        const bool branch_taken_0x3e4438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e4438) {
            ctx->pc = 0x3E443Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4438u;
            // 0x3e443c: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4440u;
            goto label_3e4440;
        }
    }
    ctx->pc = 0x3E4440u;
label_3e4440:
    // 0x3e4440: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x3e4440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x3e4444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e4444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3e4448: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e4448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e444c: 0x0  nop
    ctx->pc = 0x3e444cu;
    // NOP
    // 0x3e4450: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x3e4450u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3e4454: 0x460c0304  c1          0xC0304
    ctx->pc = 0x3e4454u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x3e4458: 0xc0e404c  jal         func_390130
    ctx->pc = 0x3E4458u;
    SET_GPR_U32(ctx, 31, 0x3E4460u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x3E4458u, 0x3E4460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4460u;
label_3e4460:
    // 0x3e4460: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x3e4460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x3e4464: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x3e4464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x3e4468: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e4468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e446c: 0x0  nop
    ctx->pc = 0x3e446cu;
    // NOP
    // 0x3e4470: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e4470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3e4474: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3e4474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e4478: 0x0  nop
    ctx->pc = 0x3e4478u;
    // NOP
    // 0x3e447c: 0x450301fc  bc1tl       . + 4 + (0x1FC << 2)
    ctx->pc = 0x3E447Cu;
    {
        const bool branch_taken_0x3e447c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e447c) {
            ctx->pc = 0x3E4480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E447Cu;
            // 0x3e4480: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4C70u;
            goto label_3e4c70;
        }
    }
    ctx->pc = 0x3E4484u;
    // 0x3e4484: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x3e4484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4488: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3e4488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e448c: 0xc64c0040  lwc1        $f12, 0x40($s2)
    ctx->pc = 0x3e448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e4490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e4490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4494: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3e4494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3e4498: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3e4498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e449c: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x3e449cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x3e44a0: 0xc0af9dc  jal         func_2BE770
    ctx->pc = 0x3E44A0u;
    SET_GPR_U32(ctx, 31, 0x3E44A8u);
    ctx->pc = 0x3E44A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E44A0u;
    // 0x3e44a4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE770u, 0x3E44A0u, 0x3E44A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E44A8u;
label_3e44a8:
    // 0x3e44a8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3E44A8u;
    SET_GPR_U32(ctx, 31, 0x3E44B0u);
    ctx->pc = 0x3E44ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E44A8u;
    // 0x3e44ac: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3E44A8u, 0x3E44B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E44B0u;
label_3e44b0:
    // 0x3e44b0: 0x8ea200b4  lw          $v0, 0xB4($s5)
    ctx->pc = 0x3e44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 180)));
    // 0x3e44b4: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x3E44B4u;
    {
        const bool branch_taken_0x3e44b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e44b4) {
            ctx->pc = 0x3E44B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E44B4u;
            // 0x3e44b8: 0x8ea200b0  lw          $v0, 0xB0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E45CCu;
            goto label_3e45cc;
        }
    }
    ctx->pc = 0x3E44BCu;
    // 0x3e44bc: 0x8ea200b8  lw          $v0, 0xB8($s5)
    ctx->pc = 0x3e44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
    // 0x3e44c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E44C0u;
    {
        const bool branch_taken_0x3e44c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E44C0u;
        // 0x3e44c4: 0x26420020  addiu       $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e44c0) {
            ctx->pc = 0x3E44D8u;
            goto label_3e44d8;
        }
    }
    ctx->pc = 0x3E44C8u;
    // 0x3e44c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3e44c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e44cc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3e44ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e44d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E44D0u;
    {
        const bool branch_taken_0x3e44d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E44D0u;
        // 0x3e44d4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e44d0) {
            ctx->pc = 0x3E44F4u;
            goto label_3e44f4;
        }
    }
    ctx->pc = 0x3E44D8u;
label_3e44d8:
    // 0x3e44d8: 0xc6a000a0  lwc1        $f0, 0xA0($s5)
    ctx->pc = 0x3e44d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e44dc: 0xc6a100a4  lwc1        $f1, 0xA4($s5)
    ctx->pc = 0x3e44dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e44e0: 0xc6a200a8  lwc1        $f2, 0xA8($s5)
    ctx->pc = 0x3e44e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e44e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3e44e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3e44e8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3e44e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3e44ec: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3e44ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3e44f0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3e44f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e44f4:
    // 0x3e44f4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x3e44f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x3e44f8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x3e44f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x3e44fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e44fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e4500: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3e4500u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x3e4504: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e4504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e4508: 0x0  nop
    ctx->pc = 0x3e4508u;
    // NOP
    // 0x3e450c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3E450Cu;
    {
        const bool branch_taken_0x3e450c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E450Cu;
        // 0x3e4510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e450c) {
            ctx->pc = 0x3E4540u;
            goto label_3e4540;
        }
    }
    ctx->pc = 0x3E4514u;
    // 0x3e4514: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3e4514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4518: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3e4518u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x3e451c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e451cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e4520: 0x0  nop
    ctx->pc = 0x3e4520u;
    // NOP
    // 0x3e4524: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3E4524u;
    {
        const bool branch_taken_0x3e4524 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4524u;
        // 0x3e4528: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4524) {
            ctx->pc = 0x3E4540u;
            goto label_3e4540;
        }
    }
    ctx->pc = 0x3E452Cu;
    // 0x3e452c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3e452cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x3e4530: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e4530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e4534: 0x0  nop
    ctx->pc = 0x3e4534u;
    // NOP
    // 0x3e4538: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E4538u;
    {
        const bool branch_taken_0x3e4538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e4538) {
            ctx->pc = 0x3E453Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4538u;
            // 0x3e453c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4540u;
            goto label_3e4540;
        }
    }
    ctx->pc = 0x3E4540u;
label_3e4540:
    // 0x3e4540: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E4540u;
    {
        const bool branch_taken_0x3e4540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4540u;
        // 0x3e4544: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4540) {
            ctx->pc = 0x3E4558u;
            goto label_3e4558;
        }
    }
    ctx->pc = 0x3E4548u;
    // 0x3e4548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e4548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3e454c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e454cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e4550: 0x0  nop
    ctx->pc = 0x3e4550u;
    // NOP
    // 0x3e4554: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3e4554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3e4558:
    // 0x3e4558: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3e4558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e455c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x3e455cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3e4560: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3e4560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3e4564: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3e4564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3e4568: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3e4568u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3e456c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3e456cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3e4570: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3e4570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4574: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3e4574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4578: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3e4578u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e457c: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x3e457cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e4580: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e4580u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3e4584: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x3e4584u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4588: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3e4588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e458c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3E458Cu;
    SET_GPR_U32(ctx, 31, 0x3E4594u);
    ctx->pc = 0x3E4590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E458Cu;
    // 0x3e4590: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3E458Cu, 0x3E4594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4594u;
label_3e4594:
    // 0x3e4594: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3e4594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e4598: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3e4598u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e459c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x3e459cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e45a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e45a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3e45a4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x3e45a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e45a8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3e45a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e45ac: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3e45acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e45b0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x3e45b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e45b4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3e45b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e45b8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x3e45b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e45bc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3e45bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e45c0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x3e45c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e45c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3E45C4u;
    {
        const bool branch_taken_0x3e45c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45C4u;
        // 0x3e45c8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e45c4) {
            ctx->pc = 0x3E4644u;
            goto label_3e4644;
        }
    }
    ctx->pc = 0x3E45CCu;
label_3e45cc:
    // 0x3e45cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E45CCu;
    {
        const bool branch_taken_0x3e45cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45CCu;
        // 0x3e45d0: 0x26a20060  addiu       $v0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e45cc) {
            ctx->pc = 0x3E4610u;
            goto label_3e4610;
        }
    }
    ctx->pc = 0x3E45D4u;
    // 0x3e45d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3e45d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e45d8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x3e45d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e45dc: 0x26a30070  addiu       $v1, $s5, 0x70
    ctx->pc = 0x3e45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x3e45e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3e45e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e45e4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x3e45e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e45e8: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x3e45e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x3e45ec: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3e45ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e45f0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x3e45f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e45f4: 0x26a20090  addiu       $v0, $s5, 0x90
    ctx->pc = 0x3e45f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x3e45f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3e45f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e45fc: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x3e45fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4600: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3e4600u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e4604: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3e4604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4608: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3E4608u;
    {
        const bool branch_taken_0x3e4608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4608u;
        // 0x3e460c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4608) {
            ctx->pc = 0x3E4640u;
            goto label_3e4640;
        }
    }
    ctx->pc = 0x3E4610u;
label_3e4610:
    // 0x3e4610: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3e4610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e4614: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x3e4614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4618: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x3e4618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3e461c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3e461cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e4620: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x3e4620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4624: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3e4624u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e4628: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x3e4628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e462c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x3e462cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3e4630: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x3e4630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4634: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3e4634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e4638: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3e4638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e463c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3e463cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e4640:
    // 0x3e4640: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x3e4640u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3e4644:
    // 0x3e4644: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x3e4644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x3e4648: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E4648u;
    {
        const bool branch_taken_0x3e4648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4648u;
        // 0x3e464c: 0x27b10080  addiu       $s1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4648) {
            ctx->pc = 0x3E469Cu;
            goto label_3e469c;
        }
    }
    ctx->pc = 0x3E4650u;
    // 0x3e4650: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x3e4650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e4654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e4654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4658: 0x9242003a  lbu         $v0, 0x3A($s2)
    ctx->pc = 0x3e4658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
    // 0x3e465c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3e465cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e4660: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x3e4660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4664: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3e4664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e4668: 0x0  nop
    ctx->pc = 0x3e4668u;
    // NOP
    // 0x3e466c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3e466cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3e4670: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x3e4670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e4674: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3e4674u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3e4678: 0x92420039  lbu         $v0, 0x39($s2)
    ctx->pc = 0x3e4678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x3e467c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x3e467cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x3e4680: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e4680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e4684: 0x0  nop
    ctx->pc = 0x3e4684u;
    // NOP
    // 0x3e4688: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3e4688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e468c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3e468cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3e4690: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x3e4690u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3e4694: 0xc0b15b8  jal         func_2C56E0
    ctx->pc = 0x3E4694u;
    SET_GPR_U32(ctx, 31, 0x3E469Cu);
    ctx->pc = 0x3E4698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4694u;
    // 0x3e4698: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C56E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C56E0u, 0x3E4694u, 0x3E469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E469Cu;
label_3e469c:
    // 0x3e469c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3e469cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e46a0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3e46a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e46a4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x3e46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e46a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3e46a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e46ac: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3e46acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e46b0: 0x92420038  lbu         $v0, 0x38($s2)
    ctx->pc = 0x3e46b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x3e46b4: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x3e46b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x3e46b8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E46B8u;
    {
        const bool branch_taken_0x3e46b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e46b8) {
            ctx->pc = 0x3E470Cu;
            goto label_3e470c;
        }
    }
    ctx->pc = 0x3E46C0u;
    // 0x3e46c0: 0x92420038  lbu         $v0, 0x38($s2)
    ctx->pc = 0x3e46c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x3e46c4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x3e46c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e46c8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3e46c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3e46cc: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x3e46ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x3e46d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3e46d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e46d4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3e46d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e46d8: 0x0  nop
    ctx->pc = 0x3e46d8u;
    // NOP
    // 0x3e46dc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3e46dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3e46e0: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x3e46e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e46e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3e46e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3e46e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e46e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e46ec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3e46ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3e46f0: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x3e46f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x3e46f4: 0x92420038  lbu         $v0, 0x38($s2)
    ctx->pc = 0x3e46f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x3e46f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e46f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e46fc: 0x0  nop
    ctx->pc = 0x3e46fcu;
    // NOP
    // 0x3e4700: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e4700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e4704: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3e4704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3e4708: 0xe6a1000c  swc1        $f1, 0xC($s5)
    ctx->pc = 0x3e4708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3e470c:
    // 0x3e470c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3E470Cu;
    SET_GPR_U32(ctx, 31, 0x3E4714u);
    ctx->pc = 0x3E4710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E470Cu;
    // 0x3e4710: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3E470Cu, 0x3E4714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4714u;
label_3e4714:
    // 0x3e4714: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3E4714u;
    SET_GPR_U32(ctx, 31, 0x3E471Cu);
    ctx->pc = 0x3E4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4714u;
    // 0x3e4718: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3E4714u, 0x3E471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E471Cu;
label_3e471c:
    // 0x3e471c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3E471Cu;
    SET_GPR_U32(ctx, 31, 0x3E4724u);
    ctx->pc = 0x3E4720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E471Cu;
    // 0x3e4720: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3E471Cu, 0x3E4724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4724u;
label_3e4724:
    // 0x3e4724: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3E4724u;
    SET_GPR_U32(ctx, 31, 0x3E472Cu);
    ctx->pc = 0x3E4728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4724u;
    // 0x3e4728: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3E4724u, 0x3E472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E472Cu;
label_3e472c:
    // 0x3e472c: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3e472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e4730: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x3e4730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4734: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3e4734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3e4738: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3e4738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e473c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3e473cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e4740: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3e4740u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3e4744: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3e4744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4748: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3e4748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e474c: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x3e474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e4750: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3e4750u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3e4754: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x3e4754u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3e4758: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3e4758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e475c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3e475cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3e4760: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3e4760u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4764: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x3e4764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4768: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x3e4768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e476c: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x3e476cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4770: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3e4770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3e4774: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3e4774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e4778: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3e4778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e477c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3e477cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3e4780: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3e4780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4784: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x3e4784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4788: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x3e4788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e478c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3e478cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3e4790: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x3e4790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e4794: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3e4794u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e4798: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3e4798u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3e479c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3e479cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e47a0: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x3e47a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e47a4: 0x92a30007  lbu         $v1, 0x7($s5)
    ctx->pc = 0x3e47a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
    // 0x3e47a8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3e47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3e47ac: 0x54620035  bnel        $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3E47ACu;
    {
        const bool branch_taken_0x3e47ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e47ac) {
            ctx->pc = 0x3E47B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E47ACu;
            // 0x3e47b0: 0x92420034  lbu         $v0, 0x34($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4884u;
            goto label_3e4884;
        }
    }
    ctx->pc = 0x3E47B4u;
    // 0x3e47b4: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x3e47b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3e47b8: 0x92a20004  lbu         $v0, 0x4($s5)
    ctx->pc = 0x3e47b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3e47bc: 0x92430034  lbu         $v1, 0x34($s2)
    ctx->pc = 0x3e47bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x3e47c0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3e47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e47c4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3e47c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3e47c8: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x3e47c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x3e47cc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3e47ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e47d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e47d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e47d4: 0x0  nop
    ctx->pc = 0x3e47d4u;
    // NOP
    // 0x3e47d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e47d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e47dc: 0x92a50001  lbu         $a1, 0x1($s5)
    ctx->pc = 0x3e47dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x3e47e0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e47e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e47e4: 0x0  nop
    ctx->pc = 0x3e47e4u;
    // NOP
    // 0x3e47e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3e47e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3e47ec: 0x92a60002  lbu         $a2, 0x2($s5)
    ctx->pc = 0x3e47ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x3e47f0: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x3e47f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x3e47f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3e47f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3e47f8: 0x92a30006  lbu         $v1, 0x6($s5)
    ctx->pc = 0x3e47f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x3e47fc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3e47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e4800: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3e4800u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3e4804: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e4804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e4808: 0x0  nop
    ctx->pc = 0x3e4808u;
    // NOP
    // 0x3e480c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3e480cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e4810: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3e4810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3e4814: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e4814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e4818: 0x0  nop
    ctx->pc = 0x3e4818u;
    // NOP
    // 0x3e481c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3e481cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3e4820: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3e4820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3e4824: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e4824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x3e4828: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x3e4828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e482c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3e482cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3e4830: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3e4830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3e4834: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x3e4834u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e4838: 0x92420035  lbu         $v0, 0x35($s2)
    ctx->pc = 0x3e4838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
    // 0x3e483c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e483cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e4840: 0x0  nop
    ctx->pc = 0x3e4840u;
    // NOP
    // 0x3e4844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e4844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e4848: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3e4848u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3e484c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e484cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3e4850: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3e4850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e4854: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3e4854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3e4858: 0xa2a50001  sb          $a1, 0x1($s5)
    ctx->pc = 0x3e4858u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e485c: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x3e485cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x3e4860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e4860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e4864: 0x0  nop
    ctx->pc = 0x3e4864u;
    // NOP
    // 0x3e4868: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e4868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e486c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3e486cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3e4870: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e4870u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3e4874: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3e4874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e4878: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3e4878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3e487c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x3E487Cu;
    {
        const bool branch_taken_0x3e487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E487Cu;
        // 0x3e4880: 0xa2a60002  sb          $a2, 0x2($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e487c) {
            ctx->pc = 0x3E49C0u;
            goto label_3e49c0;
        }
    }
    ctx->pc = 0x3E4884u;
label_3e4884:
    // 0x3e4884: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x3e4884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x3e4888: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E4888u;
    {
        const bool branch_taken_0x3e4888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4888) {
            ctx->pc = 0x3E488Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4888u;
            // 0x3e488c: 0x92420035  lbu         $v0, 0x35($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E48D4u;
            goto label_3e48d4;
        }
    }
    ctx->pc = 0x3E4890u;
    // 0x3e4890: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x3e4890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3e4894: 0x92430034  lbu         $v1, 0x34($s2)
    ctx->pc = 0x3e4894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x3e4898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e4898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e489c: 0x0  nop
    ctx->pc = 0x3e489cu;
    // NOP
    // 0x3e48a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e48a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e48a4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3e48a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3e48a8: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x3e48a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x3e48ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e48acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e48b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e48b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e48b4: 0x0  nop
    ctx->pc = 0x3e48b4u;
    // NOP
    // 0x3e48b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3e48b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3e48bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e48bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3e48c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3e48c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3e48c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e48c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e48c8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e48c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e48cc: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x3e48ccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e48d0: 0x92420035  lbu         $v0, 0x35($s2)
    ctx->pc = 0x3e48d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_3e48d4:
    // 0x3e48d4: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x3e48d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x3e48d8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E48D8u;
    {
        const bool branch_taken_0x3e48d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e48d8) {
            ctx->pc = 0x3E48DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E48D8u;
            // 0x3e48dc: 0x92420036  lbu         $v0, 0x36($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4924u;
            goto label_3e4924;
        }
    }
    ctx->pc = 0x3E48E0u;
    // 0x3e48e0: 0x92a20001  lbu         $v0, 0x1($s5)
    ctx->pc = 0x3e48e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x3e48e4: 0x92430035  lbu         $v1, 0x35($s2)
    ctx->pc = 0x3e48e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
    // 0x3e48e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e48e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e48ec: 0x0  nop
    ctx->pc = 0x3e48ecu;
    // NOP
    // 0x3e48f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e48f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e48f4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3e48f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3e48f8: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x3e48f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x3e48fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e48fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e4900: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e4900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e4904: 0x0  nop
    ctx->pc = 0x3e4904u;
    // NOP
    // 0x3e4908: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3e4908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3e490c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e490cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3e4910: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3e4910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3e4914: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e4914u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e4918: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e4918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e491c: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x3e491cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e4920: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x3e4920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_3e4924:
    // 0x3e4924: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x3e4924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x3e4928: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E4928u;
    {
        const bool branch_taken_0x3e4928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4928) {
            ctx->pc = 0x3E492Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4928u;
            // 0x3e492c: 0x92420037  lbu         $v0, 0x37($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4974u;
            goto label_3e4974;
        }
    }
    ctx->pc = 0x3E4930u;
    // 0x3e4930: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x3e4930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x3e4934: 0x92430036  lbu         $v1, 0x36($s2)
    ctx->pc = 0x3e4934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x3e4938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e4938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e493c: 0x0  nop
    ctx->pc = 0x3e493cu;
    // NOP
    // 0x3e4940: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e4940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e4944: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3e4944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3e4948: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x3e4948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x3e494c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e494cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e4950: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e4950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e4954: 0x0  nop
    ctx->pc = 0x3e4954u;
    // NOP
    // 0x3e4958: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3e4958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3e495c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e495cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3e4960: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3e4960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3e4964: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e4964u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e4968: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e4968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e496c: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x3e496cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e4970: 0x92420037  lbu         $v0, 0x37($s2)
    ctx->pc = 0x3e4970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
label_3e4974:
    // 0x3e4974: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x3e4974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x3e4978: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E4978u;
    {
        const bool branch_taken_0x3e4978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4978) {
            ctx->pc = 0x3E497Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4978u;
            // 0x3e497c: 0x8ea20024  lw          $v0, 0x24($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E49C4u;
            goto label_3e49c4;
        }
    }
    ctx->pc = 0x3E4980u;
    // 0x3e4980: 0x92a20003  lbu         $v0, 0x3($s5)
    ctx->pc = 0x3e4980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x3e4984: 0x92430037  lbu         $v1, 0x37($s2)
    ctx->pc = 0x3e4984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x3e4988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e4988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e498c: 0x0  nop
    ctx->pc = 0x3e498cu;
    // NOP
    // 0x3e4990: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e4990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e4994: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3e4994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3e4998: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x3e4998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x3e499c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e499cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e49a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e49a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e49a4: 0x0  nop
    ctx->pc = 0x3e49a4u;
    // NOP
    // 0x3e49a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3e49a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3e49ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e49acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3e49b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3e49b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3e49b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e49b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e49b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3e49b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3e49bc: 0xa2a20003  sb          $v0, 0x3($s5)
    ctx->pc = 0x3e49bcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 2));
label_3e49c0:
    // 0x3e49c0: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x3e49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_3e49c4:
    // 0x3e49c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E49C4u;
    {
        const bool branch_taken_0x3e49c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E49C4u;
        // 0x3e49c8: 0x26b6003c  addiu       $s6, $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e49c4) {
            ctx->pc = 0x3E49D4u;
            goto label_3e49d4;
        }
    }
    ctx->pc = 0x3E49CCu;
    // 0x3e49cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3e49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3e49d0: 0x2456afc0  addiu       $s6, $v0, -0x5040
    ctx->pc = 0x3e49d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
label_3e49d4:
    // 0x3e49d4: 0x27b300f0  addiu       $s3, $sp, 0xF0
    ctx->pc = 0x3e49d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3e49d8: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x3e49d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3e49dc: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x3e49dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3e49e0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3e49e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e49e4: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x3e49e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e49e8: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x3e49e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e49ec: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x3e49ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3e49f0: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x3e49f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e49f4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3e49f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e49f8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3e49f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e49fc: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x3e49fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e4a00: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x3e4a00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3e4a04: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x3e4a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x3e4a08: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x3e4a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3e4a0c: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x3e4a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x3e4a10: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3e4a10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e4a14: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x3e4a14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e4a18: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3e4a18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4a1c: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x3e4a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4a20: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x3e4a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e4a24: 0x27b40100  addiu       $s4, $sp, 0x100
    ctx->pc = 0x3e4a24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3e4a28: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x3e4a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e4a2c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3e4a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e4a30: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3e4a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4a34: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x3e4a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e4a38: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x3e4a38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3e4a3c: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x3e4a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3e4a40: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x3e4a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3e4a44: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x3e4a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3e4a48: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x3e4a48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3e4a4c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3e4a4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e4a50: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3e4a50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4a54: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x3e4a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4a58: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x3e4a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e4a5c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x3e4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3e4a60: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x3e4a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4a64: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x3e4a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e4a68: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x3e4a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e4a6c: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x3e4a6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3e4a70: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x3e4a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x3e4a74: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x3e4a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x3e4a78: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x3e4a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x3e4a7c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3e4a7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e4a80: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3e4a80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e4a84: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3e4a84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4a88: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x3e4a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4a8c: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x3e4a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e4a90: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3e4a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3e4a94: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x3e4a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4a98: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x3e4a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e4a9c: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x3e4a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e4aa0: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x3e4aa0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3e4aa4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x3e4aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x3e4aa8: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x3e4aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3e4aac: 0xe7a200ec  swc1        $f2, 0xEC($sp)
    ctx->pc = 0x3e4aacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x3e4ab0: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x3e4ab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3e4ab4: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x3e4ab4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3e4ab8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3e4ab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4abc: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x3e4abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4ac0: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x3e4ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4ac4: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x3e4ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e4ac8: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x3e4ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e4acc: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x3e4accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e4ad0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x3e4ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3e4ad4: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x3e4ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x3e4ad8: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x3e4ad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3e4adc: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x3e4adcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x3e4ae0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x3e4ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3e4ae4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3e4ae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e4ae8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3e4ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4aec: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x3e4aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4af0: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x3e4af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4af4: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x3e4af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e4af8: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x3e4af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e4afc: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x3e4afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e4b00: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x3e4b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3e4b04: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x3e4b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x3e4b08: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x3e4b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x3e4b0c: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x3e4b0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x3e4b10: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x3e4b10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3e4b14: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3e4b14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e4b18: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3e4b18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4b1c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x3e4b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4b20: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x3e4b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4b24: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x3e4b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e4b28: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x3e4b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e4b2c: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x3e4b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e4b30: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x3e4b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x3e4b34: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x3e4b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x3e4b38: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x3e4b38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x3e4b3c: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x3e4b3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x3e4b40: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3e4b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e4b44: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x3e4b44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e4b48: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3e4b48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3e4b4c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x3e4b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3e4b50: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x3e4b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e4b54: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x3e4b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3e4b58: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x3e4b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e4b5c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3e4b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e4b60: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x3e4b60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x3e4b64: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x3e4b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e4b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e4b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b6c: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x3e4b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e4b70: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x3e4b70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3e4b74: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x3e4b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x3e4b78: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x3e4b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3e4b7c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x3e4b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x3e4b80: 0x8aa20003  lwl         $v0, 0x3($s5)
    ctx->pc = 0x3e4b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3e4b84: 0x9aa20000  lwr         $v0, 0x0($s5)
    ctx->pc = 0x3e4b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3e4b88: 0xaba20113  swl         $v0, 0x113($sp)
    ctx->pc = 0x3e4b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4b8c: 0xbba20110  swr         $v0, 0x110($sp)
    ctx->pc = 0x3e4b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4b90: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x3e4b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3e4b94: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x3e4b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e4b98: 0xc6cd0004  lwc1        $f13, 0x4($s6)
    ctx->pc = 0x3e4b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3e4b9c: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x3E4B9Cu;
    SET_GPR_U32(ctx, 31, 0x3E4BA4u);
    ctx->pc = 0x3E4BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B9Cu;
    // 0x3e4ba0: 0xb02824  and         $a1, $a1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x3E4B9Cu, 0x3E4BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4BA4u;
label_3e4ba4:
    // 0x3e4ba4: 0x8aa20003  lwl         $v0, 0x3($s5)
    ctx->pc = 0x3e4ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3e4ba8: 0x9aa20000  lwr         $v0, 0x0($s5)
    ctx->pc = 0x3e4ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3e4bac: 0xaba20113  swl         $v0, 0x113($sp)
    ctx->pc = 0x3e4bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4bb0: 0xbba20110  swr         $v0, 0x110($sp)
    ctx->pc = 0x3e4bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e4bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4bb8: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x3e4bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3e4bbc: 0xc6cc0010  lwc1        $f12, 0x10($s6)
    ctx->pc = 0x3e4bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e4bc0: 0xc6cd0014  lwc1        $f13, 0x14($s6)
    ctx->pc = 0x3e4bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3e4bc4: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x3E4BC4u;
    SET_GPR_U32(ctx, 31, 0x3E4BCCu);
    ctx->pc = 0x3E4BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4BC4u;
    // 0x3e4bc8: 0xb02824  and         $a1, $a1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x3E4BC4u, 0x3E4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4BCCu;
label_3e4bcc:
    // 0x3e4bcc: 0x8aa60003  lwl         $a2, 0x3($s5)
    ctx->pc = 0x3e4bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x3e4bd0: 0x9aa60000  lwr         $a2, 0x0($s5)
    ctx->pc = 0x3e4bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x3e4bd4: 0xaba60113  swl         $a2, 0x113($sp)
    ctx->pc = 0x3e4bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4bd8: 0xbba60110  swr         $a2, 0x110($sp)
    ctx->pc = 0x3e4bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4bdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4be0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x3e4be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3e4be4: 0xc6cc0008  lwc1        $f12, 0x8($s6)
    ctx->pc = 0x3e4be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e4be8: 0xc6cd000c  lwc1        $f13, 0xC($s6)
    ctx->pc = 0x3e4be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3e4bec: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x3E4BECu;
    SET_GPR_U32(ctx, 31, 0x3E4BF4u);
    ctx->pc = 0x3E4BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4BECu;
    // 0x3e4bf0: 0xb02824  and         $a1, $a1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x3E4BECu, 0x3E4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4BF4u;
label_3e4bf4:
    // 0x3e4bf4: 0x8aa50003  lwl         $a1, 0x3($s5)
    ctx->pc = 0x3e4bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x3e4bf8: 0x9aa50000  lwr         $a1, 0x0($s5)
    ctx->pc = 0x3e4bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x3e4bfc: 0xaba50113  swl         $a1, 0x113($sp)
    ctx->pc = 0x3e4bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4c00: 0xbba50110  swr         $a1, 0x110($sp)
    ctx->pc = 0x3e4c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e4c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4c08: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x3e4c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3e4c0c: 0xc6cc0010  lwc1        $f12, 0x10($s6)
    ctx->pc = 0x3e4c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e4c10: 0xc6cd0014  lwc1        $f13, 0x14($s6)
    ctx->pc = 0x3e4c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3e4c14: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x3E4C14u;
    SET_GPR_U32(ctx, 31, 0x3E4C1Cu);
    ctx->pc = 0x3E4C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C14u;
    // 0x3e4c18: 0xb02824  and         $a1, $a1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x3E4C14u, 0x3E4C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C1Cu;
label_3e4c1c:
    // 0x3e4c1c: 0x8aa40003  lwl         $a0, 0x3($s5)
    ctx->pc = 0x3e4c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3e4c20: 0x9aa40000  lwr         $a0, 0x0($s5)
    ctx->pc = 0x3e4c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3e4c24: 0xaba40113  swl         $a0, 0x113($sp)
    ctx->pc = 0x3e4c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4c28: 0xbba40110  swr         $a0, 0x110($sp)
    ctx->pc = 0x3e4c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4c2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e4c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4c30: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x3e4c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3e4c34: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x3e4c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e4c38: 0xc6cd0004  lwc1        $f13, 0x4($s6)
    ctx->pc = 0x3e4c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3e4c3c: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x3E4C3Cu;
    SET_GPR_U32(ctx, 31, 0x3E4C44u);
    ctx->pc = 0x3E4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C3Cu;
    // 0x3e4c40: 0xb02824  and         $a1, $a1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x3E4C3Cu, 0x3E4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C44u;
label_3e4c44:
    // 0x3e4c44: 0x8aa30003  lwl         $v1, 0x3($s5)
    ctx->pc = 0x3e4c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3e4c48: 0x9aa30000  lwr         $v1, 0x0($s5)
    ctx->pc = 0x3e4c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3e4c4c: 0xaba30113  swl         $v1, 0x113($sp)
    ctx->pc = 0x3e4c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4c50: 0xbba30110  swr         $v1, 0x110($sp)
    ctx->pc = 0x3e4c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3e4c54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4c58: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x3e4c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3e4c5c: 0xc6cd001c  lwc1        $f13, 0x1C($s6)
    ctx->pc = 0x3e4c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3e4c60: 0xc6cc0018  lwc1        $f12, 0x18($s6)
    ctx->pc = 0x3e4c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e4c64: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x3E4C64u;
    SET_GPR_U32(ctx, 31, 0x3E4C6Cu);
    ctx->pc = 0x3E4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C64u;
    // 0x3e4c68: 0xb02824  and         $a1, $a1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x3E4C64u, 0x3E4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C6Cu;
label_3e4c6c:
    // 0x3e4c6c: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x3e4c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_3e4c70:
    // 0x3e4c70: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x3e4c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3e4c74: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x3e4c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3e4c78: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x3e4c78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3e4c7c: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x3e4c7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3e4c80: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x3e4c80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3e4c84: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x3e4c84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3e4c88: 0xdfb70168  ld          $s7, 0x168($sp)
    ctx->pc = 0x3e4c88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x3e4c8c: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x3e4c8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3e4c90: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x3e4c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x3e4c94: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x3e4c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e4c98: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C98u;
        // 0x3e4c9c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4CA0u;
}
