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

// Function: sub_00344BE0
// Address: 0x344be0 - 0x344c78
void sub_00344BE0_0x344be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344BE0_0x344be0");
#endif

    switch (ctx->pc) {
        case 0x344c08u: goto label_344c08;
        case 0x344c48u: goto label_344c48;
        case 0x344c64u: goto label_344c64;
        default: break;
    }

    ctx->pc = 0x344be0u;

    // 0x344be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x344be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x344be4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x344be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x344be8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x344be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x344bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344bf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x344bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x344bf4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x344bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x344bf8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x344BF8u;
    {
        const bool branch_taken_0x344bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BF8u;
        // 0x344bfc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344bf8) {
            ctx->pc = 0x344C50u;
            goto label_344c50;
        }
    }
    ctx->pc = 0x344C00u;
    // 0x344c00: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344C00u;
    SET_GPR_U32(ctx, 31, 0x344C08u);
    ctx->pc = 0x344C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C00u;
    // 0x344c04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344C00u, 0x344C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C08u;
label_344c08:
    // 0x344c08: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x344c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x344c0c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x344c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x344c10: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x344c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344c14: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x344c14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344c18: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x344c18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x344c1c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x344c1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x344c20: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x344c20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x344c24: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x344c24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344c28: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x344c28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344c2c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x344c2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x344c30: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x344c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x344c34: 0xc60d0080  lwc1        $f13, 0x80($s0)
    ctx->pc = 0x344c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x344c38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x344c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344c3c: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x344c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344c40: 0xc0d16f6  jal         func_345BD8
    ctx->pc = 0x344C40u;
    SET_GPR_U32(ctx, 31, 0x344C48u);
    ctx->pc = 0x344C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C40u;
    // 0x344c44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345BD8u, 0x344C40u, 0x344C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C48u;
label_344c48:
    // 0x344c48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x344C48u;
    {
        const bool branch_taken_0x344c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C48u;
        // 0x344c4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c48) {
            ctx->pc = 0x344C68u;
            goto label_344c68;
        }
    }
    ctx->pc = 0x344C50u;
label_344c50:
    // 0x344c50: 0xc60d0080  lwc1        $f13, 0x80($s0)
    ctx->pc = 0x344c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x344c54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x344c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344c58: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x344c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344c5c: 0xc0d16f6  jal         func_345BD8
    ctx->pc = 0x344C5Cu;
    SET_GPR_U32(ctx, 31, 0x344C64u);
    ctx->pc = 0x344C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C5Cu;
    // 0x344c60: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345BD8u, 0x344C5Cu, 0x344C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C64u;
label_344c64:
    // 0x344c64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x344c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_344c68:
    // 0x344c68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x344c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344c6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x344c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344c70: 0x3e00008  jr          $ra
    ctx->pc = 0x344C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C70u;
        // 0x344c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344C78u;
}
