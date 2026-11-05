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

// Function: sub_00146A50
// Address: 0x146a50 - 0x146ba0
void sub_00146A50_0x146a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146A50_0x146a50");
#endif

    switch (ctx->pc) {
        case 0x146a70u: goto label_146a70;
        default: break;
    }

    ctx->pc = 0x146a50u;

    // 0x146a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x146a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x146a54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x146a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x146a58: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x146a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x146a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x146a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x146a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x146a68: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x146A68u;
    SET_GPR_U32(ctx, 31, 0x146A70u);
    ctx->pc = 0x146A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146A68u;
    // 0x146a6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x146A68u, 0x146A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146A70u;
label_146a70:
    // 0x146a70: 0x8e220560  lw          $v0, 0x560($s1)
    ctx->pc = 0x146a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x146a74: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x146a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x146a78: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x146a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x146a7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146a80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x146a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146a84: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x146a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x146a88: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x146A88u;
    {
        const bool branch_taken_0x146a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A88u;
        // 0x146a8c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a88) {
            ctx->pc = 0x146B6Cu;
            goto label_146b6c;
        }
    }
    ctx->pc = 0x146A90u;
    // 0x146a90: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x146a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x146a94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146a98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x146a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146a9c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x146a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x146aa0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x146AA0u;
    {
        const bool branch_taken_0x146aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146aa0) {
            ctx->pc = 0x146AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146AA0u;
            // 0x146aa4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146AB0u;
            goto label_146ab0;
        }
    }
    ctx->pc = 0x146AA8u;
    // 0x146aa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x146AA8u;
    {
        const bool branch_taken_0x146aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146AA8u;
        // 0x146aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146aa8) {
            ctx->pc = 0x146AB8u;
            goto label_146ab8;
        }
    }
    ctx->pc = 0x146AB0u;
label_146ab0:
    // 0x146ab0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x146ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146ab4: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x146ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_146ab8:
    // 0x146ab8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x146AB8u;
    {
        const bool branch_taken_0x146ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146AB8u;
        // 0x146abc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ab8) {
            ctx->pc = 0x146B6Cu;
            goto label_146b6c;
        }
    }
    ctx->pc = 0x146AC0u;
    // 0x146ac0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x146ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x146ac4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x146ac4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146ac8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x146ac8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146acc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x146accu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x146ad0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x146ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x146ad4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x146ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146ad8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x146ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x146adc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x146adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x146ae0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x146ae0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x146ae4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x146ae4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x146ae8: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x146ae8u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x146aec: 0x46050144  c1          0x50144
    ctx->pc = 0x146aecu;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x146af0: 0x46002845  abs.s       $f1, $f5
    ctx->pc = 0x146af0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[5]);
    // 0x146af4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x146af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x146af8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x146af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x146afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x146afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146b00: 0x0  nop
    ctx->pc = 0x146b00u;
    // NOP
    // 0x146b04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146b04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b08: 0x0  nop
    ctx->pc = 0x146b08u;
    // NOP
    // 0x146b0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x146B0Cu;
    {
        const bool branch_taken_0x146b0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x146B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B0Cu;
        // 0x146b10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b0c) {
            ctx->pc = 0x146B18u;
            goto label_146b18;
        }
    }
    ctx->pc = 0x146B14u;
    // 0x146b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x146b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146b18:
    // 0x146b18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x146b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x146b1c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x146B1Cu;
    {
        const bool branch_taken_0x146b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B1Cu;
        // 0x146b20: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b1c) {
            ctx->pc = 0x146B6Cu;
            goto label_146b6c;
        }
    }
    ctx->pc = 0x146B24u;
    // 0x146b24: 0xc6200568  lwc1        $f0, 0x568($s1)
    ctx->pc = 0x146b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146b28: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x146b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x146b2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146b30: 0x0  nop
    ctx->pc = 0x146b30u;
    // NOP
    // 0x146b34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x146b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x146b38: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x146b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x146b3c: 0x0  nop
    ctx->pc = 0x146b3cu;
    // NOP
    // 0x146b40: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x146b40u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x146b44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x146b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x146b48: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x146b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146b4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x146b4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x146b50: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x146b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x146b54: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x146b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x146b58: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x146b58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146b5c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x146b5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146b60: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x146b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x146b64: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x146b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x146b68: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x146b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_146b6c:
    // 0x146b6c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x146b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146b70: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x146b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146b74: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x146b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x146b78: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x146b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x146b7c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x146b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x146b80: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x146b80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x146b84: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x146b84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x146b88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x146b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x146b90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x146b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146b94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x146b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146b98: 0x3e00008  jr          $ra
    ctx->pc = 0x146B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B98u;
        // 0x146b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146BA0u;
}
