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

// Function: sub_00167B88
// Address: 0x167b88 - 0x167e80
void sub_00167B88_0x167b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167B88_0x167b88");
#endif

    switch (ctx->pc) {
        case 0x167bd0u: goto label_167bd0;
        case 0x167becu: goto label_167bec;
        case 0x167c0cu: goto label_167c0c;
        case 0x167c24u: goto label_167c24;
        case 0x167c40u: goto label_167c40;
        case 0x167c48u: goto label_167c48;
        case 0x167ce0u: goto label_167ce0;
        case 0x167ce8u: goto label_167ce8;
        case 0x167d2cu: goto label_167d2c;
        case 0x167d34u: goto label_167d34;
        case 0x167dc4u: goto label_167dc4;
        case 0x167dccu: goto label_167dcc;
        case 0x167e28u: goto label_167e28;
        case 0x167e50u: goto label_167e50;
        default: break;
    }

    ctx->pc = 0x167b88u;

label_167b88:
    // 0x167b88: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x167b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x167b8c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x167b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x167b90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167b94: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x167b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x167b98: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x167b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x167b9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x167b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ba0: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x167ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x167ba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ba8: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x167ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x167bac: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x167bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x167bb0: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x167bb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x167bb4: 0xc62003f0  lwc1        $f0, 0x3F0($s1)
    ctx->pc = 0x167bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167bb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167bbc: 0x0  nop
    ctx->pc = 0x167bbcu;
    // NOP
    // 0x167bc0: 0x450100a5  bc1t        . + 4 + (0xA5 << 2)
    ctx->pc = 0x167BC0u;
    {
        const bool branch_taken_0x167bc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BC0u;
        // 0x167bc4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bc0) {
            ctx->pc = 0x167E58u;
            goto label_167e58;
        }
    }
    ctx->pc = 0x167BC8u;
    // 0x167bc8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167BC8u;
    SET_GPR_U32(ctx, 31, 0x167BD0u);
    ctx->pc = 0x167BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BC8u;
    // 0x167bcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167BC8u, 0x167BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BD0u;
label_167bd0:
    // 0x167bd0: 0x262203e0  addiu       $v0, $s1, 0x3E0
    ctx->pc = 0x167bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 992));
    // 0x167bd4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167bd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167bd8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x167bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167bdc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167bdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167be0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x167be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167be4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167BE4u;
    SET_GPR_U32(ctx, 31, 0x167BECu);
    ctx->pc = 0x167BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BE4u;
    // 0x167be8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167BE4u, 0x167BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BECu;
label_167bec:
    // 0x167bec: 0x262203d0  addiu       $v0, $s1, 0x3D0
    ctx->pc = 0x167becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
    // 0x167bf0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x167bf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x167bf4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x167bf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167bf8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167bf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167bfc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x167bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167c00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x167c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167c04: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167C04u;
    SET_GPR_U32(ctx, 31, 0x167C0Cu);
    ctx->pc = 0x167C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C04u;
    // 0x167c08: 0x26300400  addiu       $s0, $s1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167C04u, 0x167C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C0Cu;
label_167c0c:
    // 0x167c0c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x167c0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167c10: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x167c10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167c14: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167c14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167c18: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x167c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167c1c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167C1Cu;
    SET_GPR_U32(ctx, 31, 0x167C24u);
    ctx->pc = 0x167C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C1Cu;
    // 0x167c20: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167C1Cu, 0x167C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C24u;
label_167c24:
    // 0x167c24: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x167c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x167c28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x167c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167c2c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x167c2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167c30: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167c30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167c34: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x167c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167c38: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167C38u;
    SET_GPR_U32(ctx, 31, 0x167C40u);
    ctx->pc = 0x167C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C38u;
    // 0x167c3c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167C38u, 0x167C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C40u;
label_167c40:
    // 0x167c40: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167C40u;
    SET_GPR_U32(ctx, 31, 0x167C48u);
    ctx->pc = 0x167C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C40u;
    // 0x167c44: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167C40u, 0x167C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C48u;
label_167c48:
    // 0x167c48: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x167c48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167c4c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x167c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167c50: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x167c50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167c54: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x167c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167c58: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x167c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x167c5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x167c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167c60: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x167c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x167c64: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x167c64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167c68: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x167c68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x167c6c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167c6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167c70: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x167c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167c74: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x167c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167c78: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x167c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x167c7c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x167c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x167c80: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x167c80u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x167c84: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x167c84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x167c88: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x167c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x167c8c: 0x0  nop
    ctx->pc = 0x167c8cu;
    // NOP
    // 0x167c90: 0x0  nop
    ctx->pc = 0x167c90u;
    // NOP
    // 0x167c94: 0x46000044  c1          0x44
    ctx->pc = 0x167c94u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x167c98: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x167c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x167c9c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x167c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x167ca0: 0x0  nop
    ctx->pc = 0x167ca0u;
    // NOP
    // 0x167ca4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x167ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167ca8: 0x0  nop
    ctx->pc = 0x167ca8u;
    // NOP
    // 0x167cac: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x167CACu;
    {
        const bool branch_taken_0x167cac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CACu;
        // 0x167cb0: 0xe7a10090  swc1        $f1, 0x90($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cac) {
            ctx->pc = 0x167CD8u;
            goto label_167cd8;
        }
    }
    ctx->pc = 0x167CB4u;
    // 0x167cb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x167cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x167cb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167cbc: 0x0  nop
    ctx->pc = 0x167cbcu;
    // NOP
    // 0x167cc0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x167cc0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x167cc4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x167cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167cc8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x167cc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167ccc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x167cccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x167cd0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167cd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167cd4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x167cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_167cd8:
    // 0x167cd8: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x167CD8u;
    SET_GPR_U32(ctx, 31, 0x167CE0u);
    ctx->pc = 0x167CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CD8u;
    // 0x167cdc: 0x3c130048  lui         $s3, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x167CD8u, 0x167CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CE0u;
label_167ce0:
    // 0x167ce0: 0xc077ade  jal         func_1DEB78
    ctx->pc = 0x167CE0u;
    SET_GPR_U32(ctx, 31, 0x167CE8u);
    ctx->pc = 0x167CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CE0u;
    // 0x167ce4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB78u, 0x167CE0u, 0x167CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CE8u;
label_167ce8:
    // 0x167ce8: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x167ce8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x167cec: 0x8e622b1c  lw          $v0, 0x2B1C($s3)
    ctx->pc = 0x167cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11036)));
    // 0x167cf0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x167cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x167cf4: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x167CF4u;
    {
        const bool branch_taken_0x167cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CF4u;
        // 0x167cf8: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cf4) {
            ctx->pc = 0x167E58u;
            goto label_167e58;
        }
    }
    ctx->pc = 0x167CFCu;
    // 0x167cfc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x167d00: 0x8e422b20  lw          $v0, 0x2B20($s2)
    ctx->pc = 0x167d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x167d04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167d08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x167d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167d0c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x167d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x167d10: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x167d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167d14: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x167d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x167d18: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x167d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167d1c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x167d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x167d20: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x167d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167d24: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167D24u;
    SET_GPR_U32(ctx, 31, 0x167D2Cu);
    ctx->pc = 0x167D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D24u;
    // 0x167d28: 0xe7a100ac  swc1        $f1, 0xAC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167D24u, 0x167D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D2Cu;
label_167d2c:
    // 0x167d2c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x167D2Cu;
    SET_GPR_U32(ctx, 31, 0x167D34u);
    ctx->pc = 0x167D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D2Cu;
    // 0x167d30: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x167D2Cu, 0x167D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D34u;
label_167d34:
    // 0x167d34: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x167d34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167d38: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x167d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x167d3c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x167d3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167d40: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x167d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x167d44: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x167d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x167d48: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x167d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x167d4c: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x167d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x167d50: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x167d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167d54: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x167d54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x167d58: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167d58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167d5c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x167d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167d60: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x167d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167d64: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x167d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x167d68: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x167d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x167d6c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x167d6cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x167d70: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x167d70u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x167d74: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x167d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x167d78: 0x0  nop
    ctx->pc = 0x167d78u;
    // NOP
    // 0x167d7c: 0x0  nop
    ctx->pc = 0x167d7cu;
    // NOP
    // 0x167d80: 0x46000044  c1          0x44
    ctx->pc = 0x167d80u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x167d84: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x167d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x167d88: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x167d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167d8c: 0x0  nop
    ctx->pc = 0x167d8cu;
    // NOP
    // 0x167d90: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x167D90u;
    {
        const bool branch_taken_0x167d90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D90u;
        // 0x167d94: 0xe7a10100  swc1        $f1, 0x100($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d90) {
            ctx->pc = 0x167DBCu;
            goto label_167dbc;
        }
    }
    ctx->pc = 0x167D98u;
    // 0x167d98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x167d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x167d9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167da0: 0x0  nop
    ctx->pc = 0x167da0u;
    // NOP
    // 0x167da4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x167da4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x167da8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x167da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167dac: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x167dacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167db0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x167db0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x167db4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167db4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167db8: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x167db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
label_167dbc:
    // 0x167dbc: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x167DBCu;
    SET_GPR_U32(ctx, 31, 0x167DC4u);
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x167DBCu, 0x167DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167DC4u;
label_167dc4:
    // 0x167dc4: 0xc077ade  jal         func_1DEB78
    ctx->pc = 0x167DC4u;
    SET_GPR_U32(ctx, 31, 0x167DCCu);
    ctx->pc = 0x167DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167DC4u;
    // 0x167dc8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB78u, 0x167DC4u, 0x167DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167DCCu;
label_167dcc:
    // 0x167dcc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x167DCCu;
    {
        const bool branch_taken_0x167dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DCCu;
        // 0x167dd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167dcc) {
            ctx->pc = 0x167E5Cu;
            goto label_167e5c;
        }
    }
    ctx->pc = 0x167DD4u;
    // 0x167dd4: 0x16000021  bnez        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x167DD4u;
    {
        const bool branch_taken_0x167dd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x167DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DD4u;
        // 0x167dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167dd4) {
            ctx->pc = 0x167E5Cu;
            goto label_167e5c;
        }
    }
    ctx->pc = 0x167DDCu;
    // 0x167ddc: 0x8e622b1c  lw          $v0, 0x2B1C($s3)
    ctx->pc = 0x167ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11036)));
    // 0x167de0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x167de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x167de4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x167DE4u;
    {
        const bool branch_taken_0x167de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DE4u;
        // 0x167de8: 0x8e422b20  lw          $v0, 0x2B20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167de4) {
            ctx->pc = 0x167E58u;
            goto label_167e58;
        }
    }
    ctx->pc = 0x167DECu;
    // 0x167dec: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x167decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x167df0: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x167df0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x167df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167df8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x167dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x167e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x167e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167e08: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x167e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x167e0c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x167e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167e10: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x167e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x167e14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x167e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167e18: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x167e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x167e1c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x167e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167e20: 0xc059ec4  jal         func_167B10
    ctx->pc = 0x167E20u;
    SET_GPR_U32(ctx, 31, 0x167E28u);
    ctx->pc = 0x167E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E20u;
    // 0x167e24: 0xe7a1011c  swc1        $f1, 0x11C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B10u, 0x167E20u, 0x167E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E28u;
label_167e28:
    // 0x167e28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x167E28u;
    {
        const bool branch_taken_0x167e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E28u;
        // 0x167e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e28) {
            ctx->pc = 0x167E58u;
            goto label_167e58;
        }
    }
    ctx->pc = 0x167E30u;
    // 0x167e30: 0xc62003f0  lwc1        $f0, 0x3F0($s1)
    ctx->pc = 0x167e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167e34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x167e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x167e38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167e3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x167e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x167e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x167e44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x167e48: 0xc059ee2  jal         func_167B88
    ctx->pc = 0x167E48u;
    SET_GPR_U32(ctx, 31, 0x167E50u);
    ctx->pc = 0x167E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E48u;
    // 0x167e4c: 0xe62003f0  swc1        $f0, 0x3F0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1008), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B88u;
    goto label_167b88;
    ctx->pc = 0x167E50u;
label_167e50:
    // 0x167e50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x167E50u;
    {
        const bool branch_taken_0x167e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E50u;
        // 0x167e54: 0xdfb00120  ld          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e50) {
            ctx->pc = 0x167E60u;
            goto label_167e60;
        }
    }
    ctx->pc = 0x167E58u;
label_167e58:
    // 0x167e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x167e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167e5c:
    // 0x167e5c: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x167e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_167e60:
    // 0x167e60: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x167e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x167e64: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x167e64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x167e68: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x167e68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x167e6c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x167e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x167e70: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x167e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167e74: 0x3e00008  jr          $ra
    ctx->pc = 0x167E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E74u;
        // 0x167e78: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167E7Cu;
    // 0x167e7c: 0x0  nop
    ctx->pc = 0x167e7cu;
    // NOP
    ctx->pc = 0x167e80u;
}
