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

// Function: sub_002DE020
// Address: 0x2de020 - 0x2de0c0
void sub_002DE020_0x2de020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE020_0x2de020");
#endif

    switch (ctx->pc) {
        case 0x2de050u: goto label_2de050;
        case 0x2de064u: goto label_2de064;
        default: break;
    }

    ctx->pc = 0x2de020u;

    // 0x2de020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2de020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2de024: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2de024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2de028: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2de028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2de02c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2de02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de030: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2de030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2de034: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2de034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de038: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2de038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2de03c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2de03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de040: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2de040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de044: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2de044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2de048: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2DE048u;
    SET_GPR_U32(ctx, 31, 0x2DE050u);
    ctx->pc = 0x2DE04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE048u;
    // 0x2de04c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DE048u, 0x2DE050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE050u;
label_2de050:
    // 0x2de050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de054: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2de054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de058: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2de058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de05c: 0xc0b7794  jal         func_2DDE50
    ctx->pc = 0x2DE05Cu;
    SET_GPR_U32(ctx, 31, 0x2DE064u);
    ctx->pc = 0x2DE060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE05Cu;
    // 0x2de060: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDE50u, 0x2DE05Cu, 0x2DE064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE064u;
label_2de064:
    // 0x2de064: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2de064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2de068: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2de068u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2de06c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2de06cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de070: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2de070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2de074: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2de074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de078: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2de078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2de07c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2de07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2de080: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2de080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de084: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2de084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de088: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x2de088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de08c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2de08cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2de090: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2de090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2de094: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2de094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2de098: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2de098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2de09c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2de09cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de0a0: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2de0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de0a4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2de0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de0a8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2de0a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de0ac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2de0acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de0b0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2de0b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2de0b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2de0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0B8u;
        // 0x2de0bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE0C0u;
}
