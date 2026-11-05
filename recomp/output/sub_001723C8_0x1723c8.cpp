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

// Function: sub_001723C8
// Address: 0x1723c8 - 0x172450
void sub_001723C8_0x1723c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001723C8_0x1723c8");
#endif

    switch (ctx->pc) {
        case 0x1723e8u: goto label_1723e8;
        default: break;
    }

    ctx->pc = 0x1723c8u;

    // 0x1723c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1723c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1723cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1723ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1723d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1723d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1723d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1723d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1723d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1723dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1723dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1723E0u;
    SET_GPR_U32(ctx, 31, 0x1723E8u);
    ctx->pc = 0x1723E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723E0u;
    // 0x1723e4: 0x8cb10010  lw          $s1, 0x10($a1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1723E0u, 0x1723E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723E8u;
label_1723e8:
    // 0x1723e8: 0x26100240  addiu       $s0, $s0, 0x240
    ctx->pc = 0x1723e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x1723ec: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1723ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1723f0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1723f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1723f4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1723f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1723f8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1723f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1723fc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1723fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172400: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x172400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172404: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x172404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x172408: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x172408u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17240c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17240cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x172410: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x172410u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x172414: 0x46010044  c1          0x10044
    ctx->pc = 0x172414u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x172418: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x172418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x17241c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17241cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172420: 0x0  nop
    ctx->pc = 0x172420u;
    // NOP
    // 0x172424: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x172424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172428: 0x0  nop
    ctx->pc = 0x172428u;
    // NOP
    // 0x17242c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17242Cu;
    {
        const bool branch_taken_0x17242c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x172430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17242Cu;
        // 0x172430: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17242c) {
            ctx->pc = 0x172438u;
            goto label_172438;
        }
    }
    ctx->pc = 0x172434u;
    // 0x172434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x172434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172438:
    // 0x172438: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x172438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17243c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17243cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172444: 0x3e00008  jr          $ra
    ctx->pc = 0x172444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172444u;
        // 0x172448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17244Cu;
    // 0x17244c: 0x0  nop
    ctx->pc = 0x17244cu;
    // NOP
    ctx->pc = 0x172450u;
}
