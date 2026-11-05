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

// Function: sub_00264D80
// Address: 0x264d80 - 0x264f58
void sub_00264D80_0x264d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264D80_0x264d80");
#endif

    switch (ctx->pc) {
        case 0x264db8u: goto label_264db8;
        case 0x264ebcu: goto label_264ebc;
        case 0x264f10u: goto label_264f10;
        case 0x264f40u: goto label_264f40;
        default: break;
    }

    ctx->pc = 0x264d80u;

    // 0x264d80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x264d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x264d84: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x264d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x264d88: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x264d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x264d8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x264d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d90: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x264d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x264d94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x264d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d98: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x264d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x264d9c: 0x12200068  beqz        $s1, . + 4 + (0x68 << 2)
    ctx->pc = 0x264D9Cu;
    {
        const bool branch_taken_0x264d9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x264DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D9Cu;
        // 0x264da0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d9c) {
            ctx->pc = 0x264F40u;
            goto label_264f40;
        }
    }
    ctx->pc = 0x264DA4u;
    // 0x264da4: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x264da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x264da8: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x264DA8u;
    {
        const bool branch_taken_0x264da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264da8) {
            ctx->pc = 0x264DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264DA8u;
            // 0x264dac: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F44u;
            goto label_264f44;
        }
    }
    ctx->pc = 0x264DB0u;
    // 0x264db0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x264DB0u;
    SET_GPR_U32(ctx, 31, 0x264DB8u);
    ctx->pc = 0x264DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264DB0u;
    // 0x264db4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x264DB0u, 0x264DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264DB8u;
label_264db8:
    // 0x264db8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x264db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x264dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264dc0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x264dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x264dc4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x264dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x264dc8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x264dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x264dcc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x264dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x264dd0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x264dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x264dd4: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x264dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x264dd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264ddc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x264ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x264de0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x264de0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264de4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x264de4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264de8: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x264de8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x264dec: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x264decu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x264df0: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x264df0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x264df4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x264df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x264df8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x264df8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x264dfc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x264dfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x264e00: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x264e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x264e04: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x264e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x264e08: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x264e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x264e0c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x264e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x264e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x264e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264e14: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x264e14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x264e18: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x264e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x264e1c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x264e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264e20: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x264e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x264e24: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x264e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x264e28: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x264e28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x264e2c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x264e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264e30: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x264E30u;
    {
        const bool branch_taken_0x264e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x264E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E30u;
        // 0x264e34: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e30) {
            ctx->pc = 0x264E3Cu;
            goto label_264e3c;
        }
    }
    ctx->pc = 0x264E38u;
    // 0x264e38: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x264e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_264e3c:
    // 0x264e3c: 0x1492000c  bne         $a0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x264E3Cu;
    {
        const bool branch_taken_0x264e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x264E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E3Cu;
        // 0x264e40: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e3c) {
            ctx->pc = 0x264E70u;
            goto label_264e70;
        }
    }
    ctx->pc = 0x264E44u;
    // 0x264e44: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x264e44u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x264e48: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x264e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x264e4c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x264e4cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x264e50: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x264e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x264e54: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x264e54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x264e58: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x264e58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x264e5c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x264e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x264e60: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x264e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x264e64: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x264e64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264e68: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x264e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x264e6c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x264e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_264e70:
    // 0x264e70: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x264e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x264e74: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x264e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x264e78: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x264e78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x264e7c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x264e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x264e80: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x264e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x264e84: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x264e84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x264e88: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x264e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x264e8c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x264e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x264e90: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x264e90u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x264e94: 0x3c01bf73  lui         $at, 0xBF73
    ctx->pc = 0x264e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49011 << 16));
    // 0x264e98: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x264e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x264e9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264ea0: 0x0  nop
    ctx->pc = 0x264ea0u;
    // NOP
    // 0x264ea4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x264ea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264ea8: 0x0  nop
    ctx->pc = 0x264ea8u;
    // NOP
    // 0x264eac: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x264EACu;
    {
        const bool branch_taken_0x264eac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x264EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264EACu;
        // 0x264eb0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264eac) {
            ctx->pc = 0x264F44u;
            goto label_264f44;
        }
    }
    ctx->pc = 0x264EB4u;
    // 0x264eb4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x264EB4u;
    SET_GPR_U32(ctx, 31, 0x264EBCu);
    ctx->pc = 0x264EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264EB4u;
    // 0x264eb8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x264EB4u, 0x264EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264EBCu;
label_264ebc:
    // 0x264ebc: 0xc6400224  lwc1        $f0, 0x224($s2)
    ctx->pc = 0x264ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264ec0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x264ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x264ec4: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x264ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x264ec8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x264ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x264ecc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x264eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x264ed0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x264ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x264ed4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x264ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x264ed8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x264ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x264edc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264ee0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x264ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x264ee4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x264ee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264ee8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x264ee8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264eec: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x264eecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x264ef0: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x264ef0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x264ef4: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x264ef4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x264ef8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x264ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x264efc: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x264efcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x264f00: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x264f00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x264f04: 0xfba50030  sqc2        $vf5, 0x30($sp)
    ctx->pc = 0x264f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x264f08: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x264F08u;
    SET_GPR_U32(ctx, 31, 0x264F10u);
    ctx->pc = 0x264F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F08u;
    // 0x264f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x264F08u, 0x264F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F10u;
label_264f10:
    // 0x264f10: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x264f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x264f14: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x264f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x264f18: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x264f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x264f1c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x264F1Cu;
    {
        const bool branch_taken_0x264f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264f1c) {
            ctx->pc = 0x264F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264F1Cu;
            // 0x264f20: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F38u;
            goto label_264f38;
        }
    }
    ctx->pc = 0x264F24u;
    // 0x264f24: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x264f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x264f28: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x264f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x264f2c: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x264f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x264f30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264F30u;
    {
        const bool branch_taken_0x264f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F30u;
        // 0x264f34: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f30) {
            ctx->pc = 0x264F44u;
            goto label_264f44;
        }
    }
    ctx->pc = 0x264F38u;
label_264f38:
    // 0x264f38: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x264F38u;
    SET_GPR_U32(ctx, 31, 0x264F40u);
    ctx->pc = 0x264F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F38u;
    // 0x264f3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x264F38u, 0x264F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F40u;
label_264f40:
    // 0x264f40: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x264f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_264f44:
    // 0x264f44: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x264f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x264f48: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x264f48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264f4c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x264f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x264f50: 0x3e00008  jr          $ra
    ctx->pc = 0x264F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F50u;
        // 0x264f54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264F58u;
}
