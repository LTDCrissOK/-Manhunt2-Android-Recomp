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

// Function: sub_001E19A0
// Address: 0x1e19a0 - 0x1e1b78
void sub_001E19A0_0x1e19a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E19A0_0x1e19a0");
#endif

    switch (ctx->pc) {
        case 0x1e19d4u: goto label_1e19d4;
        case 0x1e1a40u: goto label_1e1a40;
        case 0x1e1accu: goto label_1e1acc;
        default: break;
    }

    ctx->pc = 0x1e19a0u;

    // 0x1e19a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e19a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e19a4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1e19a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1e19a8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1e19a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1e19ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e19acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19b0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1e19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1e19b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e19b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19b8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1e19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1e19bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e19bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19c0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e19c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e19c4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1e19c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e19c8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1e19c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1e19cc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E19CCu;
    SET_GPR_U32(ctx, 31, 0x1E19D4u);
    ctx->pc = 0x1E19D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19CCu;
    // 0x1e19d0: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E19CCu, 0x1E19D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19D4u;
label_1e19d4:
    // 0x1e19d4: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1e19d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1e19d8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e19d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e19dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e19dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e19e0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e19e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e19e4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e19e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e19e8: 0x26510040  addiu       $s1, $s2, 0x40
    ctx->pc = 0x1e19e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1e19ec: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e19f0: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1e19f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e19f4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e19f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e19f8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1e19f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e19fc: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1e19fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1a00: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e1a00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e1a04: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1e1a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1a08: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1e1a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1a0c: 0x4603155c  madd.s      $f21, $f2, $f3
    ctx->pc = 0x1e1a0cu;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e1a10: 0xc6440040  lwc1        $f4, 0x40($s2)
    ctx->pc = 0x1e1a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e1a14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e1a18: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e1a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1a1c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1e1a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1a20: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x1e1a20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x1e1a24: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1e1a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1e1a28: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1e1a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1e1a2c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1e1a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1e1a30: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1e1a30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e1a34: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1e1a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e1a38: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E1A38u;
    SET_GPR_U32(ctx, 31, 0x1E1A40u);
    ctx->pc = 0x1E1A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A38u;
    // 0x1e1a3c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E1A38u, 0x1E1A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A40u;
label_1e1a40:
    // 0x1e1a40: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1e1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e1a44: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e1a48: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e1a48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1a4c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e1a4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1a50: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e1a50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1a54: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e1a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1a58: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1e1a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1a5c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1e1a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1a60: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1e1a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e1a64: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e1a64u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e1a68: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e1a68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e1a6c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e1a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e1a70: 0xc6140030  lwc1        $f20, 0x30($s0)
    ctx->pc = 0x1e1a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e1a74: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1e1a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1a78: 0x0  nop
    ctx->pc = 0x1e1a78u;
    // NOP
    // 0x1e1a7c: 0x45030033  bc1tl       . + 4 + (0x33 << 2)
    ctx->pc = 0x1E1A7Cu;
    {
        const bool branch_taken_0x1e1a7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1a7c) {
            ctx->pc = 0x1E1A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1A7Cu;
            // 0x1e1a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1B4Cu;
            goto label_1e1b4c;
        }
    }
    ctx->pc = 0x1E1A84u;
    // 0x1e1a84: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e1a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1a88: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e1a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1a8c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e1a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e1a90: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e1a90u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e1a94: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e1a94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e1a98: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e1a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e1a9c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1e1a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1aa0: 0x0  nop
    ctx->pc = 0x1e1aa0u;
    // NOP
    // 0x1e1aa4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1AA4u;
    {
        const bool branch_taken_0x1e1aa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1aa4) {
            ctx->pc = 0x1E1AC4u;
            goto label_1e1ac4;
        }
    }
    ctx->pc = 0x1E1AACu;
    // 0x1e1aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ab0: 0x0  nop
    ctx->pc = 0x1e1ab0u;
    // NOP
    // 0x1e1ab4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1e1ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1ab8: 0x0  nop
    ctx->pc = 0x1e1ab8u;
    // NOP
    // 0x1e1abc: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
    ctx->pc = 0x1E1ABCu;
    {
        const bool branch_taken_0x1e1abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1abc) {
            ctx->pc = 0x1E1AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1ABCu;
            // 0x1e1ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1B4Cu;
            goto label_1e1b4c;
        }
    }
    ctx->pc = 0x1E1AC4u;
label_1e1ac4:
    // 0x1e1ac4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E1AC4u;
    SET_GPR_U32(ctx, 31, 0x1E1ACCu);
    ctx->pc = 0x1E1AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1AC4u;
    // 0x1e1ac8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E1AC4u, 0x1E1ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1ACCu;
label_1e1acc:
    // 0x1e1acc: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x1e1accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1e1ad0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e1ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e1ad4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e1ad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1ad8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e1ad8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e1adc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e1adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1ae0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1e1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e1ae4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1e1ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1ae8: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1e1ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1aec: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e1aecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e1af0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1e1af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1af4: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1e1af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1af8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e1af8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e1afc: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1e1afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1b00: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1e1b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1b04: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1e1b04u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e1b08: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1e1b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1b0c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1e1b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1b10: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1e1b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e1b14: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e1b14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e1b18: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e1b18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e1b1c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e1b1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e1b20: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1e1b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1b24: 0x0  nop
    ctx->pc = 0x1e1b24u;
    // NOP
    // 0x1e1b28: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1B28u;
    {
        const bool branch_taken_0x1e1b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B28u;
        // 0x1e1b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b28) {
            ctx->pc = 0x1E1B4Cu;
            goto label_1e1b4c;
        }
    }
    ctx->pc = 0x1E1B30u;
    // 0x1e1b30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1b34: 0x0  nop
    ctx->pc = 0x1e1b34u;
    // NOP
    // 0x1e1b38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e1b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1b3c: 0x0  nop
    ctx->pc = 0x1e1b3cu;
    // NOP
    // 0x1e1b40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1B40u;
    {
        const bool branch_taken_0x1e1b40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B40u;
        // 0x1e1b44: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b40) {
            ctx->pc = 0x1E1B50u;
            goto label_1e1b50;
        }
    }
    ctx->pc = 0x1E1B48u;
    // 0x1e1b48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e1b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b4c:
    // 0x1e1b4c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1e1b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e1b50:
    // 0x1e1b50: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1e1b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e1b54: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1e1b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1b58: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1e1b58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e1b5c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e1b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e1b60: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1e1b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e1b64: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1e1b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e1b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B68u;
        // 0x1e1b6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1B70u;
    // 0x1e1b70: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e1b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e1b74: 0x0  nop
    ctx->pc = 0x1e1b74u;
    // NOP
    ctx->pc = 0x1e1b78u;
}
