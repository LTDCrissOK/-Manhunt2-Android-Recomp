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

// Function: sub_001C23B8
// Address: 0x1c23b8 - 0x1c2468
void sub_001C23B8_0x1c23b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C23B8_0x1c23b8");
#endif

    switch (ctx->pc) {
        case 0x1c23f4u: goto label_1c23f4;
        case 0x1c2404u: goto label_1c2404;
        case 0x1c2434u: goto label_1c2434;
        default: break;
    }

    ctx->pc = 0x1c23b8u;

    // 0x1c23b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c23b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c23bc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c23bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c23c0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c23c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c23c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c23c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23c8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c23c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c23cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c23ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23d0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c23d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c23d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c23d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23d8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c23d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c23dc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c23dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23e0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c23e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c23e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c23e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c23e8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c23e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c23ec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C23ECu;
    SET_GPR_U32(ctx, 31, 0x1C23F4u);
    ctx->pc = 0x1C23F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23ECu;
    // 0x1c23f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C23ECu, 0x1C23F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23F4u;
label_1c23f4:
    // 0x1c23f4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c23f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c23f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c23f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23fc: 0xc06fb06  jal         func_1BEC18
    ctx->pc = 0x1C23FCu;
    SET_GPR_U32(ctx, 31, 0x1C2404u);
    ctx->pc = 0x1C2400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23FCu;
    // 0x1c2400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC18u, 0x1C23FCu, 0x1C2404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2404u;
label_1c2404:
    // 0x1c2404: 0x264301e0  addiu       $v1, $s2, 0x1E0
    ctx->pc = 0x1c2404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x1c2408: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c2408u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c240c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1c240cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2410: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2410u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2414: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c241c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c241cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2420: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c2420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2424: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c2424u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c2428: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1c2428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c242c: 0xc070946  jal         func_1C2518
    ctx->pc = 0x1C242Cu;
    SET_GPR_U32(ctx, 31, 0x1C2434u);
    ctx->pc = 0x1C2430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C242Cu;
    // 0x1c2430: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2518u, 0x1C242Cu, 0x1C2434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2434u;
label_1c2434:
    // 0x1c2434: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c2434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c2438: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c2438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c243c: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x1c243cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x1c2440: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c2440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2444: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c2444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2448: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c2448u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c244c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c244cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2450: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c2450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c2454: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c2454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c2458: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1c2458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1c245c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C245Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C245Cu;
        // 0x1c2460: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C245Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2464u;
    // 0x1c2464: 0x0  nop
    ctx->pc = 0x1c2464u;
    // NOP
    ctx->pc = 0x1c2468u;
}
