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

// Function: sub_00269B90
// Address: 0x269b90 - 0x269c58
void sub_00269B90_0x269b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269B90_0x269b90");
#endif

    switch (ctx->pc) {
        case 0x269b90u: goto label_269b90;
        case 0x269b94u: goto label_269b94;
        case 0x269b98u: goto label_269b98;
        case 0x269b9cu: goto label_269b9c;
        case 0x269ba0u: goto label_269ba0;
        case 0x269ba4u: goto label_269ba4;
        case 0x269ba8u: goto label_269ba8;
        case 0x269bacu: goto label_269bac;
        case 0x269bb0u: goto label_269bb0;
        case 0x269bb4u: goto label_269bb4;
        case 0x269bb8u: goto label_269bb8;
        case 0x269bbcu: goto label_269bbc;
        case 0x269bc0u: goto label_269bc0;
        case 0x269bc4u: goto label_269bc4;
        case 0x269bc8u: goto label_269bc8;
        case 0x269bccu: goto label_269bcc;
        case 0x269bd0u: goto label_269bd0;
        case 0x269bd4u: goto label_269bd4;
        case 0x269bd8u: goto label_269bd8;
        case 0x269bdcu: goto label_269bdc;
        case 0x269be0u: goto label_269be0;
        case 0x269be4u: goto label_269be4;
        case 0x269be8u: goto label_269be8;
        case 0x269becu: goto label_269bec;
        case 0x269bf0u: goto label_269bf0;
        case 0x269bf4u: goto label_269bf4;
        case 0x269bf8u: goto label_269bf8;
        case 0x269bfcu: goto label_269bfc;
        case 0x269c00u: goto label_269c00;
        case 0x269c04u: goto label_269c04;
        case 0x269c08u: goto label_269c08;
        case 0x269c0cu: goto label_269c0c;
        case 0x269c10u: goto label_269c10;
        case 0x269c14u: goto label_269c14;
        case 0x269c18u: goto label_269c18;
        case 0x269c1cu: goto label_269c1c;
        case 0x269c20u: goto label_269c20;
        case 0x269c24u: goto label_269c24;
        case 0x269c28u: goto label_269c28;
        case 0x269c2cu: goto label_269c2c;
        case 0x269c30u: goto label_269c30;
        case 0x269c34u: goto label_269c34;
        case 0x269c38u: goto label_269c38;
        case 0x269c3cu: goto label_269c3c;
        case 0x269c40u: goto label_269c40;
        case 0x269c44u: goto label_269c44;
        case 0x269c48u: goto label_269c48;
        case 0x269c4cu: goto label_269c4c;
        case 0x269c50u: goto label_269c50;
        case 0x269c54u: goto label_269c54;
        default: break;
    }

    ctx->pc = 0x269b90u;

label_269b90:
    // 0x269b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x269b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_269b94:
    // 0x269b94: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x269b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_269b98:
    // 0x269b98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x269b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_269b9c:
    // 0x269b9c: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
label_269ba0:
    if (ctx->pc == 0x269BA0u) {
        ctx->pc = 0x269BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B9Cu;
        // 0x269ba0: 0xacc50220  sw          $a1, 0x220($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 544), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269BA4u;
        goto label_269ba4;
    }
    ctx->pc = 0x269B9Cu;
    {
        const bool branch_taken_0x269b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x269BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B9Cu;
        // 0x269ba0: 0xacc50220  sw          $a1, 0x220($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 544), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b9c) {
            ctx->pc = 0x269BC8u;
            goto label_269bc8;
        }
    }
    ctx->pc = 0x269BA4u;
label_269ba4:
    // 0x269ba4: 0x8cc4010c  lw          $a0, 0x10C($a2)
    ctx->pc = 0x269ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
label_269ba8:
    // 0x269ba8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x269ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_269bac:
    // 0x269bac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x269bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_269bb0:
    // 0x269bb0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x269bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_269bb4:
    // 0x269bb4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x269bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_269bb8:
    // 0x269bb8: 0xc0b7264  jal         func_2DC990
label_269bbc:
    if (ctx->pc == 0x269BBCu) {
        ctx->pc = 0x269BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BB8u;
        // 0x269bbc: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269BC0u;
        goto label_269bc0;
    }
    ctx->pc = 0x269BB8u;
    SET_GPR_U32(ctx, 31, 0x269BC0u);
    ctx->pc = 0x269BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269BB8u;
    // 0x269bbc: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x269BB8u, 0x269BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269BC0u;
label_269bc0:
    // 0x269bc0: 0x10000022  b           . + 4 + (0x22 << 2)
label_269bc4:
    if (ctx->pc == 0x269BC4u) {
        ctx->pc = 0x269BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BC0u;
        // 0x269bc4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269BC8u;
        goto label_269bc8;
    }
    ctx->pc = 0x269BC0u;
    {
        const bool branch_taken_0x269bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BC0u;
        // 0x269bc4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bc0) {
            ctx->pc = 0x269C4Cu;
            goto label_269c4c;
        }
    }
    ctx->pc = 0x269BC8u;
label_269bc8:
    // 0x269bc8: 0x8cc30104  lw          $v1, 0x104($a2)
    ctx->pc = 0x269bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
label_269bcc:
    // 0x269bcc: 0x24c40230  addiu       $a0, $a2, 0x230
    ctx->pc = 0x269bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 560));
label_269bd0:
    // 0x269bd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x269bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_269bd4:
    // 0x269bd4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x269bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_269bd8:
    // 0x269bd8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x269bd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_269bdc:
    // 0x269bdc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x269bdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_269be0:
    // 0x269be0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x269be0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_269be4:
    // 0x269be4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x269be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_269be8:
    // 0x269be8: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x269be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_269bec:
    // 0x269bec: 0x24c20250  addiu       $v0, $a2, 0x250
    ctx->pc = 0x269becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 592));
label_269bf0:
    // 0x269bf0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x269bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269bf4:
    // 0x269bf4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x269bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_269bf8:
    // 0x269bf8: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x269bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269bfc:
    // 0x269bfc: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x269bfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_269c00:
    // 0x269c00: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x269c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_269c04:
    // 0x269c04: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x269c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_269c08:
    // 0x269c08: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x269c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_269c0c:
    // 0x269c0c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x269c0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_269c10:
    // 0x269c10: 0xf8c10250  sqc2        $vf1, 0x250($a2)
    ctx->pc = 0x269c10u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 592), _mm_castps_si128(ctx->vu0_vf[1]));
label_269c14:
    // 0x269c14: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x269c14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_269c18:
    // 0x269c18: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x269c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_269c1c:
    // 0x269c1c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x269c1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_269c20:
    // 0x269c20: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x269c20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_269c24:
    // 0x269c24: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x269c24u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_269c28:
    // 0x269c28: 0x4a0003bf  vwaitq
    ctx->pc = 0x269c28u;
    // VWAITQ (Q already resolved in this runtime)
label_269c2c:
    // 0x269c2c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x269c2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_269c30:
    // 0x269c30: 0xf8c10250  sqc2        $vf1, 0x250($a2)
    ctx->pc = 0x269c30u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 592), _mm_castps_si128(ctx->vu0_vf[1]));
label_269c34:
    // 0x269c34: 0x8cc4010c  lw          $a0, 0x10C($a2)
    ctx->pc = 0x269c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
label_269c38:
    // 0x269c38: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x269c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_269c3c:
    // 0x269c3c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x269c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_269c40:
    // 0x269c40: 0x40f809  jalr        $v0
label_269c44:
    if (ctx->pc == 0x269C44u) {
        ctx->pc = 0x269C48u;
        goto label_269c48;
    }
    ctx->pc = 0x269C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x269C48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269C40u, 0x269C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269C48u;
label_269c48:
    // 0x269c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x269c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_269c4c:
    // 0x269c4c: 0x3e00008  jr          $ra
label_269c50:
    if (ctx->pc == 0x269C50u) {
        ctx->pc = 0x269C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C4Cu;
        // 0x269c50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269C54u;
        goto label_269c54;
    }
    ctx->pc = 0x269C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C4Cu;
        // 0x269c50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269C54u;
label_269c54:
    // 0x269c54: 0x0  nop
    ctx->pc = 0x269c54u;
    // NOP
    ctx->pc = 0x269c58u;
}
