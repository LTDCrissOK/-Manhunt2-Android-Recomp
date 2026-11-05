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

// Function: sub_001BAF10
// Address: 0x1baf10 - 0x1bb358
void sub_001BAF10_0x1baf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAF10_0x1baf10");
#endif

    switch (ctx->pc) {
        case 0x1bb0e4u: goto label_1bb0e4;
        case 0x1bb184u: goto label_1bb184;
        case 0x1bb198u: goto label_1bb198;
        case 0x1bb1a0u: goto label_1bb1a0;
        case 0x1bb1e0u: goto label_1bb1e0;
        case 0x1bb2b4u: goto label_1bb2b4;
        default: break;
    }

    ctx->pc = 0x1baf10u;

    // 0x1baf10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1baf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1baf14: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1baf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1baf18: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1baf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x1baf1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1baf1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf20: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1baf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x1baf24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1baf24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf28: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x1baf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x1baf2c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1baf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1baf30: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1baf30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1baf34: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1baf34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1baf38: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1baf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1baf3c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1baf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1baf40: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1baf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1baf44: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1baf44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1baf48: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1baf48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1baf4c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1baf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1baf50: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1baf50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1baf54: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1baf54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baf58: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1baf58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1baf5c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1baf5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1baf60: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1baf60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1baf64: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1baf64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1baf68: 0x4a0003bf  vwaitq
    ctx->pc = 0x1baf68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1baf6c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1baf6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1baf70: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1baf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1baf74: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAF74u;
    {
        const bool branch_taken_0x1baf74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF74u;
        // 0x1baf78: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf74) {
            ctx->pc = 0x1BAF8Cu;
            goto label_1baf8c;
        }
    }
    ctx->pc = 0x1BAF7Cu;
    // 0x1baf7c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1baf7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baf80: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1baf80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1baf84: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1BAF84u;
    {
        const bool branch_taken_0x1baf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF84u;
        // 0x1baf88: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf84) {
            ctx->pc = 0x1BB028u;
            goto label_1bb028;
        }
    }
    ctx->pc = 0x1BAF8Cu;
label_1baf8c:
    // 0x1baf8c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1baf8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1baf90: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1baf90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1baf94: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1baf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1baf98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1baf98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf9c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1baf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1bafa0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1bafa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1bafa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bafa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bafa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bafa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bafacu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1bafb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bafb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bafb4: 0x0  nop
    ctx->pc = 0x1bafb4u;
    // NOP
    // 0x1bafb8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1BAFB8u;
    {
        const bool branch_taken_0x1bafb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFB8u;
        // 0x1bafbc: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bafb8) {
            ctx->pc = 0x1BAFF0u;
            goto label_1baff0;
        }
    }
    ctx->pc = 0x1BAFC0u;
    // 0x1bafc0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1bafc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bafc4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bafc4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1bafc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bafc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bafcc: 0x0  nop
    ctx->pc = 0x1bafccu;
    // NOP
    // 0x1bafd0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAFD0u;
    {
        const bool branch_taken_0x1bafd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bafd0) {
            ctx->pc = 0x1BAFF0u;
            goto label_1baff0;
        }
    }
    ctx->pc = 0x1BAFD8u;
    // 0x1bafd8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1bafd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bafdc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bafdcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1bafe0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bafe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bafe4: 0x0  nop
    ctx->pc = 0x1bafe4u;
    // NOP
    // 0x1bafe8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BAFE8u;
    {
        const bool branch_taken_0x1bafe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bafe8) {
            ctx->pc = 0x1BAFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAFE8u;
            // 0x1bafec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAFF0u;
            goto label_1baff0;
        }
    }
    ctx->pc = 0x1BAFF0u;
label_1baff0:
    // 0x1baff0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAFF0u;
    {
        const bool branch_taken_0x1baff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baff0) {
            ctx->pc = 0x1BB008u;
            goto label_1bb008;
        }
    }
    ctx->pc = 0x1BAFF8u;
    // 0x1baff8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1baff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baffc: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1baffcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bb000: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB000u;
    {
        const bool branch_taken_0x1bb000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb000) {
            ctx->pc = 0x1BB028u;
            goto label_1bb028;
        }
    }
    ctx->pc = 0x1BB008u;
label_1bb008:
    // 0x1bb008: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1bb008u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb00c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1bb00cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bb010: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1bb010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bb014: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1bb014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bb018: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1bb018u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1bb01c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1bb01cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1bb020: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1bb020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bb024: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1bb024u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bb028:
    // 0x1bb028: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB028u;
    {
        const bool branch_taken_0x1bb028 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB028u;
        // 0x1bb02c: 0x26220090  addiu       $v0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb028) {
            ctx->pc = 0x1BB040u;
            goto label_1bb040;
        }
    }
    ctx->pc = 0x1BB030u;
    // 0x1bb030: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1bb030u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb034: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1bb034u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bb038: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1BB038u;
    {
        const bool branch_taken_0x1bb038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB038u;
        // 0x1bb03c: 0x26320090  addiu       $s2, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb038) {
            ctx->pc = 0x1BB0DCu;
            goto label_1bb0dc;
        }
    }
    ctx->pc = 0x1BB040u;
label_1bb040:
    // 0x1bb040: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1bb040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bb044: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1bb044u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bb048: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x1bb048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb04c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bb04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb050: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1bb050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1bb054: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1bb054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1bb058: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb05c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb05cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb060: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bb060u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1bb064: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bb064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb068: 0x0  nop
    ctx->pc = 0x1bb068u;
    // NOP
    // 0x1bb06c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1BB06Cu;
    {
        const bool branch_taken_0x1bb06c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB06Cu;
        // 0x1bb070: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb06c) {
            ctx->pc = 0x1BB0A4u;
            goto label_1bb0a4;
        }
    }
    ctx->pc = 0x1BB074u;
    // 0x1bb074: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1bb074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb078: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bb078u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1bb07c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bb07cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb080: 0x0  nop
    ctx->pc = 0x1bb080u;
    // NOP
    // 0x1bb084: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB084u;
    {
        const bool branch_taken_0x1bb084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb084) {
            ctx->pc = 0x1BB0A4u;
            goto label_1bb0a4;
        }
    }
    ctx->pc = 0x1BB08Cu;
    // 0x1bb08c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1bb08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb090: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1bb090u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1bb094: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bb094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb098: 0x0  nop
    ctx->pc = 0x1bb098u;
    // NOP
    // 0x1bb09c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BB09Cu;
    {
        const bool branch_taken_0x1bb09c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb09c) {
            ctx->pc = 0x1BB0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB09Cu;
            // 0x1bb0a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB0A4u;
            goto label_1bb0a4;
        }
    }
    ctx->pc = 0x1BB0A4u;
label_1bb0a4:
    // 0x1bb0a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB0A4u;
    {
        const bool branch_taken_0x1bb0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0a4) {
            ctx->pc = 0x1BB0BCu;
            goto label_1bb0bc;
        }
    }
    ctx->pc = 0x1BB0ACu;
    // 0x1bb0ac: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1bb0acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb0b0: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1bb0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bb0b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB0B4u;
    {
        const bool branch_taken_0x1bb0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0b4) {
            ctx->pc = 0x1BB0DCu;
            goto label_1bb0dc;
        }
    }
    ctx->pc = 0x1BB0BCu;
label_1bb0bc:
    // 0x1bb0bc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1bb0bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb0c0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1bb0c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bb0c4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1bb0c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bb0c8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1bb0c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bb0cc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1bb0ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1bb0d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1bb0d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1bb0d4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1bb0d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bb0d8: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x1bb0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bb0dc:
    // 0x1bb0dc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1BB0DCu;
    SET_GPR_U32(ctx, 31, 0x1BB0E4u);
    ctx->pc = 0x1BB0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0DCu;
    // 0x1bb0e0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1BB0DCu, 0x1BB0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0E4u;
label_1bb0e4:
    // 0x1bb0e4: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x1bb0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb0e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bb0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bb0ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb0f0: 0x0  nop
    ctx->pc = 0x1bb0f0u;
    // NOP
    // 0x1bb0f4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bb0f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb0f8: 0x0  nop
    ctx->pc = 0x1bb0f8u;
    // NOP
    // 0x1bb0fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB0FCu;
    {
        const bool branch_taken_0x1bb0fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0FCu;
        // 0x1bb100: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0fc) {
            ctx->pc = 0x1BB108u;
            goto label_1bb108;
        }
    }
    ctx->pc = 0x1BB104u;
    // 0x1bb104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb108:
    // 0x1bb108: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB108u;
    {
        const bool branch_taken_0x1bb108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB108u;
        // 0x1bb10c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb108) {
            ctx->pc = 0x1BB130u;
            goto label_1bb130;
        }
    }
    ctx->pc = 0x1BB110u;
    // 0x1bb110: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x1bb110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
    // 0x1bb114: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB114u;
    {
        const bool branch_taken_0x1bb114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb114) {
            ctx->pc = 0x1BB130u;
            goto label_1bb130;
        }
    }
    ctx->pc = 0x1BB11Cu;
    // 0x1bb11c: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1bb11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1bb120: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x1bb120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x1bb124: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1bb124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1bb128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB128u;
    {
        const bool branch_taken_0x1bb128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb128) {
            ctx->pc = 0x1BB140u;
            goto label_1bb140;
        }
    }
    ctx->pc = 0x1BB130u;
label_1bb130:
    // 0x1bb130: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1bb130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb134: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1bb134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bb138: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB138u;
    {
        const bool branch_taken_0x1bb138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB138u;
        // 0x1bb13c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb138) {
            ctx->pc = 0x1BB14Cu;
            goto label_1bb14c;
        }
    }
    ctx->pc = 0x1BB140u;
label_1bb140:
    // 0x1bb140: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1bb140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb144: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1bb144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bb148: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1bb148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1bb14c:
    // 0x1bb14c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1bb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1bb150: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1bb150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1bb154: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1bb154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1bb158: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1bb158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bb15c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1bb15cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1bb160: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1bb160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bb164: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1bb164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bb168: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1bb168u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bb16c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1bb16cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb170: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1bb170u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1bb174: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1bb174u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bb178: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1bb178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bb17c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1BB17Cu;
    SET_GPR_U32(ctx, 31, 0x1BB184u);
    ctx->pc = 0x1BB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB17Cu;
    // 0x1bb180: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1BB17Cu, 0x1BB184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB184u;
label_1bb184:
    // 0x1bb184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bb184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb18c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1bb18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bb190: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x1BB190u;
    SET_GPR_U32(ctx, 31, 0x1BB198u);
    ctx->pc = 0x1BB194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB190u;
    // 0x1bb194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x1BB190u, 0x1BB198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB198u;
label_1bb198:
    // 0x1bb198: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BB198u;
    SET_GPR_U32(ctx, 31, 0x1BB1A0u);
    ctx->pc = 0x1BB19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB198u;
    // 0x1bb19c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BB198u, 0x1BB1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1A0u;
label_1bb1a0:
    // 0x1bb1a0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1bb1a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb1a4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1bb1a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb1a8: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x1bb1a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bb1ac: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x1bb1acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bb1b0: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x1bb1b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1bb1b4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1bb1b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1bb1b8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1bb1b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1bb1bc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1bb1bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1bb1c0: 0xfba50090  sqc2        $vf5, 0x90($sp)
    ctx->pc = 0x1bb1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1bb1c4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1bb1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb1c8: 0x26300074  addiu       $s0, $s1, 0x74
    ctx->pc = 0x1bb1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
    // 0x1bb1cc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1bb1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1d4: 0xe6210074  swc1        $f1, 0x74($s1)
    ctx->pc = 0x1bb1d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x1bb1d8: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x1BB1D8u;
    SET_GPR_U32(ctx, 31, 0x1BB1E0u);
    ctx->pc = 0x1BB1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1D8u;
    // 0x1bb1dc: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x1BB1D8u, 0x1BB1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1E0u;
label_1bb1e0:
    // 0x1bb1e0: 0xc6220074  lwc1        $f2, 0x74($s1)
    ctx->pc = 0x1bb1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb1e4: 0x0  nop
    ctx->pc = 0x1bb1e4u;
    // NOP
    // 0x1bb1e8: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1bb1e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1bb1ec: 0xe6220074  swc1        $f2, 0x74($s1)
    ctx->pc = 0x1bb1ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x1bb1f0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1bb1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb1f4: 0x0  nop
    ctx->pc = 0x1bb1f4u;
    // NOP
    // 0x1bb1f8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bb1f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bb1fc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1bb1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1bb200: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1bb200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1bb204: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x1bb204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1bb208: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bb208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bb20c: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x1bb20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1bb210: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1bb210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb214: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1bb214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bb218: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1bb218u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1bb21c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1bb21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb220: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1bb220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bb224: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1bb224u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1bb228: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1bb228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb22c: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x1bb22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bb230: 0x4603151c  madd.s      $f20, $f2, $f3
    ctx->pc = 0x1bb230u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1bb234: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1bb234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1bb238: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1bb238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb23c: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1bb23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bb240: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1bb240u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1bb244: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1bb244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb248: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1bb248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bb24c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1bb24cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1bb250: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1bb250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb254: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x1bb254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bb258: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1bb258u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1bb25c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1bb25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1bb260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bb264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb268: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb26c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1bb26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb270: 0x0  nop
    ctx->pc = 0x1bb270u;
    // NOP
    // 0x1bb274: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB274u;
    {
        const bool branch_taken_0x1bb274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb274) {
            ctx->pc = 0x1BB284u;
            goto label_1bb284;
        }
    }
    ctx->pc = 0x1BB27Cu;
    // 0x1bb27c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB27Cu;
    {
        const bool branch_taken_0x1bb27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB27Cu;
        // 0x1bb280: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb27c) {
            ctx->pc = 0x1BB294u;
            goto label_1bb294;
        }
    }
    ctx->pc = 0x1BB284u;
label_1bb284:
    // 0x1bb284: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x1bb284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb288: 0x0  nop
    ctx->pc = 0x1bb288u;
    // NOP
    // 0x1bb28c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BB28Cu;
    {
        const bool branch_taken_0x1bb28c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb28c) {
            ctx->pc = 0x1BB290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB28Cu;
            // 0x1bb290: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB294u;
            goto label_1bb294;
        }
    }
    ctx->pc = 0x1BB294u;
label_1bb294:
    // 0x1bb294: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x1bb294u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1bb298: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bb298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb29c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bb29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bb2a0: 0x0  nop
    ctx->pc = 0x1bb2a0u;
    // NOP
    // 0x1bb2a4: 0x460cab01  sub.s       $f12, $f21, $f12
    ctx->pc = 0x1bb2a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    // 0x1bb2a8: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1bb2a8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1bb2ac: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1BB2ACu;
    SET_GPR_U32(ctx, 31, 0x1BB2B4u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1BB2ACu, 0x1BB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2B4u;
label_1bb2b4:
    // 0x1bb2b4: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1bb2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1bb2b8: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1bb2b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1bb2bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb2c0: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x1bb2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x1bb2c4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bb2c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1bb2c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb2cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bb2ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bb2d0: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x1bb2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x1bb2d4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1bb2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb2d8: 0x0  nop
    ctx->pc = 0x1bb2d8u;
    // NOP
    // 0x1bb2dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB2DCu;
    {
        const bool branch_taken_0x1bb2dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2DCu;
        // 0x1bb2e0: 0xe62000a0  swc1        $f0, 0xA0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2dc) {
            ctx->pc = 0x1BB2F0u;
            goto label_1bb2f0;
        }
    }
    ctx->pc = 0x1BB2E4u;
    // 0x1bb2e4: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x1bb2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x1bb2e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BB2E8u;
    {
        const bool branch_taken_0x1bb2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2E8u;
        // 0x1bb2ec: 0xae20007c  sw          $zero, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2e8) {
            ctx->pc = 0x1BB330u;
            goto label_1bb330;
        }
    }
    ctx->pc = 0x1BB2F0u;
label_1bb2f0:
    // 0x1bb2f0: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x1bb2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb2f4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1bb2f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb2f8: 0x0  nop
    ctx->pc = 0x1bb2f8u;
    // NOP
    // 0x1bb2fc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB2FCu;
    {
        const bool branch_taken_0x1bb2fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb2fc) {
            ctx->pc = 0x1BB300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB2FCu;
            // 0x1bb300: 0xc62000a4  lwc1        $f0, 0xA4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB310u;
            goto label_1bb310;
        }
    }
    ctx->pc = 0x1BB304u;
    // 0x1bb304: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1bb304u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1bb308: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x1bb308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x1bb30c: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x1bb30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb310:
    // 0x1bb310: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bb310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb314: 0x0  nop
    ctx->pc = 0x1bb314u;
    // NOP
    // 0x1bb318: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB318u;
    {
        const bool branch_taken_0x1bb318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb318) {
            ctx->pc = 0x1BB31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB318u;
            // 0x1bb31c: 0xe635007c  swc1        $f21, 0x7C($s1) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB330u;
            goto label_1bb330;
        }
    }
    ctx->pc = 0x1BB320u;
    // 0x1bb320: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1bb320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1bb324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb328: 0x0  nop
    ctx->pc = 0x1bb328u;
    // NOP
    // 0x1bb32c: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x1bb32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_1bb330:
    // 0x1bb330: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1bb330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bb334: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x1bb334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1bb338: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x1bb338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bb33c: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x1bb33cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1bb340: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1bb340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bb344: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1bb344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bb348: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1bb348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bb34c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB34Cu;
        // 0x1bb350: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB354u;
    // 0x1bb354: 0x0  nop
    ctx->pc = 0x1bb354u;
    // NOP
    ctx->pc = 0x1bb358u;
}
