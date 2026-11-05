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

// Function: sub_001BDA20
// Address: 0x1bda20 - 0x1bdbc8
void sub_001BDA20_0x1bda20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDA20_0x1bda20");
#endif

    switch (ctx->pc) {
        case 0x1bda9cu: goto label_1bda9c;
        case 0x1bdaa4u: goto label_1bdaa4;
        case 0x1bdb50u: goto label_1bdb50;
        case 0x1bdb68u: goto label_1bdb68;
        case 0x1bdb70u: goto label_1bdb70;
        case 0x1bdb7cu: goto label_1bdb7c;
        case 0x1bdb8cu: goto label_1bdb8c;
        case 0x1bdb9cu: goto label_1bdb9c;
        default: break;
    }

    ctx->pc = 0x1bda20u;

    // 0x1bda20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bda24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bda24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda28: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1bda28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1bda2c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1bda2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1bda30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bda30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda34: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1bda34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1bda38: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1bda38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1bda3c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1bda3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1bda40: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1bda40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1bda44: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1bda44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x1bda48: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1bda48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1bda4c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1bda4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1bda50: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1bda50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bda54: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1bda54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bda58: 0x0  nop
    ctx->pc = 0x1bda58u;
    // NOP
    // 0x1bda5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDA5Cu;
    {
        const bool branch_taken_0x1bda5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA5Cu;
        // 0x1bda60: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda5c) {
            ctx->pc = 0x1BDA68u;
            goto label_1bda68;
        }
    }
    ctx->pc = 0x1BDA64u;
    // 0x1bda64: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1bda64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1bda68:
    // 0x1bda68: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1BDA68u;
    {
        const bool branch_taken_0x1bda68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA68u;
        // 0x1bda6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda68) {
            ctx->pc = 0x1BDBA0u;
            goto label_1bdba0;
        }
    }
    ctx->pc = 0x1BDA70u;
    // 0x1bda70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bda70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bda74: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bda74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bda78: 0x0  nop
    ctx->pc = 0x1bda78u;
    // NOP
    // 0x1bda7c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1bda7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bda80: 0x0  nop
    ctx->pc = 0x1bda80u;
    // NOP
    // 0x1bda84: 0x45010046  bc1t        . + 4 + (0x46 << 2)
    ctx->pc = 0x1BDA84u;
    {
        const bool branch_taken_0x1bda84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BDA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA84u;
        // 0x1bda88: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda84) {
            ctx->pc = 0x1BDBA0u;
            goto label_1bdba0;
        }
    }
    ctx->pc = 0x1BDA8Cu;
    // 0x1bda8c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1bda8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bda90: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1bda90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bda94: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BDA94u;
    SET_GPR_U32(ctx, 31, 0x1BDA9Cu);
    ctx->pc = 0x1BDA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA94u;
    // 0x1bda98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BDA94u, 0x1BDA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA9Cu;
label_1bda9c:
    // 0x1bda9c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BDA9Cu;
    SET_GPR_U32(ctx, 31, 0x1BDAA4u);
    ctx->pc = 0x1BDAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA9Cu;
    // 0x1bdaa0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BDA9Cu, 0x1BDAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAA4u;
label_1bdaa4:
    // 0x1bdaa4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1bdaa4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bdaa8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bdaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bdaac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1bdaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bdab0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1bdab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1bdab4: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1bdab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bdab8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1bdab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1bdabc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1bdabcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdac0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1bdac0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bdac4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bdac4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bdac8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1bdac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bdacc: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1bdaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bdad0: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x1bdad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bdad4: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x1bdad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1bdad8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1bdad8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1bdadc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1bdadcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1bdae0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1bdae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1bdae4: 0x0  nop
    ctx->pc = 0x1bdae4u;
    // NOP
    // 0x1bdae8: 0x0  nop
    ctx->pc = 0x1bdae8u;
    // NOP
    // 0x1bdaec: 0x46000044  c1          0x44
    ctx->pc = 0x1bdaecu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1bdaf0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bdaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bdaf4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1bdaf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bdaf8: 0x0  nop
    ctx->pc = 0x1bdaf8u;
    // NOP
    // 0x1bdafc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1BDAFCu;
    {
        const bool branch_taken_0x1bdafc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDAFCu;
        // 0x1bdb00: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdafc) {
            ctx->pc = 0x1BDB24u;
            goto label_1bdb24;
        }
    }
    ctx->pc = 0x1BDB04u;
    // 0x1bdb04: 0x0  nop
    ctx->pc = 0x1bdb04u;
    // NOP
    // 0x1bdb08: 0x0  nop
    ctx->pc = 0x1bdb08u;
    // NOP
    // 0x1bdb0c: 0x4601a803  div.s       $f0, $f21, $f1
    ctx->pc = 0x1bdb0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x1bdb10: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1bdb10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1bdb14: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1bdb14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bdb18: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1bdb18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1bdb1c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1bdb1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bdb20: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1bdb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bdb24:
    // 0x1bdb24: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1bdb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1bdb28: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BDB28u;
    {
        const bool branch_taken_0x1bdb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB28u;
        // 0x1bdb2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb28) {
            ctx->pc = 0x1BDBA0u;
            goto label_1bdba0;
        }
    }
    ctx->pc = 0x1BDB30u;
    // 0x1bdb30: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1bdb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdb34: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1bdb34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bdb38: 0x0  nop
    ctx->pc = 0x1bdb38u;
    // NOP
    // 0x1bdb3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDB3Cu;
    {
        const bool branch_taken_0x1bdb3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB3Cu;
        // 0x1bdb40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb3c) {
            ctx->pc = 0x1BDB48u;
            goto label_1bdb48;
        }
    }
    ctx->pc = 0x1BDB44u;
    // 0x1bdb44: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1bdb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1bdb48:
    // 0x1bdb48: 0xc070eae  jal         func_1C3AB8
    ctx->pc = 0x1BDB48u;
    SET_GPR_U32(ctx, 31, 0x1BDB50u);
    ctx->pc = 0x1BDB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB48u;
    // 0x1bdb4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AB8u, 0x1BDB48u, 0x1BDB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB50u;
label_1bdb50:
    // 0x1bdb50: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BDB50u;
    {
        const bool branch_taken_0x1bdb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB50u;
        // 0x1bdb54: 0x27b10060  addiu       $s1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb50) {
            ctx->pc = 0x1BDB9Cu;
            goto label_1bdb9c;
        }
    }
    ctx->pc = 0x1BDB58u;
    // 0x1bdb58: 0x8e9004bc  lw          $s0, 0x4BC($s4)
    ctx->pc = 0x1bdb58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1212)));
    // 0x1bdb5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bdb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb60: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1BDB60u;
    SET_GPR_U32(ctx, 31, 0x1BDB68u);
    ctx->pc = 0x1BDB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB60u;
    // 0x1bdb64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1BDB60u, 0x1BDB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB68u;
label_1bdb68:
    // 0x1bdb68: 0xc061fbe  jal         func_187EF8
    ctx->pc = 0x1BDB68u;
    SET_GPR_U32(ctx, 31, 0x1BDB70u);
    ctx->pc = 0x1BDB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB68u;
    // 0x1bdb6c: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EF8u, 0x1BDB68u, 0x1BDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB70u;
label_1bdb70:
    // 0x1bdb70: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x1bdb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1bdb74: 0xc062ef0  jal         func_18BBC0
    ctx->pc = 0x1BDB74u;
    SET_GPR_U32(ctx, 31, 0x1BDB7Cu);
    ctx->pc = 0x1BDB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB74u;
    // 0x1bdb78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BBC0u, 0x1BDB74u, 0x1BDB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB7Cu;
label_1bdb7c:
    // 0x1bdb7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDB7Cu;
    {
        const bool branch_taken_0x1bdb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB7Cu;
        // 0x1bdb80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb7c) {
            ctx->pc = 0x1BDB94u;
            goto label_1bdb94;
        }
    }
    ctx->pc = 0x1BDB84u;
    // 0x1bdb84: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1BDB84u;
    SET_GPR_U32(ctx, 31, 0x1BDB8Cu);
    ctx->pc = 0x1BDB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB84u;
    // 0x1bdb88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1BDB84u, 0x1BDB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB8Cu;
label_1bdb8c:
    // 0x1bdb8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDB8Cu;
    {
        const bool branch_taken_0x1bdb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB8Cu;
        // 0x1bdb90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb8c) {
            ctx->pc = 0x1BDBA0u;
            goto label_1bdba0;
        }
    }
    ctx->pc = 0x1BDB94u;
label_1bdb94:
    // 0x1bdb94: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1BDB94u;
    SET_GPR_U32(ctx, 31, 0x1BDB9Cu);
    ctx->pc = 0x1BDB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB94u;
    // 0x1bdb98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1BDB94u, 0x1BDB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB9Cu;
label_1bdb9c:
    // 0x1bdb9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bdb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdba0:
    // 0x1bdba0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1bdba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bdba4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1bdba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1bdba8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1bdba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bdbac: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1bdbacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1bdbb0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1bdbb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bdbb4: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1bdbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bdbb8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1bdbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bdbbc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1bdbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bdbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBC0u;
        // 0x1bdbc4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDBC8u;
}
