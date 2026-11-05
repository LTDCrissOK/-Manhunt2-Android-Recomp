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

// Function: sub_0026E2D0
// Address: 0x26e2d0 - 0x26e7b8
void sub_0026E2D0_0x26e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E2D0_0x26e2d0");
#endif

    switch (ctx->pc) {
        case 0x26e2fcu: goto label_26e2fc;
        case 0x26e304u: goto label_26e304;
        case 0x26e378u: goto label_26e378;
        case 0x26e38cu: goto label_26e38c;
        case 0x26e39cu: goto label_26e39c;
        case 0x26e4a0u: goto label_26e4a0;
        case 0x26e4a8u: goto label_26e4a8;
        case 0x26e5b4u: goto label_26e5b4;
        case 0x26e5bcu: goto label_26e5bc;
        default: break;
    }

    ctx->pc = 0x26e2d0u;

    // 0x26e2d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x26e2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x26e2d4: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x26e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x26e2d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26e2d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2dc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x26e2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x26e2e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26e2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2e4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x26e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x26e2e8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x26e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x26e2ec: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x26e2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x26e2f0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x26e2f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x26e2f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26E2F4u;
    SET_GPR_U32(ctx, 31, 0x26E2FCu);
    ctx->pc = 0x26E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2F4u;
    // 0x26e2f8: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26E2F4u, 0x26E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2FCu;
label_26e2fc:
    // 0x26e2fc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26E2FCu;
    SET_GPR_U32(ctx, 31, 0x26E304u);
    ctx->pc = 0x26E300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2FCu;
    // 0x26e300: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26E2FCu, 0x26E304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E304u;
label_26e304:
    // 0x26e304: 0x8e630254  lw          $v1, 0x254($s3)
    ctx->pc = 0x26e304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 596)));
    // 0x26e308: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26e308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e30c: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x26E30Cu;
    {
        const bool branch_taken_0x26e30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E30Cu;
        // 0x26e310: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e30c) {
            ctx->pc = 0x26E54Cu;
            goto label_26e54c;
        }
    }
    ctx->pc = 0x26E314u;
    // 0x26e314: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E314u;
    {
        const bool branch_taken_0x26e314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E314u;
        // 0x26e318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e314) {
            ctx->pc = 0x26E32Cu;
            goto label_26e32c;
        }
    }
    ctx->pc = 0x26E31Cu;
    // 0x26e31c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E31Cu;
    {
        const bool branch_taken_0x26e31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E31Cu;
        // 0x26e320: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e31c) {
            ctx->pc = 0x26E340u;
            goto label_26e340;
        }
    }
    ctx->pc = 0x26E324u;
    // 0x26e324: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x26E324u;
    {
        const bool branch_taken_0x26e324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E324u;
        // 0x26e328: 0xdfb10088  ld          $s1, 0x88($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e324) {
            ctx->pc = 0x26E79Cu;
            goto label_26e79c;
        }
    }
    ctx->pc = 0x26E32Cu;
label_26e32c:
    // 0x26e32c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e330: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x26E330u;
    {
        const bool branch_taken_0x26e330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E330u;
        // 0x26e334: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e330) {
            ctx->pc = 0x26E3ECu;
            goto label_26e3ec;
        }
    }
    ctx->pc = 0x26E338u;
    // 0x26e338: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x26E338u;
    {
        const bool branch_taken_0x26e338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E338u;
        // 0x26e33c: 0xdfb10088  ld          $s1, 0x88($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e338) {
            ctx->pc = 0x26E79Cu;
            goto label_26e79c;
        }
    }
    ctx->pc = 0x26E340u;
label_26e340:
    // 0x26e340: 0x8e650270  lw          $a1, 0x270($s3)
    ctx->pc = 0x26e340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x26e344: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e348: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x26e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x26e34c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e350: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x26e350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e354: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x26e354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x26e358: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x26e358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26e35c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x26e35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e360: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26e360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26e364: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x26e364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e368: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x26e368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26e36c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x26e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e370: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26E370u;
    SET_GPR_U32(ctx, 31, 0x26E378u);
    ctx->pc = 0x26E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E370u;
    // 0x26e374: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26E370u, 0x26E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E378u;
label_26e378:
    // 0x26e378: 0x8e620270  lw          $v0, 0x270($s3)
    ctx->pc = 0x26e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x26e37c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x26e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x26e380: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x26e380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e384: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x26E384u;
    SET_GPR_U32(ctx, 31, 0x26E38Cu);
    ctx->pc = 0x26E388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E384u;
    // 0x26e388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26E384u, 0x26E38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E38Cu;
label_26e38c:
    // 0x26e38c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E38Cu;
    {
        const bool branch_taken_0x26e38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E38Cu;
        // 0x26e390: 0x26030080  addiu       $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e38c) {
            ctx->pc = 0x26E3A0u;
            goto label_26e3a0;
        }
    }
    ctx->pc = 0x26E394u;
    // 0x26e394: 0xc0c4900  jal         func_312400
    ctx->pc = 0x26E394u;
    SET_GPR_U32(ctx, 31, 0x26E39Cu);
    ctx->pc = 0x26E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E394u;
    // 0x26e398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26E394u, 0x26E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E39Cu;
label_26e39c:
    // 0x26e39c: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x26e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26e3a0:
    // 0x26e3a0: 0x26620220  addiu       $v0, $s3, 0x220
    ctx->pc = 0x26e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
    // 0x26e3a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26e3a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e3a8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x26e3a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e3ac: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x26e3acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26e3b0: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x26e3b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x26e3b4: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x26e3b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x26e3b8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x26e3b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x26e3bc: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x26e3bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x26e3c0: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x26e3c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x26e3c4: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x26e3c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e3c8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x26e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e3cc: 0xc6610224  lwc1        $f1, 0x224($s3)
    ctx->pc = 0x26e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e3d0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x26e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e3d4: 0x8e630258  lw          $v1, 0x258($s3)
    ctx->pc = 0x26e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 600)));
    // 0x26e3d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26e3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e3dc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26e3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26e3e0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x26e3e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e3e4: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x26E3E4u;
    {
        const bool branch_taken_0x26e3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E3E4u;
        // 0x26e3e8: 0x7c620010  sq          $v0, 0x10($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3e4) {
            ctx->pc = 0x26E794u;
            goto label_26e794;
        }
    }
    ctx->pc = 0x26E3ECu;
label_26e3ec:
    // 0x26e3ec: 0x8e640270  lw          $a0, 0x270($s3)
    ctx->pc = 0x26e3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x26e3f0: 0x26710220  addiu       $s1, $s3, 0x220
    ctx->pc = 0x26e3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
    // 0x26e3f4: 0x26720230  addiu       $s2, $s3, 0x230
    ctx->pc = 0x26e3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
    // 0x26e3f8: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x26e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x26e3fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e400: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x26e400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e404: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x26e404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x26e408: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x26e408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26e40c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x26e40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e410: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26e410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26e414: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x26e414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e418: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x26e418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26e41c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x26e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e420: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26e420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x26e424: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x26e424u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e428: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x26e428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26e42c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26e42cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e430: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x26e430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e434: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x26e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26e438: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x26e438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e43c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x26e43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e440: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e444: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x26e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e448: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26e448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26e44c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e450: 0xc7a4005c  lwc1        $f4, 0x5C($sp)
    ctx->pc = 0x26e450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26e454: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x26e454u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26e458: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x26e458u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26e45c: 0x0  nop
    ctx->pc = 0x26e45cu;
    // NOP
    // 0x26e460: 0x0  nop
    ctx->pc = 0x26e460u;
    // NOP
    // 0x26e464: 0x46002143  div.s       $f5, $f4, $f0
    ctx->pc = 0x26e464u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x26e468: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26e468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26e46c: 0x0  nop
    ctx->pc = 0x26e46cu;
    // NOP
    // 0x26e470: 0x0  nop
    ctx->pc = 0x26e470u;
    // NOP
    // 0x26e474: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x26e474u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x26e478: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x26e478u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x26e47c: 0xe7a4004c  swc1        $f4, 0x4C($sp)
    ctx->pc = 0x26e47cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x26e480: 0x0  nop
    ctx->pc = 0x26e480u;
    // NOP
    // 0x26e484: 0x0  nop
    ctx->pc = 0x26e484u;
    // NOP
    // 0x26e488: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x26e488u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x26e48c: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x26e48cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x26e490: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x26e490u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26e494: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x26e494u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26e498: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26E498u;
    SET_GPR_U32(ctx, 31, 0x26E4A0u);
    ctx->pc = 0x26E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E498u;
    // 0x26e49c: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26E498u, 0x26E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E4A0u;
label_26e4a0:
    // 0x26e4a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26E4A0u;
    SET_GPR_U32(ctx, 31, 0x26E4A8u);
    ctx->pc = 0x26E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E4A0u;
    // 0x26e4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26E4A0u, 0x26E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E4A8u;
label_26e4a8:
    // 0x26e4a8: 0x8e640270  lw          $a0, 0x270($s3)
    ctx->pc = 0x26e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x26e4ac: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x26e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x26e4b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e4b4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x26e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x26e4b8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x26e4b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e4bc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26e4bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e4c0: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x26e4c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26e4c4: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x26e4c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x26e4c8: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x26e4c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x26e4cc: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x26e4ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x26e4d0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x26e4d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x26e4d4: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x26e4d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x26e4d8: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x26e4d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e4dc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x26e4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e4e0: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x26e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x26e4e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e4e8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x26e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x26e4ec: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x26e4ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26e4f0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26e4f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e4f4: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x26e4f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26e4f8: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x26e4f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x26e4fc: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x26e4fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x26e500: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x26e500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x26e504: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x26e504u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x26e508: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x26e508u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x26e50c: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x26e50cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e510: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x26e510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e514: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x26e514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e518: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26e518u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e51c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26e51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e520: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26e520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26e524: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26e524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e528: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26e528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e52c: 0x8e620260  lw          $v0, 0x260($s3)
    ctx->pc = 0x26e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x26e530: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26e530u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e534: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x26e534u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e538: 0x8e630260  lw          $v1, 0x260($s3)
    ctx->pc = 0x26e538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x26e53c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26e53cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e540: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x26e540u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e544: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x26E544u;
    {
        const bool branch_taken_0x26e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E544u;
        // 0x26e548: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e544) {
            ctx->pc = 0x26E798u;
            goto label_26e798;
        }
    }
    ctx->pc = 0x26E54Cu;
label_26e54c:
    // 0x26e54c: 0x8e630270  lw          $v1, 0x270($s3)
    ctx->pc = 0x26e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x26e550: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x26e550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x26e554: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26e554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e558: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x26e558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x26e55c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26e560: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26e560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e564: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x26e564u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e568: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26e568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e56c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x26e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e570: 0xc6600228  lwc1        $f0, 0x228($s3)
    ctx->pc = 0x26e570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e574: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x26e574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e578: 0xc6610220  lwc1        $f1, 0x220($s3)
    ctx->pc = 0x26e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e580: 0xc6740238  lwc1        $f20, 0x238($s3)
    ctx->pc = 0x26e580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26e584: 0xc6750230  lwc1        $f21, 0x230($s3)
    ctx->pc = 0x26e584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26e588: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x26e588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26e58c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x26e58cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x26e590: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x26e590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26e594: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x26e594u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x26e598: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x26e598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e59c: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x26e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26e5a0: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x26e5a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26e5a4: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x26e5a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26e5a8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x26e5a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26e5ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26E5ACu;
    SET_GPR_U32(ctx, 31, 0x26E5B4u);
    ctx->pc = 0x26E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E5ACu;
    // 0x26e5b0: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26E5ACu, 0x26E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E5B4u;
label_26e5b4:
    // 0x26e5b4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26E5B4u;
    SET_GPR_U32(ctx, 31, 0x26E5BCu);
    ctx->pc = 0x26E5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E5B4u;
    // 0x26e5b8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26E5B4u, 0x26E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E5BCu;
label_26e5bc:
    // 0x26e5bc: 0x8e640270  lw          $a0, 0x270($s3)
    ctx->pc = 0x26e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x26e5c0: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x26e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x26e5c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e5c8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x26e5c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26e5cc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x26e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x26e5d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26e5d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e5d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x26e5d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x26e5d8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26e5d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e5dc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x26e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e5e0: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x26e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x26e5e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e5e8: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x26e5e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26e5ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x26e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x26e5f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26e5f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e5f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x26e5f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x26e5f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26e5f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e5fc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x26e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e600: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x26e600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26e604: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26e604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e608: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x26e608u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e60c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26e60cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e610: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x26e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e614: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x26e614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26e618: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x26e618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e61c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x26e61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e620: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x26e620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e624: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x26e624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e628: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x26e628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e62c: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x26e62cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26e630: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x26e630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x26e634: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x26e634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x26e638: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x26e638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x26e63c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x26e63cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26e640: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26e640u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e644: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26e644u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e648: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x26e648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e64c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x26e64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26e650: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26e650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e654: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x26e654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e658: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x26e658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e65c: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x26e65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e660: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x26e660u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26e664: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x26e664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26e668: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x26e668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26e66c: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x26e66cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x26e670: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26e670u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e674: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26e674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e678: 0xc6610224  lwc1        $f1, 0x224($s3)
    ctx->pc = 0x26e678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e67c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x26e67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e680: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26e680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e684: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26e684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26e688: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26e688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e68c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x26e68cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e690: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26e690u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e694: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x26e694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e698: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x26e698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e69c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x26e69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e6a0: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x26e6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e6a4: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x26e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26e6a8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26e6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26e6ac: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x26e6acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x26e6b0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x26e6b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x26e6b4: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x26e6b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x26e6b8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x26e6b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26e6bc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26e6bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e6c0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26e6c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e6c4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x26e6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e6c8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x26e6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e6cc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x26e6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e6d0: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x26e6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e6d4: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x26e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26e6d8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26e6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26e6dc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x26e6dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26e6e0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x26e6e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26e6e4: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x26e6e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x26e6e8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26e6e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e6ec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26e6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e6f0: 0xc6610234  lwc1        $f1, 0x234($s3)
    ctx->pc = 0x26e6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e6f4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x26e6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e6f8: 0x8e66025c  lw          $a2, 0x25C($s3)
    ctx->pc = 0x26e6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x26e6fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26e6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e700: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x26e700u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e704: 0x24c70030  addiu       $a3, $a2, 0x30
    ctx->pc = 0x26e704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x26e708: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x26e708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x26e70c: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x26e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x26e710: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x26e710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26e714: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x26e714u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x26e718: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x26e718u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e71c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x26e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x26e720: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x26e720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26e724: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x26e724u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e728: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26e728u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e72c: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x26e72cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26e730: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x26e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e734: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x26e734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26e738: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x26e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26e73c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26e73cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x26e740: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26e740u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x26e744: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x26e744u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x26e748: 0x0  nop
    ctx->pc = 0x26e748u;
    // NOP
    // 0x26e74c: 0x0  nop
    ctx->pc = 0x26e74cu;
    // NOP
    // 0x26e750: 0x46010084  c1          0x10084
    ctx->pc = 0x26e750u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x26e754: 0xe4c10054  swc1        $f1, 0x54($a2)
    ctx->pc = 0x26e754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x26e758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26e758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e75c: 0x0  nop
    ctx->pc = 0x26e75cu;
    // NOP
    // 0x26e760: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26e760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e764: 0x0  nop
    ctx->pc = 0x26e764u;
    // NOP
    // 0x26e768: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x26E768u;
    {
        const bool branch_taken_0x26e768 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E768u;
        // 0x26e76c: 0xe4c20050  swc1        $f2, 0x50($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e768) {
            ctx->pc = 0x26E794u;
            goto label_26e794;
        }
    }
    ctx->pc = 0x26E770u;
    // 0x26e770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26e770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26e774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e778: 0x0  nop
    ctx->pc = 0x26e778u;
    // NOP
    // 0x26e77c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x26e77cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x26e780: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26e780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26e784: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x26e784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x26e788: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x26e788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x26e78c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26e78cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26e790: 0xf8c10040  sqc2        $vf1, 0x40($a2)
    ctx->pc = 0x26e790u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_26e794:
    // 0x26e794: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x26e794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26e798:
    // 0x26e798: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x26e798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_26e79c:
    // 0x26e79c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x26e79cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26e7a0: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x26e7a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x26e7a4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x26e7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26e7a8: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x26e7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26e7ac: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x26e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26e7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x26E7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7B0u;
        // 0x26e7b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E7B8u;
}
