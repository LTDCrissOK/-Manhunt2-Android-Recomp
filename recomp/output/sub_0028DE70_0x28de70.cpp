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

// Function: sub_0028DE70
// Address: 0x28de70 - 0x28e008
void sub_0028DE70_0x28de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DE70_0x28de70");
#endif

    switch (ctx->pc) {
        case 0x28df04u: goto label_28df04;
        case 0x28df1cu: goto label_28df1c;
        case 0x28df94u: goto label_28df94;
        case 0x28dfa4u: goto label_28dfa4;
        default: break;
    }

    ctx->pc = 0x28de70u;

    // 0x28de70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28de70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28de74: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x28de74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x28de78: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x28de78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x28de7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28de7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de80: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x28de80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x28de84: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x28de84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x28de88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28de88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28de8c: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x28de8cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x28de90: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x28de90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x28de94: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x28de94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x28de98: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x28de98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28de9c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x28de9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28dea0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x28dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x28dea4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x28DEA4u;
    {
        const bool branch_taken_0x28dea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEA4u;
        // 0x28dea8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dea4) {
            ctx->pc = 0x28DFD8u;
            goto label_28dfd8;
        }
    }
    ctx->pc = 0x28DEACu;
    // 0x28deac: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x28deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28deb0: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x28deb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28deb4: 0xde220038  ld          $v0, 0x38($s1)
    ctx->pc = 0x28deb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x28deb8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28deb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28debc: 0x53102f  dsubu       $v0, $v0, $s3
    ctx->pc = 0x28debcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 19));
    // 0x28dec0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x28dec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28dec4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28dec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28dec8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x28dec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28decc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28deccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28ded0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x28ded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ded4: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x28ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
    // 0x28ded8: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28DED8u;
    {
        const bool branch_taken_0x28ded8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DED8u;
        // 0x28dedc: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ded8) {
            ctx->pc = 0x28DF24u;
            goto label_28df24;
        }
    }
    ctx->pc = 0x28DEE0u;
    // 0x28dee0: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x28dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x28dee4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x28dee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28dee8: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x28dee8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28deec: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x28deecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x28def0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28def0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28def4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DEF4u;
    {
        const bool branch_taken_0x28def4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEF4u;
        // 0x28def8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28def4) {
            ctx->pc = 0x28DF0Cu;
            goto label_28df0c;
        }
    }
    ctx->pc = 0x28DEFCu;
    // 0x28defc: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x28DEFCu;
    SET_GPR_U32(ctx, 31, 0x28DF04u);
    ctx->pc = 0x28DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DEFCu;
    // 0x28df00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x28DEFCu, 0x28DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF04u;
label_28df04:
    // 0x28df04: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x28DF04u;
    {
        const bool branch_taken_0x28df04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF04u;
        // 0x28df08: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df04) {
            ctx->pc = 0x28DFDCu;
            goto label_28dfdc;
        }
    }
    ctx->pc = 0x28DF0Cu;
label_28df0c:
    // 0x28df0c: 0x54620032  bnel        $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x28DF0Cu;
    {
        const bool branch_taken_0x28df0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28df0c) {
            ctx->pc = 0x28DF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DF0Cu;
            // 0x28df10: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DFD8u;
            goto label_28dfd8;
        }
    }
    ctx->pc = 0x28DF14u;
    // 0x28df14: 0xc0a3902  jal         func_28E408
    ctx->pc = 0x28DF14u;
    SET_GPR_U32(ctx, 31, 0x28DF1Cu);
    ctx->pc = 0x28DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF14u;
    // 0x28df18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E408u, 0x28DF14u, 0x28DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF1Cu;
label_28df1c:
    // 0x28df1c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x28DF1Cu;
    {
        const bool branch_taken_0x28df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF1Cu;
        // 0x28df20: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df1c) {
            ctx->pc = 0x28DFDCu;
            goto label_28dfdc;
        }
    }
    ctx->pc = 0x28DF24u;
label_28df24:
    // 0x28df24: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x28df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x28df28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x28df28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28df2c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x28df2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28df30: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x28df30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x28df34: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x28df34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28df38: 0xc7b70020  lwc1        $f23, 0x20($sp)
    ctx->pc = 0x28df38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28df3c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x28df3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28df40: 0xc7b60024  lwc1        $f22, 0x24($sp)
    ctx->pc = 0x28df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28df44: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x28df44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28df48: 0xc7b80028  lwc1        $f24, 0x28($sp)
    ctx->pc = 0x28df48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x28df4c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x28df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28df50: 0xc7b5002c  lwc1        $f21, 0x2C($sp)
    ctx->pc = 0x28df50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28df54: 0xe7b70010  swc1        $f23, 0x10($sp)
    ctx->pc = 0x28df54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28df58: 0xe7b60014  swc1        $f22, 0x14($sp)
    ctx->pc = 0x28df58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28df5c: 0xe7b80018  swc1        $f24, 0x18($sp)
    ctx->pc = 0x28df5cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28df60: 0xe7b5001c  swc1        $f21, 0x1C($sp)
    ctx->pc = 0x28df60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x28df64: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x28df64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28df68: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x28df68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28df6c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x28df6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28df70: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x28df70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x28df74: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x28df74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x28df78: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x28df78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x28df7c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x28df7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x28df80: 0x4a0003bf  vwaitq
    ctx->pc = 0x28df80u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x28df84: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x28df84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x28df88: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x28df88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28df8c: 0xc0f49b2  jal         func_3D26C8
    ctx->pc = 0x28DF8Cu;
    SET_GPR_U32(ctx, 31, 0x28DF94u);
    ctx->pc = 0x28DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF8Cu;
    // 0x28df90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D26C8u, 0x28DF8Cu, 0x28DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF94u;
label_28df94:
    // 0x28df94: 0xde240038  ld          $a0, 0x38($s1)
    ctx->pc = 0x28df94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x28df98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28df98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x28df9c: 0xc0f49b2  jal         func_3D26C8
    ctx->pc = 0x28DF9Cu;
    SET_GPR_U32(ctx, 31, 0x28DFA4u);
    ctx->pc = 0x28DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DF9Cu;
    // 0x28dfa0: 0x93202d  daddu       $a0, $a0, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D26C8u, 0x28DF9Cu, 0x28DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DFA4u;
label_28dfa4:
    // 0x28dfa4: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x28dfa4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x28dfa8: 0x4615a542  mul.s       $f21, $f20, $f21
    ctx->pc = 0x28dfa8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x28dfac: 0x4617a5c2  mul.s       $f23, $f20, $f23
    ctx->pc = 0x28dfacu;
    ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x28dfb0: 0x4616a582  mul.s       $f22, $f20, $f22
    ctx->pc = 0x28dfb0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x28dfb4: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x28dfb4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x28dfb8: 0xe7b5002c  swc1        $f21, 0x2C($sp)
    ctx->pc = 0x28dfb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x28dfbc: 0xe7b70020  swc1        $f23, 0x20($sp)
    ctx->pc = 0x28dfbcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28dfc0: 0xe7b60024  swc1        $f22, 0x24($sp)
    ctx->pc = 0x28dfc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28dfc4: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x28dfc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28dfc8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x28dfc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28dfcc: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x28dfccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28dfd0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x28dfd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x28dfd4: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x28dfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_28dfd8:
    // 0x28dfd8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x28dfd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28dfdc:
    // 0x28dfdc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x28dfdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28dfe0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x28dfe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28dfe4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x28dfe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28dfe8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28dfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28dfec: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x28dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x28dff0: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x28dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28dff4: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x28dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28dff8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x28dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28dffc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x28dffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e000: 0x3e00008  jr          $ra
    ctx->pc = 0x28E000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E000u;
        // 0x28e004: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E008u;
}
