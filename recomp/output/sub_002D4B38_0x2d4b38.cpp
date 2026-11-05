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

// Function: sub_002D4B38
// Address: 0x2d4b38 - 0x2d4c80
void sub_002D4B38_0x2d4b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4B38_0x2d4b38");
#endif

    switch (ctx->pc) {
        case 0x2d4b58u: goto label_2d4b58;
        case 0x2d4b78u: goto label_2d4b78;
        case 0x2d4bacu: goto label_2d4bac;
        case 0x2d4bb4u: goto label_2d4bb4;
        case 0x2d4c64u: goto label_2d4c64;
        default: break;
    }

    ctx->pc = 0x2d4b38u;

    // 0x2d4b38: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d4b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d4b3c: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2d4b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2d4b40: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2d4b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2d4b44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d4b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d4b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b4c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2d4b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2d4b50: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2D4B50u;
    SET_GPR_U32(ctx, 31, 0x2D4B58u);
    ctx->pc = 0x2D4B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4B50u;
    // 0x2d4b54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D4B50u, 0x2D4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B58u;
label_2d4b58:
    // 0x2d4b58: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2d4b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4b5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d4b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4b60: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2d4b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4b64: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2d4b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4b68: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2d4b68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d4b6c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d4b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d4b70: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2D4B70u;
    SET_GPR_U32(ctx, 31, 0x2D4B78u);
    ctx->pc = 0x2D4B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4B70u;
    // 0x2d4b74: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D4B70u, 0x2D4B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B78u;
label_2d4b78:
    // 0x2d4b78: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2d4b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4b7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d4b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d4b80: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2d4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d4b84: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d4b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d4b88: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d4b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2d4b8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d4b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d4b90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d4b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d4b94: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2d4b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4b98: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2d4b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4b9c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2d4b9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2d4ba0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2d4ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d4ba4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2D4BA4u;
    SET_GPR_U32(ctx, 31, 0x2D4BACu);
    ctx->pc = 0x2D4BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4BA4u;
    // 0x2d4ba8: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D4BA4u, 0x2D4BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4BACu;
label_2d4bac:
    // 0x2d4bac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2D4BACu;
    SET_GPR_U32(ctx, 31, 0x2D4BB4u);
    ctx->pc = 0x2D4BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4BACu;
    // 0x2d4bb0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D4BACu, 0x2D4BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4BB4u;
label_2d4bb4:
    // 0x2d4bb4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2d4bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4bb8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2d4bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d4bbc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2d4bbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4bc0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2d4bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d4bc4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d4bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d4bc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d4bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d4bcc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2d4bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2d4bd0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2d4bd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4bd4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2d4bd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4bd8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d4bd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d4bdc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2d4bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d4be0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2d4be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4be4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2d4be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4be8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2d4be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d4bec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2d4becu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2d4bf0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2d4bf0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2d4bf4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2d4bf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2d4bf8: 0x0  nop
    ctx->pc = 0x2d4bf8u;
    // NOP
    // 0x2d4bfc: 0x0  nop
    ctx->pc = 0x2d4bfcu;
    // NOP
    // 0x2d4c00: 0x46010084  c1          0x10084
    ctx->pc = 0x2d4c00u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d4c04: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2d4c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2d4c08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d4c08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4c0c: 0x0  nop
    ctx->pc = 0x2d4c0cu;
    // NOP
    // 0x2d4c10: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2d4c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4c14: 0x0  nop
    ctx->pc = 0x2d4c14u;
    // NOP
    // 0x2d4c18: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2D4C18u;
    {
        const bool branch_taken_0x2d4c18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C18u;
        // 0x2d4c1c: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c18) {
            ctx->pc = 0x2D4C44u;
            goto label_2d4c44;
        }
    }
    ctx->pc = 0x2D4C20u;
    // 0x2d4c20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d4c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d4c24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d4c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4c28: 0x0  nop
    ctx->pc = 0x2d4c28u;
    // NOP
    // 0x2d4c2c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2d4c2cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2d4c30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d4c30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d4c34: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2d4c34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4c38: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d4c38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d4c3c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d4c3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d4c40: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2d4c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2d4c44:
    // 0x2d4c44: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2d4c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d4c48: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x2d4c48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x2d4c4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d4c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c50: 0x24e74b28  addiu       $a3, $a3, 0x4B28
    ctx->pc = 0x2d4c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19240));
    // 0x2d4c54: 0xa3a00080  sb          $zero, 0x80($sp)
    ctx->pc = 0x2d4c54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4c58: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4c5c: 0xc0dbdf4  jal         func_36F7D0
    ctx->pc = 0x2D4C5Cu;
    SET_GPR_U32(ctx, 31, 0x2D4C64u);
    ctx->pc = 0x2D4C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C5Cu;
    // 0x2d4c60: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F7D0u, 0x2D4C5Cu, 0x2D4C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C64u;
label_2d4c64:
    // 0x2d4c64: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x2d4c64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d4c68: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2d4c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d4c6c: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2d4c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2d4c70: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2d4c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d4c74: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C74u;
        // 0x2d4c78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4C7Cu;
    // 0x2d4c7c: 0x0  nop
    ctx->pc = 0x2d4c7cu;
    // NOP
    ctx->pc = 0x2d4c80u;
}
