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

// Function: sub_0025BF60
// Address: 0x25bf60 - 0x25c050
void sub_0025BF60_0x25bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BF60_0x25bf60");
#endif

    switch (ctx->pc) {
        case 0x25bfa4u: goto label_25bfa4;
        case 0x25bfc4u: goto label_25bfc4;
        default: break;
    }

    ctx->pc = 0x25bf60u;

    // 0x25bf60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25bf64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25bf68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25bf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25bf6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25bf6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf70: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x25bf70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25bf74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25bf74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf78: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x25bf78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25bf7c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x25bf7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x25bf80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25bf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25bf84: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x25bf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x25bf88: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x25bf88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25bf8c: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x25BF8Cu;
    {
        const bool branch_taken_0x25bf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF8Cu;
        // 0x25bf90: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf8c) {
            ctx->pc = 0x25C02Cu;
            goto label_25c02c;
        }
    }
    ctx->pc = 0x25BF94u;
    // 0x25bf94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25bf98: 0x8c500334  lw          $s0, 0x334($v0)
    ctx->pc = 0x25bf98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x25bf9c: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x25BF9Cu;
    SET_GPR_U32(ctx, 31, 0x25BFA4u);
    ctx->pc = 0x25BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF9Cu;
    // 0x25bfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x25BF9Cu, 0x25BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BFA4u;
label_25bfa4:
    // 0x25bfa4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x25bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x25bfa8: 0x2463ffd9  addiu       $v1, $v1, -0x27
    ctx->pc = 0x25bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967257));
    // 0x25bfac: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25BFACu;
    {
        const bool branch_taken_0x25bfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFACu;
        // 0x25bfb0: 0x2c630009  sltiu       $v1, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfac) {
            ctx->pc = 0x25C02Cu;
            goto label_25c02c;
        }
    }
    ctx->pc = 0x25BFB4u;
    // 0x25bfb4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x25BFB4u;
    {
        const bool branch_taken_0x25bfb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFB4u;
        // 0x25bfb8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfb4) {
            ctx->pc = 0x25C030u;
            goto label_25c030;
        }
    }
    ctx->pc = 0x25BFBCu;
    // 0x25bfbc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25BFBCu;
    SET_GPR_U32(ctx, 31, 0x25BFC4u);
    ctx->pc = 0x25BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BFBCu;
    // 0x25bfc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25BFBCu, 0x25BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BFC4u;
label_25bfc4:
    // 0x25bfc4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25bfc8: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x25bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x25bfcc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25bfd0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x25bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25bfd4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x25bfd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bfd8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x25bfd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25bfdc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25bfdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25bfe0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x25bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25bfe4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x25bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x25bfe8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x25bfe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bfec: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x25bfecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25bff0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x25bff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25bff4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x25bff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25bff8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x25bff8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x25bffc: 0x4a0003bf  vwaitq
    ctx->pc = 0x25bffcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25c000: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x25c000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25c004: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x25c004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25c008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c00c: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x25c00cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c010: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x25c010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c014: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x25c014u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25c018: 0x0  nop
    ctx->pc = 0x25c018u;
    // NOP
    // 0x25c01c: 0x0  nop
    ctx->pc = 0x25c01cu;
    // NOP
    // 0x25c020: 0x4614a803  div.s       $f0, $f21, $f20
    ctx->pc = 0x25c020u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
    // 0x25c024: 0xe6340020  swc1        $f20, 0x20($s1)
    ctx->pc = 0x25c024u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x25c028: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x25c028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_25c02c:
    // 0x25c02c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25c02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25c030:
    // 0x25c030: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25c030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25c034: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25c034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c038: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x25c038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25c03c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x25c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25c040: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25c040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25c044: 0x3e00008  jr          $ra
    ctx->pc = 0x25C044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C044u;
        // 0x25c048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C04Cu;
    // 0x25c04c: 0x0  nop
    ctx->pc = 0x25c04cu;
    // NOP
    ctx->pc = 0x25c050u;
}
