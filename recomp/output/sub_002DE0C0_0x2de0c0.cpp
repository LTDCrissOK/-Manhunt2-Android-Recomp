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

// Function: sub_002DE0C0
// Address: 0x2de0c0 - 0x2de1a0
void sub_002DE0C0_0x2de0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE0C0_0x2de0c0");
#endif

    switch (ctx->pc) {
        case 0x2de0e8u: goto label_2de0e8;
        case 0x2de124u: goto label_2de124;
        default: break;
    }

    ctx->pc = 0x2de0c0u;

    // 0x2de0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de0c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2de0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2de0c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2de0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de0cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2de0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2de0d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2de0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2de0d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2de0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de0d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2de0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de0dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2de0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2de0e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2DE0E0u;
    SET_GPR_U32(ctx, 31, 0x2DE0E8u);
    ctx->pc = 0x2DE0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE0E0u;
    // 0x2de0e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DE0E0u, 0x2DE0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0E8u;
label_2de0e8:
    // 0x2de0e8: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x2de0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2de0ec: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2de0ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2de0f0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2de0f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de0f4: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2de0f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2de0f8: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2de0f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2de0fc: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2de0fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2de100: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2de100u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2de104: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2de104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2de108: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2de108u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2de10c: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2de10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2de110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de114: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2de114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de118: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2de118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de11c: 0xc0b7808  jal         func_2DE020
    ctx->pc = 0x2DE11Cu;
    SET_GPR_U32(ctx, 31, 0x2DE124u);
    ctx->pc = 0x2DE120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE11Cu;
    // 0x2de120: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE020u, 0x2DE11Cu, 0x2DE124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE124u;
label_2de124:
    // 0x2de124: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2de124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de128: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2de128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2de12c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2de12cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de130: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2de130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2de134: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE134u;
        // 0x2de138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE13Cu;
    // 0x2de13c: 0x0  nop
    ctx->pc = 0x2de13cu;
    // NOP
    // 0x2de140: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2de140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2de144: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2de144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2de148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2de148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de14c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x2de14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de150: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2de150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de154: 0x0  nop
    ctx->pc = 0x2de154u;
    // NOP
    // 0x2de158: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE158u;
    {
        const bool branch_taken_0x2de158 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE158u;
        // 0x2de15c: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de158) {
            ctx->pc = 0x2DE168u;
            goto label_2de168;
        }
    }
    ctx->pc = 0x2DE160u;
    // 0x2de160: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2de160u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de164: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x2de164u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2de168:
    // 0x2de168: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE170u;
    // 0x2de170: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2de170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2de174: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2de174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2de178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2de178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de17c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x2de17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de180: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2de180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de184: 0x0  nop
    ctx->pc = 0x2de184u;
    // NOP
    // 0x2de188: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE188u;
    {
        const bool branch_taken_0x2de188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE188u;
        // 0x2de18c: 0x24820060  addiu       $v0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de188) {
            ctx->pc = 0x2DE198u;
            goto label_2de198;
        }
    }
    ctx->pc = 0x2DE190u;
    // 0x2de190: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2de190u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de194: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x2de194u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2de198:
    // 0x2de198: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE1A0u;
}
