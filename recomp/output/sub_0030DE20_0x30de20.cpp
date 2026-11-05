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

// Function: sub_0030DE20
// Address: 0x30de20 - 0x30dfa0
void sub_0030DE20_0x30de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DE20_0x30de20");
#endif

    ctx->pc = 0x30de20u;

    // 0x30de20: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x30de20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30de24: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x30de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30de28: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x30de28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x30de2c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x30de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30de30: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x30de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30de34: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x30de34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30de38: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x30de38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30de3c: 0x0  nop
    ctx->pc = 0x30de3cu;
    // NOP
    // 0x30de40: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x30DE40u;
    {
        const bool branch_taken_0x30de40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE40u;
        // 0x30de44: 0x27bdffc0  addiu       $sp, $sp, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de40) {
            ctx->pc = 0x30DE70u;
            goto label_30de70;
        }
    }
    ctx->pc = 0x30DE48u;
    // 0x30de48: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x30de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30de4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30de4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30de50: 0x0  nop
    ctx->pc = 0x30de50u;
    // NOP
    // 0x30de54: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x30DE54u;
    {
        const bool branch_taken_0x30de54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30de54) {
            ctx->pc = 0x30DE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DE54u;
            // 0x30de58: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DE74u;
            goto label_30de74;
        }
    }
    ctx->pc = 0x30DE5Cu;
    // 0x30de5c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x30de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30de60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30de60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30de64: 0x0  nop
    ctx->pc = 0x30de64u;
    // NOP
    // 0x30de68: 0x4501004a  bc1t        . + 4 + (0x4A << 2)
    ctx->pc = 0x30DE68u;
    {
        const bool branch_taken_0x30de68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE68u;
        // 0x30de6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de68) {
            ctx->pc = 0x30DF94u;
            goto label_30df94;
        }
    }
    ctx->pc = 0x30DE70u;
label_30de70:
    // 0x30de70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30de74:
    // 0x30de74: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x30DE74u;
    {
        const bool branch_taken_0x30de74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE74u;
        // 0x30de78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de74) {
            ctx->pc = 0x30DF94u;
            goto label_30df94;
        }
    }
    ctx->pc = 0x30DE7Cu;
    // 0x30de7c: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x30de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x30de80: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x30de80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30de84: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x30de84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30de88: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30de88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30de8c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x30de8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30de90: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x30de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30de94: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x30de94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30de98: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x30de98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30de9c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x30de9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30dea0: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x30dea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30dea4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30dea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30dea8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x30dea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30deac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x30deacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30deb0: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x30deb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30deb4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x30deb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30deb8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x30deb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30debc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30debcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30dec0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x30dec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30dec4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x30dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30dec8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30dec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30decc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x30deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ded0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x30ded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ded4: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x30ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ded8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30ded8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30dedc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x30dedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30dee0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x30dee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30dee4: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x30dee4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x30dee8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x30dee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30deec: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x30deecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30def0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30def0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30def4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x30def4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30def8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x30def8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30defc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x30defcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30df00: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x30df00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30df04: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x30df04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30df08: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x30df08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x30df0c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x30df0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x30df10: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x30df10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x30df14: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x30df14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x30df18: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x30df18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30df1c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x30df1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30df20: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x30df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30df24: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x30df24u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x30df28: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x30df28u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x30df2c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x30df2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x30df30: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x30df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30df34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30df34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30df38: 0x0  nop
    ctx->pc = 0x30df38u;
    // NOP
    // 0x30df3c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x30DF3Cu;
    {
        const bool branch_taken_0x30df3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30df3c) {
            ctx->pc = 0x30DF94u;
            goto label_30df94;
        }
    }
    ctx->pc = 0x30DF44u;
    // 0x30df44: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x30df44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30df48: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x30df48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30df4c: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x30df4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30df50: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x30df50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x30df54: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x30df54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x30df58: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x30df58u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x30df5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30df5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30df60: 0x0  nop
    ctx->pc = 0x30df60u;
    // NOP
    // 0x30df64: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x30DF64u;
    {
        const bool branch_taken_0x30df64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30df64) {
            ctx->pc = 0x30DF94u;
            goto label_30df94;
        }
    }
    ctx->pc = 0x30DF6Cu;
    // 0x30df6c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x30df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30df70: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x30df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30df74: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x30df74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30df78: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x30df78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x30df7c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x30df7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x30df80: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x30df80u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x30df84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30df84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30df88: 0x0  nop
    ctx->pc = 0x30df88u;
    // NOP
    // 0x30df8c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30DF8Cu;
    {
        const bool branch_taken_0x30df8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30df8c) {
            ctx->pc = 0x30DF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DF8Cu;
            // 0x30df90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DF94u;
            goto label_30df94;
        }
    }
    ctx->pc = 0x30DF94u;
label_30df94:
    // 0x30df94: 0x3e00008  jr          $ra
    ctx->pc = 0x30DF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF94u;
        // 0x30df98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DF9Cu;
    // 0x30df9c: 0x0  nop
    ctx->pc = 0x30df9cu;
    // NOP
    ctx->pc = 0x30dfa0u;
}
