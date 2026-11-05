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

// Function: sub_001C2870
// Address: 0x1c2870 - 0x1c2920
void sub_001C2870_0x1c2870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2870_0x1c2870");
#endif

    switch (ctx->pc) {
        case 0x1c28acu: goto label_1c28ac;
        case 0x1c28bcu: goto label_1c28bc;
        case 0x1c28ecu: goto label_1c28ec;
        default: break;
    }

    ctx->pc = 0x1c2870u;

    // 0x1c2870: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c2870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c2874: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c2874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c2878: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c2878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c287c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c287cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2880: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c2880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c2884: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c2884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2888: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c2888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c288c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c288cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2890: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c2890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c2894: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c2894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2898: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c2898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c289c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c289cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c28a0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c28a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c28a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C28A4u;
    SET_GPR_U32(ctx, 31, 0x1C28ACu);
    ctx->pc = 0x1C28A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28A4u;
    // 0x1c28a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C28A4u, 0x1C28ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28ACu;
label_1c28ac:
    // 0x1c28ac: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c28acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c28b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c28b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28b4: 0xc06fb06  jal         func_1BEC18
    ctx->pc = 0x1C28B4u;
    SET_GPR_U32(ctx, 31, 0x1C28BCu);
    ctx->pc = 0x1C28B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28B4u;
    // 0x1c28b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC18u, 0x1C28B4u, 0x1C28BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28BCu;
label_1c28bc:
    // 0x1c28bc: 0x264301e0  addiu       $v1, $s2, 0x1E0
    ctx->pc = 0x1c28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x1c28c0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c28c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c28c4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1c28c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c28c8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c28c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c28cc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c28d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c28d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c28d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c28d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c28dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c28e0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1c28e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28e4: 0xc070a48  jal         func_1C2920
    ctx->pc = 0x1C28E4u;
    SET_GPR_U32(ctx, 31, 0x1C28ECu);
    ctx->pc = 0x1C28E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28E4u;
    // 0x1c28e8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2920u, 0x1C28E4u, 0x1C28ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28ECu;
label_1c28ec:
    // 0x1c28ec: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c28f0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c28f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c28f4: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x1c28f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x1c28f8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c28f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c28fc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c28fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2900: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c2900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c2904: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c2904u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2908: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c2908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c290c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c2910: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1c2910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1c2914: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2914u;
        // 0x1c2918: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C291Cu;
    // 0x1c291c: 0x0  nop
    ctx->pc = 0x1c291cu;
    // NOP
    ctx->pc = 0x1c2920u;
}
