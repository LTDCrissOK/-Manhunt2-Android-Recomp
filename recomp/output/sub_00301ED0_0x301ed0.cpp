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

// Function: sub_00301ED0
// Address: 0x301ed0 - 0x301f90
void sub_00301ED0_0x301ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301ED0_0x301ed0");
#endif

    switch (ctx->pc) {
        case 0x301f18u: goto label_301f18;
        default: break;
    }

    ctx->pc = 0x301ed0u;

    // 0x301ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x301ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x301ed4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x301ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x301ed8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x301ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x301edc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x301edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x301ee0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x301ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x301ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x301ee8: 0x24515870  addiu       $s1, $v0, 0x5870
    ctx->pc = 0x301ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x301eec: 0x8e230330  lw          $v1, 0x330($s1)
    ctx->pc = 0x301eecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x595BA0u));
    // 0x301ef0: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x301ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x301ef4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x301ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301ef8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x301ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x301efc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x301efcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301f00: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x301f00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x301f04: 0x92230334  lbu         $v1, 0x334($s1)
    ctx->pc = 0x301f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x595BA4u));
    // 0x301f08: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x301F08u;
    {
        const bool branch_taken_0x301f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x301F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F08u;
        // 0x301f0c: 0x26220340  addiu       $v0, $s1, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f08) {
            ctx->pc = 0x301F68u;
            goto label_301f68;
        }
    }
    ctx->pc = 0x301F10u;
    // 0x301f10: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x301F10u;
    SET_GPR_U32(ctx, 31, 0x301F18u);
    ctx->pc = 0x301F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F10u;
    // 0x301f14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x301F10u, 0x301F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F18u;
label_301f18:
    // 0x301f18: 0x8e240330  lw          $a0, 0x330($s1)
    ctx->pc = 0x301f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x301f1c: 0x26250340  addiu       $a1, $s1, 0x340
    ctx->pc = 0x301f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x301f20: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x301f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x301f24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x301f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x301f28: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x301f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x301f2c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x301f2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x301f30: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x301f30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301f34: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x301f34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x301f38: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x301f38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x301f3c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x301f3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x301f40: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x301f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301f44: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x301f44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x301f48: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x301f48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x301f4c: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x301f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x301f50: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x301f50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x301f54: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x301f54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301f58: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x301f58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x301f5c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x301f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x301f60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x301F60u;
    {
        const bool branch_taken_0x301f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F60u;
        // 0x301f64: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f60) {
            ctx->pc = 0x301F7Cu;
            goto label_301f7c;
        }
    }
    ctx->pc = 0x301F68u;
label_301f68:
    // 0x301f68: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x301f68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x301f6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x301f6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301f70: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x301f70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x301f74: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x301f74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x301f78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x301f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_301f7c:
    // 0x301f7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x301f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x301f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301f84: 0x3e00008  jr          $ra
    ctx->pc = 0x301F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F84u;
        // 0x301f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301F8Cu;
    // 0x301f8c: 0x0  nop
    ctx->pc = 0x301f8cu;
    // NOP
    ctx->pc = 0x301f90u;
}
