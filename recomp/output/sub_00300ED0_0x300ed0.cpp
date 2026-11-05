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

// Function: sub_00300ED0
// Address: 0x300ed0 - 0x3010f0
void sub_00300ED0_0x300ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300ED0_0x300ed0");
#endif

    switch (ctx->pc) {
        case 0x300ef8u: goto label_300ef8;
        case 0x300f28u: goto label_300f28;
        default: break;
    }

    ctx->pc = 0x300ed0u;

    // 0x300ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x300ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x300ed4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x300ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x300ed8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x300ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x300edc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x300edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x300ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x300ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ee4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x300ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x300ee8: 0x24515870  addiu       $s1, $v0, 0x5870
    ctx->pc = 0x300ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x300eec: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x300eecu;
    { uint32_t bits = FAST_READ32(0x595904u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300ef0: 0xc0bd672  jal         func_2F59C8
    ctx->pc = 0x300EF0u;
    SET_GPR_U32(ctx, 31, 0x300EF8u);
    ctx->pc = 0x300EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300EF0u;
    // 0x300ef4: 0xe6200098  swc1        $f0, 0x98($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F59C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F59C8u, 0x300EF0u, 0x300EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300EF8u;
label_300ef8:
    // 0x300ef8: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x300ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x300efc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x300efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x300f00: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x300F00u;
    {
        const bool branch_taken_0x300f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F00u;
        // 0x300f04: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f00) {
            ctx->pc = 0x30103Cu;
            goto label_30103c;
        }
    }
    ctx->pc = 0x300F08u;
    // 0x300f08: 0xc6011240  lwc1        $f1, 0x1240($s0)
    ctx->pc = 0x300f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300f0c: 0xc440b770  lwc1        $f0, -0x4890($v0)
    ctx->pc = 0x300f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300f10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x300f10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300f14: 0x0  nop
    ctx->pc = 0x300f14u;
    // NOP
    // 0x300f18: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x300F18u;
    {
        const bool branch_taken_0x300f18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x300F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F18u;
        // 0x300f1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f18) {
            ctx->pc = 0x301040u;
            goto label_301040;
        }
    }
    ctx->pc = 0x300F20u;
    // 0x300f20: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x300F20u;
    SET_GPR_U32(ctx, 31, 0x300F28u);
    ctx->pc = 0x300F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300F20u;
    // 0x300f24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x300F20u, 0x300F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300F28u;
label_300f28:
    // 0x300f28: 0x8e02121c  lw          $v0, 0x121C($s0)
    ctx->pc = 0x300f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x300f2c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x300F2Cu;
    {
        const bool branch_taken_0x300f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300f2c) {
            ctx->pc = 0x300F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300F2Cu;
            // 0x300f30: 0x8e030104  lw          $v1, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300F64u;
            goto label_300f64;
        }
    }
    ctx->pc = 0x300F34u;
    // 0x300f34: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x300f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x300f38: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x300f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x300f3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x300f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300f40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x300f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300f44: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x300f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x300f48: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x300f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x300f4c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x300f4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300f50: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x300f50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300f54: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x300f54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x300f58: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x300f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300f5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x300F5Cu;
    {
        const bool branch_taken_0x300f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F5Cu;
        // 0x300f60: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f5c) {
            ctx->pc = 0x300F84u;
            goto label_300f84;
        }
    }
    ctx->pc = 0x300F64u;
label_300f64:
    // 0x300f64: 0x26041230  addiu       $a0, $s0, 0x1230
    ctx->pc = 0x300f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4656));
    // 0x300f68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300f6c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x300f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x300f70: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x300f70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300f74: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x300f74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300f78: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x300f78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x300f7c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x300f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300f80: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x300f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_300f84:
    // 0x300f84: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x300f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x300f88: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x300f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300f8c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x300f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300f90: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x300f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300f94: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x300f94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x300f98: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x300f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x300f9c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x300f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x300fa0: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x300fa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x300fa4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x300fa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300fa8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300fac: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x300facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300fb0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x300fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x300fb4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x300fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x300fb8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x300fb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x300fbc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x300fbcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x300fc0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x300fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x300fc4: 0x46000004  c1          0x4
    ctx->pc = 0x300fc4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x300fc8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x300fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x300fcc: 0xc442b774  lwc1        $f2, -0x488C($v0)
    ctx->pc = 0x300fccu;
    { uint32_t bits = FAST_READ32(0x3FB774u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300fd0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x300fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300fd4: 0x0  nop
    ctx->pc = 0x300fd4u;
    // NOP
    // 0x300fd8: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x300FD8u;
    {
        const bool branch_taken_0x300fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x300fd8) {
            ctx->pc = 0x300FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300FD8u;
            // 0x300fdc: 0x922202cb  lbu         $v0, 0x2CB($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 715)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30104Cu;
            goto label_30104c;
        }
    }
    ctx->pc = 0x300FE0u;
    // 0x300fe0: 0x0  nop
    ctx->pc = 0x300fe0u;
    // NOP
    // 0x300fe4: 0x0  nop
    ctx->pc = 0x300fe4u;
    // NOP
    // 0x300fe8: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x300fe8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x300fec: 0xc62302d8  lwc1        $f3, 0x2D8($s1)
    ctx->pc = 0x300fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x300ff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x300ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x300ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x300ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300ff8: 0xc62100a8  lwc1        $f1, 0xA8($s1)
    ctx->pc = 0x300ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300ffc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x300ffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x301000: 0xc62402d0  lwc1        $f4, 0x2D0($s1)
    ctx->pc = 0x301000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x301004: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x301004u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x301008: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x301008u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x30100c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30100cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x301010: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x301010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301014: 0x0  nop
    ctx->pc = 0x301014u;
    // NOP
    // 0x301018: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x301018u;
    {
        const bool branch_taken_0x301018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301018u;
        // 0x30101c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301018) {
            ctx->pc = 0x30102Cu;
            goto label_30102c;
        }
    }
    ctx->pc = 0x301020u;
    // 0x301020: 0xa22002cc  sb          $zero, 0x2CC($s1)
    ctx->pc = 0x301020u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 716), (uint8_t)GPR_U32(ctx, 0));
    // 0x301024: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x301024u;
    {
        const bool branch_taken_0x301024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301024u;
        // 0x301028: 0xa22202cb  sb          $v0, 0x2CB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 715), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301024) {
            ctx->pc = 0x301048u;
            goto label_301048;
        }
    }
    ctx->pc = 0x30102Cu;
label_30102c:
    // 0x30102c: 0xe62200a8  swc1        $f2, 0xA8($s1)
    ctx->pc = 0x30102cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
    // 0x301030: 0xa22002cb  sb          $zero, 0x2CB($s1)
    ctx->pc = 0x301030u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 715), (uint8_t)GPR_U32(ctx, 0));
    // 0x301034: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x301034u;
    {
        const bool branch_taken_0x301034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301034u;
        // 0x301038: 0xa22002cc  sb          $zero, 0x2CC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 716), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301034) {
            ctx->pc = 0x301048u;
            goto label_301048;
        }
    }
    ctx->pc = 0x30103Cu;
label_30103c:
    // 0x30103c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301040:
    // 0x301040: 0xa22002cb  sb          $zero, 0x2CB($s1)
    ctx->pc = 0x301040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 715), (uint8_t)GPR_U32(ctx, 0));
    // 0x301044: 0xa22202cc  sb          $v0, 0x2CC($s1)
    ctx->pc = 0x301044u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 716), (uint8_t)GPR_U32(ctx, 2));
label_301048:
    // 0x301048: 0x922202cb  lbu         $v0, 0x2CB($s1)
    ctx->pc = 0x301048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 715)));
label_30104c:
    // 0x30104c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30104Cu;
    {
        const bool branch_taken_0x30104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30104c) {
            ctx->pc = 0x301050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30104Cu;
            // 0x301050: 0x922202cc  lbu         $v0, 0x2CC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301070u;
            goto label_301070;
        }
    }
    ctx->pc = 0x301054u;
    // 0x301054: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x301054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301058: 0xc62102d0  lwc1        $f1, 0x2D0($s1)
    ctx->pc = 0x301058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30105c: 0xc62202d8  lwc1        $f2, 0x2D8($s1)
    ctx->pc = 0x30105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301060: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x301060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x301064: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x301064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301068: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x301068u;
    {
        const bool branch_taken_0x301068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301068u;
        // 0x30106c: 0xe62000a8  swc1        $f0, 0xA8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301068) {
            ctx->pc = 0x301094u;
            goto label_301094;
        }
    }
    ctx->pc = 0x301070u;
label_301070:
    // 0x301070: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x301070u;
    {
        const bool branch_taken_0x301070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301070) {
            ctx->pc = 0x301074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301070u;
            // 0x301074: 0xc6200098  lwc1        $f0, 0x98($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3010A0u;
            goto label_3010a0;
        }
    }
    ctx->pc = 0x301078u;
    // 0x301078: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x301078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30107c: 0xc62102d4  lwc1        $f1, 0x2D4($s1)
    ctx->pc = 0x30107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301080: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x301080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x301084: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x301084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x301088: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x301088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30108c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x30108cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301090: 0xe62000a8  swc1        $f0, 0xA8($s1)
    ctx->pc = 0x301090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
label_301094:
    // 0x301094: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x301094u;
    {
        const bool branch_taken_0x301094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301094) {
            ctx->pc = 0x301098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301094u;
            // 0x301098: 0xe62200a8  swc1        $f2, 0xA8($s1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30109Cu;
            goto label_30109c;
        }
    }
    ctx->pc = 0x30109Cu;
label_30109c:
    // 0x30109c: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x30109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3010a0:
    // 0x3010a0: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x3010a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3010a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3010a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3010a8: 0x0  nop
    ctx->pc = 0x3010a8u;
    // NOP
    // 0x3010ac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3010ACu;
    {
        const bool branch_taken_0x3010ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3010ac) {
            ctx->pc = 0x3010B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3010ACu;
            // 0x3010b0: 0xc6200098  lwc1        $f0, 0x98($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3010C0u;
            goto label_3010c0;
        }
    }
    ctx->pc = 0x3010B4u;
    // 0x3010b4: 0xe6210094  swc1        $f1, 0x94($s1)
    ctx->pc = 0x3010b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x3010b8: 0xe6210098  swc1        $f1, 0x98($s1)
    ctx->pc = 0x3010b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x3010bc: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x3010bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3010c0:
    // 0x3010c0: 0xc62100a8  lwc1        $f1, 0xA8($s1)
    ctx->pc = 0x3010c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3010c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3010c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3010c8: 0x0  nop
    ctx->pc = 0x3010c8u;
    // NOP
    // 0x3010cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3010CCu;
    {
        const bool branch_taken_0x3010cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3010D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010CCu;
        // 0x3010d0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010cc) {
            ctx->pc = 0x3010DCu;
            goto label_3010dc;
        }
    }
    ctx->pc = 0x3010D4u;
    // 0x3010d4: 0xe6210094  swc1        $f1, 0x94($s1)
    ctx->pc = 0x3010d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x3010d8: 0xe6210098  swc1        $f1, 0x98($s1)
    ctx->pc = 0x3010d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_3010dc:
    // 0x3010dc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3010dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3010e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3010e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3010e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3010E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3010E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010E4u;
        // 0x3010e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3010E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3010ECu;
    // 0x3010ec: 0x0  nop
    ctx->pc = 0x3010ecu;
    // NOP
    ctx->pc = 0x3010f0u;
}
