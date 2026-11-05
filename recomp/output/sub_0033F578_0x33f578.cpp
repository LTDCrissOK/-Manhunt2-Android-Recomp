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

// Function: sub_0033F578
// Address: 0x33f578 - 0x340180
void sub_0033F578_0x33f578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F578_0x33f578");
#endif

    switch (ctx->pc) {
        case 0x33f5f8u: goto label_33f5f8;
        case 0x33f600u: goto label_33f600;
        case 0x33f608u: goto label_33f608;
        default: break;
    }

    ctx->pc = 0x33f578u;

    // 0x33f578: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x33f578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x33f57c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x33f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x33f580: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x33f580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x33f584: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x33f584u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x33f588: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x33f588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x33f58c: 0x8e62c350  lw          $v0, -0x3CB0($s3)
    ctx->pc = 0x33f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC350u));
    // 0x33f590: 0x241100e0  addiu       $s1, $zero, 0xE0
    ctx->pc = 0x33f590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x33f594: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x33f594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x33f598: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33f598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f59c: 0x24726ff0  addiu       $s2, $v1, 0x6FF0
    ctx->pc = 0x33f59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 28656));
    // 0x33f5a0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x33f5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x33f5a4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x33f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x33f5a8: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x33f5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33f5ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x33f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33f5b0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x33f5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f5b4: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x33f5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f5b8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x33f5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f5bc: 0xac4400d8  sw          $a0, 0xD8($v0)
    ctx->pc = 0x33f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 4));
    // 0x33f5c0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x33f5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x33f5c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33f5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f5c8: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x33f5c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33f5cc: 0xe44d0004  swc1        $f13, 0x4($v0)
    ctx->pc = 0x33f5ccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33f5d0: 0xe44e0008  swc1        $f14, 0x8($v0)
    ctx->pc = 0x33f5d0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x33f5d4: 0xe44f0010  swc1        $f15, 0x10($v0)
    ctx->pc = 0x33f5d4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x33f5d8: 0xe4500014  swc1        $f16, 0x14($v0)
    ctx->pc = 0x33f5d8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x33f5dc: 0xe4510018  swc1        $f17, 0x18($v0)
    ctx->pc = 0x33f5dcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x33f5e0: 0xe4520020  swc1        $f18, 0x20($v0)
    ctx->pc = 0x33f5e0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x33f5e4: 0xe4530024  swc1        $f19, 0x24($v0)
    ctx->pc = 0x33f5e4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x33f5e8: 0xe4430028  swc1        $f3, 0x28($v0)
    ctx->pc = 0x33f5e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x33f5ec: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x33f5ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x33f5f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33F5F0u;
    SET_GPR_U32(ctx, 31, 0x33F5F8u);
    ctx->pc = 0x33F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F5F0u;
    // 0x33f5f4: 0xe4420034  swc1        $f2, 0x34($v0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33F5F0u, 0x33F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F5F8u;
label_33f5f8:
    // 0x33f5f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33F5F8u;
    SET_GPR_U32(ctx, 31, 0x33F600u);
    ctx->pc = 0x33F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F5F8u;
    // 0x33f5fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33F5F8u, 0x33F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F600u;
label_33f600:
    // 0x33f600: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33F600u;
    SET_GPR_U32(ctx, 31, 0x33F608u);
    ctx->pc = 0x33F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F600u;
    // 0x33f604: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33F600u, 0x33F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F608u;
label_33f608:
    // 0x33f608: 0x8e65c350  lw          $a1, -0x3CB0($s3)
    ctx->pc = 0x33f608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33f60c: 0x264e0010  addiu       $t6, $s2, 0x10
    ctx->pc = 0x33f60cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x33f610: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x33f610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f614: 0xb12018  mult        $a0, $a1, $s1
    ctx->pc = 0x33f614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33f618: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x33f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x33f61c: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x33f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x33f620: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33f620u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f624: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33f624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f628: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33f628u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f62c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x33f62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f630: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x33f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33f634: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x33f634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f638: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x33f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f63c: 0x27af0040  addiu       $t7, $sp, 0x40
    ctx->pc = 0x33f63cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33f640: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x33f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f644: 0x27ac0030  addiu       $t4, $sp, 0x30
    ctx->pc = 0x33f644u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33f648: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x33f648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f64c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x33f64cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33f650: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x33f650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33f654: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x33f654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33f658: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x33f658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33f65c: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x33f65cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x33f660: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x33f660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f664: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x33f664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f668: 0x264d0020  addiu       $t5, $s2, 0x20
    ctx->pc = 0x33f668u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x33f66c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x33f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x33f670: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33f670u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f674: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33f674u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f678: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33f678u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f67c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x33f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f680: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x33f680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33f684: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x33f684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33f688: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x33f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f68c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x33f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f690: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x33f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f694: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x33f694u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33f698: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x33f698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33f69c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x33f69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33f6a0: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x33f6a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33f6a4: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x33f6a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x33f6a8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x33f6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f6ac: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33f6acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33f6b0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33f6b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f6b4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x33f6b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33f6b8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x33f6b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f6bc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x33f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f6c0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x33f6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f6c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33f6c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f6c8: 0x0  nop
    ctx->pc = 0x33f6c8u;
    // NOP
    // 0x33f6cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33f6ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33f6d0: 0x0  nop
    ctx->pc = 0x33f6d0u;
    // NOP
    // 0x33f6d4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x33F6D4u;
    {
        const bool branch_taken_0x33f6d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6D4u;
        // 0x33f6d8: 0xb11818  mult        $v1, $a1, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6d4) {
            ctx->pc = 0x33F714u;
            goto label_33f714;
        }
    }
    ctx->pc = 0x33F6DCu;
    // 0x33f6dc: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x33f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x33f6e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33f6e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f6e4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x33f6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f6e8: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x33f6e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f6ec: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x33f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x33f6f0: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x33f6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f6f4: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x33f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x33f6f8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33f6f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33f6fc: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33f6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f700: 0x8e62c350  lw          $v0, -0x3CB0($s3)
    ctx->pc = 0x33f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33f704: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x33f704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33f708: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x33f708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x33f70c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x33f70cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f710: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33f710u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_33f714:
    // 0x33f714: 0x8e65c350  lw          $a1, -0x3CB0($s3)
    ctx->pc = 0x33f714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33f718: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x33f718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x33f71c: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x33f71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f720: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x33f720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x33f724: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x33f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33f728: 0xce1021  addu        $v0, $a2, $t6
    ctx->pc = 0x33f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x33f72c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33f72cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f730: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33f730u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f734: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33f734u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f738: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x33f738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f73c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x33f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f740: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x33f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f744: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x33f744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f748: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x33f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33f74c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x33f74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33f750: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x33f750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33f754: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x33f754u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33f758: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x33f758u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33f75c: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x33f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f760: 0xc5830004  lwc1        $f3, 0x4($t4)
    ctx->pc = 0x33f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33f764: 0xc5840008  lwc1        $f4, 0x8($t4)
    ctx->pc = 0x33f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33f768: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x33f768u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x33f76c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x33f76cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x33f770: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x33f770u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x33f774: 0x46060184  c1          0x60184
    ctx->pc = 0x33f774u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x33f778: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x33f778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x33f77c: 0xcd1021  addu        $v0, $a2, $t5
    ctx->pc = 0x33f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x33f780: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33f780u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f784: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33f784u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f788: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33f788u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f78c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x33f78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f790: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x33f790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f794: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x33f794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f798: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x33f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f79c: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x33f79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33f7a0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x33f7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33f7a4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x33f7a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33f7a8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x33f7a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33f7ac: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x33f7acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33f7b0: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x33f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f7b4: 0xc5830004  lwc1        $f3, 0x4($t4)
    ctx->pc = 0x33f7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33f7b8: 0xc5840008  lwc1        $f4, 0x8($t4)
    ctx->pc = 0x33f7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33f7bc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x33f7bcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x33f7c0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x33f7c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x33f7c4: 0x4604221c  madd.s      $f8, $f4, $f4
    ctx->pc = 0x33f7c4u;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x33f7c8: 0x46080204  c1          0x80204
    ctx->pc = 0x33f7c8u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x33f7cc: 0x3c013e92  lui         $at, 0x3E92
    ctx->pc = 0x33f7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16018 << 16));
    // 0x33f7d0: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x33f7d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
    // 0x33f7d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33f7d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f7d8: 0xa45818  mult        $t3, $a1, $a0
    ctx->pc = 0x33f7d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x33f7dc: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x33f7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x33f7e0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x33f7e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x33f7e4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x33f7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33f7e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f7ec: 0x46004042  mul.s       $f1, $f8, $f0
    ctx->pc = 0x33f7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x33f7f0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x33f7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x33f7f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x33f7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33f7f8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x33f7f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x33f7fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f800: 0x46043082  mul.s       $f2, $f6, $f4
    ctx->pc = 0x33f800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x33f804: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x33f804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f808: 0x46000964  .word       0x46000964                   # cvt.w.s     $f5, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33f808u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x33f80c: 0x44052800  mfc1        $a1, $f5
    ctx->pc = 0x33f80cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33f810: 0x1724021  addu        $t0, $t3, $s2
    ctx->pc = 0x33f810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x33f814: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33f814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33f818: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x33f818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x33f81c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x33f81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33f820: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x33f820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x33f824: 0x86202a  slt         $a0, $a0, $a2
    ctx->pc = 0x33f824u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x33f828: 0xa2380b  movn        $a3, $a1, $v0
    ctx->pc = 0x33f828u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x33f82c: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x33f82cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x33f830: 0xad0700d4  sw          $a3, 0xD4($t0)
    ctx->pc = 0x33f830u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 212), GPR_U32(ctx, 7));
    // 0x33f834: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x33F834u;
    {
        const bool branch_taken_0x33f834 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F834u;
        // 0x33f838: 0xad0300d0  sw          $v1, 0xD0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f834) {
            ctx->pc = 0x33F840u;
            goto label_33f840;
        }
    }
    ctx->pc = 0x33F83Cu;
    // 0x33f83c: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x33f83cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_33f840:
    // 0x33f840: 0x46044002  mul.s       $f0, $f8, $f4
    ctx->pc = 0x33f840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x33f844: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x33f844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33f848: 0x0  nop
    ctx->pc = 0x33f848u;
    // NOP
    // 0x33f84c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x33F84Cu;
    {
        const bool branch_taken_0x33f84c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F84Cu;
        // 0x33f850: 0x46000246  mov.s       $f9, $f0 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f84c) {
            ctx->pc = 0x33F858u;
            goto label_33f858;
        }
    }
    ctx->pc = 0x33F854u;
    // 0x33f854: 0x46001a46  mov.s       $f9, $f3
    ctx->pc = 0x33f854u;
    ctx->f[9] = FPU_MOV_S(ctx->f[3]);
label_33f858:
    // 0x33f858: 0x0  nop
    ctx->pc = 0x33f858u;
    // NOP
    // 0x33f85c: 0x0  nop
    ctx->pc = 0x33f85cu;
    // NOP
    // 0x33f860: 0x46061103  div.s       $f4, $f2, $f6
    ctx->pc = 0x33f860u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[2], ctx->f[6]); }
    // 0x33f864: 0x16e1021  addu        $v0, $t3, $t6
    ctx->pc = 0x33f864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x33f868: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33f868u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f86c: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x33f86cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33f870: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33f870u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f874: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33f874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f878: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x33f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f87c: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x33f87cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33f880: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x33f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f884: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x33f884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33f888: 0xc7a60078  lwc1        $f6, 0x78($sp)
    ctx->pc = 0x33f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33f88c: 0xc7a7007c  lwc1        $f7, 0x7C($sp)
    ctx->pc = 0x33f88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33f890: 0x46002142  mul.s       $f5, $f4, $f0
    ctx->pc = 0x33f890u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x33f894: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x33f894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x33f898: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x33f898u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x33f89c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x33f89cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x33f8a0: 0x46062042  mul.s       $f1, $f4, $f6
    ctx->pc = 0x33f8a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x33f8a4: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x33f8a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x33f8a8: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x33f8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x33f8ac: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x33f8acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33f8b0: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x33f8b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33f8b4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x33f8b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x33f8b8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x33f8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x33f8bc: 0xe7a7006c  swc1        $f7, 0x6C($sp)
    ctx->pc = 0x33f8bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x33f8c0: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x33f8c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33f8c4: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x33f8c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33f8c8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33f8c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f8cc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33f8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f8d0: 0x0  nop
    ctx->pc = 0x33f8d0u;
    // NOP
    // 0x33f8d4: 0x0  nop
    ctx->pc = 0x33f8d4u;
    // NOP
    // 0x33f8d8: 0x46084943  div.s       $f5, $f9, $f8
    ctx->pc = 0x33f8d8u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[9], ctx->f[8]); }
    // 0x33f8dc: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x33f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f8e0: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x33f8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33f8e4: 0x16d1021  addu        $v0, $t3, $t5
    ctx->pc = 0x33f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x33f8e8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x33f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f8ec: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x33f8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f8f0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x33f8f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33f8f4: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x33f8f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x33f8f8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x33f8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x33f8fc: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x33f8fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x33f900: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33f900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f904: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x33f904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33f908: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33f908u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f90c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33f90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f910: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x33f910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f914: 0xc7a80094  lwc1        $f8, 0x94($sp)
    ctx->pc = 0x33f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33f918: 0xc7a90098  lwc1        $f9, 0x98($sp)
    ctx->pc = 0x33f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x33f91c: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x33f91cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x33f920: 0xc7a7009c  lwc1        $f7, 0x9C($sp)
    ctx->pc = 0x33f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33f924: 0x46082882  mul.s       $f2, $f5, $f8
    ctx->pc = 0x33f924u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x33f928: 0x460928c2  mul.s       $f3, $f5, $f9
    ctx->pc = 0x33f928u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x33f92c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x33f92cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33f930: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x33f930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x33f934: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x33f934u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33f938: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x33f938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33f93c: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x33f93cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33f940: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x33f940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x33f944: 0xe7a80084  swc1        $f8, 0x84($sp)
    ctx->pc = 0x33f944u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x33f948: 0xe7a90088  swc1        $f9, 0x88($sp)
    ctx->pc = 0x33f948u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x33f94c: 0xe7a7008c  swc1        $f7, 0x8C($sp)
    ctx->pc = 0x33f94cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x33f950: 0xd9e10000  lqc2        $vf1, 0x0($t7)
    ctx->pc = 0x33f950u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x33f954: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x33f954u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33f958: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33f958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f95c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33f95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f960: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x33f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33f964: 0x26480040  addiu       $t0, $s2, 0x40
    ctx->pc = 0x33f964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x33f968: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x33f968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f96c: 0x1681021  addu        $v0, $t3, $t0
    ctx->pc = 0x33f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x33f970: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x33f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f974: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x33f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f978: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x33f978u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33f97c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x33f97cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33f980: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x33f980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33f984: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x33f984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33f988: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x33f988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x33f98c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f990: 0x8e65c350  lw          $a1, -0x3CB0($s3)
    ctx->pc = 0x33f990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33f994: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x33f994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33f998: 0xb12018  mult        $a0, $a1, $s1
    ctx->pc = 0x33f998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33f99c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x33f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33f9a0: 0x8e1021  addu        $v0, $a0, $t6
    ctx->pc = 0x33f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x33f9a4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33f9a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f9a8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33f9a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f9ac: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33f9acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f9b0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33f9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33f9b4: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x33f9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33f9b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33f9b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f9bc: 0xc7a80074  lwc1        $f8, 0x74($sp)
    ctx->pc = 0x33f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33f9c0: 0xc7a90078  lwc1        $f9, 0x78($sp)
    ctx->pc = 0x33f9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x33f9c4: 0x46032182  mul.s       $f6, $f4, $f3
    ctx->pc = 0x33f9c4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x33f9c8: 0xc7a7007c  lwc1        $f7, 0x7C($sp)
    ctx->pc = 0x33f9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33f9cc: 0x46082042  mul.s       $f1, $f4, $f8
    ctx->pc = 0x33f9ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x33f9d0: 0x46092082  mul.s       $f2, $f4, $f9
    ctx->pc = 0x33f9d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x33f9d4: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x33f9d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x33f9d8: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x33f9d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x33f9dc: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x33f9dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33f9e0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x33f9e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33f9e4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x33f9e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x33f9e8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x33f9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x33f9ec: 0xe7a80064  swc1        $f8, 0x64($sp)
    ctx->pc = 0x33f9ecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x33f9f0: 0xe7a90068  swc1        $f9, 0x68($sp)
    ctx->pc = 0x33f9f0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x33f9f4: 0xe7a7006c  swc1        $f7, 0x6C($sp)
    ctx->pc = 0x33f9f4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x33f9f8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33f9f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f9fc: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x33f9fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33fa00: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fa00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fa04: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33fa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fa08: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x33fa08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33fa0c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x33fa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33fa10: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fa14: 0x264b0030  addiu       $t3, $s2, 0x30
    ctx->pc = 0x33fa14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x33fa18: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x33fa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fa1c: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x33fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fa20: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x33fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x33fa24: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x33fa24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33fa28: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x33fa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x33fa2c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x33fa2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x33fa30: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x33fa30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x33fa34: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33fa34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fa38: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33fa38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33fa3c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fa3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fa40: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fa44: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x33fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fa48: 0xc7a80094  lwc1        $f8, 0x94($sp)
    ctx->pc = 0x33fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33fa4c: 0xc7a90098  lwc1        $f9, 0x98($sp)
    ctx->pc = 0x33fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x33fa50: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x33fa50u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x33fa54: 0xc7a7009c  lwc1        $f7, 0x9C($sp)
    ctx->pc = 0x33fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33fa58: 0x46082882  mul.s       $f2, $f5, $f8
    ctx->pc = 0x33fa58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x33fa5c: 0x460928c2  mul.s       $f3, $f5, $f9
    ctx->pc = 0x33fa5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x33fa60: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x33fa60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33fa64: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x33fa64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x33fa68: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x33fa68u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33fa6c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x33fa6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33fa70: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x33fa70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33fa74: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x33fa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x33fa78: 0xe7a80084  swc1        $f8, 0x84($sp)
    ctx->pc = 0x33fa78u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x33fa7c: 0xe7a90088  swc1        $f9, 0x88($sp)
    ctx->pc = 0x33fa7cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x33fa80: 0xe7a7008c  swc1        $f7, 0x8C($sp)
    ctx->pc = 0x33fa80u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x33fa84: 0xd9e10000  lqc2        $vf1, 0x0($t7)
    ctx->pc = 0x33fa84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x33fa88: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x33fa88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33fa8c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fa8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fa90: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33fa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fa94: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x33fa94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33fa98: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x33fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fa9c: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x33fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33faa0: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x33faa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x33faa4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x33faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33faa8: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x33faa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33faac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x33faacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33fab0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x33fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x33fab4: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x33fab4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33fab8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x33fab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33fabc: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x33fabcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33fac0: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x33fac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x33fac4: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x33fac4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fac8: 0x8e64c350  lw          $a0, -0x3CB0($s3)
    ctx->pc = 0x33fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33facc: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x33faccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33fad0: 0x912818  mult        $a1, $a0, $s1
    ctx->pc = 0x33fad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33fad4: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x33fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x33fad8: 0xad1021  addu        $v0, $a1, $t5
    ctx->pc = 0x33fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x33fadc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33fadcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33fae0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33fae0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fae4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fae4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fae8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33fae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33faec: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x33faecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33faf0: 0xc7a80074  lwc1        $f8, 0x74($sp)
    ctx->pc = 0x33faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33faf4: 0xc7a90078  lwc1        $f9, 0x78($sp)
    ctx->pc = 0x33faf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x33faf8: 0x46032182  mul.s       $f6, $f4, $f3
    ctx->pc = 0x33faf8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x33fafc: 0xc7a7007c  lwc1        $f7, 0x7C($sp)
    ctx->pc = 0x33fafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33fb00: 0x46082042  mul.s       $f1, $f4, $f8
    ctx->pc = 0x33fb00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x33fb04: 0x46092082  mul.s       $f2, $f4, $f9
    ctx->pc = 0x33fb04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x33fb08: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x33fb08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x33fb0c: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x33fb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x33fb10: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x33fb10u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33fb14: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x33fb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33fb18: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x33fb18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x33fb1c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x33fb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x33fb20: 0xe7a80064  swc1        $f8, 0x64($sp)
    ctx->pc = 0x33fb20u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x33fb24: 0xe7a90068  swc1        $f9, 0x68($sp)
    ctx->pc = 0x33fb24u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x33fb28: 0xe7a7006c  swc1        $f7, 0x6C($sp)
    ctx->pc = 0x33fb28u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x33fb2c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33fb2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fb30: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x33fb30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33fb34: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fb34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fb38: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33fb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fb3c: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x33fb3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33fb40: 0x912818  mult        $a1, $a0, $s1
    ctx->pc = 0x33fb40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33fb44: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x33fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33fb48: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x33fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fb4c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x33fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fb50: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x33fb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fb54: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x33fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33fb58: 0xad1021  addu        $v0, $a1, $t5
    ctx->pc = 0x33fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x33fb5c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x33fb5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33fb60: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x33fb60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x33fb64: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x33fb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x33fb68: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x33fb68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x33fb6c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33fb6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33fb70: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33fb70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fb74: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fb74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fb78: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fb7c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x33fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fb80: 0xc7a80094  lwc1        $f8, 0x94($sp)
    ctx->pc = 0x33fb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33fb84: 0xc7a90098  lwc1        $f9, 0x98($sp)
    ctx->pc = 0x33fb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x33fb88: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x33fb88u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x33fb8c: 0xc7a7009c  lwc1        $f7, 0x9C($sp)
    ctx->pc = 0x33fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33fb90: 0x46082882  mul.s       $f2, $f5, $f8
    ctx->pc = 0x33fb90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x33fb94: 0x460928c2  mul.s       $f3, $f5, $f9
    ctx->pc = 0x33fb94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x33fb98: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x33fb98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33fb9c: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x33fb9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x33fba0: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x33fba0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33fba4: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x33fba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33fba8: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x33fba8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33fbac: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x33fbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x33fbb0: 0xe7a80084  swc1        $f8, 0x84($sp)
    ctx->pc = 0x33fbb0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x33fbb4: 0xe7a90088  swc1        $f9, 0x88($sp)
    ctx->pc = 0x33fbb4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x33fbb8: 0xe7a7008c  swc1        $f7, 0x8C($sp)
    ctx->pc = 0x33fbb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x33fbbc: 0xd9e10000  lqc2        $vf1, 0x0($t7)
    ctx->pc = 0x33fbbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x33fbc0: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x33fbc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33fbc4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fbc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fbc8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fbcc: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x33fbccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33fbd0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x33fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fbd4: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x33fbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33fbd8: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x33fbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x33fbdc: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x33fbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fbe0: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x33fbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fbe4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x33fbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33fbe8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33fbec: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x33fbecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33fbf0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x33fbf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33fbf4: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x33fbf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33fbf8: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x33fbf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x33fbfc: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33fbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fc00: 0x8e65c350  lw          $a1, -0x3CB0($s3)
    ctx->pc = 0x33fc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33fc04: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x33fc04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33fc08: 0xb12018  mult        $a0, $a1, $s1
    ctx->pc = 0x33fc08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33fc0c: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x33fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x33fc10: 0x8b1021  addu        $v0, $a0, $t3
    ctx->pc = 0x33fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x33fc14: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33fc14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33fc18: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33fc18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fc1c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fc1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fc20: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33fc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fc24: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x33fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fc28: 0xc7a70074  lwc1        $f7, 0x74($sp)
    ctx->pc = 0x33fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33fc2c: 0xc7a80078  lwc1        $f8, 0x78($sp)
    ctx->pc = 0x33fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33fc30: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x33fc30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x33fc34: 0xc7a6007c  lwc1        $f6, 0x7C($sp)
    ctx->pc = 0x33fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33fc38: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x33fc38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x33fc3c: 0x46082042  mul.s       $f1, $f4, $f8
    ctx->pc = 0x33fc3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x33fc40: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x33fc40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x33fc44: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x33fc44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x33fc48: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x33fc48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33fc4c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x33fc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33fc50: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x33fc50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x33fc54: 0xe7a4005c  swc1        $f4, 0x5C($sp)
    ctx->pc = 0x33fc54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x33fc58: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x33fc58u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x33fc5c: 0xe7a80068  swc1        $f8, 0x68($sp)
    ctx->pc = 0x33fc5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x33fc60: 0xe7a6006c  swc1        $f6, 0x6C($sp)
    ctx->pc = 0x33fc60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x33fc64: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33fc64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fc68: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x33fc68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33fc6c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fc6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fc70: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fc74: 0xb11818  mult        $v1, $a1, $s1
    ctx->pc = 0x33fc74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33fc78: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x33fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33fc7c: 0x1600013  mtlo        $t3
    ctx->pc = 0x33fc7cu;
    ctx->lo = GPR_U64(ctx, 11);
    // 0x33fc80: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x33fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fc84: 0x70b10000  madd        $zero, $a1, $s1
    ctx->pc = 0x33fc84u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x33fc88: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x33fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fc8c: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x33fc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fc90: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x33fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x33fc94: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x33fc94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33fc98: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x33fc98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x33fc9c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x33fc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x33fca0: 0x2012  mflo        $a0
    ctx->pc = 0x33fca0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x33fca4: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x33fca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x33fca8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33fca8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33fcac: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x33fcacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33fcb0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fcb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fcb4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33fcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fcb8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x33fcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fcbc: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x33fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33fcc0: 0xc7a70098  lwc1        $f7, 0x98($sp)
    ctx->pc = 0x33fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33fcc4: 0x460028c2  mul.s       $f3, $f5, $f0
    ctx->pc = 0x33fcc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x33fcc8: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x33fcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33fccc: 0x46062842  mul.s       $f1, $f5, $f6
    ctx->pc = 0x33fcccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x33fcd0: 0x46072882  mul.s       $f2, $f5, $f7
    ctx->pc = 0x33fcd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x33fcd4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x33fcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33fcd8: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x33fcd8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x33fcdc: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x33fcdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33fce0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x33fce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33fce4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x33fce4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33fce8: 0xe7a5007c  swc1        $f5, 0x7C($sp)
    ctx->pc = 0x33fce8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x33fcec: 0xe7a60084  swc1        $f6, 0x84($sp)
    ctx->pc = 0x33fcecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x33fcf0: 0xe7a70088  swc1        $f7, 0x88($sp)
    ctx->pc = 0x33fcf0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x33fcf4: 0xe7a4008c  swc1        $f4, 0x8C($sp)
    ctx->pc = 0x33fcf4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x33fcf8: 0xd9e10000  lqc2        $vf1, 0x0($t7)
    ctx->pc = 0x33fcf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x33fcfc: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x33fcfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33fd00: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fd00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fd04: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33fd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fd08: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x33fd08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33fd0c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x33fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fd10: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x33fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33fd14: 0x26430070  addiu       $v1, $s2, 0x70
    ctx->pc = 0x33fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x33fd18: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x33fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fd1c: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x33fd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fd20: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x33fd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33fd24: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x33fd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x33fd28: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x33fd28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33fd2c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x33fd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33fd30: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x33fd30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33fd34: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x33fd34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x33fd38: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x33fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fd3c: 0x8e62c350  lw          $v0, -0x3CB0($s3)
    ctx->pc = 0x33fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33fd40: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x33fd40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33fd44: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x33fd44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x33fd48: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x33fd48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33fd4c: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x33fd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x33fd50: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x33fd50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33fd54: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x33fd54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33fd58: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fd58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fd5c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fd60: 0x512818  mult        $a1, $v0, $s1
    ctx->pc = 0x33fd60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33fd64: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x33fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33fd68: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x33fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fd6c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x33fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33fd70: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x33fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fd74: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x33fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fd78: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x33fd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x33fd7c: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x33fd7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x33fd80: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x33fd80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x33fd84: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x33fd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x33fd88: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x33fd88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x33fd8c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33fd8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33fd90: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x33fd90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33fd94: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fd94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fd98: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fd9c: 0x512018  mult        $a0, $v0, $s1
    ctx->pc = 0x33fd9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33fda0: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x33fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33fda4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33fda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fda8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x33fda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fdac: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x33fdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fdb0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33fdb4: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x33fdb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33fdb8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x33fdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33fdbc: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x33fdbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x33fdc0: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x33fdc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x33fdc4: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x33fdc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33fdc8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33fdc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33fdcc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33fdccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33fdd0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33fdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fdd4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x33fdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x33fdd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33fdd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fddc: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33fddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33fde0: 0xc7a70070  lwc1        $f7, 0x70($sp)
    ctx->pc = 0x33fde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33fde4: 0x26430080  addiu       $v1, $s2, 0x80
    ctx->pc = 0x33fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x33fde8: 0xc7a50074  lwc1        $f5, 0x74($sp)
    ctx->pc = 0x33fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33fdec: 0xc7a60078  lwc1        $f6, 0x78($sp)
    ctx->pc = 0x33fdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33fdf0: 0x460038c2  mul.s       $f3, $f7, $f0
    ctx->pc = 0x33fdf0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x33fdf4: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x33fdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33fdf8: 0x46002842  mul.s       $f1, $f5, $f0
    ctx->pc = 0x33fdf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x33fdfc: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x33fdfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x33fe00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33fe04: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x33fe04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x33fe08: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x33fe08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33fe0c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x33fe0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33fe10: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x33fe10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33fe14: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x33fe14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33fe18: 0xe7a70040  swc1        $f7, 0x40($sp)
    ctx->pc = 0x33fe18u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33fe1c: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x33fe1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x33fe20: 0xe7a60048  swc1        $f6, 0x48($sp)
    ctx->pc = 0x33fe20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x33fe24: 0xe7a4004c  swc1        $f4, 0x4C($sp)
    ctx->pc = 0x33fe24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x33fe28: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x33fe28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x33fe2c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33fe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33fe30: 0x8e63c350  lw          $v1, -0x3CB0($s3)
    ctx->pc = 0x33fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33fe34: 0x264c0090  addiu       $t4, $s2, 0x90
    ctx->pc = 0x33fe34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x33fe38: 0x264d0098  addiu       $t5, $s2, 0x98
    ctx->pc = 0x33fe38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x33fe3c: 0x264a00a0  addiu       $t2, $s2, 0xA0
    ctx->pc = 0x33fe3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x33fe40: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x33fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe44: 0x264b00a8  addiu       $t3, $s2, 0xA8
    ctx->pc = 0x33fe44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x33fe48: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x33fe48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33fe4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe50: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x33fe50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33fe54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x33fe54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe58: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x33fe58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33fe5c: 0x264900b0  addiu       $t1, $s2, 0xB0
    ctx->pc = 0x33fe5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x33fe60: 0xf13818  mult        $a3, $a3, $s1
    ctx->pc = 0x33fe60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x33fe64: 0x264e00b8  addiu       $t6, $s2, 0xB8
    ctx->pc = 0x33fe64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
    // 0x33fe68: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x33fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x33fe6c: 0x264f00c0  addiu       $t7, $s2, 0xC0
    ctx->pc = 0x33fe6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x33fe70: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x33fe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33fe74: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x33fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x33fe78: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x33fe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fe7c: 0x923021  addu        $a2, $a0, $s2
    ctx->pc = 0x33fe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x33fe80: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x33fe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fe84: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x33fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x33fe88: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x33fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33fe8c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x33fe8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x33fe90: 0xb24021  addu        $t0, $a1, $s2
    ctx->pc = 0x33fe90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x33fe94: 0xf21021  addu        $v0, $a3, $s2
    ctx->pc = 0x33fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x33fe98: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x33fe98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x33fe9c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x33fe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x33fea0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x33fea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33fea4: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x33fea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x33fea8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x33fea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33feac: 0x265000c8  addiu       $s0, $s2, 0xC8
    ctx->pc = 0x33feacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
    // 0x33feb0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x33feb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33feb4: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x33feb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33feb8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x33feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33febc: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x33febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33fec0: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x33fec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fec4: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x33fec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fec8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x33fec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x33fecc: 0x3c013daa  lui         $at, 0x3DAA
    ctx->pc = 0x33feccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15786 << 16));
    // 0x33fed0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x33fed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x33fed4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x33fed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33fed8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x33fed8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x33fedc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x33fedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33fee0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x33fee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33fee4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x33fee4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x33fee8: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x33fee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x33feec: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x33feecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33fef0: 0xc5010038  lwc1        $f1, 0x38($t0)
    ctx->pc = 0x33fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33fef4: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x33fef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33fef8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x33fef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33fefc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x33fefcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x33ff00: 0xc5020030  lwc1        $f2, 0x30($t0)
    ctx->pc = 0x33ff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ff04: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x33ff04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x33ff08: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x33ff08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33ff0c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x33ff0cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x33ff10: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x33ff10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x33ff14: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x33ff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x33ff18: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x33ff18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33ff1c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x33ff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ff20: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x33ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ff24: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x33ff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33ff28: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x33ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ff2c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x33ff2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x33ff30: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x33ff30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x33ff34: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x33ff34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33ff38: 0x8e63c350  lw          $v1, -0x3CB0($s3)
    ctx->pc = 0x33ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33ff3c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x33ff3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33ff40: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x33ff40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x33ff44: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x33ff44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33ff48: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x33ff48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ff4c: 0x8e64c350  lw          $a0, -0x3CB0($s3)
    ctx->pc = 0x33ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33ff50: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x33ff50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x33ff54: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x33ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x33ff58: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x33ff58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33ff5c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x33ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33ff60: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x33ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33ff64: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x33ff64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ff68: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x33ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ff6c: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x33ff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ff70: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x33ff70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x33ff74: 0x8e62c350  lw          $v0, -0x3CB0($s3)
    ctx->pc = 0x33ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33ff78: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x33ff78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x33ff7c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x33ff7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x33ff80: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x33ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x33ff84: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x33ff84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33ff88: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33ff88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33ff8c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x33ff8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33ff90: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x33ff90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33ff94: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x33ff94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33ff98: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x33ff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ff9c: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x33ff9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33ffa0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x33ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33ffa4: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x33ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x33ffa8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x33ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ffac: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x33ffacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x33ffb0: 0xc4a20060  lwc1        $f2, 0x60($a1)
    ctx->pc = 0x33ffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ffb4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x33ffb4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x33ffb8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x33ffb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33ffbc: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x33ffbcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x33ffc0: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x33ffc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33ffc4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x33ffc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x33ffc8: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x33ffc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33ffcc: 0xc4c20070  lwc1        $f2, 0x70($a2)
    ctx->pc = 0x33ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ffd0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x33ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33ffd4: 0xc4c10078  lwc1        $f1, 0x78($a2)
    ctx->pc = 0x33ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ffd8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x33ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ffdc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x33ffdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x33ffe0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x33ffe0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x33ffe4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x33ffe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33ffe8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x33ffe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33ffec: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x33ffecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33fff0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x33fff0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x33fff4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x33fff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33fff8: 0x8e63c350  lw          $v1, -0x3CB0($s3)
    ctx->pc = 0x33fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x33fffc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x33fffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340000: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x340000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340004: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x340004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340008: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x340008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34000c: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x34000cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x340010: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x340010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340014: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x340014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340018: 0x4c2021  addu        $a0, $v0, $t4
    ctx->pc = 0x340018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x34001c: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x34001cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340020: 0x4d2821  addu        $a1, $v0, $t5
    ctx->pc = 0x340020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x340024: 0xd11018  mult        $v0, $a2, $s1
    ctx->pc = 0x340024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340028: 0x4a3021  addu        $a2, $v0, $t2
    ctx->pc = 0x340028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x34002c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x34002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x340030: 0xf15018  mult        $t2, $a3, $s1
    ctx->pc = 0x340030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x340034: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x340034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x340038: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x340038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34003c: 0xc4410088  lwc1        $f1, 0x88($v0)
    ctx->pc = 0x34003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340040: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x340040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340044: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x340044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x340048: 0xc4420080  lwc1        $f2, 0x80($v0)
    ctx->pc = 0x340048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34004c: 0x14b3821  addu        $a3, $t2, $t3
    ctx->pc = 0x34004cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x340050: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x340050u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x340054: 0x1115018  mult        $t2, $t0, $s1
    ctx->pc = 0x340054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x340058: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x340058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34005c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x34005cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x340060: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x340060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x340064: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x340064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x340068: 0x1494021  addu        $t0, $t2, $t1
    ctx->pc = 0x340068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x34006c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x34006cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x340070: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x340070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340074: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x340074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340078: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x340078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34007c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x34007cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x340080: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x340080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x340084: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x340084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x340088: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x340088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34008c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x34008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340090: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x340090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x340094: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x340094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x340098: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x340098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x34009c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x34009cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3400a0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3400a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3400a4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3400a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3400a8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3400a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3400ac: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3400acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3400b0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3400b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3400b4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x3400b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3400b8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3400b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3400bc: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3400bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3400c0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3400c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3400c4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3400c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3400c8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3400c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x3400cc: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x3400ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x3400d0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3400d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3400d4: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3400d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3400d8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3400d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3400dc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3400dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3400e0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3400e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3400e4: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x3400e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x3400e8: 0x8e63c350  lw          $v1, -0x3CB0($s3)
    ctx->pc = 0x3400e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951760)));
    // 0x3400ec: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x3400ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3400f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3400f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3400f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3400f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3400f8: 0xb13018  mult        $a2, $a1, $s1
    ctx->pc = 0x3400f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3400fc: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x3400fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x340100: 0x911018  mult        $v0, $a0, $s1
    ctx->pc = 0x340100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340104: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x340104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340108: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x340108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34010c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34010cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x340110: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x340110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x340114: 0x4f2021  addu        $a0, $v0, $t7
    ctx->pc = 0x340114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x340118: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x340118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34011c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x340120: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x340120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x340124: 0xae62c350  sw          $v0, -0x3CB0($s3)
    ctx->pc = 0x340124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294951760), GPR_U32(ctx, 2));
    // 0x340128: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x340128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x34012c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x34012cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x340130: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x340130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340134: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x340134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340138: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x340138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34013c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x34013cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x340140: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x340140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x340144: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x340144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x340148: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x340148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34014c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x34014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340150: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x340150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x340154: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x340154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x340158: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x340158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x34015c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x34015cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x340160: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x340160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x340164: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x340164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x340168: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x340168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34016c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x34016cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x340170: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x340170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x340174: 0x3e00008  jr          $ra
    ctx->pc = 0x340174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340174u;
        // 0x340178: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34017Cu;
    // 0x34017c: 0x0  nop
    ctx->pc = 0x34017cu;
    // NOP
    ctx->pc = 0x340180u;
}
