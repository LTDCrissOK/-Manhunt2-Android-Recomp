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

// Function: sub_0023F588
// Address: 0x23f588 - 0x23f788
void sub_0023F588_0x23f588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F588_0x23f588");
#endif

    switch (ctx->pc) {
        case 0x23f650u: goto label_23f650;
        case 0x23f658u: goto label_23f658;
        case 0x23f6f4u: goto label_23f6f4;
        case 0x23f710u: goto label_23f710;
        case 0x23f738u: goto label_23f738;
        case 0x23f74cu: goto label_23f74c;
        case 0x23f768u: goto label_23f768;
        default: break;
    }

    ctx->pc = 0x23f588u;

    // 0x23f588: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x23f588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x23f58c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x23f58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x23f590: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23f590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x23f594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f598: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x23f598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x23f59c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x23f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23f5a0: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x23f5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x23f5a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23f5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5a8: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x23f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x23f5ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23f5acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5b0: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x23f5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x23f5b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23f5b8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x23f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x23f5bc: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x23f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x23f5c0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x23f5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x23f5c4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x23f5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x23f5c8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x23f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x23f5cc: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x23f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x23f5d0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23f5d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f5d4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23f5d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f5d8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23f5d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23f5dc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x23f5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23f5e0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x23f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f5e4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x23f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f5e8: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x23f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23f5ec: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x23f5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f5f0: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x23f5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x23f5f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x23f5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x23f5f8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x23f5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23f5fc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x23f5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23f600: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x23f600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23f604: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x23f604u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x23f608: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x23f608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x23f60c: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x23f60cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x23f610: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x23f610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x23f614: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x23f614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x23f618: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23f618u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f61c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x23f61cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23f620: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23f620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23f624: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x23f624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23f628: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x23f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23f62c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x23f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23f630: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x23f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f634: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x23f634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f638: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x23f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f63c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x23f63cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23f640: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x23f640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23f644: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x23f644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23f648: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23F648u;
    SET_GPR_U32(ctx, 31, 0x23F650u);
    ctx->pc = 0x23F64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F648u;
    // 0x23f64c: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23F648u, 0x23F650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F650u;
label_23f650:
    // 0x23f650: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23F650u;
    SET_GPR_U32(ctx, 31, 0x23F658u);
    ctx->pc = 0x23F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F650u;
    // 0x23f654: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23F650u, 0x23F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F658u;
label_23f658:
    // 0x23f658: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x23f658u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f65c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x23f65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23f660: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x23f660u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f664: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23f664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23f668: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x23f668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x23f66c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23f670: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x23f670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x23f674: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x23f674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23f678: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x23f678u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23f67c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23f67cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23f680: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x23f680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23f684: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x23f684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f688: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x23f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23f68c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x23f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23f690: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x23f690u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x23f694: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x23f694u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x23f698: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x23f698u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x23f69c: 0x0  nop
    ctx->pc = 0x23f69cu;
    // NOP
    // 0x23f6a0: 0x0  nop
    ctx->pc = 0x23f6a0u;
    // NOP
    // 0x23f6a4: 0x46010084  c1          0x10084
    ctx->pc = 0x23f6a4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x23f6a8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x23f6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x23f6ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f6b0: 0x0  nop
    ctx->pc = 0x23f6b0u;
    // NOP
    // 0x23f6b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x23f6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f6b8: 0x0  nop
    ctx->pc = 0x23f6b8u;
    // NOP
    // 0x23f6bc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x23F6BCu;
    {
        const bool branch_taken_0x23f6bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6BCu;
        // 0x23f6c0: 0xe7a20090  swc1        $f2, 0x90($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6bc) {
            ctx->pc = 0x23F6E8u;
            goto label_23f6e8;
        }
    }
    ctx->pc = 0x23F6C4u;
    // 0x23f6c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23f6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23f6c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f6cc: 0x0  nop
    ctx->pc = 0x23f6ccu;
    // NOP
    // 0x23f6d0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x23f6d0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x23f6d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23f6d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23f6d8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x23f6d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23f6dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23f6dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23f6e0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23f6e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23f6e4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x23f6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_23f6e8:
    // 0x23f6e8: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x23f6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x23f6ec: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x23F6ECu;
    SET_GPR_U32(ctx, 31, 0x23F6F4u);
    ctx->pc = 0x23F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6ECu;
    // 0x23f6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x23F6ECu, 0x23F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6F4u;
label_23f6f4:
    // 0x23f6f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x23f6f8: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x23f6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x23f6fc: 0xc4405298  lwc1        $f0, 0x5298($v0)
    ctx->pc = 0x23f6fcu;
    { uint32_t bits = FAST_READ32(0x465298u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f700: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23f700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f708: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x23F708u;
    SET_GPR_U32(ctx, 31, 0x23F710u);
    ctx->pc = 0x23F70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F708u;
    // 0x23f70c: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x23F708u, 0x23F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F710u;
label_23f710:
    // 0x23f710: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x23f710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x23f714: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x23f714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23f718: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x23f718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x23f71c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23f71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23f720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f724: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23f724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f728: 0x27a90104  addiu       $t1, $sp, 0x104
    ctx->pc = 0x23f728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x23f72c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23f72cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f730: 0xc077940  jal         func_1DE500
    ctx->pc = 0x23F730u;
    SET_GPR_U32(ctx, 31, 0x23F738u);
    ctx->pc = 0x23F734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F730u;
    // 0x23f734: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x23F730u, 0x23F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F738u;
label_23f738:
    // 0x23f738: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x23f738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x23f73c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F73Cu;
    {
        const bool branch_taken_0x23f73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F73Cu;
        // 0x23f740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f73c) {
            ctx->pc = 0x23F754u;
            goto label_23f754;
        }
    }
    ctx->pc = 0x23F744u;
    // 0x23f744: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x23F744u;
    SET_GPR_U32(ctx, 31, 0x23F74Cu);
    ctx->pc = 0x23F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F744u;
    // 0x23f748: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x23F744u, 0x23F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F74Cu;
label_23f74c:
    // 0x23f74c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23F74Cu;
    {
        const bool branch_taken_0x23f74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F74Cu;
        // 0x23f750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f74c) {
            ctx->pc = 0x23F76Cu;
            goto label_23f76c;
        }
    }
    ctx->pc = 0x23F754u;
label_23f754:
    // 0x23f754: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x23f754u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23f758: 0xfa410030  sqc2        $vf1, 0x30($s2)
    ctx->pc = 0x23f758u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23f75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f760: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x23F760u;
    SET_GPR_U32(ctx, 31, 0x23F768u);
    ctx->pc = 0x23F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F760u;
    // 0x23f764: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x23F760u, 0x23F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F768u;
label_23f768:
    // 0x23f768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f76c:
    // 0x23f76c: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x23f76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x23f770: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x23f770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x23f774: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x23f774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x23f778: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x23f778u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x23f77c: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x23f77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x23f780: 0x3e00008  jr          $ra
    ctx->pc = 0x23F780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F780u;
        // 0x23f784: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F788u;
}
