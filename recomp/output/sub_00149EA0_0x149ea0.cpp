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

// Function: sub_00149EA0
// Address: 0x149ea0 - 0x14a080
void sub_00149EA0_0x149ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149EA0_0x149ea0");
#endif

    switch (ctx->pc) {
        case 0x149fb0u: goto label_149fb0;
        case 0x14a034u: goto label_14a034;
        case 0x14a06cu: goto label_14a06c;
        default: break;
    }

    ctx->pc = 0x149ea0u;

    // 0x149ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149ea4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x149ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x149ea8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x149ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x149eac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x149eacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x149eb0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x149eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x149eb4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x149eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x149eb8: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x149eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x149ebc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x149ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x149ec0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x149ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x149ec4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149ec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149ecc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x149eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149ed0: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x149ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x149ed4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x149ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x149ed8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x149ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x149edc: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x149edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x149ee0: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x149EE0u;
    {
        const bool branch_taken_0x149ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ee0) {
            ctx->pc = 0x149EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149EE0u;
            // 0x149ee4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A070u;
            goto label_14a070;
        }
    }
    ctx->pc = 0x149EE8u;
    // 0x149ee8: 0x8e030790  lw          $v1, 0x790($s0)
    ctx->pc = 0x149ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
    // 0x149eec: 0x2402080d  addiu       $v0, $zero, 0x80D
    ctx->pc = 0x149eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x149ef0: 0x5062005f  beql        $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x149EF0u;
    {
        const bool branch_taken_0x149ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x149ef0) {
            ctx->pc = 0x149EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149EF0u;
            // 0x149ef4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A070u;
            goto label_14a070;
        }
    }
    ctx->pc = 0x149EF8u;
    // 0x149ef8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x149ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149efc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x149efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149f00: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x149f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149f04: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x149f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x149f08: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x149f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x149f0c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x149f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f10: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x149f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x149f14: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x149f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149f18: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x149f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x149f1c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x149f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f20: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x149f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x149f24: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x149f24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149f28: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x149f28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149f2c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x149f2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149f30: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x149f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149f34: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x149f34u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x149f38: 0x4a0003bf  vwaitq
    ctx->pc = 0x149f38u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x149f3c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x149f3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149f40: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x149f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149f44: 0xc4800710  lwc1        $f0, 0x710($a0)
    ctx->pc = 0x149f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f48: 0x24820710  addiu       $v0, $a0, 0x710
    ctx->pc = 0x149f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
    // 0x149f4c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x149f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x149f50: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x149f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x149f54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149f58: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x149f58u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x149f5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x149f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149f60: 0x0  nop
    ctx->pc = 0x149f60u;
    // NOP
    // 0x149f64: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x149F64u;
    {
        const bool branch_taken_0x149f64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F64u;
        // 0x149f68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f64) {
            ctx->pc = 0x149F9Cu;
            goto label_149f9c;
        }
    }
    ctx->pc = 0x149F6Cu;
    // 0x149f6c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x149f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f70: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x149f70u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x149f74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x149f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149f78: 0x0  nop
    ctx->pc = 0x149f78u;
    // NOP
    // 0x149f7c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x149F7Cu;
    {
        const bool branch_taken_0x149f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149f7c) {
            ctx->pc = 0x149F9Cu;
            goto label_149f9c;
        }
    }
    ctx->pc = 0x149F84u;
    // 0x149f84: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x149f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f88: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x149f88u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x149f8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x149f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149f90: 0x0  nop
    ctx->pc = 0x149f90u;
    // NOP
    // 0x149f94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149F94u;
    {
        const bool branch_taken_0x149f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149f94) {
            ctx->pc = 0x149F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149F94u;
            // 0x149f98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149F9Cu;
            goto label_149f9c;
        }
    }
    ctx->pc = 0x149F9Cu;
label_149f9c:
    // 0x149f9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x149F9Cu;
    {
        const bool branch_taken_0x149f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F9Cu;
        // 0x149fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f9c) {
            ctx->pc = 0x149FB8u;
            goto label_149fb8;
        }
    }
    ctx->pc = 0x149FA4u;
    // 0x149fa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fa8: 0xc08fde4  jal         func_23F790
    ctx->pc = 0x149FA8u;
    SET_GPR_U32(ctx, 31, 0x149FB0u);
    ctx->pc = 0x149FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149FA8u;
    // 0x149fac: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F790u, 0x149FA8u, 0x149FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FB0u;
label_149fb0:
    // 0x149fb0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x149FB0u;
    {
        const bool branch_taken_0x149fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FB0u;
        // 0x149fb4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fb0) {
            ctx->pc = 0x14A070u;
            goto label_14a070;
        }
    }
    ctx->pc = 0x149FB8u;
label_149fb8:
    // 0x149fb8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x149fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149fbc: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x149fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149fc0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x149fc0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x149fc4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x149fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149fc8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x149fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149fcc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x149fccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x149fd0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x149fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149fd4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x149fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149fd8: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x149fd8u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x149fdc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x149fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x149fe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x149fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149fe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x149fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x149fe8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149fec: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x149fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149ff0: 0x0  nop
    ctx->pc = 0x149ff0u;
    // NOP
    // 0x149ff4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x149FF4u;
    {
        const bool branch_taken_0x149ff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149ff4) {
            ctx->pc = 0x14A004u;
            goto label_14a004;
        }
    }
    ctx->pc = 0x149FFCu;
    // 0x149ffc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149FFCu;
    {
        const bool branch_taken_0x149ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FFCu;
        // 0x14a000: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ffc) {
            ctx->pc = 0x14A014u;
            goto label_14a014;
        }
    }
    ctx->pc = 0x14A004u;
label_14a004:
    // 0x14a004: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x14a004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a008: 0x0  nop
    ctx->pc = 0x14a008u;
    // NOP
    // 0x14a00c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14A00Cu;
    {
        const bool branch_taken_0x14a00c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a00c) {
            ctx->pc = 0x14A010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A00Cu;
            // 0x14a010: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A014u;
            goto label_14a014;
        }
    }
    ctx->pc = 0x14A014u;
label_14a014:
    // 0x14a014: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x14a014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x14a018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14a018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14a01c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14a01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14a020: 0x0  nop
    ctx->pc = 0x14a020u;
    // NOP
    // 0x14a024: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x14a024u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x14a028: 0x460c0304  c1          0xC0304
    ctx->pc = 0x14a028u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x14a02c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x14A02Cu;
    SET_GPR_U32(ctx, 31, 0x14A034u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x14A02Cu, 0x14A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A034u;
label_14a034:
    // 0x14a034: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x14a034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x14a038: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x14a038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x14a03c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a040: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x14a040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x14a044: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14a044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14a048: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14a048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14a04c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x14a04cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x14a050: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x14a050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a054: 0x0  nop
    ctx->pc = 0x14a054u;
    // NOP
    // 0x14a058: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14A058u;
    {
        const bool branch_taken_0x14a058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A058u;
        // 0x14a05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a058) {
            ctx->pc = 0x14A06Cu;
            goto label_14a06c;
        }
    }
    ctx->pc = 0x14A060u;
    // 0x14a060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a064: 0xc08fde4  jal         func_23F790
    ctx->pc = 0x14A064u;
    SET_GPR_U32(ctx, 31, 0x14A06Cu);
    ctx->pc = 0x14A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A064u;
    // 0x14a068: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F790u, 0x14A064u, 0x14A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A06Cu;
label_14a06c:
    // 0x14a06c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14a06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14a070:
    // 0x14a070: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14a070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14a074: 0x3e00008  jr          $ra
    ctx->pc = 0x14A074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A074u;
        // 0x14a078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A07Cu;
    // 0x14a07c: 0x0  nop
    ctx->pc = 0x14a07cu;
    // NOP
    ctx->pc = 0x14a080u;
}
