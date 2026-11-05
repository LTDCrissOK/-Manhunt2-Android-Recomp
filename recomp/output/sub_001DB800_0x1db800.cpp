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

// Function: sub_001DB800
// Address: 0x1db800 - 0x1db8e0
void sub_001DB800_0x1db800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB800_0x1db800");
#endif

    switch (ctx->pc) {
        case 0x1db828u: goto label_1db828;
        case 0x1db830u: goto label_1db830;
        case 0x1db844u: goto label_1db844;
        case 0x1db84cu: goto label_1db84c;
        case 0x1db89cu: goto label_1db89c;
        case 0x1db8a4u: goto label_1db8a4;
        case 0x1db8c4u: goto label_1db8c4;
        case 0x1db8ccu: goto label_1db8cc;
        default: break;
    }

    ctx->pc = 0x1db800u;

    // 0x1db800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db808: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db80c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db810: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1db810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1db814: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1db814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1db818: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB818u;
    {
        const bool branch_taken_0x1db818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db818) {
            ctx->pc = 0x1DB828u;
            goto label_1db828;
        }
    }
    ctx->pc = 0x1DB820u;
    // 0x1db820: 0xc07981e  jal         func_1E6078
    ctx->pc = 0x1DB820u;
    SET_GPR_U32(ctx, 31, 0x1DB828u);
    ctx->pc = 0x1E6078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6078u, 0x1DB820u, 0x1DB828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB828u;
label_1db828:
    // 0x1db828: 0xc0f75b6  jal         func_3DD6D8
    ctx->pc = 0x1DB828u;
    SET_GPR_U32(ctx, 31, 0x1DB830u);
    ctx->pc = 0x1DB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB828u;
    // 0x1db82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD6D8u, 0x1DB828u, 0x1DB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB830u;
label_1db830:
    // 0x1db830: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1db830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1db834: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB834u;
    {
        const bool branch_taken_0x1db834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db834) {
            ctx->pc = 0x1DB838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB834u;
            // 0x1db838: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB850u;
            goto label_1db850;
        }
    }
    ctx->pc = 0x1DB83Cu;
    // 0x1db83c: 0xc0f75b6  jal         func_3DD6D8
    ctx->pc = 0x1DB83Cu;
    SET_GPR_U32(ctx, 31, 0x1DB844u);
    ctx->pc = 0x1DB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB83Cu;
    // 0x1db840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD6D8u, 0x1DB83Cu, 0x1DB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB844u;
label_1db844:
    // 0x1db844: 0xc07ab5e  jal         func_1EAD78
    ctx->pc = 0x1DB844u;
    SET_GPR_U32(ctx, 31, 0x1DB84Cu);
    ctx->pc = 0x1DB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB844u;
    // 0x1db848: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD78u, 0x1DB844u, 0x1DB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB84Cu;
label_1db84c:
    // 0x1db84c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1db84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1db850:
    // 0x1db850: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1db850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1db854: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db858: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1db858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db85c: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x1db85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1db860: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1db860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1db864: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1db864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db868: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1db868u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db86c: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x1db86cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1db870: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x1db870u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1db874: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x1db874u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1db878: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1db878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1db87c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1db87cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1db880: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1db880u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1db884: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1db884u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1db888: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1db888u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1db88c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1db88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db894: 0xc076580  jal         func_1D9600
    ctx->pc = 0x1DB894u;
    SET_GPR_U32(ctx, 31, 0x1DB89Cu);
    ctx->pc = 0x1DB898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB894u;
    // 0x1db898: 0xe4c00020  swc1        $f0, 0x20($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9600u, 0x1DB894u, 0x1DB89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB89Cu;
label_1db89c:
    // 0x1db89c: 0xc0763c2  jal         func_1D8F08
    ctx->pc = 0x1DB89Cu;
    SET_GPR_U32(ctx, 31, 0x1DB8A4u);
    ctx->pc = 0x1DB8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB89Cu;
    // 0x1db8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8F08u, 0x1DB89Cu, 0x1DB8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB8A4u;
label_1db8a4:
    // 0x1db8a4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1db8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1db8a8: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x1db8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1db8ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB8ACu;
    {
        const bool branch_taken_0x1db8ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db8ac) {
            ctx->pc = 0x1DB8C4u;
            goto label_1db8c4;
        }
    }
    ctx->pc = 0x1DB8B4u;
    // 0x1db8b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1db8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db8b8: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1db8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1db8bc: 0xc079482  jal         func_1E5208
    ctx->pc = 0x1DB8BCu;
    SET_GPR_U32(ctx, 31, 0x1DB8C4u);
    ctx->pc = 0x1DB8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB8BCu;
    // 0x1db8c0: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5208u, 0x1DB8BCu, 0x1DB8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB8C4u;
label_1db8c4:
    // 0x1db8c4: 0xc0767e2  jal         func_1D9F88
    ctx->pc = 0x1DB8C4u;
    SET_GPR_U32(ctx, 31, 0x1DB8CCu);
    ctx->pc = 0x1DB8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB8C4u;
    // 0x1db8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F88u, 0x1DB8C4u, 0x1DB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB8CCu;
label_1db8cc:
    // 0x1db8cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db8d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8D4u;
        // 0x1db8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB8DCu;
    // 0x1db8dc: 0x0  nop
    ctx->pc = 0x1db8dcu;
    // NOP
    ctx->pc = 0x1db8e0u;
}
