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

// Function: sub_001E5800
// Address: 0x1e5800 - 0x1e5880
void sub_001E5800_0x1e5800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5800_0x1e5800");
#endif

    switch (ctx->pc) {
        case 0x1e5820u: goto label_1e5820;
        default: break;
    }

    ctx->pc = 0x1e5800u;

    // 0x1e5800: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1e5800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5804: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x1e5804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1e5808: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E5808u;
    {
        const bool branch_taken_0x1e5808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5808) {
            ctx->pc = 0x1E5874u;
            goto label_1e5874;
        }
    }
    ctx->pc = 0x1E5810u;
    // 0x1e5810: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1e5810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1e5814: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E5814u;
    {
        const bool branch_taken_0x1e5814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5814u;
        // 0x1e5818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5814) {
            ctx->pc = 0x1E586Cu;
            goto label_1e586c;
        }
    }
    ctx->pc = 0x1E581Cu;
    // 0x1e581c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e581cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e5820:
    // 0x1e5820: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x1e5820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1e5824: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1e5824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1e5828: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1e5828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e582c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e582cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e5830: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e5830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5834: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1e5834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e5838: 0xd8c30010  lqc2        $vf3, 0x10($a2)
    ctx->pc = 0x1e5838u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e583c: 0xd8c40020  lqc2        $vf4, 0x20($a2)
    ctx->pc = 0x1e583cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1e5840: 0xd8c50030  lqc2        $vf5, 0x30($a2)
    ctx->pc = 0x1e5840u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1e5844: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e5844u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e5848: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e5848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e584c: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1e584cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e5850: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1e5850u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5854: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e5854u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5858: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1e5858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1e585c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e585cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e5860: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1e5860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5864: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1E5864u;
    {
        const bool branch_taken_0x1e5864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5864) {
            ctx->pc = 0x1E5868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5864u;
            // 0x1e5868: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5820;
        }
    }
    ctx->pc = 0x1E586Cu;
label_1e586c:
    // 0x1e586c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5870: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x1e5870u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_1e5874:
    // 0x1e5874: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E587Cu;
    // 0x1e587c: 0x0  nop
    ctx->pc = 0x1e587cu;
    // NOP
    ctx->pc = 0x1e5880u;
}
