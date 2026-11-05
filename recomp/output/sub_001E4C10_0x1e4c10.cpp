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

// Function: sub_001E4C10
// Address: 0x1e4c10 - 0x1e4d68
void sub_001E4C10_0x1e4c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4C10_0x1e4c10");
#endif

    switch (ctx->pc) {
        case 0x1e4c50u: goto label_1e4c50;
        case 0x1e4c58u: goto label_1e4c58;
        case 0x1e4cecu: goto label_1e4cec;
        case 0x1e4d3cu: goto label_1e4d3c;
        default: break;
    }

    ctx->pc = 0x1e4c10u;

    // 0x1e4c10: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1e4c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1e4c14: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1e4c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1e4c18: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1e4c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1e4c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c20: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1e4c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1e4c24: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1e4c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e4c28: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x1e4c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x1e4c2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e4c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c30: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x1e4c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x1e4c34: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1e4c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c38: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1e4c38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1e4c3c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1e4c3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c40: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x1e4c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x1e4c44: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1e4c44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e4c48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E4C48u;
    SET_GPR_U32(ctx, 31, 0x1E4C50u);
    ctx->pc = 0x1E4C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C48u;
    // 0x1e4c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E4C48u, 0x1E4C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C50u;
label_1e4c50:
    // 0x1e4c50: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E4C50u;
    SET_GPR_U32(ctx, 31, 0x1E4C58u);
    ctx->pc = 0x1E4C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C50u;
    // 0x1e4c54: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E4C50u, 0x1E4C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C58u;
label_1e4c58:
    // 0x1e4c58: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1e4c58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e4c5c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e4c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e4c60: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1e4c60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e4c64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e4c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e4c68: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1e4c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1e4c6c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e4c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e4c70: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e4c70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4c74: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e4c74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4c78: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e4c78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4c7c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e4c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4c80: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1e4c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4c84: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1e4c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4c88: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1e4c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e4c8c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e4c8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e4c90: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e4c90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e4c94: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1e4c94u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e4c98: 0x0  nop
    ctx->pc = 0x1e4c98u;
    // NOP
    // 0x1e4c9c: 0x0  nop
    ctx->pc = 0x1e4c9cu;
    // NOP
    // 0x1e4ca0: 0x46010084  c1          0x10084
    ctx->pc = 0x1e4ca0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e4ca4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1e4ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e4ca8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4cac: 0x0  nop
    ctx->pc = 0x1e4cacu;
    // NOP
    // 0x1e4cb0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1e4cb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4cb4: 0x0  nop
    ctx->pc = 0x1e4cb4u;
    // NOP
    // 0x1e4cb8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1E4CB8u;
    {
        const bool branch_taken_0x1e4cb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CB8u;
        // 0x1e4cbc: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cb8) {
            ctx->pc = 0x1E4CE4u;
            goto label_1e4ce4;
        }
    }
    ctx->pc = 0x1E4CC0u;
    // 0x1e4cc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4cc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4cc8: 0x0  nop
    ctx->pc = 0x1e4cc8u;
    // NOP
    // 0x1e4ccc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1e4cccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1e4cd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e4cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e4cd4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1e4cd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e4cd8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e4cd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e4cdc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e4cdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ce0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e4ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e4ce4:
    // 0x1e4ce4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E4CE4u;
    SET_GPR_U32(ctx, 31, 0x1E4CECu);
    ctx->pc = 0x1E4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CE4u;
    // 0x1e4ce8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E4CE4u, 0x1E4CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CECu;
label_1e4cec:
    // 0x1e4cec: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1e4cecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e4cf0: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x1e4cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1e4cf4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1e4cf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e4cf8: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1e4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e4cfc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1e4cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1e4d00: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1e4d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e4d04: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1e4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4d08: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1e4d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4d0c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1e4d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4d10: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x1e4d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4d14: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x1e4d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e4d18: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e4d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e4d1c: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x1e4d1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e4d20: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x1e4d20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e4d24: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e4d24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4d28: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1e4d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4d2c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1e4d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e4d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d34: 0xc078968  jal         func_1E25A0
    ctx->pc = 0x1E4D34u;
    SET_GPR_U32(ctx, 31, 0x1E4D3Cu);
    ctx->pc = 0x1E4D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D34u;
    // 0x1e4d38: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E25A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E25A0u, 0x1E4D34u, 0x1E4D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D3Cu;
label_1e4d3c:
    // 0x1e4d3c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1e4d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e4d40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e4d40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e4d44: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1e4d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e4d48: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1e4d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e4d4c: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x1e4d4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e4d50: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x1e4d50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e4d54: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x1e4d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1e4d58: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1e4d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e4d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D5Cu;
        // 0x1e4d60: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4D64u;
    // 0x1e4d64: 0x0  nop
    ctx->pc = 0x1e4d64u;
    // NOP
    ctx->pc = 0x1e4d68u;
}
