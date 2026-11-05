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

// Function: sub_00340180
// Address: 0x340180 - 0x340380
void sub_00340180_0x340180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340180_0x340180");
#endif

    switch (ctx->pc) {
        case 0x3401b8u: goto label_3401b8;
        case 0x3401c0u: goto label_3401c0;
        case 0x340208u: goto label_340208;
        case 0x340210u: goto label_340210;
        case 0x3402acu: goto label_3402ac;
        case 0x34030cu: goto label_34030c;
        case 0x340330u: goto label_340330;
        default: break;
    }

    ctx->pc = 0x340180u;

    // 0x340180: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x340180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x340184: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x340184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x340188: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x340188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x34018c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34018cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340190: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x340190u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x340194: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x340194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340198: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x340198u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x34019c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x34019cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3401a0: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x3401a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x3401a4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3401a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3401a8: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x3401a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x3401ac: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x3401acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x3401b0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3401B0u;
    SET_GPR_U32(ctx, 31, 0x3401B8u);
    ctx->pc = 0x3401B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3401B0u;
    // 0x3401b4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3401B0u, 0x3401B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3401B8u;
label_3401b8:
    // 0x3401b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3401B8u;
    SET_GPR_U32(ctx, 31, 0x3401C0u);
    ctx->pc = 0x3401BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3401B8u;
    // 0x3401bc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3401B8u, 0x3401C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3401C0u;
label_3401c0:
    // 0x3401c0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x3401c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3401c4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3401c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3401c8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3401c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3401cc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3401ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3401d0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x3401d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3401d4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3401d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3401d8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3401d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3401dc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3401dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3401e0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3401e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3401e4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3401e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3401e8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3401e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3401ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3401ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3401f0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3401f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x3401f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3401f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3401f8: 0x0  nop
    ctx->pc = 0x3401f8u;
    // NOP
    // 0x3401fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3401fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x340200: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x340200u;
    SET_GPR_U32(ctx, 31, 0x340208u);
    ctx->pc = 0x340204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340200u;
    // 0x340204: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x340200u, 0x340208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340208u;
label_340208:
    // 0x340208: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x340208u;
    SET_GPR_U32(ctx, 31, 0x340210u);
    ctx->pc = 0x34020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340208u;
    // 0x34020c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x340208u, 0x340210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340210u;
label_340210:
    // 0x340210: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x340210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340214: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x340214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x340218: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x340218u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34021c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x34021cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x340220: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x340220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x340224: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x340224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x340228: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x340228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x34022c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34022cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x340230: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x340230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x340234: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x340234u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x340238: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x340238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34023c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x34023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x340240: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x340240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340244: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x340244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x340248: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x340248u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34024c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34024cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x340250: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x340250u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x340254: 0x0  nop
    ctx->pc = 0x340254u;
    // NOP
    // 0x340258: 0x0  nop
    ctx->pc = 0x340258u;
    // NOP
    // 0x34025c: 0x46010084  c1          0x10084
    ctx->pc = 0x34025cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x340260: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x340260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x340264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x340264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340268: 0x0  nop
    ctx->pc = 0x340268u;
    // NOP
    // 0x34026c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34026cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340270: 0x0  nop
    ctx->pc = 0x340270u;
    // NOP
    // 0x340274: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x340274u;
    {
        const bool branch_taken_0x340274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340274u;
        // 0x340278: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340274) {
            ctx->pc = 0x3402A0u;
            goto label_3402a0;
        }
    }
    ctx->pc = 0x34027Cu;
    // 0x34027c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34027cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x340280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340284: 0x0  nop
    ctx->pc = 0x340284u;
    // NOP
    // 0x340288: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x340288u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34028c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34028cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x340290: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x340290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x340294: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x340294u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x340298: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x340298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34029c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x34029cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_3402a0:
    // 0x3402a0: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x3402a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3402a4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x3402A4u;
    SET_GPR_U32(ctx, 31, 0x3402ACu);
    ctx->pc = 0x3402A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3402A4u;
    // 0x3402a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x3402A4u, 0x3402ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3402ACu;
label_3402ac:
    // 0x3402ac: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x3402acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    // 0x3402b0: 0x7fa000a0  sq          $zero, 0xA0($sp)
    ctx->pc = 0x3402b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 0));
    // 0x3402b4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x3402b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x3402b8: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x3402b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x3402bc: 0xc44061cc  lwc1        $f0, 0x61CC($v0)
    ctx->pc = 0x3402bcu;
    { uint32_t bits = FAST_READ32(0x4761CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3402c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3402c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3402c4: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x3402c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x3402c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3402c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3402cc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3402ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3402d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3402d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3402d4: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x3402d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x3402d8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x3402d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3402dc: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x3402dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x3402e0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3402e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x3402e4: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3402e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x3402e8: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x3402e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x3402ec: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x3402ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x3402f0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x3402f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x3402f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3402f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3402f8: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x3402f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x3402fc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x3402fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x340300: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x340300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x340304: 0xc077824  jal         func_1DE090
    ctx->pc = 0x340304u;
    SET_GPR_U32(ctx, 31, 0x34030Cu);
    ctx->pc = 0x340308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340304u;
    // 0x340308: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x340304u, 0x34030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34030Cu;
label_34030c:
    // 0x34030c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x34030Cu;
    {
        const bool branch_taken_0x34030c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34030Cu;
        // 0x340310: 0xc7a00094  lwc1        $f0, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34030c) {
            ctx->pc = 0x340358u;
            goto label_340358;
        }
    }
    ctx->pc = 0x340314u;
    // 0x340314: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x340314u;
    {
        const bool branch_taken_0x340314 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x340318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340314u;
        // 0x340318: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340314) {
            ctx->pc = 0x340350u;
            goto label_340350;
        }
    }
    ctx->pc = 0x34031Cu;
    // 0x34031c: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x34031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x340320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340324: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x340324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x340328: 0xc0c93a0  jal         func_324E80
    ctx->pc = 0x340328u;
    SET_GPR_U32(ctx, 31, 0x340330u);
    ctx->pc = 0x34032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340328u;
    // 0x34032c: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324E80u, 0x340328u, 0x340330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340330u;
label_340330:
    // 0x340330: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x340330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x340334: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x340334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x340338: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x340338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x34033c: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x34033cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x340340: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x340340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x340344: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x340344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x340348: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x340348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34034c: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x34034cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_340350:
    // 0x340350: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x340350u;
    {
        const bool branch_taken_0x340350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340350u;
        // 0x340354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340350) {
            ctx->pc = 0x34035Cu;
            goto label_34035c;
        }
    }
    ctx->pc = 0x340358u;
label_340358:
    // 0x340358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x340358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34035c:
    // 0x34035c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x34035cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x340360: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x340360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x340364: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x340364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x340368: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x340368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34036c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x34036cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x340370: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x340370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x340374: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x340374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x340378: 0x3e00008  jr          $ra
    ctx->pc = 0x340378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340378u;
        // 0x34037c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340380u;
}
