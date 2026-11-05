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

// Function: sub_001C27C0
// Address: 0x1c27c0 - 0x1c2870
void sub_001C27C0_0x1c27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C27C0_0x1c27c0");
#endif

    switch (ctx->pc) {
        case 0x1c27fcu: goto label_1c27fc;
        case 0x1c280cu: goto label_1c280c;
        case 0x1c283cu: goto label_1c283c;
        default: break;
    }

    ctx->pc = 0x1c27c0u;

    // 0x1c27c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c27c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c27c4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c27c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c27c8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c27cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c27ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27d0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c27d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c27d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c27d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27d8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c27d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c27dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c27dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27e0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c27e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c27e4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c27e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c27e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c27ec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c27ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c27f0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c27f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c27f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C27F4u;
    SET_GPR_U32(ctx, 31, 0x1C27FCu);
    ctx->pc = 0x1C27F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27F4u;
    // 0x1c27f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C27F4u, 0x1C27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27FCu;
label_1c27fc:
    // 0x1c27fc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c27fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c2800: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c2800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2804: 0xc06fb06  jal         func_1BEC18
    ctx->pc = 0x1C2804u;
    SET_GPR_U32(ctx, 31, 0x1C280Cu);
    ctx->pc = 0x1C2808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2804u;
    // 0x1c2808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC18u, 0x1C2804u, 0x1C280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C280Cu;
label_1c280c:
    // 0x1c280c: 0x264301e0  addiu       $v1, $s2, 0x1E0
    ctx->pc = 0x1c280cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x1c2810: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c2810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2814: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1c2814u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2818: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2818u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c281c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c281cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2824: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c2824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2828: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c2828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c282c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c282cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c2830: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1c2830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2834: 0xc070a48  jal         func_1C2920
    ctx->pc = 0x1C2834u;
    SET_GPR_U32(ctx, 31, 0x1C283Cu);
    ctx->pc = 0x1C2838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2834u;
    // 0x1c2838: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2920u, 0x1C2834u, 0x1C283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C283Cu;
label_1c283c:
    // 0x1c283c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c283cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c2840: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c2840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2844: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x1c2844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x1c2848: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c2848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c284c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c284cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2850: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c2850u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c2854: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c2854u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2858: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c2858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c285c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c2860: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1c2860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1c2864: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2864u;
        // 0x1c2868: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C286Cu;
    // 0x1c286c: 0x0  nop
    ctx->pc = 0x1c286cu;
    // NOP
    ctx->pc = 0x1c2870u;
}
