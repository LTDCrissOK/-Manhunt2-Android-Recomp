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

// Function: sub_00105A88
// Address: 0x105a88 - 0x105df0
void sub_00105A88_0x105a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105A88_0x105a88");
#endif

    switch (ctx->pc) {
        case 0x105b14u: goto label_105b14;
        case 0x105b1cu: goto label_105b1c;
        case 0x105b24u: goto label_105b24;
        case 0x105b38u: goto label_105b38;
        case 0x105b40u: goto label_105b40;
        case 0x105c9cu: goto label_105c9c;
        case 0x105ca4u: goto label_105ca4;
        case 0x105cb0u: goto label_105cb0;
        case 0x105ce8u: goto label_105ce8;
        case 0x105d10u: goto label_105d10;
        case 0x105d50u: goto label_105d50;
        case 0x105d58u: goto label_105d58;
        case 0x105d90u: goto label_105d90;
        case 0x105d98u: goto label_105d98;
        default: break;
    }

    ctx->pc = 0x105a88u;

label_105a88:
    // 0x105a88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x105a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x105a8c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x105a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x105a90: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x105a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x105a94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x105a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a98: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x105a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x105a9c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x105a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105aa0: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x105aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x105aa4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x105aa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105aa8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x105aa8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x105aac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x105aacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ab0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x105ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x105ab4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x105ab4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x105ab8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x105ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x105abc: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x105abcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x105ac0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x105ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x105ac4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x105ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x105ac8: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x105ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x105acc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x105accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x105ad0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x105ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x105ad4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x105ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105ad8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x105ad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105adc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x105adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105ae0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x105ae0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x105ae4: 0x4a0003bf  vwaitq
    ctx->pc = 0x105ae4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x105ae8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x105ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105aec: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x105aecu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105af4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x105af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x105af8: 0xa2420021  sb          $v0, 0x21($s2)
    ctx->pc = 0x105af8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x105afc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x105afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b00: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x105b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x105b04: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x105b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x105b08: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x105b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x105b0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x105B0Cu;
    SET_GPR_U32(ctx, 31, 0x105B14u);
    ctx->pc = 0x105B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B0Cu;
    // 0x105b10: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x105B0Cu, 0x105B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B14u;
label_105b14:
    // 0x105b14: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x105B14u;
    SET_GPR_U32(ctx, 31, 0x105B1Cu);
    ctx->pc = 0x105B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B14u;
    // 0x105b18: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x105B14u, 0x105B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B1Cu;
label_105b1c:
    // 0x105b1c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x105B1Cu;
    SET_GPR_U32(ctx, 31, 0x105B24u);
    ctx->pc = 0x105B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B1Cu;
    // 0x105b20: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x105B1Cu, 0x105B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B24u;
label_105b24:
    // 0x105b24: 0x92420022  lbu         $v0, 0x22($s2)
    ctx->pc = 0x105b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x105b28: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x105B28u;
    {
        const bool branch_taken_0x105b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B28u;
        // 0x105b2c: 0x27b70030  addiu       $s7, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b28) {
            ctx->pc = 0x105CFCu;
            goto label_105cfc;
        }
    }
    ctx->pc = 0x105B30u;
    // 0x105b30: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x105b30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x105b34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x105b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_105b38:
    // 0x105b38: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x105B38u;
    SET_GPR_U32(ctx, 31, 0x105B40u);
    ctx->pc = 0x105B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B38u;
    // 0x105b3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x105B38u, 0x105B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B40u;
label_105b40:
    // 0x105b40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x105b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x105b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105b48: 0x90820021  lbu         $v0, 0x21($a0)
    ctx->pc = 0x105b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x105b4c: 0x54400067  bnel        $v0, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x105B4Cu;
    {
        const bool branch_taken_0x105b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105b4c) {
            ctx->pc = 0x105B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105B4Cu;
            // 0x105b50: 0x92420022  lbu         $v0, 0x22($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105CECu;
            goto label_105cec;
        }
    }
    ctx->pc = 0x105B54u;
    // 0x105b54: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x105b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x105b58: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x105b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x105b5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105B5Cu;
    {
        const bool branch_taken_0x105b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B5Cu;
        // 0x105b60: 0x3107a  dsrl        $v0, $v1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b5c) {
            ctx->pc = 0x105B70u;
            goto label_105b70;
        }
    }
    ctx->pc = 0x105B64u;
    // 0x105b64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105b68: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x105B68u;
    {
        const bool branch_taken_0x105b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105b68) {
            ctx->pc = 0x105B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105B68u;
            // 0x105b6c: 0x92420022  lbu         $v0, 0x22($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105CECu;
            goto label_105cec;
        }
    }
    ctx->pc = 0x105B70u;
label_105b70:
    // 0x105b70: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x105b70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105b74: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x105b74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x105b78: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x105b78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105b7c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x105b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105b80: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x105b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105b84: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x105b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x105b88: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x105b88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x105b8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x105b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x105b90: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x105b90u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x105b94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x105b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105b98: 0x0  nop
    ctx->pc = 0x105b98u;
    // NOP
    // 0x105b9c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x105B9Cu;
    {
        const bool branch_taken_0x105b9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B9Cu;
        // 0x105ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b9c) {
            ctx->pc = 0x105BD0u;
            goto label_105bd0;
        }
    }
    ctx->pc = 0x105BA4u;
    // 0x105ba4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x105ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105ba8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x105ba8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x105bac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x105bacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105bb0: 0x0  nop
    ctx->pc = 0x105bb0u;
    // NOP
    // 0x105bb4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x105BB4u;
    {
        const bool branch_taken_0x105bb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BB4u;
        // 0x105bb8: 0xc7a00038  lwc1        $f0, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105bb4) {
            ctx->pc = 0x105BD0u;
            goto label_105bd0;
        }
    }
    ctx->pc = 0x105BBCu;
    // 0x105bbc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x105bbcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x105bc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x105bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105bc4: 0x0  nop
    ctx->pc = 0x105bc4u;
    // NOP
    // 0x105bc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x105BC8u;
    {
        const bool branch_taken_0x105bc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x105bc8) {
            ctx->pc = 0x105BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105BC8u;
            // 0x105bcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105BD0u;
            goto label_105bd0;
        }
    }
    ctx->pc = 0x105BD0u;
label_105bd0:
    // 0x105bd0: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x105BD0u;
    {
        const bool branch_taken_0x105bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105bd0) {
            ctx->pc = 0x105BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105BD0u;
            // 0x105bd4: 0x92420022  lbu         $v0, 0x22($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105CECu;
            goto label_105cec;
        }
    }
    ctx->pc = 0x105BD8u;
    // 0x105bd8: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x105bd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x105bdc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x105bdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105be0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x105be0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105be4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x105be4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105be8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x105be8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x105bec: 0x4a0003bf  vwaitq
    ctx->pc = 0x105becu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x105bf0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x105bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105bf4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x105bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105bf8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x105bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105bfc: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x105bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105c00: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x105c00u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x105c04: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x105c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105c08: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x105c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105c0c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x105c0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x105c10: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x105c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105c14: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x105c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105c18: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x105c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x105c1c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x105c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105c20: 0x0  nop
    ctx->pc = 0x105c20u;
    // NOP
    // 0x105c24: 0x45020031  bc1fl       . + 4 + (0x31 << 2)
    ctx->pc = 0x105C24u;
    {
        const bool branch_taken_0x105c24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105c24) {
            ctx->pc = 0x105C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105C24u;
            // 0x105c28: 0x92420022  lbu         $v0, 0x22($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105CECu;
            goto label_105cec;
        }
    }
    ctx->pc = 0x105C2Cu;
    // 0x105c2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105c30: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x105c30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105c34: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x105c34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105c38: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x105c38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105c3c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x105c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105c40: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x105c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x105c44: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x105c44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105c48: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x105c48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105c4c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x105c4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105c50: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x105c50u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x105c54: 0x4a0003bf  vwaitq
    ctx->pc = 0x105c54u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x105c58: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x105c58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105c5c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x105c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105c60: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x105c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105c64: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x105c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105c68: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x105c68u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x105c6c: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x105c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105c70: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x105c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105c74: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x105c74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x105c78: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x105c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105c7c: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x105c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105c80: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x105c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x105c84: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x105c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105c88: 0x0  nop
    ctx->pc = 0x105c88u;
    // NOP
    // 0x105c8c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x105C8Cu;
    {
        const bool branch_taken_0x105c8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C8Cu;
        // 0x105c90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c8c) {
            ctx->pc = 0x105CA4u;
            goto label_105ca4;
        }
    }
    ctx->pc = 0x105C94u;
    // 0x105c94: 0xc0f6aea  jal         func_3DABA8
    ctx->pc = 0x105C94u;
    SET_GPR_U32(ctx, 31, 0x105C9Cu);
    ctx->pc = 0x105C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C94u;
    // 0x105c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DABA8u, 0x105C94u, 0x105C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C9Cu;
label_105c9c:
    // 0x105c9c: 0xc04113e  jal         func_1044F8
    ctx->pc = 0x105C9Cu;
    SET_GPR_U32(ctx, 31, 0x105CA4u);
    ctx->pc = 0x105CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C9Cu;
    // 0x105ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044F8u, 0x105C9Cu, 0x105CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CA4u;
label_105ca4:
    // 0x105ca4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x105ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105ca8: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x105CA8u;
    SET_GPR_U32(ctx, 31, 0x105CB0u);
    ctx->pc = 0x105CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105CA8u;
    // 0x105cac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x105CA8u, 0x105CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CB0u;
label_105cb0:
    // 0x105cb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x105cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105cb8: 0xa0620021  sb          $v0, 0x21($v1)
    ctx->pc = 0x105cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x105cbc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x105cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105cc0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x105cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105cc4: 0x0  nop
    ctx->pc = 0x105cc4u;
    // NOP
    // 0x105cc8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x105CC8u;
    {
        const bool branch_taken_0x105cc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CC8u;
        // 0x105ccc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cc8) {
            ctx->pc = 0x105CE8u;
            goto label_105ce8;
        }
    }
    ctx->pc = 0x105CD0u;
    // 0x105cd0: 0x4600ab01  sub.s       $f12, $f21, $f0
    ctx->pc = 0x105cd0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x105cd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x105cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105cd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x105cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cdc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x105cdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x105ce0: 0xc0416a2  jal         func_105A88
    ctx->pc = 0x105CE0u;
    SET_GPR_U32(ctx, 31, 0x105CE8u);
    ctx->pc = 0x105CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105CE0u;
    // 0x105ce4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A88u;
    goto label_105a88;
    ctx->pc = 0x105CE8u;
label_105ce8:
    // 0x105ce8: 0x92420022  lbu         $v0, 0x22($s2)
    ctx->pc = 0x105ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_105cec:
    // 0x105cec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x105cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x105cf0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x105cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105cf4: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x105CF4u;
    {
        const bool branch_taken_0x105cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CF4u;
        // 0x105cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cf4) {
            ctx->pc = 0x105B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105b38;
        }
    }
    ctx->pc = 0x105CFCu;
label_105cfc:
    // 0x105cfc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x105cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x105d00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x105d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d04: 0xa2400021  sb          $zero, 0x21($s2)
    ctx->pc = 0x105d04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x105d08: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x105d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x105d0c: 0x0  nop
    ctx->pc = 0x105d0cu;
    // NOP
label_105d10:
    // 0x105d10: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x105d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x105d14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x105D14u;
    {
        const bool branch_taken_0x105d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D14u;
        // 0x105d18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d14) {
            ctx->pc = 0x105D20u;
            goto label_105d20;
        }
    }
    ctx->pc = 0x105D1Cu;
    // 0x105d1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_105d20:
    // 0x105d20: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x105d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x105d24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105D24u;
    {
        const bool branch_taken_0x105d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105d24) {
            ctx->pc = 0x105D34u;
            goto label_105d34;
        }
    }
    ctx->pc = 0x105D2Cu;
    // 0x105d2c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x105d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x105d30: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x105d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_105d34:
    // 0x105d34: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x105D34u;
    {
        const bool branch_taken_0x105d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x105d34) {
            ctx->pc = 0x105D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105D34u;
            // 0x105d38: 0xa0600021  sb          $zero, 0x21($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105d10;
        }
    }
    ctx->pc = 0x105D3Cu;
    // 0x105d3c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x105d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x105d40: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x105d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105D44u;
    {
        const bool branch_taken_0x105d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D44u;
        // 0x105d48: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d44) {
            ctx->pc = 0x105D68u;
            goto label_105d68;
        }
    }
    ctx->pc = 0x105D4Cu;
    // 0x105d4c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x105d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_105d50:
    // 0x105d50: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x105D50u;
    SET_GPR_U32(ctx, 31, 0x105D58u);
    ctx->pc = 0x105D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D50u;
    // 0x105d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x105D50u, 0x105D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D58u;
label_105d58:
    // 0x105d58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x105d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x105d5c: 0x0  nop
    ctx->pc = 0x105d5cu;
    // NOP
    // 0x105d60: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x105D60u;
    {
        const bool branch_taken_0x105d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105d60) {
            ctx->pc = 0x105D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105D60u;
            // 0x105d64: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105d50;
        }
    }
    ctx->pc = 0x105D68u;
label_105d68:
    // 0x105d68: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x105d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x105d6c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x105d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x105d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x105d74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x105d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x105d78: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x105d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x105d7c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x105d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x105d80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x105D80u;
    {
        const bool branch_taken_0x105d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D80u;
        // 0x105d84: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d80) {
            ctx->pc = 0x105DA8u;
            goto label_105da8;
        }
    }
    ctx->pc = 0x105D88u;
    // 0x105d88: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x105d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x105d8c: 0x0  nop
    ctx->pc = 0x105d8cu;
    // NOP
label_105d90:
    // 0x105d90: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x105D90u;
    SET_GPR_U32(ctx, 31, 0x105D98u);
    ctx->pc = 0x105D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D90u;
    // 0x105d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x105D90u, 0x105D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D98u;
label_105d98:
    // 0x105d98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x105d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x105d9c: 0x0  nop
    ctx->pc = 0x105d9cu;
    // NOP
    // 0x105da0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x105DA0u;
    {
        const bool branch_taken_0x105da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105da0) {
            ctx->pc = 0x105DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105DA0u;
            // 0x105da4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105d90;
        }
    }
    ctx->pc = 0x105DA8u;
label_105da8:
    // 0x105da8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x105da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x105dac: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x105dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x105db0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x105db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x105db4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x105db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x105db8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x105db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105dbc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x105dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x105dc0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x105dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105dc4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x105dc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x105dc8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x105dc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105dcc: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x105dccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x105dd0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x105dd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105dd4: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x105dd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x105dd8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x105dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105ddc: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x105ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x105de0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x105de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x105de4: 0x3e00008  jr          $ra
    ctx->pc = 0x105DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DE4u;
        // 0x105de8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105DECu;
    // 0x105dec: 0x0  nop
    ctx->pc = 0x105decu;
    // NOP
    ctx->pc = 0x105df0u;
}
