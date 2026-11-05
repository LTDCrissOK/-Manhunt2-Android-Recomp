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

// Function: sub_002490F8
// Address: 0x2490f8 - 0x249298
void sub_002490F8_0x2490f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002490F8_0x2490f8");
#endif

    switch (ctx->pc) {
        case 0x249118u: goto label_249118;
        case 0x249120u: goto label_249120;
        case 0x249128u: goto label_249128;
        case 0x249130u: goto label_249130;
        default: break;
    }

    ctx->pc = 0x2490f8u;

    // 0x2490f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2490f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2490fc: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2490fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x249100: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x249100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x249104: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x249104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249108: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x249108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24910c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x249110: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x249110u;
    SET_GPR_U32(ctx, 31, 0x249118u);
    ctx->pc = 0x249114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249110u;
    // 0x249114: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x249110u, 0x249118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249118u;
label_249118:
    // 0x249118: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x249118u;
    SET_GPR_U32(ctx, 31, 0x249120u);
    ctx->pc = 0x24911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249118u;
    // 0x24911c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x249118u, 0x249120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249120u;
label_249120:
    // 0x249120: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x249120u;
    SET_GPR_U32(ctx, 31, 0x249128u);
    ctx->pc = 0x249124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249120u;
    // 0x249124: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x249120u, 0x249128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249128u;
label_249128:
    // 0x249128: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x249128u;
    SET_GPR_U32(ctx, 31, 0x249130u);
    ctx->pc = 0x24912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249128u;
    // 0x24912c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x249128u, 0x249130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249130u;
label_249130:
    // 0x249130: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x249130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x249134: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x249134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x249138: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x249138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x24913c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24913cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249140: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x249140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x249144: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x249144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x249148: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x249148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x24914c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24914cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249150: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x249150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x249154: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x249154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x249158: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x249158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x24915c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24915cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249160: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x249160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x249164: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x249164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x249168: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x249168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x24916c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24916cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249170: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x249170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x249174: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x249174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x249178: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x249178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24917c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24917cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x249180: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x249180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x249184: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x249184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249188: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x249188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24918c: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x24918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x249190: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x249190u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x249194: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x249194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249198: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x249198u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x24919c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x24919cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2491a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2491a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2491a4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2491a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2491a8: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2491a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2491ac: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x2491acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2491b0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2491b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2491b4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2491b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2491b8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2491b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2491bc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2491bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2491c0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2491c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2491c4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2491c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2491c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2491c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2491cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2491ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2491d0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2491d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2491d4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2491d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2491d8: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x2491d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2491dc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2491dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2491e0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2491e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2491e4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2491e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2491e8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2491e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2491ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2491ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2491f0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2491f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2491f4: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2491f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2491f8: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x2491f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2491fc: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x2491fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x249200: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x249200u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249204: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x249204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249208: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x249208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24920c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x249210: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x249210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x249214: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x249214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x249218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24921c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x24921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249220: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x249220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x249224: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x249224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x249228: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x249228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24922c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x24922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249230: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x249230u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x249234: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x249234u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x249238: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x249238u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24923c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x24923cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x249240: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x249240u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x249244: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x249244u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x249248: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x249248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x24924c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24924cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249250: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x249250u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249254: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x249254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x249258: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x249258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24925c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x24925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x249260: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x249260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249264: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x249264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249268: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x249268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24926c: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x24926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249270: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x249270u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x249274: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x249274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x249278: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x249278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x24927c: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x24927cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x249280: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x249280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x249284: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x249284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x249288: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x249288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24928c: 0x3e00008  jr          $ra
    ctx->pc = 0x24928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24928Cu;
        // 0x249290: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24928Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249294u;
    // 0x249294: 0x0  nop
    ctx->pc = 0x249294u;
    // NOP
    ctx->pc = 0x249298u;
}
