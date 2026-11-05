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

// Function: sub_00248E20
// Address: 0x248e20 - 0x248ed0
void sub_00248E20_0x248e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248E20_0x248e20");
#endif

    switch (ctx->pc) {
        case 0x248e40u: goto label_248e40;
        case 0x248e50u: goto label_248e50;
        case 0x248eb0u: goto label_248eb0;
        default: break;
    }

    ctx->pc = 0x248e20u;

    // 0x248e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x248e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x248e24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e28: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x248e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x248e2c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x248e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x248e30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x248e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x248e38: 0xc08fc94  jal         func_23F250
    ctx->pc = 0x248E38u;
    SET_GPR_U32(ctx, 31, 0x248E40u);
    ctx->pc = 0x248E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E38u;
    // 0x248e3c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F250u, 0x248E38u, 0x248E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E40u;
label_248e40:
    // 0x248e40: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x248E40u;
    {
        const bool branch_taken_0x248e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E40u;
        // 0x248e44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e40) {
            ctx->pc = 0x248EB8u;
            goto label_248eb8;
        }
    }
    ctx->pc = 0x248E48u;
    // 0x248e48: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x248E48u;
    SET_GPR_U32(ctx, 31, 0x248E50u);
    ctx->pc = 0x248E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E48u;
    // 0x248e4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x248E48u, 0x248E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E50u;
label_248e50:
    // 0x248e50: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x248e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x248e54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x248e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248e58: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x248e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x248e5c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x248e5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248e60: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x248e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x248e64: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x248e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x248e68: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248e6c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x248e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x248e70: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x248e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x248e74: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x248e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x248e78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248e78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248e7c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x248e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x248e80: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x248e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x248e84: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x248e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x248e88: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x248e88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x248e8c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x248e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x248e90: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248e90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248e94: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x248e94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248e98: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x248e98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x248e9c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x248e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x248ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ea4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x248ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x248ea8: 0xc08fccc  jal         func_23F330
    ctx->pc = 0x248EA8u;
    SET_GPR_U32(ctx, 31, 0x248EB0u);
    ctx->pc = 0x248EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248EA8u;
    // 0x248eac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F330u, 0x248EA8u, 0x248EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EB0u;
label_248eb0:
    // 0x248eb0: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x248eb0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x248eb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x248eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_248eb8:
    // 0x248eb8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x248eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248ebc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x248ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248ec0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x248ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x248ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x248EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248EC4u;
        // 0x248ec8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248ECCu;
    // 0x248ecc: 0x0  nop
    ctx->pc = 0x248eccu;
    // NOP
    ctx->pc = 0x248ed0u;
}
