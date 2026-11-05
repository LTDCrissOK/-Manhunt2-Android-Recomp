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

// Function: sub_002DE200
// Address: 0x2de200 - 0x2de2b8
void sub_002DE200_0x2de200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE200_0x2de200");
#endif

    switch (ctx->pc) {
        case 0x2de234u: goto label_2de234;
        case 0x2de240u: goto label_2de240;
        case 0x2de248u: goto label_2de248;
        case 0x2de258u: goto label_2de258;
        case 0x2de294u: goto label_2de294;
        default: break;
    }

    ctx->pc = 0x2de200u;

    // 0x2de200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de204: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2de204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2de208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de20c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2de20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2de210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2de210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de214: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2de214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2de218: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2de218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de21c: 0x24535ad0  addiu       $s3, $v0, 0x5AD0
    ctx->pc = 0x2de21cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 23248));
    // 0x2de220: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2de220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2de224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2de224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2de228: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2de228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2de22c: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x2DE22Cu;
    SET_GPR_U32(ctx, 31, 0x2DE234u);
    ctx->pc = 0x2DE230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE22Cu;
    // 0x2de230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2DE22Cu, 0x2DE234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE234u;
label_2de234:
    // 0x2de234: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2de234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de238: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DE238u;
    SET_GPR_U32(ctx, 31, 0x2DE240u);
    ctx->pc = 0x2DE23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE238u;
    // 0x2de23c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DE238u, 0x2DE240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE240u;
label_2de240:
    // 0x2de240: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DE240u;
    SET_GPR_U32(ctx, 31, 0x2DE248u);
    ctx->pc = 0x2DE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE240u;
    // 0x2de244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DE240u, 0x2DE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE248u;
label_2de248:
    // 0x2de248: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x2de248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2de24c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2de24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de250: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x2DE250u;
    SET_GPR_U32(ctx, 31, 0x2DE258u);
    ctx->pc = 0x2DE254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE250u;
    // 0x2de254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x2DE250u, 0x2DE258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE258u;
label_2de258:
    // 0x2de258: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2de258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2de25c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2de25cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2de260: 0xda430010  lqc2        $vf3, 0x10($s2)
    ctx->pc = 0x2de260u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2de264: 0xda440020  lqc2        $vf4, 0x20($s2)
    ctx->pc = 0x2de264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2de268: 0xda450030  lqc2        $vf5, 0x30($s2)
    ctx->pc = 0x2de268u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2de26c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2de26cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2de270: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2de270u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2de274: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2de274u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2de278: 0xfa050090  sqc2        $vf5, 0x90($s0)
    ctx->pc = 0x2de278u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2de27c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2de27cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2de280: 0xfa0100a0  sqc2        $vf1, 0xA0($s0)
    ctx->pc = 0x2de280u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de284: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE284u;
    {
        const bool branch_taken_0x2de284 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE284u;
        // 0x2de288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de284) {
            ctx->pc = 0x2DE294u;
            goto label_2de294;
        }
    }
    ctx->pc = 0x2DE28Cu;
    // 0x2de28c: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2DE28Cu;
    SET_GPR_U32(ctx, 31, 0x2DE294u);
    ctx->pc = 0x2DE290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE28Cu;
    // 0x2de290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2DE28Cu, 0x2DE294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE294u;
label_2de294:
    // 0x2de294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de298: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2de298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de29c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2de29cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de2a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2de2a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2de2a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2de2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2A8u;
        // 0x2de2ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE2B0u;
    // 0x2de2b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2de2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2de2b4: 0x0  nop
    ctx->pc = 0x2de2b4u;
    // NOP
    ctx->pc = 0x2de2b8u;
}
