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

// Function: sub_00363160
// Address: 0x363160 - 0x3633d8
void sub_00363160_0x363160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363160_0x363160");
#endif

    switch (ctx->pc) {
        case 0x36319cu: goto label_36319c;
        case 0x3631a8u: goto label_3631a8;
        case 0x3631c4u: goto label_3631c4;
        case 0x36323cu: goto label_36323c;
        case 0x363398u: goto label_363398;
        default: break;
    }

    ctx->pc = 0x363160u;

    // 0x363160: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x363160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x363164: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x363164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
    // 0x363168: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x363168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
    // 0x36316c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36316cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363170: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x363170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x363174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x363174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363178: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x363178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x36317c: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x36317cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x363180: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x363180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x363184: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x363184u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x363188: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x363188u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x36318c: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x36318cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x363190: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x363190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x363194: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x363194u;
    SET_GPR_U32(ctx, 31, 0x36319Cu);
    ctx->pc = 0x363198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363194u;
    // 0x363198: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x363194u, 0x36319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36319Cu;
label_36319c:
    // 0x36319c: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x36319cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3631a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3631A0u;
    SET_GPR_U32(ctx, 31, 0x3631A8u);
    ctx->pc = 0x3631A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3631A0u;
    // 0x3631a4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3631A0u, 0x3631A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3631A8u;
label_3631a8:
    // 0x3631a8: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x3631a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x3631ac: 0xaea00030  sw          $zero, 0x30($s5)
    ctx->pc = 0x3631acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 0));
    // 0x3631b0: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x3631b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x3631b4: 0x7fa000b0  sq          $zero, 0xB0($sp)
    ctx->pc = 0x3631b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 0));
    // 0x3631b8: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x3631b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3631bc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3631BCu;
    SET_GPR_U32(ctx, 31, 0x3631C4u);
    ctx->pc = 0x3631C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3631BCu;
    // 0x3631c0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3631BCu, 0x3631C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3631C4u;
label_3631c4:
    // 0x3631c4: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x3631c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x3631c8: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x3631c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
    // 0x3631cc: 0x7fa000d0  sq          $zero, 0xD0($sp)
    ctx->pc = 0x3631ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 0));
    // 0x3631d0: 0x7fa00100  sq          $zero, 0x100($sp)
    ctx->pc = 0x3631d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 0));
    // 0x3631d4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3631d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3631d8: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x3631d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3631dc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3631dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3631e0: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x3631e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3631e4: 0x0  nop
    ctx->pc = 0x3631e4u;
    // NOP
    // 0x3631e8: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x3631E8u;
    {
        const bool branch_taken_0x3631e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3631ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3631E8u;
        // 0x3631ec: 0x8c510010  lw          $s1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3631e8) {
            ctx->pc = 0x3633A0u;
            goto label_3633a0;
        }
    }
    ctx->pc = 0x3631F0u;
    // 0x3631f0: 0xc6750034  lwc1        $f21, 0x34($s3)
    ctx->pc = 0x3631f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3631f4: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x3631f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3631f8: 0xc674000c  lwc1        $f20, 0xC($s3)
    ctx->pc = 0x3631f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3631fc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3631fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x363200: 0xc64000b4  lwc1        $f0, 0xB4($s2)
    ctx->pc = 0x363200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363204: 0x4614ad01  sub.s       $f20, $f21, $f20
    ctx->pc = 0x363204u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x363208: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x363208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36320c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36320cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363210: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x363210u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x363214: 0x0  nop
    ctx->pc = 0x363214u;
    // NOP
    // 0x363218: 0x0  nop
    ctx->pc = 0x363218u;
    // NOP
    // 0x36321c: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x36321cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x363220: 0xe7b60114  swc1        $f22, 0x114($sp)
    ctx->pc = 0x363220u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x363224: 0x0  nop
    ctx->pc = 0x363224u;
    // NOP
    // 0x363228: 0x0  nop
    ctx->pc = 0x363228u;
    // NOP
    // 0x36322c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x36322cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x363230: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x363230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x363234: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x363234u;
    SET_GPR_U32(ctx, 31, 0x36323Cu);
    ctx->pc = 0x363238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363234u;
    // 0x363238: 0xe7b6011c  swc1        $f22, 0x11C($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x363234u, 0x36323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36323Cu;
label_36323c:
    // 0x36323c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x36323cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x363240: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x363240u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x363244: 0xda230010  lqc2        $vf3, 0x10($s1)
    ctx->pc = 0x363244u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x363248: 0xda240020  lqc2        $vf4, 0x20($s1)
    ctx->pc = 0x363248u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x36324c: 0xda250030  lqc2        $vf5, 0x30($s1)
    ctx->pc = 0x36324cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x363250: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x363250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x363254: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x363254u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x363258: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x363258u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36325c: 0xfba50120  sqc2        $vf5, 0x120($sp)
    ctx->pc = 0x36325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x363260: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x363260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363264: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x363264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x363268: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x363268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36326c: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x36326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x363270: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x363270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x363274: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x363274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x363278: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x363278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36327c: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x36327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x363280: 0xc7a40128  lwc1        $f4, 0x128($sp)
    ctx->pc = 0x363280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x363284: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x363284u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x363288: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x363288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36328c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x36328cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x363290: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x363290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x363294: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x363294u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x363298: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x363298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x36329c: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x36329cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x3632a0: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x3632a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x3632a4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3632a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3632a8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3632a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3632ac: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3632acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3632b0: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x3632b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3632b4: 0xc7a30150  lwc1        $f3, 0x150($sp)
    ctx->pc = 0x3632b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3632b8: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x3632b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3632bc: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x3632bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3632c0: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x3632c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3632c4: 0xc7a2015c  lwc1        $f2, 0x15C($sp)
    ctx->pc = 0x3632c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3632c8: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x3632c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x3632cc: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x3632ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x3632d0: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x3632d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x3632d4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x3632d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x3632d8: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x3632d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3632dc: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3632dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3632e0: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x3632e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3632e4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x3632e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x3632e8: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x3632e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3632ec: 0xc7a40128  lwc1        $f4, 0x128($sp)
    ctx->pc = 0x3632ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3632f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3632f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3632f4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x3632f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3632f8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3632f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3632fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3632fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x363300: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x363300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x363304: 0xe7a30150  swc1        $f3, 0x150($sp)
    ctx->pc = 0x363304u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x363308: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x363308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x36330c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x36330cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x363310: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x363310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363314: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x363314u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x363318: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x363318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36331c: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x36331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x363320: 0xc7a20164  lwc1        $f2, 0x164($sp)
    ctx->pc = 0x363320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x363324: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x363324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363328: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x363328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36332c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x36332cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x363330: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x363330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363334: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x363334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363338: 0xc7a30160  lwc1        $f3, 0x160($sp)
    ctx->pc = 0x363338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36333c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x36333cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x363340: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x363340u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x363344: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x363344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x363348: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x363348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x36334c: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x36334cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x363350: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x363350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363354: 0xc64200b0  lwc1        $f2, 0xB0($s2)
    ctx->pc = 0x363354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x363358: 0x7ea20010  sq          $v0, 0x10($s5)
    ctx->pc = 0x363358u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 2));
    // 0x36335c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x36335cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x363360: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x363360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x363364: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x363364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x363368: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x363368u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x36336c: 0xe6a10020  swc1        $f1, 0x20($s5)
    ctx->pc = 0x36336cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x363370: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x363370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x363374: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x363374u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x363378: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x363378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x36337c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x36337cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x363380: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x363380u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x363384: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x363384u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    // 0x363388: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x363388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x36338c: 0xe6810020  swc1        $f1, 0x20($s4)
    ctx->pc = 0x36338cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x363390: 0xc0d7a5e  jal         func_35E978
    ctx->pc = 0x363390u;
    SET_GPR_U32(ctx, 31, 0x363398u);
    ctx->pc = 0x363394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363390u;
    // 0x363394: 0xe6800030  swc1        $f0, 0x30($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E978u, 0x363390u, 0x363398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363398u;
label_363398:
    // 0x363398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x363398u;
    {
        const bool branch_taken_0x363398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363398u;
        // 0x36339c: 0xdfb00170  ld          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363398) {
            ctx->pc = 0x3633A8u;
            goto label_3633a8;
        }
    }
    ctx->pc = 0x3633A0u;
label_3633a0:
    // 0x3633a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3633a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3633a4: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x3633a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_3633a8:
    // 0x3633a8: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x3633a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x3633ac: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x3633acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3633b0: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x3633b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x3633b4: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x3633b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3633b8: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x3633b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3633bc: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x3633bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3633c0: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x3633c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3633c4: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x3633c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3633c8: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x3633c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3633cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3633CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3633D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3633CCu;
        // 0x3633d0: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3633CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3633D4u;
    // 0x3633d4: 0x0  nop
    ctx->pc = 0x3633d4u;
    // NOP
    ctx->pc = 0x3633d8u;
}
