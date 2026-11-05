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

// Function: sub_00270B88
// Address: 0x270b88 - 0x270db8
void sub_00270B88_0x270b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270B88_0x270b88");
#endif

    switch (ctx->pc) {
        case 0x270bb0u: goto label_270bb0;
        case 0x270d2cu: goto label_270d2c;
        case 0x270da4u: goto label_270da4;
        default: break;
    }

    ctx->pc = 0x270b88u;

    // 0x270b88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x270b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x270b8c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x270b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x270b90: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x270b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x270b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270b98: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x270b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x270b9c: 0x92020244  lbu         $v0, 0x244($s0)
    ctx->pc = 0x270b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x270ba0: 0x5040007e  beql        $v0, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x270BA0u;
    {
        const bool branch_taken_0x270ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ba0) {
            ctx->pc = 0x270BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270BA0u;
            // 0x270ba4: 0xa2000244  sb          $zero, 0x244($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 580), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270D9Cu;
            goto label_270d9c;
        }
    }
    ctx->pc = 0x270BA8u;
    // 0x270ba8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x270BA8u;
    SET_GPR_U32(ctx, 31, 0x270BB0u);
    ctx->pc = 0x270BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270BA8u;
    // 0x270bac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x270BA8u, 0x270BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270BB0u;
label_270bb0:
    // 0x270bb0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x270bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x270bb4: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x270bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x270bb8: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x270bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x270bbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x270bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x270bc0: 0x8ca60104  lw          $a2, 0x104($a1)
    ctx->pc = 0x270bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x270bc4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x270bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x270bc8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x270bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x270bcc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x270bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x270bd0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x270bd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270bd4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x270bd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270bd8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x270bd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x270bdc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x270bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x270be0: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x270be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270be4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x270be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x270be8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x270be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270bec: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x270becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270bf0: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x270bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270bf4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x270bf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x270bf8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x270bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x270bfc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x270bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x270c00: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x270c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x270c04: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x270c04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270c08: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x270c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x270c0c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x270c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270c10: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x270c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270c14: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x270c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x270c18: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x270c18u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x270c1c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x270c1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x270c20: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x270c20u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x270c24: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x270c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x270c28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270c2c: 0x0  nop
    ctx->pc = 0x270c2cu;
    // NOP
    // 0x270c30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270c34: 0x0  nop
    ctx->pc = 0x270c34u;
    // NOP
    // 0x270c38: 0x45000057  bc1f        . + 4 + (0x57 << 2)
    ctx->pc = 0x270C38u;
    {
        const bool branch_taken_0x270c38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C38u;
        // 0x270c3c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c38) {
            ctx->pc = 0x270D98u;
            goto label_270d98;
        }
    }
    ctx->pc = 0x270C40u;
    // 0x270c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x270c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c44: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x270c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x270c48: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270C48u;
    {
        const bool branch_taken_0x270c48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x270C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C48u;
        // 0x270c4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c48) {
            ctx->pc = 0x270C64u;
            goto label_270c64;
        }
    }
    ctx->pc = 0x270C50u;
    // 0x270c50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x270c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270c54: 0x0  nop
    ctx->pc = 0x270c54u;
    // NOP
    // 0x270c58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x270c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x270c5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x270C5Cu;
    {
        const bool branch_taken_0x270c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c5c) {
            ctx->pc = 0x270C7Cu;
            goto label_270c7c;
        }
    }
    ctx->pc = 0x270C64u;
label_270c64:
    // 0x270c64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x270c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x270c68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x270c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x270c6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x270c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270c70: 0x0  nop
    ctx->pc = 0x270c70u;
    // NOP
    // 0x270c74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x270c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x270c78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x270c78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_270c7c:
    // 0x270c7c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x270c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x270c80: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x270c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x270c84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270c88: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x270c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
    // 0x270c8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270C8Cu;
    {
        const bool branch_taken_0x270c8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x270C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C8Cu;
        // 0x270c90: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c8c) {
            ctx->pc = 0x270CA8u;
            goto label_270ca8;
        }
    }
    ctx->pc = 0x270C94u;
    // 0x270c94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x270c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270c98: 0x0  nop
    ctx->pc = 0x270c98u;
    // NOP
    // 0x270c9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x270c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x270ca0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x270CA0u;
    {
        const bool branch_taken_0x270ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ca0) {
            ctx->pc = 0x270CC4u;
            goto label_270cc4;
        }
    }
    ctx->pc = 0x270CA8u;
label_270ca8:
    // 0x270ca8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x270ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x270cac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x270cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x270cb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x270cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x270cb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x270cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270cb8: 0x0  nop
    ctx->pc = 0x270cb8u;
    // NOP
    // 0x270cbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x270cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x270cc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x270cc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_270cc4:
    // 0x270cc4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x270cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x270cc8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x270cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x270ccc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270cd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x270cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x270cd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270cd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x270cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x270cdc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x270cdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x270ce0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x270ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x270ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x270ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270ce8: 0x0  nop
    ctx->pc = 0x270ce8u;
    // NOP
    // 0x270cec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x270cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x270cf0: 0x46011d01  sub.s       $f20, $f3, $f1
    ctx->pc = 0x270cf0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x270cf4: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x270cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270cf8: 0x0  nop
    ctx->pc = 0x270cf8u;
    // NOP
    // 0x270cfc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x270CFCu;
    {
        const bool branch_taken_0x270cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270cfc) {
            ctx->pc = 0x270D14u;
            goto label_270d14;
        }
    }
    ctx->pc = 0x270D04u;
    // 0x270d04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270d0c: 0x0  nop
    ctx->pc = 0x270d0cu;
    // NOP
    // 0x270d10: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x270d10u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_270d14:
    // 0x270d14: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x270d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x270d18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x270d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270d1c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x270d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x270d20: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x270d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x270d24: 0xc0e41ea  jal         func_3907A8
    ctx->pc = 0x270D24u;
    SET_GPR_U32(ctx, 31, 0x270D2Cu);
    ctx->pc = 0x270D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D24u;
    // 0x270d28: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3907A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3907A8u, 0x270D24u, 0x270D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D2Cu;
label_270d2c:
    // 0x270d2c: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x270d2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x270d30: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x270d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x270d34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270d38: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x270d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x270d3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270d40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x270d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x270d44: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x270d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x270d48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x270d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x270d4c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x270d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x270d50: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x270d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x270d54: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x270d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x270d58: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x270d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x270d5c: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x270d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x270d60: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x270d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x270d64: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x270d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x270d68: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x270d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x270d6c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x270d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x270d70: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x270d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x270d74: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x270d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x270d78: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x270d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x270d7c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x270d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x270d80: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x270d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x270d84: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x270d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x270d88: 0xb2020127  sdl         $v0, 0x127($s0)
    ctx->pc = 0x270d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x270d8c: 0xb6020120  sdr         $v0, 0x120($s0)
    ctx->pc = 0x270d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x270d90: 0xb203012f  sdl         $v1, 0x12F($s0)
    ctx->pc = 0x270d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x270d94: 0xb6030128  sdr         $v1, 0x128($s0)
    ctx->pc = 0x270d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_270d98:
    // 0x270d98: 0xa2000244  sb          $zero, 0x244($s0)
    ctx->pc = 0x270d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 580), (uint8_t)GPR_U32(ctx, 0));
label_270d9c:
    // 0x270d9c: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x270D9Cu;
    SET_GPR_U32(ctx, 31, 0x270DA4u);
    ctx->pc = 0x270DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D9Cu;
    // 0x270da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x270D9Cu, 0x270DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DA4u;
label_270da4:
    // 0x270da4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x270da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270da8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x270da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x270dac: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x270dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x270db0: 0x3e00008  jr          $ra
    ctx->pc = 0x270DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DB0u;
        // 0x270db4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270DB8u;
}
