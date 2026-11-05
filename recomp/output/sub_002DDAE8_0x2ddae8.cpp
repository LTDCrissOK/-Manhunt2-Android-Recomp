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

// Function: sub_002DDAE8
// Address: 0x2ddae8 - 0x2ddb90
void sub_002DDAE8_0x2ddae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDAE8_0x2ddae8");
#endif

    switch (ctx->pc) {
        case 0x2ddb18u: goto label_2ddb18;
        case 0x2ddb5cu: goto label_2ddb5c;
        case 0x2ddb70u: goto label_2ddb70;
        default: break;
    }

    ctx->pc = 0x2ddae8u;

    // 0x2ddae8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ddae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ddaec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ddaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ddaf0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ddaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ddaf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ddaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddaf8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ddaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ddafc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ddafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb00: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ddb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2ddb04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ddb04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ddb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ddb0c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ddb0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb10: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2DDB10u;
    SET_GPR_U32(ctx, 31, 0x2DDB18u);
    ctx->pc = 0x2DDB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB10u;
    // 0x2ddb14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DDB10u, 0x2DDB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB18u;
label_2ddb18:
    // 0x2ddb18: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2ddb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ddb1c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2ddb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2ddb20: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DDB20u;
    {
        const bool branch_taken_0x2ddb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb20) {
            ctx->pc = 0x2DDB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDB20u;
            // 0x2ddb24: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDB74u;
            goto label_2ddb74;
        }
    }
    ctx->pc = 0x2DDB28u;
    // 0x2ddb28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ddb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ddb2c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2ddb2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ddb30: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2ddb30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddb34: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2ddb34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ddb38: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2ddb38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ddb3c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2ddb3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ddb40: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2ddb40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddb44: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2ddb44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddb48: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2ddb48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ddb4c: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2ddb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ddb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ddb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb54: 0xc0b71e0  jal         func_2DC780
    ctx->pc = 0x2DDB54u;
    SET_GPR_U32(ctx, 31, 0x2DDB5Cu);
    ctx->pc = 0x2DDB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB54u;
    // 0x2ddb58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC780u, 0x2DDB54u, 0x2DDB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB5Cu;
label_2ddb5c:
    // 0x2ddb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ddb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ddb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ddb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb68: 0xc0b76e4  jal         func_2DDB90
    ctx->pc = 0x2DDB68u;
    SET_GPR_U32(ctx, 31, 0x2DDB70u);
    ctx->pc = 0x2DDB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB68u;
    // 0x2ddb6c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDB90u, 0x2DDB68u, 0x2DDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB70u;
label_2ddb70:
    // 0x2ddb70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ddb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ddb74:
    // 0x2ddb74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ddb74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ddb78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ddb78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddb7c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ddb7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ddb80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ddb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddb84: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB84u;
        // 0x2ddb88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDB8Cu;
    // 0x2ddb8c: 0x0  nop
    ctx->pc = 0x2ddb8cu;
    // NOP
    ctx->pc = 0x2ddb90u;
}
