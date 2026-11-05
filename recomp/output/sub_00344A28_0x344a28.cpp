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

// Function: sub_00344A28
// Address: 0x344a28 - 0x344b18
void sub_00344A28_0x344a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344A28_0x344a28");
#endif

    switch (ctx->pc) {
        case 0x344a50u: goto label_344a50;
        default: break;
    }

    ctx->pc = 0x344a28u;

    // 0x344a28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x344a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x344a2c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x344a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x344a30: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x344a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x344a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x344a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x344a3c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x344a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x344a40: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x344A40u;
    {
        const bool branch_taken_0x344a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A40u;
        // 0x344a44: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a40) {
            ctx->pc = 0x344AC4u;
            goto label_344ac4;
        }
    }
    ctx->pc = 0x344A48u;
    // 0x344a48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344A48u;
    SET_GPR_U32(ctx, 31, 0x344A50u);
    ctx->pc = 0x344A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A48u;
    // 0x344a4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344A48u, 0x344A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A50u;
label_344a50:
    // 0x344a50: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x344a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x344a54: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x344a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x344a58: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x344a58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344a5c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x344a5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344a60: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x344a60u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x344a64: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x344a64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x344a68: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x344a68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x344a6c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x344a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344a70: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x344a70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344a74: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x344a74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x344a78: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x344a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x344a7c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x344a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344a80: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x344a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x344a84: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x344a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344a88: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x344a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344a8c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x344a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344a90: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x344a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x344a94: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x344a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x344a98: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x344a98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x344a9c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x344a9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x344aa0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x344aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x344aa4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x344aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x344aa8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x344aa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x344aac: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x344aacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x344ab0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x344ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x344ab4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x344ab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344ab8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x344ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344abc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x344ABCu;
    {
        const bool branch_taken_0x344abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344ABCu;
        // 0x344ac0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344abc) {
            ctx->pc = 0x344B08u;
            goto label_344b08;
        }
    }
    ctx->pc = 0x344AC4u;
label_344ac4:
    // 0x344ac4: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x344ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x344ac8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x344ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344acc: 0xc6030040  lwc1        $f3, 0x40($s0)
    ctx->pc = 0x344accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344ad0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x344ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344ad4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x344ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344ad8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x344ad8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x344adc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x344adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x344ae0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x344ae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x344ae4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x344ae4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x344ae8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x344ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x344aec: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x344aecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x344af0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x344af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x344af4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x344af4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x344af8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x344af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x344afc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x344afcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344b00: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x344b00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344b04: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x344b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_344b08:
    // 0x344b08: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x344b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344b0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x344b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344b10: 0x3e00008  jr          $ra
    ctx->pc = 0x344B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B10u;
        // 0x344b14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344B18u;
}
