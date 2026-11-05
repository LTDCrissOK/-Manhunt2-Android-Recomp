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

// Function: sub_0015EC10
// Address: 0x15ec10 - 0x15ee38
void sub_0015EC10_0x15ec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EC10_0x15ec10");
#endif

    switch (ctx->pc) {
        case 0x15ec5cu: goto label_15ec5c;
        case 0x15ece8u: goto label_15ece8;
        case 0x15ed08u: goto label_15ed08;
        case 0x15ed40u: goto label_15ed40;
        case 0x15ed48u: goto label_15ed48;
        case 0x15ed74u: goto label_15ed74;
        case 0x15edacu: goto label_15edac;
        case 0x15edfcu: goto label_15edfc;
        default: break;
    }

    ctx->pc = 0x15ec10u;

    // 0x15ec10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15ec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15ec14: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x15ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x15ec18: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x15ec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x15ec1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15ec1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec20: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x15ec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x15ec24: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x15ec24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec28: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x15ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x15ec2c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15ec2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec30: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x15ec30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec34: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x15ec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x15ec38: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x15ec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x15ec3c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x15ec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x15ec40: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x15ec40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x15ec44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15ec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15ec48: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x15ec48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x15ec4c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x15ec4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x15ec50: 0x7e400000  sq          $zero, 0x0($s2)
    ctx->pc = 0x15ec50u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 0));
    // 0x15ec54: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x15EC54u;
    SET_GPR_U32(ctx, 31, 0x15EC5Cu);
    ctx->pc = 0x15EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC54u;
    // 0x15ec58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15EC54u, 0x15EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC5Cu;
label_15ec5c:
    // 0x15ec5c: 0x8ec202e4  lw          $v0, 0x2E4($s6)
    ctx->pc = 0x15ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 740)));
    // 0x15ec60: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x15ec60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ec64: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x15ec64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ec68: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x15ec68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15ec6c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15ec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15ec70: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ec74: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ec78: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15ec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ec7c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15ec7cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15ec80: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15ec80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15ec84: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15ec84u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15ec88: 0x46010044  c1          0x10044
    ctx->pc = 0x15ec88u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x15ec8c: 0xc6c002ec  lwc1        $f0, 0x2EC($s6)
    ctx->pc = 0x15ec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ec90: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x15ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15ec94: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x15ec94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ec98: 0x0  nop
    ctx->pc = 0x15ec98u;
    // NOP
    // 0x15ec9c: 0x0  nop
    ctx->pc = 0x15ec9cu;
    // NOP
    // 0x15eca0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15eca0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x15eca4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x15eca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15eca8: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x15eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ecac: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ecb0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15ecb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15ecb4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x15ecb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15ecb8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x15ecb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15ecbc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x15ecbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15ecc0: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x15ecc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x15ecc4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x15ecc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15ecc8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x15ecc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15eccc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x15ecccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15ecd0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x15ecd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ecd4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x15ecd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ecd8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x15ecd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15ecdc: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15ecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15ece0: 0xc06fb8e  jal         func_1BEE38
    ctx->pc = 0x15ECE0u;
    SET_GPR_U32(ctx, 31, 0x15ECE8u);
    ctx->pc = 0x15ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ECE0u;
    // 0x15ece4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15ECE0u, 0x15ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ECE8u;
label_15ece8:
    // 0x15ece8: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x15ECE8u;
    {
        const bool branch_taken_0x15ece8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x15ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECE8u;
        // 0x15ecec: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ece8) {
            ctx->pc = 0x15ECF8u;
            goto label_15ecf8;
        }
    }
    ctx->pc = 0x15ECF0u;
    // 0x15ecf0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x15ECF0u;
    {
        const bool branch_taken_0x15ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECF0u;
        // 0x15ecf4: 0x8ec202e0  lw          $v0, 0x2E0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ecf0) {
            ctx->pc = 0x15EE00u;
            goto label_15ee00;
        }
    }
    ctx->pc = 0x15ECF8u;
label_15ecf8:
    // 0x15ecf8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ecfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15ecfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed00: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15ED00u;
    SET_GPR_U32(ctx, 31, 0x15ED08u);
    ctx->pc = 0x15ED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED00u;
    // 0x15ed04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15ED00u, 0x15ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED08u;
label_15ed08:
    // 0x15ed08: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x15ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ed0c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x15ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ed10: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x15ed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ed14: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x15ed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ed18: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15ed18u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15ed1c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15ed1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15ed20: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x15ed20u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15ed24: 0xc6c002ec  lwc1        $f0, 0x2EC($s6)
    ctx->pc = 0x15ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ed28: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15ed28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed2c: 0x92740022  lbu         $s4, 0x22($s3)
    ctx->pc = 0x15ed2cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x15ed30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15ed30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed34: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x15ED34u;
    {
        const bool branch_taken_0x15ed34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED34u;
        // 0x15ed38: 0x46000542  mul.s       $f21, $f0, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed34) {
            ctx->pc = 0x15EDECu;
            goto label_15edec;
        }
    }
    ctx->pc = 0x15ED3Cu;
    // 0x15ed3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x15ed3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15ed40:
    // 0x15ed40: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x15ED40u;
    SET_GPR_U32(ctx, 31, 0x15ED48u);
    ctx->pc = 0x15ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED40u;
    // 0x15ed44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x15ED40u, 0x15ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED48u;
label_15ed48:
    // 0x15ed48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15ed48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed4c: 0x90c20014  lbu         $v0, 0x14($a2)
    ctx->pc = 0x15ed4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x15ed50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15ed54: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15ED54u;
    {
        const bool branch_taken_0x15ed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED54u;
        // 0x15ed58: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed54) {
            ctx->pc = 0x15EDDCu;
            goto label_15eddc;
        }
    }
    ctx->pc = 0x15ED5Cu;
    // 0x15ed5c: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x15ed5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15ed60: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x15ED60u;
    {
        const bool branch_taken_0x15ed60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED60u;
        // 0x15ed64: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed60) {
            ctx->pc = 0x15EDDCu;
            goto label_15eddc;
        }
    }
    ctx->pc = 0x15ED68u;
    // 0x15ed68: 0x8ec502e4  lw          $a1, 0x2E4($s6)
    ctx->pc = 0x15ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 740)));
    // 0x15ed6c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15ED6Cu;
    SET_GPR_U32(ctx, 31, 0x15ED74u);
    ctx->pc = 0x15ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED6Cu;
    // 0x15ed70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15ED6Cu, 0x15ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED74u;
label_15ed74:
    // 0x15ed74: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x15ed74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ed78: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x15ed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ed7c: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x15ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ed80: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15ed80u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15ed84: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15ed84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15ed88: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x15ed88u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15ed8c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x15ed8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ed90: 0x0  nop
    ctx->pc = 0x15ed90u;
    // NOP
    // 0x15ed94: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x15ED94u;
    {
        const bool branch_taken_0x15ed94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED94u;
        // 0x15ed98: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed94) {
            ctx->pc = 0x15EDDCu;
            goto label_15eddc;
        }
    }
    ctx->pc = 0x15ED9Cu;
    // 0x15ed9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15ed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eda0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15eda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eda4: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15EDA4u;
    SET_GPR_U32(ctx, 31, 0x15EDACu);
    ctx->pc = 0x15EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDA4u;
    // 0x15eda8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15EDA4u, 0x15EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDACu;
label_15edac:
    // 0x15edac: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x15edacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15edb0: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x15edb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15edb4: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x15edb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15edb8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15edb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15edbc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15edbcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15edc0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x15edc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15edc4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15edc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15edc8: 0x0  nop
    ctx->pc = 0x15edc8u;
    // NOP
    // 0x15edcc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15EDCCu;
    {
        const bool branch_taken_0x15edcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDCCu;
        // 0x15edd0: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15edcc) {
            ctx->pc = 0x15EDDCu;
            goto label_15eddc;
        }
    }
    ctx->pc = 0x15EDD4u;
    // 0x15edd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15edd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15edd8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x15edd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15eddc:
    // 0x15eddc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x15eddcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15ede0: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x15ede0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x15ede4: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x15EDE4u;
    {
        const bool branch_taken_0x15ede4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDE4u;
        // 0x15ede8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ede4) {
            ctx->pc = 0x15ED40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ed40;
        }
    }
    ctx->pc = 0x15EDECu;
label_15edec:
    // 0x15edec: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x15edecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15edf0: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15edf0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15edf4: 0xc06fb8e  jal         func_1BEE38
    ctx->pc = 0x15EDF4u;
    SET_GPR_U32(ctx, 31, 0x15EDFCu);
    ctx->pc = 0x15EDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDF4u;
    // 0x15edf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15EDF4u, 0x15EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDFCu;
label_15edfc:
    // 0x15edfc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x15edfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15ee00:
    // 0x15ee00: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x15ee00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ee04: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x15ee04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15ee08: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x15ee08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ee0c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x15ee0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15ee10: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x15ee10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15ee14: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x15ee14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15ee18: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x15ee18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15ee1c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x15ee1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15ee20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15ee20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15ee24: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x15ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15ee28: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x15ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15ee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x15EE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE2Cu;
        // 0x15ee30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EE34u;
    // 0x15ee34: 0x0  nop
    ctx->pc = 0x15ee34u;
    // NOP
    ctx->pc = 0x15ee38u;
}
