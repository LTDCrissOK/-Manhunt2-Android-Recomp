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

// Function: sub_00211AC0
// Address: 0x211ac0 - 0x211d78
void sub_00211AC0_0x211ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211AC0_0x211ac0");
#endif

    switch (ctx->pc) {
        case 0x211aecu: goto label_211aec;
        case 0x211af4u: goto label_211af4;
        case 0x211b58u: goto label_211b58;
        case 0x211d00u: goto label_211d00;
        case 0x211d18u: goto label_211d18;
        case 0x211d54u: goto label_211d54;
        default: break;
    }

    ctx->pc = 0x211ac0u;

    // 0x211ac0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x211ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x211ac4: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x211ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x211ac8: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x211ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x211acc: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x211accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x211ad0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x211ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ad4: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x211ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x211ad8: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x211ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x211adc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ae0: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x211ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x211ae4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x211AE4u;
    SET_GPR_U32(ctx, 31, 0x211AECu);
    ctx->pc = 0x211AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211AE4u;
    // 0x211ae8: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x211AE4u, 0x211AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211AECu;
label_211aec:
    // 0x211aec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x211AECu;
    SET_GPR_U32(ctx, 31, 0x211AF4u);
    ctx->pc = 0x211AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211AECu;
    // 0x211af0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x211AECu, 0x211AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211AF4u;
label_211af4:
    // 0x211af4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x211af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x211af8: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x211af8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x211afc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x211afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x211b00: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x211b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x211b04: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x211b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x211b08: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x211b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211b0c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x211b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x211b10: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x211b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x211b14: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x211b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x211b18: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x211b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x211b1c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x211b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x211b20: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x211b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x211b24: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x211b24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x211b28: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x211b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211b2c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x211b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x211b30: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x211b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x211b34: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x211b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x211b38: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x211b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x211b3c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x211b3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x211b40: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x211b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211b44: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x211b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x211b48: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x211b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x211b4c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x211b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x211b50: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x211B50u;
    SET_GPR_U32(ctx, 31, 0x211B58u);
    ctx->pc = 0x211B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211B50u;
    // 0x211b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x211B50u, 0x211B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211B58u;
label_211b58:
    // 0x211b58: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x211b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x211b5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211b60: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x211b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x211b64: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x211b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x211b68: 0x906200b1  lbu         $v0, 0xB1($v1)
    ctx->pc = 0x211b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 177)));
    // 0x211b6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211b70: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x211B70u;
    {
        const bool branch_taken_0x211b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b70) {
            ctx->pc = 0x211B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211B70u;
            // 0x211b74: 0xc46100c0  lwc1        $f1, 0xC0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x211B90u;
            goto label_211b90;
        }
    }
    ctx->pc = 0x211B78u;
    // 0x211b78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211b7c: 0x0  nop
    ctx->pc = 0x211b7cu;
    // NOP
    // 0x211b80: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x211b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x211b84: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x211b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    // 0x211b88: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x211B88u;
    {
        const bool branch_taken_0x211b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B88u;
        // 0x211b8c: 0xe6400128  swc1        $f0, 0x128($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b88) {
            ctx->pc = 0x211D54u;
            goto label_211d54;
        }
    }
    ctx->pc = 0x211B90u;
label_211b90:
    // 0x211b90: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x211b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x211b94: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x211b94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x211b98: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x211b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211b9c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x211b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x211ba0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x211ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211ba4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x211ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x211ba8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x211ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211bac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x211bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x211bb0: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x211bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x211bb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211bb8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x211BB8u;
    {
        const bool branch_taken_0x211bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211bb8) {
            ctx->pc = 0x211BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211BB8u;
            // 0x211bbc: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211BF4u;
            goto label_211bf4;
        }
    }
    ctx->pc = 0x211BC0u;
    // 0x211bc0: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x211bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x211bc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x211bc8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x211bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x211bcc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x211bccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x211bd0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x211bd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211bd4: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x211bd4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x211bd8: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x211bd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x211bdc: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x211bdcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x211be0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x211be0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x211be4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x211be4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x211be8: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x211be8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x211bec: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x211becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x211bf0: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x211bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_211bf4:
    // 0x211bf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x211bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211bf8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x211bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x211bfc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x211bfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x211c00: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x211c00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211c04: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x211c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211c08: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x211c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211c0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x211c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211c10: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x211c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x211c14: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x211c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211c18: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x211c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x211c1c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x211c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x211c20: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x211c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x211c24: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x211c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x211c28: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x211c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211c2c: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x211c2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x211c30: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x211c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211c34: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x211c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x211c38: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x211c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211c3c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x211c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x211c40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x211c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x211c44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211c48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211C48u;
    {
        const bool branch_taken_0x211c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C48u;
        // 0x211c4c: 0xe7a100dc  swc1        $f1, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c48) {
            ctx->pc = 0x211C58u;
            goto label_211c58;
        }
    }
    ctx->pc = 0x211C50u;
    // 0x211c50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x211c54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_211c58:
    // 0x211c58: 0x0  nop
    ctx->pc = 0x211c58u;
    // NOP
    // 0x211c5c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x211c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x211c60: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x211c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x211c64: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x211c64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x211c68: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x211c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x211c6c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x211c6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211c70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x211c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x211c74: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x211c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x211c78: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x211c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x211c7c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x211c7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211c80: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x211c80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211c84: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x211c84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211c88: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x211c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x211c8c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x211c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211c90: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x211c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x211c94: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x211c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x211c98: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x211c98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x211c9c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x211c9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x211ca0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x211ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x211ca4: 0x0  nop
    ctx->pc = 0x211ca4u;
    // NOP
    // 0x211ca8: 0x0  nop
    ctx->pc = 0x211ca8u;
    // NOP
    // 0x211cac: 0x46000044  c1          0x44
    ctx->pc = 0x211cacu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x211cb0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x211cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x211cb4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x211cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x211cb8: 0x0  nop
    ctx->pc = 0x211cb8u;
    // NOP
    // 0x211cbc: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x211cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211cc0: 0x0  nop
    ctx->pc = 0x211cc0u;
    // NOP
    // 0x211cc4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x211CC4u;
    {
        const bool branch_taken_0x211cc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CC4u;
        // 0x211cc8: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211cc4) {
            ctx->pc = 0x211CF0u;
            goto label_211cf0;
        }
    }
    ctx->pc = 0x211CCCu;
    // 0x211ccc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x211cd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211cd4: 0x0  nop
    ctx->pc = 0x211cd4u;
    // NOP
    // 0x211cd8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x211cd8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x211cdc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x211cdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x211ce0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x211ce0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211ce4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x211ce4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x211ce8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x211ce8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x211cec: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x211cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_211cf0:
    // 0x211cf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x211cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cf8: 0xc077824  jal         func_1DE090
    ctx->pc = 0x211CF8u;
    SET_GPR_U32(ctx, 31, 0x211D00u);
    ctx->pc = 0x211CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211CF8u;
    // 0x211cfc: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x211CF8u, 0x211D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D00u;
label_211d00:
    // 0x211d00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x211D00u;
    {
        const bool branch_taken_0x211d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D00u;
        // 0x211d04: 0x8fa200a4  lw          $v0, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d00) {
            ctx->pc = 0x211D40u;
            goto label_211d40;
        }
    }
    ctx->pc = 0x211D08u;
    // 0x211d08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x211d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x211d0c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x211d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x211d10: 0xc0c93a0  jal         func_324E80
    ctx->pc = 0x211D10u;
    SET_GPR_U32(ctx, 31, 0x211D18u);
    ctx->pc = 0x211D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D10u;
    // 0x211d14: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324E80u, 0x211D10u, 0x211D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D18u;
label_211d18:
    // 0x211d18: 0x6ba300e7  ldl         $v1, 0xE7($sp)
    ctx->pc = 0x211d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x211d1c: 0x6fa300e0  ldr         $v1, 0xE0($sp)
    ctx->pc = 0x211d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x211d20: 0x6ba400ef  ldl         $a0, 0xEF($sp)
    ctx->pc = 0x211d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x211d24: 0x6fa400e8  ldr         $a0, 0xE8($sp)
    ctx->pc = 0x211d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x211d28: 0xb2430127  sdl         $v1, 0x127($s2)
    ctx->pc = 0x211d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x211d2c: 0xb6430120  sdr         $v1, 0x120($s2)
    ctx->pc = 0x211d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x211d30: 0xb244012f  sdl         $a0, 0x12F($s2)
    ctx->pc = 0x211d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x211d34: 0xb6440128  sdr         $a0, 0x128($s2)
    ctx->pc = 0x211d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x211d38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x211D38u;
    {
        const bool branch_taken_0x211d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211d38) {
            ctx->pc = 0x211D4Cu;
            goto label_211d4c;
        }
    }
    ctx->pc = 0x211D40u;
label_211d40:
    // 0x211d40: 0xe6540128  swc1        $f20, 0x128($s2)
    ctx->pc = 0x211d40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x211d44: 0xe6540120  swc1        $f20, 0x120($s2)
    ctx->pc = 0x211d44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x211d48: 0xe6540124  swc1        $f20, 0x124($s2)
    ctx->pc = 0x211d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
label_211d4c:
    // 0x211d4c: 0xc08475e  jal         func_211D78
    ctx->pc = 0x211D4Cu;
    SET_GPR_U32(ctx, 31, 0x211D54u);
    ctx->pc = 0x211D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D4Cu;
    // 0x211d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211D78u, 0x211D4Cu, 0x211D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D54u;
label_211d54:
    // 0x211d54: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x211d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x211d58: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x211d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x211d5c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x211d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x211d60: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x211d60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x211d64: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x211d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x211d68: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x211d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x211d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x211D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D6Cu;
        // 0x211d70: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211D74u;
    // 0x211d74: 0x0  nop
    ctx->pc = 0x211d74u;
    // NOP
    ctx->pc = 0x211d78u;
}
