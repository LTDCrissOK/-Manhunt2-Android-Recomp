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

// Function: sub_00149A60
// Address: 0x149a60 - 0x149ea0
void sub_00149A60_0x149a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149A60_0x149a60");
#endif

    switch (ctx->pc) {
        case 0x149aa8u: goto label_149aa8;
        case 0x149cd8u: goto label_149cd8;
        case 0x149d64u: goto label_149d64;
        case 0x149db8u: goto label_149db8;
        case 0x149e34u: goto label_149e34;
        case 0x149e6cu: goto label_149e6c;
        default: break;
    }

    ctx->pc = 0x149a60u;

    // 0x149a60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x149a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x149a64: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x149a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x149a68: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x149a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x149a6c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x149a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x149a70: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x149a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x149a74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a78: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x149a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x149a7c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x149a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x149a80: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x149a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x149a84: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x149a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x149a88: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x149a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x149a8c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x149a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x149a90: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x149a90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x149a94: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x149a94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x149a98: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x149a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x149a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149aa0: 0xc052660  jal         func_149980
    ctx->pc = 0x149AA0u;
    SET_GPR_U32(ctx, 31, 0x149AA8u);
    ctx->pc = 0x149AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149AA0u;
    // 0x149aa4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149980u, 0x149AA0u, 0x149AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AA8u;
label_149aa8:
    // 0x149aa8: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x149AA8u;
    {
        const bool branch_taken_0x149aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AA8u;
        // 0x149aac: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149aa8) {
            ctx->pc = 0x149E6Cu;
            goto label_149e6c;
        }
    }
    ctx->pc = 0x149AB0u;
    // 0x149ab0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x149ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x149ab4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x149ab4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ab8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x149ab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149abc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x149abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x149ac0: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x149ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x149ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149ac8: 0x8c500108  lw          $s0, 0x108($v0)
    ctx->pc = 0x149ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x149acc: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x149accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x149ad0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x149ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x149ad4: 0x3863000f  xori        $v1, $v1, 0xF
    ctx->pc = 0x149ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)15);
    // 0x149ad8: 0x546000e5  bnel        $v1, $zero, . + 4 + (0xE5 << 2)
    ctx->pc = 0x149AD8u;
    {
        const bool branch_taken_0x149ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ad8) {
            ctx->pc = 0x149ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149AD8u;
            // 0x149adc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149E70u;
            goto label_149e70;
        }
    }
    ctx->pc = 0x149AE0u;
    // 0x149ae0: 0x8c840104  lw          $a0, 0x104($a0)
    ctx->pc = 0x149ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x149ae4: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x149ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149ae8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x149ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149aec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149af0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x149af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x149af4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x149af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x149af8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x149af8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149afc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x149afcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149b00: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x149b00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149b04: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x149b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149b08: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x149b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149b0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x149b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x149b10: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x149b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x149b14: 0x26250710  addiu       $a1, $s1, 0x710
    ctx->pc = 0x149b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x149b18: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x149b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x149b1c: 0x460010c7  neg.s       $f3, $f2
    ctx->pc = 0x149b1cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[2]);
    // 0x149b20: 0x46003107  neg.s       $f4, $f6
    ctx->pc = 0x149b20u;
    ctx->f[4] = FPU_NEG_S(ctx->f[6]);
    // 0x149b24: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x149b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149b28: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x149b28u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x149b2c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x149b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x149b30: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x149b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x149b34: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x149b34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x149b38: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x149b38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x149b3c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x149b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x149b40: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x149b40u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x149b44: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x149b44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x149b48: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x149b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x149b4c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x149b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149b50: 0xfa210710  sqc2        $vf1, 0x710($s1)
    ctx->pc = 0x149b50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1808), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149b54: 0xae200714  sw          $zero, 0x714($s1)
    ctx->pc = 0x149b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1812), GPR_U32(ctx, 0));
    // 0x149b58: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x149b58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149b5c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x149b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149b60: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x149b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149b64: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x149b64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149b68: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x149b68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x149b6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x149b6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x149b70: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x149b70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149b74: 0xfa210710  sqc2        $vf1, 0x710($s1)
    ctx->pc = 0x149b74u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1808), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149b78: 0xc6200718  lwc1        $f0, 0x718($s1)
    ctx->pc = 0x149b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149b7c: 0xc6210710  lwc1        $f1, 0x710($s1)
    ctx->pc = 0x149b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149b80: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x149b80u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x149b84: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x149b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x149b88: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x149b88u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x149b8c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x149b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x149b90: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x149b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x149b94: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x149b94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x149b98: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x149b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x149b9c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x149b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x149ba0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x149ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x149ba4: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x149ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x149ba8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x149ba8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149bac: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x149bacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149bb0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x149bb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149bb4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x149bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149bb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x149bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x149bbc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x149bbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149bc0: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x149bc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149bc4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x149bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149bc8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x149bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149bcc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x149bccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149bd0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x149bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149bd4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x149bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149bd8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x149bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149bdc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x149bdcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x149be0: 0x4a0003bf  vwaitq
    ctx->pc = 0x149be0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x149be4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x149be4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149be8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x149be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149bec: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x149becu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149bf0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x149bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149bf4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x149bf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149bf8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x149bf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149bfc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x149bfcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x149c00: 0x4a0003bf  vwaitq
    ctx->pc = 0x149c00u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x149c04: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x149c04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149c08: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x149c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149c0c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x149c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149c10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x149c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149c14: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x149c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149c18: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x149c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x149c1c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x149c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x149c20: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x149c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149c24: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x149c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x149c28: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x149c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149c2c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x149c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x149c30: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x149c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149c34: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x149c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x149c38: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x149c38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149c3c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x149c3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149c40: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x149c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149c44: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x149c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149c48: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x149c48u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x149c4c: 0x4a0003bf  vwaitq
    ctx->pc = 0x149c4cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x149c50: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x149c50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149c54: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x149c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149c58: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x149c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149c5c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x149c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149c60: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x149c60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x149c64: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x149c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149c68: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x149c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149c6c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x149c6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x149c70: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x149c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149c74: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x149c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149c78: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x149c78u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x149c7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x149c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x149c80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x149c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149c84: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x149c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x149c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c8c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x149c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149c90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x149c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x149c94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149c98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x149C98u;
    {
        const bool branch_taken_0x149c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C98u;
        // 0x149c9c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c98) {
            ctx->pc = 0x149CA8u;
            goto label_149ca8;
        }
    }
    ctx->pc = 0x149CA0u;
    // 0x149ca0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149CA0u;
    {
        const bool branch_taken_0x149ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CA0u;
        // 0x149ca4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ca0) {
            ctx->pc = 0x149CB8u;
            goto label_149cb8;
        }
    }
    ctx->pc = 0x149CA8u;
label_149ca8:
    // 0x149ca8: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x149ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149cac: 0x0  nop
    ctx->pc = 0x149cacu;
    // NOP
    // 0x149cb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149CB0u;
    {
        const bool branch_taken_0x149cb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149cb0) {
            ctx->pc = 0x149CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149CB0u;
            // 0x149cb4: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149CB8u;
            goto label_149cb8;
        }
    }
    ctx->pc = 0x149CB8u;
label_149cb8:
    // 0x149cb8: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x149cb8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x149cbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x149cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x149cc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x149cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x149cc4: 0x0  nop
    ctx->pc = 0x149cc4u;
    // NOP
    // 0x149cc8: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x149cc8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x149ccc: 0x460c0304  c1          0xC0304
    ctx->pc = 0x149cccu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x149cd0: 0xc0e404c  jal         func_390130
    ctx->pc = 0x149CD0u;
    SET_GPR_U32(ctx, 31, 0x149CD8u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x149CD0u, 0x149CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CD8u;
label_149cd8:
    // 0x149cd8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x149cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x149cdc: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x149cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x149ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149ce4: 0x0  nop
    ctx->pc = 0x149ce4u;
    // NOP
    // 0x149ce8: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x149ce8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x149cec: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x149cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149cf0: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x149cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149cf4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x149cf4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x149cf8: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x149cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149cfc: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x149cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149d00: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x149d00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x149d04: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x149d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149d08: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x149d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149d0c: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x149d0cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x149d10: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x149d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x149d14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x149d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149d18: 0x0  nop
    ctx->pc = 0x149d18u;
    // NOP
    // 0x149d1c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x149d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149d20: 0x0  nop
    ctx->pc = 0x149d20u;
    // NOP
    // 0x149d24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x149D24u;
    {
        const bool branch_taken_0x149d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149d24) {
            ctx->pc = 0x149D34u;
            goto label_149d34;
        }
    }
    ctx->pc = 0x149D2Cu;
    // 0x149d2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149D2Cu;
    {
        const bool branch_taken_0x149d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D2Cu;
        // 0x149d30: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d2c) {
            ctx->pc = 0x149D44u;
            goto label_149d44;
        }
    }
    ctx->pc = 0x149D34u;
label_149d34:
    // 0x149d34: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x149d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149d38: 0x0  nop
    ctx->pc = 0x149d38u;
    // NOP
    // 0x149d3c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149D3Cu;
    {
        const bool branch_taken_0x149d3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149d3c) {
            ctx->pc = 0x149D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149D3Cu;
            // 0x149d40: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149D44u;
            goto label_149d44;
        }
    }
    ctx->pc = 0x149D44u;
label_149d44:
    // 0x149d44: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x149d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x149d48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x149d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x149d4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x149d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149d50: 0x0  nop
    ctx->pc = 0x149d50u;
    // NOP
    // 0x149d54: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x149d54u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x149d58: 0x460c0304  c1          0xC0304
    ctx->pc = 0x149d58u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x149d5c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x149D5Cu;
    SET_GPR_U32(ctx, 31, 0x149D64u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x149D5Cu, 0x149D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D64u;
label_149d64:
    // 0x149d64: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x149d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x149d68: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x149d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x149d6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149d70: 0x0  nop
    ctx->pc = 0x149d70u;
    // NOP
    // 0x149d74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x149d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x149d78: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x149d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149d7c: 0x0  nop
    ctx->pc = 0x149d7cu;
    // NOP
    // 0x149d80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x149D80u;
    {
        const bool branch_taken_0x149d80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149d80) {
            ctx->pc = 0x149D98u;
            goto label_149d98;
        }
    }
    ctx->pc = 0x149D88u;
    // 0x149d88: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x149d88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149d8c: 0xfa210710  sqc2        $vf1, 0x710($s1)
    ctx->pc = 0x149d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1808), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149d90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149D90u;
    {
        const bool branch_taken_0x149d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D90u;
        // 0x149d94: 0x26c29a08  addiu       $v0, $s6, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d90) {
            ctx->pc = 0x149DA4u;
            goto label_149da4;
        }
    }
    ctx->pc = 0x149D98u;
label_149d98:
    // 0x149d98: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x149d98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149d9c: 0xfa210710  sqc2        $vf1, 0x710($s1)
    ctx->pc = 0x149d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1808), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149da0: 0x26c29a08  addiu       $v0, $s6, -0x65F8
    ctx->pc = 0x149da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941192));
label_149da4:
    // 0x149da4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x149da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149da8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x149da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x149dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149db0: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x149DB0u;
    SET_GPR_U32(ctx, 31, 0x149DB8u);
    ctx->pc = 0x149DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149DB0u;
    // 0x149db4: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x149DB0u, 0x149DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149DB8u;
label_149db8:
    // 0x149db8: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x149db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149dbc: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x149dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149dc0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x149dc0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x149dc4: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x149dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149dc8: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x149dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149dcc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x149dccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x149dd0: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x149dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149dd4: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x149dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149dd8: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x149dd8u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x149ddc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x149ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x149de0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x149de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149de4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x149de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x149de8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149dec: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x149decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149df0: 0x0  nop
    ctx->pc = 0x149df0u;
    // NOP
    // 0x149df4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x149DF4u;
    {
        const bool branch_taken_0x149df4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149df4) {
            ctx->pc = 0x149E04u;
            goto label_149e04;
        }
    }
    ctx->pc = 0x149DFCu;
    // 0x149dfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149DFCu;
    {
        const bool branch_taken_0x149dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149DFCu;
        // 0x149e00: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149dfc) {
            ctx->pc = 0x149E14u;
            goto label_149e14;
        }
    }
    ctx->pc = 0x149E04u;
label_149e04:
    // 0x149e04: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x149e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149e08: 0x0  nop
    ctx->pc = 0x149e08u;
    // NOP
    // 0x149e0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149E0Cu;
    {
        const bool branch_taken_0x149e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149e0c) {
            ctx->pc = 0x149E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149E0Cu;
            // 0x149e10: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149E14u;
            goto label_149e14;
        }
    }
    ctx->pc = 0x149E14u;
label_149e14:
    // 0x149e14: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x149e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x149e18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x149e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x149e1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x149e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149e20: 0x0  nop
    ctx->pc = 0x149e20u;
    // NOP
    // 0x149e24: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x149e24u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x149e28: 0x460c0304  c1          0xC0304
    ctx->pc = 0x149e28u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x149e2c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x149E2Cu;
    SET_GPR_U32(ctx, 31, 0x149E34u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x149E2Cu, 0x149E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E34u;
label_149e34:
    // 0x149e34: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x149e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x149e38: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x149e38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x149e3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149e40: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x149e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x149e44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149e48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x149e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x149e4c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x149e4cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x149e50: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x149e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149e54: 0x0  nop
    ctx->pc = 0x149e54u;
    // NOP
    // 0x149e58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x149E58u;
    {
        const bool branch_taken_0x149e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E58u;
        // 0x149e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e58) {
            ctx->pc = 0x149E6Cu;
            goto label_149e6c;
        }
    }
    ctx->pc = 0x149E60u;
    // 0x149e60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149e64: 0xc08fde4  jal         func_23F790
    ctx->pc = 0x149E64u;
    SET_GPR_U32(ctx, 31, 0x149E6Cu);
    ctx->pc = 0x149E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E64u;
    // 0x149e68: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F790u, 0x149E64u, 0x149E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E6Cu;
label_149e6c:
    // 0x149e6c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x149e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_149e70:
    // 0x149e70: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x149e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149e74: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x149e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149e78: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x149e78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149e7c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x149e7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149e80: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x149e80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x149e84: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x149e84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149e88: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x149e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x149e8c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x149e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x149e90: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x149e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x149e94: 0x3e00008  jr          $ra
    ctx->pc = 0x149E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E94u;
        // 0x149e98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149E9Cu;
    // 0x149e9c: 0x0  nop
    ctx->pc = 0x149e9cu;
    // NOP
    ctx->pc = 0x149ea0u;
}
