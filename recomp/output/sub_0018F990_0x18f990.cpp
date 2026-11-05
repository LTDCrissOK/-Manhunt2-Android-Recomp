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

// Function: sub_0018F990
// Address: 0x18f990 - 0x18fa68
void sub_0018F990_0x18f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F990_0x18f990");
#endif

    switch (ctx->pc) {
        case 0x18fa50u: goto label_18fa50;
        case 0x18fa5cu: goto label_18fa5c;
        default: break;
    }

    ctx->pc = 0x18f990u;

    // 0x18f990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f994: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18f994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f998: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F998u;
    {
        const bool branch_taken_0x18f998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F998u;
        // 0x18f99c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f998) {
            ctx->pc = 0x18F9B0u;
            goto label_18f9b0;
        }
    }
    ctx->pc = 0x18F9A0u;
    // 0x18f9a0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18f9a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f9a4: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x18f9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18f9a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18F9A8u;
    {
        const bool branch_taken_0x18f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9A8u;
        // 0x18f9ac: 0xc4c00010  lwc1        $f0, 0x10($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9a8) {
            ctx->pc = 0x18F9CCu;
            goto label_18f9cc;
        }
    }
    ctx->pc = 0x18F9B0u;
label_18f9b0:
    // 0x18f9b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18f9b4: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x18f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x18f9b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18f9bc: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x18f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x18f9c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x18f9c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f9c4: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x18f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18f9c8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x18f9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f9cc:
    // 0x18f9cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18f9ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f9d0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x18f9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x18f9d4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x18f9d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x18f9d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18f9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f9dc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18f9dcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x18f9e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18f9e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f9e4: 0x0  nop
    ctx->pc = 0x18f9e4u;
    // NOP
    // 0x18f9e8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x18F9E8u;
    {
        const bool branch_taken_0x18f9e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9E8u;
        // 0x18f9ec: 0x24c20010  addiu       $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9e8) {
            ctx->pc = 0x18FA20u;
            goto label_18fa20;
        }
    }
    ctx->pc = 0x18F9F0u;
    // 0x18f9f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18f9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f9f4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18f9f4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x18f9f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18f9f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f9fc: 0x0  nop
    ctx->pc = 0x18f9fcu;
    // NOP
    // 0x18fa00: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x18FA00u;
    {
        const bool branch_taken_0x18fa00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fa00) {
            ctx->pc = 0x18FA20u;
            goto label_18fa20;
        }
    }
    ctx->pc = 0x18FA08u;
    // 0x18fa08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fa0c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18fa0cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x18fa10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18fa10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fa14: 0x0  nop
    ctx->pc = 0x18fa14u;
    // NOP
    // 0x18fa18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18FA18u;
    {
        const bool branch_taken_0x18fa18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fa18) {
            ctx->pc = 0x18FA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FA18u;
            // 0x18fa1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FA20u;
            goto label_18fa20;
        }
    }
    ctx->pc = 0x18FA20u;
label_18fa20:
    // 0x18fa20: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18FA20u;
    {
        const bool branch_taken_0x18fa20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fa20) {
            ctx->pc = 0x18FA48u;
            goto label_18fa48;
        }
    }
    ctx->pc = 0x18FA28u;
    // 0x18fa28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18fa28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fa2c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x18fa2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18fa30: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x18fa30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18fa34: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x18fa34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18fa38: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x18fa38u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x18fa3c: 0x4a0003bf  vwaitq
    ctx->pc = 0x18fa3cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18fa40: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x18fa40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18fa44: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x18fa44u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_18fa48:
    // 0x18fa48: 0xc061a16  jal         func_186858
    ctx->pc = 0x18FA48u;
    SET_GPR_U32(ctx, 31, 0x18FA50u);
    ctx->pc = 0x18FA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FA48u;
    // 0x18fa4c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18FA48u, 0x18FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FA50u;
label_18fa50:
    // 0x18fa50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18fa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fa54: 0xc06ee5c  jal         func_1BB970
    ctx->pc = 0x18FA54u;
    SET_GPR_U32(ctx, 31, 0x18FA5Cu);
    ctx->pc = 0x18FA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FA54u;
    // 0x18fa58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB970u, 0x18FA54u, 0x18FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FA5Cu;
label_18fa5c:
    // 0x18fa5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fa60: 0x3e00008  jr          $ra
    ctx->pc = 0x18FA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA60u;
        // 0x18fa64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FA68u;
}
