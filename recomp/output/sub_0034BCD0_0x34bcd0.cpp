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

// Function: sub_0034BCD0
// Address: 0x34bcd0 - 0x34be60
void sub_0034BCD0_0x34bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BCD0_0x34bcd0");
#endif

    switch (ctx->pc) {
        case 0x34bd04u: goto label_34bd04;
        case 0x34bd0cu: goto label_34bd0c;
        case 0x34bda4u: goto label_34bda4;
        case 0x34bdc8u: goto label_34bdc8;
        case 0x34bddcu: goto label_34bddc;
        case 0x34be20u: goto label_34be20;
        case 0x34be30u: goto label_34be30;
        default: break;
    }

    ctx->pc = 0x34bcd0u;

    // 0x34bcd0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x34bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x34bcd4: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x34bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x34bcd8: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x34bcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x34bcdc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x34bcdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34bce0: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x34bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x34bce4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34bce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bce8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34bce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bcec: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x34bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x34bcf0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x34bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x34bcf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34bcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bcf8: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x34bcf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x34bcfc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34BCFCu;
    SET_GPR_U32(ctx, 31, 0x34BD04u);
    ctx->pc = 0x34BD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BCFCu;
    // 0x34bd00: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34BCFCu, 0x34BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BD04u;
label_34bd04:
    // 0x34bd04: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34BD04u;
    SET_GPR_U32(ctx, 31, 0x34BD0Cu);
    ctx->pc = 0x34BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BD04u;
    // 0x34bd08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34BD04u, 0x34BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BD0Cu;
label_34bd0c:
    // 0x34bd0c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x34bd0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34bd10: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x34bd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34bd14: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x34bd14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34bd18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34bd1c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x34bd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x34bd20: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x34bd24: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34bd24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34bd28: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x34bd28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34bd2c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34bd2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34bd30: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x34bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34bd34: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x34bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34bd38: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x34bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34bd3c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x34bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34bd40: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34bd40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34bd44: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34bd44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34bd48: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x34bd48u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34bd4c: 0x0  nop
    ctx->pc = 0x34bd4cu;
    // NOP
    // 0x34bd50: 0x0  nop
    ctx->pc = 0x34bd50u;
    // NOP
    // 0x34bd54: 0x46010084  c1          0x10084
    ctx->pc = 0x34bd54u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x34bd58: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x34bd58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x34bd5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34bd5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34bd60: 0x0  nop
    ctx->pc = 0x34bd60u;
    // NOP
    // 0x34bd64: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34bd64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34bd68: 0x0  nop
    ctx->pc = 0x34bd68u;
    // NOP
    // 0x34bd6c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x34BD6Cu;
    {
        const bool branch_taken_0x34bd6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD6Cu;
        // 0x34bd70: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bd6c) {
            ctx->pc = 0x34BD98u;
            goto label_34bd98;
        }
    }
    ctx->pc = 0x34BD74u;
    // 0x34bd74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34bd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34bd78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34bd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34bd7c: 0x0  nop
    ctx->pc = 0x34bd7cu;
    // NOP
    // 0x34bd80: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x34bd80u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34bd84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34bd84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34bd88: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34bd88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34bd8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34bd8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34bd90: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34bd90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34bd94: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x34bd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_34bd98:
    // 0x34bd98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34bd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd9c: 0xc0d39b6  jal         func_34E6D8
    ctx->pc = 0x34BD9Cu;
    SET_GPR_U32(ctx, 31, 0x34BDA4u);
    ctx->pc = 0x34BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BD9Cu;
    // 0x34bda0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E6D8u, 0x34BD9Cu, 0x34BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BDA4u;
label_34bda4:
    // 0x34bda4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34bda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34bda8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x34bda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34bdac: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x34bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x34bdb0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x34bdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x34bdb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x34bdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34bdb8: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x34bdb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34bdbc: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x34bdbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34bdc0: 0x2450b610  addiu       $s0, $v0, -0x49F0
    ctx->pc = 0x34bdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
    // 0x34bdc4: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x34bdc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_34bdc8:
    // 0x34bdc8: 0x92020075  lbu         $v0, 0x75($s0)
    ctx->pc = 0x34bdc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
    // 0x34bdcc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x34BDCCu;
    {
        const bool branch_taken_0x34bdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BDCCu;
        // 0x34bdd0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bdcc) {
            ctx->pc = 0x34BE30u;
            goto label_34be30;
        }
    }
    ctx->pc = 0x34BDD4u;
    // 0x34bdd4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34BDD4u;
    SET_GPR_U32(ctx, 31, 0x34BDDCu);
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34BDD4u, 0x34BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BDDCu;
label_34bddc:
    // 0x34bddc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x34bddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34bde0: 0xe6350020  swc1        $f21, 0x20($s1)
    ctx->pc = 0x34bde0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x34bde4: 0xe6340030  swc1        $f20, 0x30($s1)
    ctx->pc = 0x34bde4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x34bde8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x34bde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x34bdec: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x34bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bdf0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x34bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34bdf4: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x34bdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34bdf8: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x34bdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34bdfc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x34bdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x34be00: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x34be00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x34be04: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x34be04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x34be08: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x34be08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x34be0c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x34be0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34be10: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x34be10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34be14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34be14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34be18: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x34BE18u;
    SET_GPR_U32(ctx, 31, 0x34BE20u);
    ctx->pc = 0x34BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BE18u;
    // 0x34be1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x34BE18u, 0x34BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BE20u;
label_34be20:
    // 0x34be20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BE20u;
    {
        const bool branch_taken_0x34be20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BE20u;
        // 0x34be24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34be20) {
            ctx->pc = 0x34BE30u;
            goto label_34be30;
        }
    }
    ctx->pc = 0x34BE28u;
    // 0x34be28: 0xc0d2f98  jal         func_34BE60
    ctx->pc = 0x34BE28u;
    SET_GPR_U32(ctx, 31, 0x34BE30u);
    ctx->pc = 0x34BE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BE60u, 0x34BE28u, 0x34BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BE30u;
label_34be30:
    // 0x34be30: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x34be30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x34be34: 0x641ffe4  bgez        $s2, . + 4 + (-0x1C << 2)
    ctx->pc = 0x34BE34u;
    {
        const bool branch_taken_0x34be34 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x34BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BE34u;
        // 0x34be38: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34be34) {
            ctx->pc = 0x34BDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bdc8;
        }
    }
    ctx->pc = 0x34BE3Cu;
    // 0x34be3c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x34be3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34be40: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x34be40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34be44: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x34be44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34be48: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x34be48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34be4c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x34be4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x34be50: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x34be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34be54: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x34be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34be58: 0x3e00008  jr          $ra
    ctx->pc = 0x34BE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BE58u;
        // 0x34be5c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BE60u;
}
