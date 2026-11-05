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

// Function: sub_00269D40
// Address: 0x269d40 - 0x269f08
void sub_00269D40_0x269d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269D40_0x269d40");
#endif

    switch (ctx->pc) {
        case 0x269e08u: goto label_269e08;
        case 0x269e10u: goto label_269e10;
        case 0x269eacu: goto label_269eac;
        case 0x269edcu: goto label_269edc;
        default: break;
    }

    ctx->pc = 0x269d40u;

    // 0x269d40: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x269d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x269d44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x269d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x269d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269d4c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x269d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x269d50: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x269d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x269d54: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x269d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x269d58: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x269d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269d5c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x269d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x269d60: 0x8ca40104  lw          $a0, 0x104($a1)
    ctx->pc = 0x269d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x269d64: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x269d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269d68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x269d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x269d6c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x269d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x269d70: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x269d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x269d74: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x269d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x269d78: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x269d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x269d7c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x269d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x269d80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x269d80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269d84: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x269d84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269d88: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x269d88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x269d8c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x269d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x269d90: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x269d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269d94: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x269d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269d98: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x269d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269d9c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x269d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269da0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x269da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x269da4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x269da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x269da8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x269da8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x269dac: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x269dacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x269db0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x269db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x269db4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269db8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x269db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x269dbc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x269dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x269dc0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x269dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x269dc4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x269dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x269dc8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x269dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x269dcc: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x269dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x269dd0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x269dd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269dd4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x269dd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x269dd8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x269dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x269ddc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x269ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x269de0: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x269de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269de4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x269de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x269de8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x269de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269dec: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x269decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269df0: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x269df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269df4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x269df4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x269df8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x269df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x269dfc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x269dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x269e00: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x269E00u;
    SET_GPR_U32(ctx, 31, 0x269E08u);
    ctx->pc = 0x269E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269E00u;
    // 0x269e04: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x269E00u, 0x269E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E08u;
label_269e08:
    // 0x269e08: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x269E08u;
    SET_GPR_U32(ctx, 31, 0x269E10u);
    ctx->pc = 0x269E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269E08u;
    // 0x269e0c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x269E08u, 0x269E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E10u;
label_269e10:
    // 0x269e10: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x269e10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269e14: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x269e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x269e18: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x269e18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269e1c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x269e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x269e20: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x269e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x269e24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x269e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x269e28: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x269e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x269e2c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x269e2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x269e30: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x269e30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x269e34: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x269e34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x269e38: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x269e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x269e3c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x269e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269e40: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x269e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269e44: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x269e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269e48: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x269e48u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x269e4c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x269e4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x269e50: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x269e50u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x269e54: 0x0  nop
    ctx->pc = 0x269e54u;
    // NOP
    // 0x269e58: 0x0  nop
    ctx->pc = 0x269e58u;
    // NOP
    // 0x269e5c: 0x46010084  c1          0x10084
    ctx->pc = 0x269e5cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x269e60: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x269e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x269e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x269e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269e68: 0x0  nop
    ctx->pc = 0x269e68u;
    // NOP
    // 0x269e6c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x269e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269e70: 0x0  nop
    ctx->pc = 0x269e70u;
    // NOP
    // 0x269e74: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x269E74u;
    {
        const bool branch_taken_0x269e74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E74u;
        // 0x269e78: 0xe7a20090  swc1        $f2, 0x90($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e74) {
            ctx->pc = 0x269EA0u;
            goto label_269ea0;
        }
    }
    ctx->pc = 0x269E7Cu;
    // 0x269e7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x269e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x269e80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269e84: 0x0  nop
    ctx->pc = 0x269e84u;
    // NOP
    // 0x269e88: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x269e88u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x269e8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x269e8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x269e90: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x269e90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x269e94: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x269e94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x269e98: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x269e98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x269e9c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x269e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_269ea0:
    // 0x269ea0: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x269ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x269ea4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x269EA4u;
    SET_GPR_U32(ctx, 31, 0x269EACu);
    ctx->pc = 0x269EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269EA4u;
    // 0x269ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x269EA4u, 0x269EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269EACu;
label_269eac:
    // 0x269eac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x269eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x269eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269eb4: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x269eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x269eb8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x269eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x269ebc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x269ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x269ec0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x269ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x269ec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x269ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x269ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269ecc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x269eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ed0: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x269ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x269ed4: 0xc077b2a  jal         func_1DECA8
    ctx->pc = 0x269ED4u;
    SET_GPR_U32(ctx, 31, 0x269EDCu);
    ctx->pc = 0x269ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269ED4u;
    // 0x269ed8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DECA8u, 0x269ED4u, 0x269EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269EDCu;
label_269edc:
    // 0x269edc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269EDCu;
    {
        const bool branch_taken_0x269edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EDCu;
        // 0x269ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269edc) {
            ctx->pc = 0x269EF0u;
            goto label_269ef0;
        }
    }
    ctx->pc = 0x269EE4u;
    // 0x269ee4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x269ee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x269ee8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x269ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x269eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269ef0:
    // 0x269ef0: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x269ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x269ef4: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x269ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x269ef8: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x269ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x269efc: 0x3e00008  jr          $ra
    ctx->pc = 0x269EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EFCu;
        // 0x269f00: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269F04u;
    // 0x269f04: 0x0  nop
    ctx->pc = 0x269f04u;
    // NOP
    ctx->pc = 0x269f08u;
}
