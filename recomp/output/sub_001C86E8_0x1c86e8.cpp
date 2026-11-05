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

// Function: sub_001C86E8
// Address: 0x1c86e8 - 0x1c8da0
void sub_001C86E8_0x1c86e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C86E8_0x1c86e8");
#endif

    switch (ctx->pc) {
        case 0x1c87a4u: goto label_1c87a4;
        case 0x1c887cu: goto label_1c887c;
        case 0x1c8908u: goto label_1c8908;
        case 0x1c8930u: goto label_1c8930;
        case 0x1c8af8u: goto label_1c8af8;
        case 0x1c8b1cu: goto label_1c8b1c;
        case 0x1c8ca0u: goto label_1c8ca0;
        case 0x1c8cc8u: goto label_1c8cc8;
        default: break;
    }

    ctx->pc = 0x1c86e8u;

    // 0x1c86e8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1c86e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1c86ec: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1c86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1c86f0: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x1c86f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x1c86f4: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1c86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1c86f8: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x1c86f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x1c86fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c86fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8700: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x1c8700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x1c8704: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c8704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8708: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x1c8708u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1c870c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1c870cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8710: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1c8710u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1c8714: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1c8714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x1c8718: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x1c8718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x1c871c: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x1c871cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x1c8720: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x1c8720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x1c8724: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x1c8724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x1c8728: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x1c8728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x1c872c: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x1c872cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x1c8730: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1c8730u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1c8734: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1c8734u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1c8738: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1c8738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1c873c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1c873cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c8740: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c8740u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1c8744: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1c8744u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1c8748: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1c8748u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c874c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8750: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1c8750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x1c8754: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8758: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c8758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c875c: 0x3c01401c  lui         $at, 0x401C
    ctx->pc = 0x1c875cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16412 << 16));
    // 0x1c8760: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8764: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8768: 0x4615b801  sub.s       $f0, $f23, $f21
    ctx->pc = 0x1c8768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x1c876c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c876cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8770: 0x0  nop
    ctx->pc = 0x1c8770u;
    // NOP
    // 0x1c8774: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8774u;
    {
        const bool branch_taken_0x1c8774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8774u;
        // 0x1c8778: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8774) {
            ctx->pc = 0x1C8780u;
            goto label_1c8780;
        }
    }
    ctx->pc = 0x1C877Cu;
    // 0x1c877c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x1c877cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_1c8780:
    // 0x1c8780: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1c8780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1c8784: 0x0  nop
    ctx->pc = 0x1c8784u;
    // NOP
    // 0x1c8788: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x1c8788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c878c: 0x0  nop
    ctx->pc = 0x1c878cu;
    // NOP
    // 0x1c8790: 0x45010173  bc1t        . + 4 + (0x173 << 2)
    ctx->pc = 0x1C8790u;
    {
        const bool branch_taken_0x1c8790 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8790u;
        // 0x1c8794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8790) {
            ctx->pc = 0x1C8D60u;
            goto label_1c8d60;
        }
    }
    ctx->pc = 0x1C8798u;
    // 0x1c8798: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c8798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c879c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C879Cu;
    SET_GPR_U32(ctx, 31, 0x1C87A4u);
    ctx->pc = 0x1C87A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C879Cu;
    // 0x1c87a0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C879Cu, 0x1C87A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87A4u;
label_1c87a4:
    // 0x1c87a4: 0x3c013e9a  lui         $at, 0x3E9A
    ctx->pc = 0x1c87a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16026 << 16));
    // 0x1c87a8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1c87a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1c87ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c87acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c87b0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1c87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c87b4: 0x7a620330  lq          $v0, 0x330($s3)
    ctx->pc = 0x1c87b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 816)));
    // 0x1c87b8: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x1c87b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c87bc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c87bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c87c0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1c87c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1c87c4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1c87c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c87c8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1c87c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c87cc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1c87ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c87d0: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x1c87d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c87d4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c87d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c87d8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1c87d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1c87dc: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1c87dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c87e0: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x1c87e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1c87e4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c87e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c87e8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c87e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c87ec: 0x8e640318  lw          $a0, 0x318($s3)
    ctx->pc = 0x1c87ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
    // 0x1c87f0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1c87f4: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x1c87f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c87f8: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x1c87f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c87fc: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1c87fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1c8800: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1c8800u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1c8804: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c8804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c8808: 0xc444c75c  lwc1        $f4, -0x38A4($v0)
    ctx->pc = 0x1c8808u;
    { uint32_t bits = FAST_READ32(0x45C75Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c880c: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1c880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8810: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x1c8810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8814: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c8814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c8818: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1c8818u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c881c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c881cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1c8820: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1c8820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1c8824: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1c8824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1c8828: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1c8828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c882c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1c882cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1c8830: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x1c8830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1c8834: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1c8834u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1c8838: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x1c8838u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1c883c: 0x8c820fec  lw          $v0, 0xFEC($a0)
    ctx->pc = 0x1c883cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4076)));
    // 0x1c8840: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1c8840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8844: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x1c8844u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8848: 0x0  nop
    ctx->pc = 0x1c8848u;
    // NOP
    // 0x1c884c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C884Cu;
    {
        const bool branch_taken_0x1c884c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C884Cu;
        // 0x1c8850: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c884c) {
            ctx->pc = 0x1C8858u;
            goto label_1c8858;
        }
    }
    ctx->pc = 0x1C8854u;
    // 0x1c8854: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c8854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8858:
    // 0x1c8858: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8858u;
    {
        const bool branch_taken_0x1c8858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8858u;
        // 0x1c885c: 0x46002546  mov.s       $f21, $f4 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8858) {
            ctx->pc = 0x1C8874u;
            goto label_1c8874;
        }
    }
    ctx->pc = 0x1C8860u;
    // 0x1c8860: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1c8860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x1c8864: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x1c8864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x1c8868: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1c8868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1c886c: 0x144000c9  bnez        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x1C886Cu;
    {
        const bool branch_taken_0x1c886c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c886c) {
            ctx->pc = 0x1C8B94u;
            goto label_1c8b94;
        }
    }
    ctx->pc = 0x1C8874u;
label_1c8874:
    // 0x1c8874: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C8874u;
    SET_GPR_U32(ctx, 31, 0x1C887Cu);
    ctx->pc = 0x1C8878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8874u;
    // 0x1c8878: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C8874u, 0x1C887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C887Cu;
label_1c887c:
    // 0x1c887c: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x1c887cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x1c8880: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1c8880u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8884: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1c8884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1c8888: 0x7e600090  sq          $zero, 0x90($s3)
    ctx->pc = 0x1c8888u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 144), GPR_VEC(ctx, 0));
    // 0x1c888c: 0x7e6000a0  sq          $zero, 0xA0($s3)
    ctx->pc = 0x1c888cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 160), GPR_VEC(ctx, 0));
    // 0x1c8890: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c8890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8894: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c8894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c8898: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1c8898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1c889c: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x1c889cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1c88a0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1c88a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1c88a4: 0x3c04aaaa  lui         $a0, 0xAAAA
    ctx->pc = 0x1c88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43690 << 16));
    // 0x1c88a8: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1c88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x1c88ac: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x1c88acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x1c88b0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1c88b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1c88b4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1c88b8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1c88b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1c88bc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1c88bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1c88c0: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x1c88c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c88c4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1c88c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1c88c8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1c88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1c88cc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1c88ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1c88d0: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1c88d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1c88d4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1c88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c88d8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1c88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c88dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c88e0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1c88e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c88e4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c88e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c88e8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C88E8u;
    {
        const bool branch_taken_0x1c88e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88E8u;
        // 0x1c88ec: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88e8) {
            ctx->pc = 0x1C898Cu;
            goto label_1c898c;
        }
    }
    ctx->pc = 0x1C88F0u;
    // 0x1c88f0: 0x3c12aaaa  lui         $s2, 0xAAAA
    ctx->pc = 0x1c88f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43690 << 16));
    // 0x1c88f4: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x1c88f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x1c88f8: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x1c88f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c88fc: 0x3652aaab  ori         $s2, $s2, 0xAAAB
    ctx->pc = 0x1c88fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)43691);
    // 0x1c8900: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8904: 0x0  nop
    ctx->pc = 0x1c8904u;
    // NOP
label_1c8908:
    // 0x1c8908: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x1c8908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c890c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8910: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x1c8910u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1c8914: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c8914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c8918: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x1c8918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1c891c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c891cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c8920: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x1c8920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c8924: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1c8924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8928: 0xc0724e4  jal         func_1C9390
    ctx->pc = 0x1C8928u;
    SET_GPR_U32(ctx, 31, 0x1C8930u);
    ctx->pc = 0x1C892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8928u;
    // 0x1c892c: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9390u, 0x1C8928u, 0x1C8930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8930u;
label_1c8930:
    // 0x1c8930: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8930u;
    {
        const bool branch_taken_0x1c8930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8930u;
        // 0x1c8934: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8930) {
            ctx->pc = 0x1C8964u;
            goto label_1c8964;
        }
    }
    ctx->pc = 0x1C8938u;
    // 0x1c8938: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1c8938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c893c: 0x0  nop
    ctx->pc = 0x1c893cu;
    // NOP
    // 0x1c8940: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8940u;
    {
        const bool branch_taken_0x1c8940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8940u;
        // 0x1c8944: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8940) {
            ctx->pc = 0x1C8968u;
            goto label_1c8968;
        }
    }
    ctx->pc = 0x1C8948u;
    // 0x1c8948: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c8948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c894c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1c894cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1c8950: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1c8950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1c8954: 0x51f021  addu        $fp, $v0, $s1
    ctx->pc = 0x1c8954u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c8958: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1c8958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x1c895c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1c895cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c8960: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c8960u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c8964:
    // 0x1c8964: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1c8964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1c8968:
    // 0x1c8968: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1c8968u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1c896c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c8970: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1c8970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c8974: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c8974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8978: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1c8978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c897c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c897cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c8980: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x1c8980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c8984: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1C8984u;
    {
        const bool branch_taken_0x1c8984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8984u;
        // 0x1c8988: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8984) {
            ctx->pc = 0x1C8908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8908;
        }
    }
    ctx->pc = 0x1C898Cu;
label_1c898c:
    // 0x1c898c: 0x13c00012  beqz        $fp, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C898Cu;
    {
        const bool branch_taken_0x1c898c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C898Cu;
        // 0x1c8990: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c898c) {
            ctx->pc = 0x1C89D8u;
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C8994u;
    // 0x1c8994: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x1c8994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x1c8998: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c8998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c899c: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1c899cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c89a0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1c89a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c89a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c89a8: 0xae1e002c  sw          $fp, 0x2C($s0)
    ctx->pc = 0x1c89a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 30));
    // 0x1c89ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c89acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c89b0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c89b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c89b4: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1c89b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x1c89b8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c89b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c89bc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c89bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1c89c0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c89c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c89c4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1c89c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1c89c8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1c89c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1c89cc: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1c89ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1c89d0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1c89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1c89d4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1c89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_1c89d8:
    // 0x1c89d8: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x1c89d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x1c89dc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c89dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1c89e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c89e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c89e4: 0x3c01401c  lui         $at, 0x401C
    ctx->pc = 0x1c89e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16412 << 16));
    // 0x1c89e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c89e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c89ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c89ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c89f0: 0x4600b801  sub.s       $f0, $f23, $f0
    ctx->pc = 0x1c89f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x1c89f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c89f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c89f8: 0x0  nop
    ctx->pc = 0x1c89f8u;
    // NOP
    // 0x1c89fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C89FCu;
    {
        const bool branch_taken_0x1c89fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89FCu;
        // 0x1c8a00: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89fc) {
            ctx->pc = 0x1C8A08u;
            goto label_1c8a08;
        }
    }
    ctx->pc = 0x1C8A04u;
    // 0x1c8a04: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x1c8a04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_1c8a08:
    // 0x1c8a08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8a0c: 0x0  nop
    ctx->pc = 0x1c8a0cu;
    // NOP
    // 0x1c8a10: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c8a10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8a14: 0x0  nop
    ctx->pc = 0x1c8a14u;
    // NOP
    // 0x1c8a18: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x1C8A18u;
    {
        const bool branch_taken_0x1c8a18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A18u;
        // 0x1c8a1c: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a18) {
            ctx->pc = 0x1C8B94u;
            goto label_1c8b94;
        }
    }
    ctx->pc = 0x1C8A20u;
    // 0x1c8a20: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x1c8a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c8a24: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x1c8a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8a28: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x1c8a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8a2c: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x1c8a2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x1c8a30: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x1c8a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8a34: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c8a34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1c8a38: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1c8a38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1c8a3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c8a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c8a40: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c8a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c8a44: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c8a44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c8a48: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c8a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c8a4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8a50: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x1c8a50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c8a54: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c8a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c8a58: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x1c8a58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c8a5c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x1c8a5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1c8a60: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x1c8a60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1c8a64: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x1c8a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c8a68: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c8a68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8a6c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1c8a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8a70: 0x26700150  addiu       $s0, $s3, 0x150
    ctx->pc = 0x1c8a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
    // 0x1c8a74: 0x7e600150  sq          $zero, 0x150($s3)
    ctx->pc = 0x1c8a74u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 336), GPR_VEC(ctx, 0));
    // 0x1c8a78: 0x7e600160  sq          $zero, 0x160($s3)
    ctx->pc = 0x1c8a78u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 352), GPR_VEC(ctx, 0));
    // 0x1c8a7c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c8a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c8a80: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c8a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c8a84: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1c8a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1c8a88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8a8c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1c8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1c8a90: 0x26650014  addiu       $a1, $s3, 0x14
    ctx->pc = 0x1c8a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x1c8a94: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c8a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1c8a98: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x1c8a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
    // 0x1c8a9c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1c8a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1c8aa0: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x1c8aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1c8aa4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1c8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1c8aa8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c8aa8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8aac: 0xc460c75c  lwc1        $f0, -0x38A4($v1)
    ctx->pc = 0x1c8aacu;
    { uint32_t bits = FAST_READ32(0x45C75Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8ab0: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1c8ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1c8ab4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c8ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c8ab8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1c8ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1c8abc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1c8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1c8ac0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1c8ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1c8ac4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1c8ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1c8ac8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1c8ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1c8acc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1c8accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c8ad0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1c8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1c8ad4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8ad8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1c8ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c8adc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c8adcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c8ae0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C8AE0u;
    {
        const bool branch_taken_0x1c8ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AE0u;
        // 0x1c8ae4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ae0) {
            ctx->pc = 0x1C8B54u;
            goto label_1c8b54;
        }
    }
    ctx->pc = 0x1C8AE8u;
    // 0x1c8ae8: 0x3c12cccc  lui         $s2, 0xCCCC
    ctx->pc = 0x1c8ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52428 << 16));
    // 0x1c8aec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8af0: 0x3652cccd  ori         $s2, $s2, 0xCCCD
    ctx->pc = 0x1c8af0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)52429);
    // 0x1c8af4: 0x0  nop
    ctx->pc = 0x1c8af4u;
    // NOP
label_1c8af8:
    // 0x1c8af8: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x1c8af8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1c8afc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c8afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c8b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c8b04: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c8b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c8b08: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x1c8b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1c8b0c: 0x27a80094  addiu       $t0, $sp, 0x94
    ctx->pc = 0x1c8b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1c8b10: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1c8b10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b14: 0xc072368  jal         func_1C8DA0
    ctx->pc = 0x1C8B14u;
    SET_GPR_U32(ctx, 31, 0x1C8B1Cu);
    ctx->pc = 0x1C8B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B14u;
    // 0x1c8b18: 0x260a0010  addiu       $t2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DA0u, 0x1C8B14u, 0x1C8B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B1Cu;
label_1c8b1c:
    // 0x1c8b1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8B1Cu;
    {
        const bool branch_taken_0x1c8b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b1c) {
            ctx->pc = 0x1C8B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8B1Cu;
            // 0x1c8b20: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8B34u;
            goto label_1c8b34;
        }
    }
    ctx->pc = 0x1C8B24u;
    // 0x1c8b24: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1c8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1c8b28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c8b2c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1c8b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x1c8b30: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1c8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1c8b34:
    // 0x1c8b34: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c8b34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c8b38: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1c8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1c8b3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8b40: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1c8b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c8b44: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c8b44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c8b48: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1c8b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c8b4c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1C8B4Cu;
    {
        const bool branch_taken_0x1c8b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B4Cu;
        // 0x1c8b50: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b4c) {
            ctx->pc = 0x1C8AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8af8;
        }
    }
    ctx->pc = 0x1C8B54u;
label_1c8b54:
    // 0x1c8b54: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x1c8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1c8b58: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C8B58u;
    {
        const bool branch_taken_0x1c8b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B58u;
        // 0x1c8b5c: 0xc7a00094  lwc1        $f0, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b58) {
            ctx->pc = 0x1C8B94u;
            goto label_1c8b94;
        }
    }
    ctx->pc = 0x1C8B60u;
    // 0x1c8b60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8b64: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1c8b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x1c8b68: 0x0  nop
    ctx->pc = 0x1c8b68u;
    // NOP
    // 0x1c8b6c: 0x0  nop
    ctx->pc = 0x1c8b6cu;
    // NOP
    // 0x1c8b70: 0x46000004  c1          0x4
    ctx->pc = 0x1c8b70u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8b74: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1c8b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c8b78: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1c8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1c8b7c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1c8b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1c8b80: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1c8b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1c8b84: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c8b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c8b88: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c8b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1c8b8c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1c8b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1c8b90: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c8b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1c8b94:
    // 0x1c8b94: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x1c8b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x1c8b98: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c8b98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1c8b9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8ba0: 0x3c01401c  lui         $at, 0x401C
    ctx->pc = 0x1c8ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16412 << 16));
    // 0x1c8ba4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8ba8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8bac: 0x4600b801  sub.s       $f0, $f23, $f0
    ctx->pc = 0x1c8bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x1c8bb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8bb4: 0x0  nop
    ctx->pc = 0x1c8bb4u;
    // NOP
    // 0x1c8bb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8BB8u;
    {
        const bool branch_taken_0x1c8bb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BB8u;
        // 0x1c8bbc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8bb8) {
            ctx->pc = 0x1C8BC4u;
            goto label_1c8bc4;
        }
    }
    ctx->pc = 0x1C8BC0u;
    // 0x1c8bc0: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x1c8bc0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_1c8bc4:
    // 0x1c8bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8bc8: 0x0  nop
    ctx->pc = 0x1c8bc8u;
    // NOP
    // 0x1c8bcc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c8bccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8bd0: 0x0  nop
    ctx->pc = 0x1c8bd0u;
    // NOP
    // 0x1c8bd4: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x1C8BD4u;
    {
        const bool branch_taken_0x1c8bd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BD4u;
        // 0x1c8bd8: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8bd4) {
            ctx->pc = 0x1C8D5Cu;
            goto label_1c8d5c;
        }
    }
    ctx->pc = 0x1C8BDCu;
    // 0x1c8bdc: 0xc6a5000c  lwc1        $f5, 0xC($s5)
    ctx->pc = 0x1c8bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c8be0: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1c8be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8be4: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1c8be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8be8: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x1c8be8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x1c8bec: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1c8becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8bf0: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c8bf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1c8bf4: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1c8bf4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1c8bf8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c8bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c8bfc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c8bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c8c00: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c8c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c8c04: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c8c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c8c08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8c0c: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x1c8c0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c8c10: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c8c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c8c14: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1c8c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c8c18: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x1c8c18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1c8c1c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1c8c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c8c20: 0xe7a5007c  swc1        $f5, 0x7C($sp)
    ctx->pc = 0x1c8c20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1c8c24: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c8c24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8c28: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1c8c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8c2c: 0x26700210  addiu       $s0, $s3, 0x210
    ctx->pc = 0x1c8c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 528));
    // 0x1c8c30: 0x7e600210  sq          $zero, 0x210($s3)
    ctx->pc = 0x1c8c30u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 528), GPR_VEC(ctx, 0));
    // 0x1c8c34: 0x7e600220  sq          $zero, 0x220($s3)
    ctx->pc = 0x1c8c34u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 544), GPR_VEC(ctx, 0));
    // 0x1c8c38: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c8c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c8c3c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c8c40: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1c8c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1c8c44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8c48: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1c8c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1c8c4c: 0x26640044  addiu       $a0, $s3, 0x44
    ctx->pc = 0x1c8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
    // 0x1c8c50: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c8c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1c8c54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c8c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c58: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1c8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1c8c5c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1c8c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1c8c60: 0xc460c75c  lwc1        $f0, -0x38A4($v1)
    ctx->pc = 0x1c8c60u;
    { uint32_t bits = FAST_READ32(0x45C75Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8c64: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1c8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1c8c68: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c8c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c8c6c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1c8c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1c8c70: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1c8c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1c8c74: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1c8c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1c8c78: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1c8c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1c8c7c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1c8c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1c8c80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c8c84: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x1c8c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1c8c88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8c8c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c8c8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c8c90: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C8C90u;
    {
        const bool branch_taken_0x1c8c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C90u;
        // 0x1c8c94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c90) {
            ctx->pc = 0x1C8D10u;
            goto label_1c8d10;
        }
    }
    ctx->pc = 0x1C8C98u;
    // 0x1c8c98: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1c8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1c8c9c: 0x0  nop
    ctx->pc = 0x1c8c9cu;
    // NOP
label_1c8ca0:
    // 0x1c8ca0: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x1c8ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c8ca4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c8ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ca8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c8ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c8cac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c8cb0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c8cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c8cb4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1c8cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8cb8: 0x27a80094  addiu       $t0, $sp, 0x94
    ctx->pc = 0x1c8cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1c8cbc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1c8cbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8cc0: 0xc07241a  jal         func_1C9068
    ctx->pc = 0x1C8CC0u;
    SET_GPR_U32(ctx, 31, 0x1C8CC8u);
    ctx->pc = 0x1C8CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8CC0u;
    // 0x1c8cc4: 0x260a0010  addiu       $t2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9068u, 0x1C8CC0u, 0x1C8CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8CC8u;
label_1c8cc8:
    // 0x1c8cc8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8CC8u;
    {
        const bool branch_taken_0x1c8cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8cc8) {
            ctx->pc = 0x1C8CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8CC8u;
            // 0x1c8ccc: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8CF4u;
            goto label_1c8cf4;
        }
    }
    ctx->pc = 0x1C8CD0u;
    // 0x1c8cd0: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1c8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1c8cd4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c8cd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c8cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8cdc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1c8cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1c8ce0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1c8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1c8ce4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1c8ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1c8ce8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8cec: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1c8cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x1c8cf0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1c8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1c8cf4:
    // 0x1c8cf4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c8cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c8cf8: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x1c8cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1c8cfc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8d00: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c8d00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c8d04: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1c8d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c8d08: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C8D08u;
    {
        const bool branch_taken_0x1c8d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8d08) {
            ctx->pc = 0x1C8D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8D08u;
            // 0x1c8d0c: 0x8e620044  lw          $v0, 0x44($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8ca0;
        }
    }
    ctx->pc = 0x1C8D10u;
label_1c8d10:
    // 0x1c8d10: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x1c8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1c8d14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C8D14u;
    {
        const bool branch_taken_0x1c8d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D14u;
        // 0x1c8d18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d14) {
            ctx->pc = 0x1C8D5Cu;
            goto label_1c8d5c;
        }
    }
    ctx->pc = 0x1C8D1Cu;
    // 0x1c8d1c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1c8d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8d20: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1c8d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x1c8d24: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c8d28: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1c8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1c8d2c: 0x0  nop
    ctx->pc = 0x1c8d2cu;
    // NOP
    // 0x1c8d30: 0x0  nop
    ctx->pc = 0x1c8d30u;
    // NOP
    // 0x1c8d34: 0x46000004  c1          0x4
    ctx->pc = 0x1c8d34u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8d38: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1c8d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1c8d3c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1c8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c8d40: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1c8d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1c8d44: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1c8d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1c8d48: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c8d4c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c8d50: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1c8d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1c8d54: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c8d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1c8d58: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c8d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1c8d5c:
    // 0x1c8d5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c8d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1c8d60:
    // 0x1c8d60: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1c8d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8d64: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x1c8d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1c8d68: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x1c8d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c8d6c: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x1c8d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1c8d70: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x1c8d70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c8d74: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x1c8d74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1c8d78: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x1c8d78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c8d7c: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x1c8d7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1c8d80: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x1c8d80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c8d84: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x1c8d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1c8d88: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x1c8d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1c8d8c: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1c8d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c8d90: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1c8d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c8d94: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1c8d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D98u;
        // 0x1c8d9c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8DA0u;
}
