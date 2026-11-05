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

// Function: sub_0031E0C8
// Address: 0x31e0c8 - 0x31e210
void sub_0031E0C8_0x31e0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E0C8_0x31e0c8");
#endif

    switch (ctx->pc) {
        case 0x31e1a4u: goto label_31e1a4;
        case 0x31e1acu: goto label_31e1ac;
        default: break;
    }

    ctx->pc = 0x31e0c8u;

    // 0x31e0c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31e0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31e0cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x31e0ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e0d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x31e0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x31e0d4: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x31e0d4u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x31e0d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x31e0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x31e0dc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x31e0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x31e0e0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x31e0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x31e0e4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x31e0e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x31e0e8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x31e0e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31e0ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x31e0f0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x31E0F0u;
    {
        const bool branch_taken_0x31e0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0F0u;
        // 0x31e0f4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0f0) {
            ctx->pc = 0x31E150u;
            goto label_31e150;
        }
    }
    ctx->pc = 0x31E0F8u;
    // 0x31e0f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31e0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31e0fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31e0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e100: 0x0  nop
    ctx->pc = 0x31e100u;
    // NOP
    // 0x31e104: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x31e104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e108: 0x0  nop
    ctx->pc = 0x31e108u;
    // NOP
    // 0x31e10c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x31E10Cu;
    {
        const bool branch_taken_0x31e10c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e10c) {
            ctx->pc = 0x31E120u;
            goto label_31e120;
        }
    }
    ctx->pc = 0x31E114u;
    // 0x31e114: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x31e114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x31e118: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31E118u;
    {
        const bool branch_taken_0x31e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E118u;
        // 0x31e11c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e118) {
            ctx->pc = 0x31E150u;
            goto label_31e150;
        }
    }
    ctx->pc = 0x31E120u;
label_31e120:
    // 0x31e120: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x31e120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x31e124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31e124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e128: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x31e128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x31e12c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31e12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31e130: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31e130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31e134: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x31e134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x31e138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31e138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e13c: 0x0  nop
    ctx->pc = 0x31e13cu;
    // NOP
    // 0x31e140: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x31e140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x31e144: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31e144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31e148: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x31e148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x31e14c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x31e14cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_31e150:
    // 0x31e150: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31e150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31e154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31e154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e158: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x31e158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31e15c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31e160: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31e160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31e164: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x31e164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x31e168: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x31e168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31e16c: 0x0  nop
    ctx->pc = 0x31e16cu;
    // NOP
    // 0x31e170: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x31e170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x31e174: 0x460ca502  mul.s       $f20, $f20, $f12
    ctx->pc = 0x31e174u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x31e178: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31e17c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31e17cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31e180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e184: 0x0  nop
    ctx->pc = 0x31e184u;
    // NOP
    // 0x31e188: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31e188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31e18c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e190: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31e190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31e194: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x31e194u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x31e198: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x31e198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x31e19c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31E19Cu;
    SET_GPR_U32(ctx, 31, 0x31E1A4u);
    ctx->pc = 0x31E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E19Cu;
    // 0x31e1a0: 0x4614ad41  sub.s       $f21, $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31E19Cu, 0x31E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E1A4u;
label_31e1a4:
    // 0x31e1a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31E1A4u;
    SET_GPR_U32(ctx, 31, 0x31E1ACu);
    ctx->pc = 0x31E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E1A4u;
    // 0x31e1a8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31E1A4u, 0x31E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E1ACu;
label_31e1ac:
    // 0x31e1ac: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x31e1acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31e1b0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x31e1b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31e1b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x31e1b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x31e1b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x31e1b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31e1bc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31e1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31e1c0: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x31e1c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31e1c4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x31e1c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31e1c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x31e1c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x31e1cc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x31e1ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31e1d0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x31e1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31e1d4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x31e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31e1d8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31e1d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e1dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x31e1dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31e1e0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31e1e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31e1e4: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x31e1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31e1e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31e1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e1ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x31e1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e1f0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x31e1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e1f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x31e1f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e1f8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x31e1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31e1fc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x31e1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31e200: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x31e200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31e204: 0x3e00008  jr          $ra
    ctx->pc = 0x31E204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E204u;
        // 0x31e208: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E20Cu;
    // 0x31e20c: 0x0  nop
    ctx->pc = 0x31e20cu;
    // NOP
    ctx->pc = 0x31e210u;
}
