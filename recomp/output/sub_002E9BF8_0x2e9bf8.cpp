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

// Function: sub_002E9BF8
// Address: 0x2e9bf8 - 0x2e9cf8
void sub_002E9BF8_0x2e9bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9BF8_0x2e9bf8");
#endif

    switch (ctx->pc) {
        case 0x2e9c18u: goto label_2e9c18;
        case 0x2e9c24u: goto label_2e9c24;
        case 0x2e9c34u: goto label_2e9c34;
        case 0x2e9c3cu: goto label_2e9c3c;
        case 0x2e9cd0u: goto label_2e9cd0;
        case 0x2e9cd8u: goto label_2e9cd8;
        default: break;
    }

    ctx->pc = 0x2e9bf8u;

    // 0x2e9bf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e9bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e9bfc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2e9bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2e9c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c04: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2e9c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2e9c08: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2e9c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2e9c0c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2e9c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2e9c10: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x2E9C10u;
    SET_GPR_U32(ctx, 31, 0x2E9C18u);
    ctx->pc = 0x2E9C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C10u;
    // 0x2e9c14: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x2E9C10u, 0x2E9C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C18u;
label_2e9c18:
    // 0x2e9c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c1c: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x2E9C1Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C24u);
    ctx->pc = 0x2E9C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C1Cu;
    // 0x2e9c20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x2E9C1Cu, 0x2E9C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C24u;
label_2e9c24:
    // 0x2e9c24: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2e9c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e9c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c2c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E9C2Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C34u);
    ctx->pc = 0x2E9C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C2Cu;
    // 0x2e9c30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E9C2Cu, 0x2E9C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C34u;
label_2e9c34:
    // 0x2e9c34: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E9C34u;
    SET_GPR_U32(ctx, 31, 0x2E9C3Cu);
    ctx->pc = 0x2E9C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C34u;
    // 0x2e9c38: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E9C34u, 0x2E9C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C3Cu;
label_2e9c3c:
    // 0x2e9c3c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2e9c3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e9c40: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e9c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e9c44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e9c48: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2e9c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2e9c4c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2e9c4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e9c50: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e9c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2e9c54: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e9c54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e9c58: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2e9c58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e9c5c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e9c5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e9c60: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2e9c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e9c64: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2e9c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e9c68: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2e9c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e9c6c: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x2e9c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e9c70: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e9c70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e9c74: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e9c74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e9c78: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2e9c78u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e9c7c: 0x0  nop
    ctx->pc = 0x2e9c7cu;
    // NOP
    // 0x2e9c80: 0x0  nop
    ctx->pc = 0x2e9c80u;
    // NOP
    // 0x2e9c84: 0x46010084  c1          0x10084
    ctx->pc = 0x2e9c84u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e9c88: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2e9c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e9c8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9c8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9c90: 0x0  nop
    ctx->pc = 0x2e9c90u;
    // NOP
    // 0x2e9c94: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2e9c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9c98: 0x0  nop
    ctx->pc = 0x2e9c98u;
    // NOP
    // 0x2e9c9c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E9C9Cu;
    {
        const bool branch_taken_0x2e9c9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C9Cu;
        // 0x2e9ca0: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c9c) {
            ctx->pc = 0x2E9CC8u;
            goto label_2e9cc8;
        }
    }
    ctx->pc = 0x2E9CA4u;
    // 0x2e9ca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e9ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9ca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e9ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9cac: 0x0  nop
    ctx->pc = 0x2e9cacu;
    // NOP
    // 0x2e9cb0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2e9cb0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2e9cb4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e9cb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e9cb8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2e9cb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e9cbc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e9cbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e9cc0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e9cc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e9cc4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2e9cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e9cc8:
    // 0x2e9cc8: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x2E9CC8u;
    SET_GPR_U32(ctx, 31, 0x2E9CD0u);
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x2E9CC8u, 0x2E9CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9CD0u;
label_2e9cd0:
    // 0x2e9cd0: 0xc077ade  jal         func_1DEB78
    ctx->pc = 0x2E9CD0u;
    SET_GPR_U32(ctx, 31, 0x2E9CD8u);
    ctx->pc = 0x2E9CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9CD0u;
    // 0x2e9cd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB78u, 0x2E9CD0u, 0x2E9CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9CD8u;
label_2e9cd8:
    // 0x2e9cd8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2e9cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e9cdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e9cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e9ce0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2e9ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e9ce4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2e9ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e9ce8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2e9ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e9cec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9CECu;
        // 0x2e9cf0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9CF4u;
    // 0x2e9cf4: 0x0  nop
    ctx->pc = 0x2e9cf4u;
    // NOP
    ctx->pc = 0x2e9cf8u;
}
