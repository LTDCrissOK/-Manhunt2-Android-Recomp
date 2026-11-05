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

// Function: sub_00350328
// Address: 0x350328 - 0x350b80
void sub_00350328_0x350328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350328_0x350328");
#endif

    switch (ctx->pc) {
        case 0x350364u: goto label_350364;
        case 0x35036cu: goto label_35036c;
        case 0x350374u: goto label_350374;
        case 0x350380u: goto label_350380;
        case 0x350428u: goto label_350428;
        case 0x350448u: goto label_350448;
        case 0x350484u: goto label_350484;
        case 0x35048cu: goto label_35048c;
        case 0x35058cu: goto label_35058c;
        case 0x350678u: goto label_350678;
        case 0x350788u: goto label_350788;
        case 0x350890u: goto label_350890;
        case 0x350998u: goto label_350998;
        case 0x3509f0u: goto label_3509f0;
        case 0x350a38u: goto label_350a38;
        case 0x350a48u: goto label_350a48;
        case 0x350b24u: goto label_350b24;
        case 0x350b30u: goto label_350b30;
        default: break;
    }

    ctx->pc = 0x350328u;

    // 0x350328: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x350328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x35032c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x35032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x350330: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x350330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350334: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x350334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x350338: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x350338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x35033c: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x35033cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x350340: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x350340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x350344: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x350344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x350348: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x350348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x35034c: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x35034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x350350: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x350350u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x350354: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x350354u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x350358: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x350358u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x35035c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35035Cu;
    SET_GPR_U32(ctx, 31, 0x350364u);
    ctx->pc = 0x350360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35035Cu;
    // 0x350360: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35035Cu, 0x350364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350364u;
label_350364:
    // 0x350364: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x350364u;
    SET_GPR_U32(ctx, 31, 0x35036Cu);
    ctx->pc = 0x350368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350364u;
    // 0x350368: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x350364u, 0x35036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35036Cu;
label_35036c:
    // 0x35036c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35036Cu;
    SET_GPR_U32(ctx, 31, 0x350374u);
    ctx->pc = 0x350370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35036Cu;
    // 0x350370: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35036Cu, 0x350374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350374u;
label_350374:
    // 0x350374: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x350374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x350378: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x350378u;
    SET_GPR_U32(ctx, 31, 0x350380u);
    ctx->pc = 0x35037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350378u;
    // 0x35037c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x350378u, 0x350380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350380u;
label_350380:
    // 0x350380: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x350380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x350384: 0x8c64bd48  lw          $a0, -0x42B8($v1)
    ctx->pc = 0x350384u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x350388: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x350388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x35038c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x35038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x350390: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x350390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350394: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x350394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x350398: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x350398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x35039c: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x35039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3503a0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3503a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3503a4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3503a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3503a8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3503a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3503ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3503acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3503b0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x3503b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3503b4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3503b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3503b8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3503b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3503bc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3503bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3503c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x3503c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3503c4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3503c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3503c8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3503c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3503cc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3503ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x3503d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3503d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3503d4: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x3503d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3503d8: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x3503d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3503dc: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3503dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3503e0: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x3503e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3503e4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3503e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3503e8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x3503e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3503ec: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3503ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3503f0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x3503f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3503f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3503f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3503f8: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x3503f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3503fc: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x3503fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x350400: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x350400u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x350404: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x350404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x350408: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x350408u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35040c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35040cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350410: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x350410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x350414: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x350414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x350418: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x350418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x35041c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x35041cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x350420: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x350420u;
    SET_GPR_U32(ctx, 31, 0x350428u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x350420u, 0x350428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350428u;
label_350428:
    // 0x350428: 0x3c01c0c0  lui         $at, 0xC0C0
    ctx->pc = 0x350428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49344 << 16));
    // 0x35042c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x35042cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x350430: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x350430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x350434: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x350434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350438: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x350438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x35043c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x35043cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x350440: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x350440u;
    SET_GPR_U32(ctx, 31, 0x350448u);
    ctx->pc = 0x350444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350440u;
    // 0x350444: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x350440u, 0x350448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350448u;
label_350448:
    // 0x350448: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x350448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x35044c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x35044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350450: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x350450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x350454: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x350454u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x350458: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x350458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x35045c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x35045cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350460: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x350460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x350464: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x350464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350468: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x350468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x35046c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x35046cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x350470: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x350470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350474: 0x0  nop
    ctx->pc = 0x350474u;
    // NOP
    // 0x350478: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35047c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35047Cu;
    SET_GPR_U32(ctx, 31, 0x350484u);
    ctx->pc = 0x350480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35047Cu;
    // 0x350480: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35047Cu, 0x350484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350484u;
label_350484:
    // 0x350484: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x350484u;
    SET_GPR_U32(ctx, 31, 0x35048Cu);
    ctx->pc = 0x350488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350484u;
    // 0x350488: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x350484u, 0x35048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35048Cu;
label_35048c:
    // 0x35048c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x35048cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350490: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x350490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x350494: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x350494u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350498: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x350498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x35049c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x35049cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3504a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3504a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3504a4: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3504a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x3504a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3504a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3504ac: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x3504acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3504b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3504b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3504b4: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x3504b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3504b8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3504b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3504bc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3504bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3504c0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x3504c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3504c4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3504c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3504c8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3504c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3504cc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3504ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3504d0: 0x0  nop
    ctx->pc = 0x3504d0u;
    // NOP
    // 0x3504d4: 0x0  nop
    ctx->pc = 0x3504d4u;
    // NOP
    // 0x3504d8: 0x46000044  c1          0x44
    ctx->pc = 0x3504d8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3504dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3504dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504e0: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x3504e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3504e4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3504e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3504e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504ec: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x3504ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x3504f0: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x3504f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3504f4: 0x0  nop
    ctx->pc = 0x3504f4u;
    // NOP
    // 0x3504f8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3504F8u;
    {
        const bool branch_taken_0x3504f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3504FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3504F8u;
        // 0x3504fc: 0xe7a100f0  swc1        $f1, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3504f8) {
            ctx->pc = 0x350524u;
            goto label_350524;
        }
    }
    ctx->pc = 0x350500u;
    // 0x350500: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x350500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x350504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x350504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350508: 0x0  nop
    ctx->pc = 0x350508u;
    // NOP
    // 0x35050c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x35050cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x350510: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x350510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x350514: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x350514u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x350518: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x350518u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x35051c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x35051cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x350520: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x350520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_350524:
    // 0x350524: 0x7fa00030  sq          $zero, 0x30($sp)
    ctx->pc = 0x350524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 0));
    // 0x350528: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x350528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x35052c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x35052cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x350530: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x350530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x350534: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x350534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350538: 0xc45666a0  lwc1        $f22, 0x66A0($v0)
    ctx->pc = 0x350538u;
    { uint32_t bits = FAST_READ32(0x4766A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x35053c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x35053cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x350540: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x350540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x350544: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x350544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x350548: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x350548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x35054c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x35054cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x350550: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x350550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x350554: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x350554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350558: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x350558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x35055c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x35055cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350560: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x350560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x350564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350568: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x350568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x35056c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x35056cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x350570: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x350570u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x350574: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x350574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x350578: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x350578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x35057c: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x35057cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x350580: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x350580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x350584: 0xc077824  jal         func_1DE090
    ctx->pc = 0x350584u;
    SET_GPR_U32(ctx, 31, 0x35058Cu);
    ctx->pc = 0x350588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350584u;
    // 0x350588: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x350584u, 0x35058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35058Cu;
label_35058c:
    // 0x35058c: 0x5440016f  bnel        $v0, $zero, . + 4 + (0x16F << 2)
    ctx->pc = 0x35058Cu;
    {
        const bool branch_taken_0x35058c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35058c) {
            ctx->pc = 0x350590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35058Cu;
            // 0x350590: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350B4Cu;
            goto label_350b4c;
        }
    }
    ctx->pc = 0x350594u;
    // 0x350594: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x350594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x350598: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x350598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x35059c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x35059cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3505a0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3505a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3505a4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3505a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3505a8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3505a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3505ac: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x3505acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3505b0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3505b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3505b4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3505b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3505b8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3505b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3505bc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3505bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x3505c0: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x3505c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3505c4: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x3505c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3505c8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3505c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3505cc: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x3505ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3505d0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x3505d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3505d4: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x3505d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3505d8: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x3505d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3505dc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3505dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3505e0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3505e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3505e4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3505e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3505e8: 0x0  nop
    ctx->pc = 0x3505e8u;
    // NOP
    // 0x3505ec: 0x0  nop
    ctx->pc = 0x3505ecu;
    // NOP
    // 0x3505f0: 0x46000044  c1          0x44
    ctx->pc = 0x3505f0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3505f4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x3505f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x3505f8: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x3505f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3505fc: 0x0  nop
    ctx->pc = 0x3505fcu;
    // NOP
    // 0x350600: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x350600u;
    {
        const bool branch_taken_0x350600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x350604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350600u;
        // 0x350604: 0xe7a100f0  swc1        $f1, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x350600) {
            ctx->pc = 0x35062Cu;
            goto label_35062c;
        }
    }
    ctx->pc = 0x350608u;
    // 0x350608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x350608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35060c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35060cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350610: 0x0  nop
    ctx->pc = 0x350610u;
    // NOP
    // 0x350614: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x350614u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x350618: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x350618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35061c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x35061cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x350620: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x350620u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x350624: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x350624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x350628: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x350628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_35062c:
    // 0x35062c: 0x7fa00030  sq          $zero, 0x30($sp)
    ctx->pc = 0x35062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 0));
    // 0x350630: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x350630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x350634: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x350634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x350638: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x350638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35063c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x35063cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x350640: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350644: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x350644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x350648: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x350648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35064c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x35064cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x350650: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x350650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x350654: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x350654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x350658: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x350658u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x35065c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x35065cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x350660: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x350660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x350664: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x350664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x350668: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x350668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x35066c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x35066cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x350670: 0xc077824  jal         func_1DE090
    ctx->pc = 0x350670u;
    SET_GPR_U32(ctx, 31, 0x350678u);
    ctx->pc = 0x350674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350670u;
    // 0x350674: 0xe7b50100  swc1        $f21, 0x100($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x350670u, 0x350678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350678u;
label_350678:
    // 0x350678: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x350678u;
    {
        const bool branch_taken_0x350678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350678u;
        // 0x35067c: 0xc7a00100  lwc1        $f0, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x350678) {
            ctx->pc = 0x3506A4u;
            goto label_3506a4;
        }
    }
    ctx->pc = 0x350680u;
    // 0x350680: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x350680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x350684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x350684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350688: 0x0  nop
    ctx->pc = 0x350688u;
    // NOP
    // 0x35068c: 0x0  nop
    ctx->pc = 0x35068cu;
    // NOP
    // 0x350690: 0x46000544  c1          0x544
    ctx->pc = 0x350690u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x350694: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x350694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350698: 0x0  nop
    ctx->pc = 0x350698u;
    // NOP
    // 0x35069c: 0x4503012b  bc1tl       . + 4 + (0x12B << 2)
    ctx->pc = 0x35069Cu;
    {
        const bool branch_taken_0x35069c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35069c) {
            ctx->pc = 0x3506A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35069Cu;
            // 0x3506a0: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350B4Cu;
            goto label_350b4c;
        }
    }
    ctx->pc = 0x3506A4u;
label_3506a4:
    // 0x3506a4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3506a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3506a8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3506a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3506ac: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3506acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3506b0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3506b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3506b4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x3506b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x3506b8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3506b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3506bc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3506bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3506c0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3506c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3506c4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3506c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x3506c8: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x3506c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3506cc: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x3506ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3506d0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3506d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3506d4: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x3506d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3506d8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x3506d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3506dc: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x3506dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3506e0: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x3506e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3506e4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3506e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3506e8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3506e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3506ec: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3506ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3506f0: 0x0  nop
    ctx->pc = 0x3506f0u;
    // NOP
    // 0x3506f4: 0x0  nop
    ctx->pc = 0x3506f4u;
    // NOP
    // 0x3506f8: 0x46000044  c1          0x44
    ctx->pc = 0x3506f8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3506fc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x3506fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x350700: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x350700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350704: 0x0  nop
    ctx->pc = 0x350704u;
    // NOP
    // 0x350708: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x350708u;
    {
        const bool branch_taken_0x350708 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350708u;
        // 0x35070c: 0xe7a100f0  swc1        $f1, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x350708) {
            ctx->pc = 0x350734u;
            goto label_350734;
        }
    }
    ctx->pc = 0x350710u;
    // 0x350710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x350710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x350714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x350714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350718: 0x0  nop
    ctx->pc = 0x350718u;
    // NOP
    // 0x35071c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x35071cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x350720: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x350720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x350724: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x350724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x350728: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x350728u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x35072c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x35072cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x350730: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x350730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_350734:
    // 0x350734: 0x7fa00030  sq          $zero, 0x30($sp)
    ctx->pc = 0x350734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 0));
    // 0x350738: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x350738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x35073c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x35073cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x350740: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x350740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x350744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x350744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350748: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x350748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x35074c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35074cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350750: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x350750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x350754: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x350754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350758: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x350758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x35075c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x35075cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x350760: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x350760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x350764: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x350764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x350768: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x350768u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x35076c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x35076cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x350770: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x350770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x350774: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x350774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x350778: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x350778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x35077c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x35077cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x350780: 0xc077824  jal         func_1DE090
    ctx->pc = 0x350780u;
    SET_GPR_U32(ctx, 31, 0x350788u);
    ctx->pc = 0x350784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350780u;
    // 0x350784: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x350780u, 0x350788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350788u;
label_350788:
    // 0x350788: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x350788u;
    {
        const bool branch_taken_0x350788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350788u;
        // 0x35078c: 0xc7a00100  lwc1        $f0, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x350788) {
            ctx->pc = 0x3507B4u;
            goto label_3507b4;
        }
    }
    ctx->pc = 0x350790u;
    // 0x350790: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x350790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x350794: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x350794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350798: 0x0  nop
    ctx->pc = 0x350798u;
    // NOP
    // 0x35079c: 0x0  nop
    ctx->pc = 0x35079cu;
    // NOP
    // 0x3507a0: 0x46000544  c1          0x544
    ctx->pc = 0x3507a0u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x3507a4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x3507a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3507a8: 0x0  nop
    ctx->pc = 0x3507a8u;
    // NOP
    // 0x3507ac: 0x450300e7  bc1tl       . + 4 + (0xE7 << 2)
    ctx->pc = 0x3507ACu;
    {
        const bool branch_taken_0x3507ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3507ac) {
            ctx->pc = 0x3507B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3507ACu;
            // 0x3507b0: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350B4Cu;
            goto label_350b4c;
        }
    }
    ctx->pc = 0x3507B4u;
label_3507b4:
    // 0x3507b4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3507b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3507b8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3507b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3507bc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3507bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3507c0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3507c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3507c4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x3507c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3507c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3507c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3507cc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3507ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3507d0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3507d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3507d4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3507d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x3507d8: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x3507d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3507dc: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x3507dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3507e0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3507e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3507e4: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x3507e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3507e8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x3507e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3507ec: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x3507ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3507f0: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x3507f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3507f4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3507f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3507f8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3507f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3507fc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3507fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x350800: 0x0  nop
    ctx->pc = 0x350800u;
    // NOP
    // 0x350804: 0x0  nop
    ctx->pc = 0x350804u;
    // NOP
    // 0x350808: 0x46000044  c1          0x44
    ctx->pc = 0x350808u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x35080c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x35080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x350810: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x350810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350814: 0x0  nop
    ctx->pc = 0x350814u;
    // NOP
    // 0x350818: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x350818u;
    {
        const bool branch_taken_0x350818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350818u;
        // 0x35081c: 0xe7a100f0  swc1        $f1, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x350818) {
            ctx->pc = 0x350844u;
            goto label_350844;
        }
    }
    ctx->pc = 0x350820u;
    // 0x350820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x350820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x350824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x350824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350828: 0x0  nop
    ctx->pc = 0x350828u;
    // NOP
    // 0x35082c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x35082cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x350830: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x350830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x350834: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x350834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x350838: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x350838u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x35083c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x35083cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x350840: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x350840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_350844:
    // 0x350844: 0x7fa00030  sq          $zero, 0x30($sp)
    ctx->pc = 0x350844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 0));
    // 0x350848: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x350848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x35084c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x35084cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x350850: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x350850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350854: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x350854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x350858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35085c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x35085cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x350860: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x350860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350864: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x350864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x350868: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x350868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x35086c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x35086cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x350870: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x350870u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x350874: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x350874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x350878: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x350878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x35087c: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x35087cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x350880: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x350880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x350884: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x350884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x350888: 0xc077824  jal         func_1DE090
    ctx->pc = 0x350888u;
    SET_GPR_U32(ctx, 31, 0x350890u);
    ctx->pc = 0x35088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350888u;
    // 0x35088c: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x350888u, 0x350890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350890u;
label_350890:
    // 0x350890: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x350890u;
    {
        const bool branch_taken_0x350890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350890u;
        // 0x350894: 0xc7a00100  lwc1        $f0, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x350890) {
            ctx->pc = 0x3508BCu;
            goto label_3508bc;
        }
    }
    ctx->pc = 0x350898u;
    // 0x350898: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x350898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x35089c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35089cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3508a0: 0x0  nop
    ctx->pc = 0x3508a0u;
    // NOP
    // 0x3508a4: 0x0  nop
    ctx->pc = 0x3508a4u;
    // NOP
    // 0x3508a8: 0x46000544  c1          0x544
    ctx->pc = 0x3508a8u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x3508ac: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x3508acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3508b0: 0x0  nop
    ctx->pc = 0x3508b0u;
    // NOP
    // 0x3508b4: 0x450300a5  bc1tl       . + 4 + (0xA5 << 2)
    ctx->pc = 0x3508B4u;
    {
        const bool branch_taken_0x3508b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3508b4) {
            ctx->pc = 0x3508B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3508B4u;
            // 0x3508b8: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350B4Cu;
            goto label_350b4c;
        }
    }
    ctx->pc = 0x3508BCu;
label_3508bc:
    // 0x3508bc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3508bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3508c0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3508c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3508c4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3508c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3508c8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3508c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3508cc: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x3508ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x3508d0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3508d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3508d4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3508d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3508d8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3508d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3508dc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3508dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x3508e0: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x3508e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3508e4: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x3508e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3508e8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3508e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3508ec: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x3508ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3508f0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x3508f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3508f4: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x3508f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3508f8: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x3508f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3508fc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3508fcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x350900: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x350900u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x350904: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x350904u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x350908: 0x0  nop
    ctx->pc = 0x350908u;
    // NOP
    // 0x35090c: 0x0  nop
    ctx->pc = 0x35090cu;
    // NOP
    // 0x350910: 0x46000044  c1          0x44
    ctx->pc = 0x350910u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x350914: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x350914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x350918: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x350918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35091c: 0x0  nop
    ctx->pc = 0x35091cu;
    // NOP
    // 0x350920: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x350920u;
    {
        const bool branch_taken_0x350920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x350924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350920u;
        // 0x350924: 0xe7a100f0  swc1        $f1, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x350920) {
            ctx->pc = 0x35094Cu;
            goto label_35094c;
        }
    }
    ctx->pc = 0x350928u;
    // 0x350928: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x350928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35092c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35092cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350930: 0x0  nop
    ctx->pc = 0x350930u;
    // NOP
    // 0x350934: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x350934u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x350938: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x350938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35093c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x35093cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x350940: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x350940u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x350944: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x350944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x350948: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x350948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_35094c:
    // 0x35094c: 0x7fa00030  sq          $zero, 0x30($sp)
    ctx->pc = 0x35094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 0));
    // 0x350950: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x350950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x350954: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x350954u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x350958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x350958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35095c: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x35095cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x350960: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350964: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x350964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x350968: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x350968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35096c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x35096cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x350970: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x350970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x350974: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x350974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x350978: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x350978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x35097c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x35097cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x350980: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x350980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x350984: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x350984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x350988: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x350988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x35098c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x35098cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x350990: 0xc077824  jal         func_1DE090
    ctx->pc = 0x350990u;
    SET_GPR_U32(ctx, 31, 0x350998u);
    ctx->pc = 0x350994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350990u;
    // 0x350994: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x350990u, 0x350998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350998u;
label_350998:
    // 0x350998: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x350998u;
    {
        const bool branch_taken_0x350998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350998u;
        // 0x35099c: 0xc7a00100  lwc1        $f0, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x350998) {
            ctx->pc = 0x3509C4u;
            goto label_3509c4;
        }
    }
    ctx->pc = 0x3509A0u;
    // 0x3509a0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3509a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3509a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3509a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3509a8: 0x0  nop
    ctx->pc = 0x3509a8u;
    // NOP
    // 0x3509ac: 0x0  nop
    ctx->pc = 0x3509acu;
    // NOP
    // 0x3509b0: 0x46000544  c1          0x544
    ctx->pc = 0x3509b0u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x3509b4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x3509b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3509b8: 0x0  nop
    ctx->pc = 0x3509b8u;
    // NOP
    // 0x3509bc: 0x45010063  bc1t        . + 4 + (0x63 << 2)
    ctx->pc = 0x3509BCu;
    {
        const bool branch_taken_0x3509bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3509C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3509BCu;
        // 0x3509c0: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3509bc) {
            ctx->pc = 0x350B4Cu;
            goto label_350b4c;
        }
    }
    ctx->pc = 0x3509C4u;
label_3509c4:
    // 0x3509c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3509c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3509c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3509c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3509cc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3509ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3509d0: 0x8c71ecc4  lw          $s1, -0x133C($v1)
    ctx->pc = 0x3509d0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x6BECC4u));
    // 0x3509d4: 0x2442ecd0  addiu       $v0, $v0, -0x1330
    ctx->pc = 0x3509d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x3509d8: 0x1222005b  beq         $s1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3509D8u;
    {
        const bool branch_taken_0x3509d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3509DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3509D8u;
        // 0x3509dc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3509d8) {
            ctx->pc = 0x350B48u;
            goto label_350b48;
        }
    }
    ctx->pc = 0x3509E0u;
    // 0x3509e0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3509e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3509e4: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x3509e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x3509e8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3509e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3509ec: 0x0  nop
    ctx->pc = 0x3509ecu;
    // NOP
label_3509f0:
    // 0x3509f0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3509f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3509f4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3509f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3509f8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3509f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3509fc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3509fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x350a00: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x350a00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x350a04: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x350a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x350a08: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x350a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x350a0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350a10: 0x0  nop
    ctx->pc = 0x350a10u;
    // NOP
    // 0x350a14: 0x0  nop
    ctx->pc = 0x350a14u;
    // NOP
    // 0x350a18: 0x46000504  c1          0x504
    ctx->pc = 0x350a18u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x350a1c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x350a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350a20: 0x0  nop
    ctx->pc = 0x350a20u;
    // NOP
    // 0x350a24: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x350A24u;
    {
        const bool branch_taken_0x350a24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x350A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A24u;
        // 0x350a28: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a24) {
            ctx->pc = 0x350B38u;
            goto label_350b38;
        }
    }
    ctx->pc = 0x350A2Cu;
    // 0x350a2c: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x350a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x350a30: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x350A30u;
    SET_GPR_U32(ctx, 31, 0x350A38u);
    ctx->pc = 0x350A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350A30u;
    // 0x350a34: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x350A30u, 0x350A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A38u;
label_350a38:
    // 0x350a38: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x350a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x350a3c: 0x24422710  addiu       $v0, $v0, 0x2710
    ctx->pc = 0x350a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
    // 0x350a40: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x350A40u;
    SET_GPR_U32(ctx, 31, 0x350A48u);
    ctx->pc = 0x350A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350A40u;
    // 0x350a44: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x350A40u, 0x350A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A48u;
label_350a48:
    // 0x350a48: 0x304307ff  andi        $v1, $v0, 0x7FF
    ctx->pc = 0x350a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x350a4c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x350A4Cu;
    {
        const bool branch_taken_0x350a4c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x350A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A4Cu;
        // 0x350a50: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a4c) {
            ctx->pc = 0x350A68u;
            goto label_350a68;
        }
    }
    ctx->pc = 0x350A54u;
    // 0x350a54: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x350a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x350a58: 0x0  nop
    ctx->pc = 0x350a58u;
    // NOP
    // 0x350a5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x350a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x350a60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x350A60u;
    {
        const bool branch_taken_0x350a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350a60) {
            ctx->pc = 0x350A80u;
            goto label_350a80;
        }
    }
    ctx->pc = 0x350A68u;
label_350a68:
    // 0x350a68: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x350a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x350a6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x350a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x350a70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x350a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x350a74: 0x0  nop
    ctx->pc = 0x350a74u;
    // NOP
    // 0x350a78: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x350a78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x350a7c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x350a7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_350a80:
    // 0x350a80: 0x0  nop
    ctx->pc = 0x350a80u;
    // NOP
    // 0x350a84: 0x0  nop
    ctx->pc = 0x350a84u;
    // NOP
    // 0x350a88: 0x4615a143  div.s       $f5, $f20, $f21
    ctx->pc = 0x350a88u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[20], ctx->f[21]); }
    // 0x350a8c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x350a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x350a90: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x350a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x350a94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x350a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350a98: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x350a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x350a9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x350a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350aa0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x350aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350aa4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x350aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x350aa8: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x350aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x350aac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x350aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x350ab0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x350ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x350ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ab8: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x350ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x350abc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350ac0: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x350ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x350ac4: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x350ac4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x350ac8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x350ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x350acc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x350accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350ad0: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x350ad0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x350ad4: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x350ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x350ad8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x350ad8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x350adc: 0xe6240014  swc1        $f4, 0x14($s1)
    ctx->pc = 0x350adcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x350ae0: 0xe6260018  swc1        $f6, 0x18($s1)
    ctx->pc = 0x350ae0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x350ae4: 0xe6260010  swc1        $f6, 0x10($s1)
    ctx->pc = 0x350ae4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x350ae8: 0xa2320025  sb          $s2, 0x25($s1)
    ctx->pc = 0x350ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 37), (uint8_t)GPR_U32(ctx, 18));
    // 0x350aec: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x350aecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x350af0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x350af0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x350af4: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x350af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x350af8: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x350af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x350afc: 0xa2320024  sb          $s2, 0x24($s1)
    ctx->pc = 0x350afcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 18));
    // 0x350b00: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x350b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x350b04: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x350b04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x350b08: 0x8e30004c  lw          $s0, 0x4C($s1)
    ctx->pc = 0x350b08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x350b0c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x350b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350b10: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x350b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x350b14: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x350b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350b18: 0xa2250026  sb          $a1, 0x26($s1)
    ctx->pc = 0x350b18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 5));
    // 0x350b1c: 0xc0d40be  jal         func_3502F8
    ctx->pc = 0x350B1Cu;
    SET_GPR_U32(ctx, 31, 0x350B24u);
    ctx->pc = 0x350B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350B1Cu;
    // 0x350b20: 0xe6210020  swc1        $f1, 0x20($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502F8u, 0x350B1Cu, 0x350B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B24u;
label_350b24:
    // 0x350b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b28: 0xc0d40b6  jal         func_3502D8
    ctx->pc = 0x350B28u;
    SET_GPR_U32(ctx, 31, 0x350B30u);
    ctx->pc = 0x350B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350B28u;
    // 0x350b2c: 0x2665ed28  addiu       $a1, $s3, -0x12D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502D8u, 0x350B28u, 0x350B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B30u;
label_350b30:
    // 0x350b30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x350B30u;
    {
        const bool branch_taken_0x350b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B30u;
        // 0x350b34: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b30) {
            ctx->pc = 0x350B3Cu;
            goto label_350b3c;
        }
    }
    ctx->pc = 0x350B38u;
label_350b38:
    // 0x350b38: 0x8e31004c  lw          $s1, 0x4C($s1)
    ctx->pc = 0x350b38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_350b3c:
    // 0x350b3c: 0x26a2ecd0  addiu       $v0, $s5, -0x1330
    ctx->pc = 0x350b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962384));
    // 0x350b40: 0x5622ffab  bnel        $s1, $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x350B40u;
    {
        const bool branch_taken_0x350b40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x350b40) {
            ctx->pc = 0x350B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350B40u;
            // 0x350b44: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3509F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3509f0;
        }
    }
    ctx->pc = 0x350B48u;
label_350b48:
    // 0x350b48: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x350b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_350b4c:
    // 0x350b4c: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x350b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x350b50: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x350b50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x350b54: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x350b54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x350b58: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x350b58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x350b5c: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x350b5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x350b60: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x350b60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x350b64: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x350b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x350b68: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x350b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x350b6c: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x350b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x350b70: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x350b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x350b74: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x350b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x350b78: 0x3e00008  jr          $ra
    ctx->pc = 0x350B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B78u;
        // 0x350b7c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350B80u;
}
