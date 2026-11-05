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

// Function: sub_001E2F30
// Address: 0x1e2f30 - 0x1e2fb8
void sub_001E2F30_0x1e2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2F30_0x1e2f30");
#endif

    switch (ctx->pc) {
        case 0x1e2f50u: goto label_1e2f50;
        default: break;
    }

    ctx->pc = 0x1e2f30u;

    // 0x1e2f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2f34: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e2f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e2f38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e2f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e2f3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e2f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2f48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E2F48u;
    SET_GPR_U32(ctx, 31, 0x1E2F50u);
    ctx->pc = 0x1E2F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F48u;
    // 0x1e2f4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E2F48u, 0x1E2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F50u;
label_1e2f50:
    // 0x1e2f50: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e2f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e2f54: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e2f54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e2f58: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e2f58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2f5c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e2f5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f60: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e2f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2f64: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e2f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2f68: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e2f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2f6c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e2f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e2f70: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e2f70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e2f74: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e2f74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e2f78: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1e2f78u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e2f7c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e2f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2f80: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e2f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e2f84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e2f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2f88: 0x0  nop
    ctx->pc = 0x1e2f88u;
    // NOP
    // 0x1e2f8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2F8Cu;
    {
        const bool branch_taken_0x1e2f8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F8Cu;
        // 0x1e2f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f8c) {
            ctx->pc = 0x1E2F98u;
            goto label_1e2f98;
        }
    }
    ctx->pc = 0x1E2F94u;
    // 0x1e2f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2f98:
    // 0x1e2f98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e2f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2f9c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e2f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e2fa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FA4u;
        // 0x1e2fa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2FACu;
    // 0x1e2fac: 0x0  nop
    ctx->pc = 0x1e2facu;
    // NOP
    // 0x1e2fb0: 0x0  nop
    ctx->pc = 0x1e2fb0u;
    // NOP
    // 0x1e2fb4: 0x0  nop
    ctx->pc = 0x1e2fb4u;
    // NOP
    ctx->pc = 0x1e2fb8u;
}
