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

// Function: sub_00344CC8
// Address: 0x344cc8 - 0x344d58
void sub_00344CC8_0x344cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344CC8_0x344cc8");
#endif

    switch (ctx->pc) {
        case 0x344cecu: goto label_344cec;
        case 0x344d00u: goto label_344d00;
        default: break;
    }

    ctx->pc = 0x344cc8u;

    // 0x344cc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x344cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x344ccc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x344cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x344cd0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x344cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x344cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344cd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x344cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x344cdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x344cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344ce4: 0xc0d122c  jal         func_3448B0
    ctx->pc = 0x344CE4u;
    SET_GPR_U32(ctx, 31, 0x344CECu);
    ctx->pc = 0x344CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344CE4u;
    // 0x344ce8: 0xc60c0070  lwc1        $f12, 0x70($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448B0u, 0x344CE4u, 0x344CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344CECu;
label_344cec:
    // 0x344cec: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x344cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x344cf0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x344CF0u;
    {
        const bool branch_taken_0x344cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CF0u;
        // 0x344cf4: 0x26020050  addiu       $v0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cf0) {
            ctx->pc = 0x344D30u;
            goto label_344d30;
        }
    }
    ctx->pc = 0x344CF8u;
    // 0x344cf8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344CF8u;
    SET_GPR_U32(ctx, 31, 0x344D00u);
    ctx->pc = 0x344CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344CF8u;
    // 0x344cfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344CF8u, 0x344D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D00u;
label_344d00:
    // 0x344d00: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x344d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x344d04: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x344d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x344d08: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x344d08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344d0c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x344d0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344d10: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x344d10u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x344d14: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x344d14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x344d18: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x344d18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x344d1c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x344d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344d20: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x344d20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344d24: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x344d24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344d28: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x344d28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344d2c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x344d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_344d30:
    // 0x344d30: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x344d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x344d34: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x344d34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344d38: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x344d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344d3c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x344d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344d40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x344d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344d44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x344d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344d48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x344d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x344D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D4Cu;
        // 0x344d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344D54u;
    // 0x344d54: 0x0  nop
    ctx->pc = 0x344d54u;
    // NOP
    ctx->pc = 0x344d58u;
}
