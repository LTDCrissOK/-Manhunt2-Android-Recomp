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

// Function: sub_0031F8B0
// Address: 0x31f8b0 - 0x31fc88
void sub_0031F8B0_0x31f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F8B0_0x31f8b0");
#endif

    switch (ctx->pc) {
        case 0x31f910u: goto label_31f910;
        case 0x31f918u: goto label_31f918;
        case 0x31fadcu: goto label_31fadc;
        case 0x31fb20u: goto label_31fb20;
        case 0x31fb44u: goto label_31fb44;
        case 0x31fb4cu: goto label_31fb4c;
        case 0x31fb64u: goto label_31fb64;
        case 0x31fb70u: goto label_31fb70;
        case 0x31fc08u: goto label_31fc08;
        case 0x31fc28u: goto label_31fc28;
        case 0x31fc3cu: goto label_31fc3c;
        case 0x31fc4cu: goto label_31fc4c;
        default: break;
    }

    ctx->pc = 0x31f8b0u;

    // 0x31f8b0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x31f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x31f8b4: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x31f8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x31f8b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31f8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f8bc: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x31f8bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x31f8c0: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x31f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x31f8c4: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x31f8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x31f8c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31f8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f8cc: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x31f8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x31f8d0: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x31f8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
    // 0x31f8d4: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x31f8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x31f8d8: 0x26525870  addiu       $s2, $s2, 0x5870
    ctx->pc = 0x31f8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 22640));
    // 0x31f8dc: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x31f8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x31f8e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x31f8e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f8e4: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x31f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x31f8e8: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x31f8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x31f8ec: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x31f8ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x31f8f0: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x31f8f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x31f8f4: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x31f8f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x31f8f8: 0x8ec3bd50  lw          $v1, -0x42B0($s6)
    ctx->pc = 0x31f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x31f8fc: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x31f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x31f900: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x31f900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f904: 0x26130070  addiu       $s3, $s0, 0x70
    ctx->pc = 0x31f904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x31f908: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31F908u;
    SET_GPR_U32(ctx, 31, 0x31F910u);
    ctx->pc = 0x31F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F908u;
    // 0x31f90c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31F908u, 0x31F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F910u;
label_31f910:
    // 0x31f910: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31F910u;
    SET_GPR_U32(ctx, 31, 0x31F918u);
    ctx->pc = 0x31F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F910u;
    // 0x31f914: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31F910u, 0x31F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F918u;
label_31f918:
    // 0x31f918: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x31f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x31f91c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31f91cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f920: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x31f920u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31f924: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x31f924u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x31f928: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x31f928u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x31f92c: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x31f92cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x31f930: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x31f930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31f934: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x31f934u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31f938: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x31f938u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x31f93c: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x31f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x31f940: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x31f940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x31f944: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x31f944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31f948: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x31f948u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31f94c: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x31f94cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x31f950: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x31f950u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x31f954: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x31f954u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x31f958: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x31f958u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31f95c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x31f95cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31f960: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x31f960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x31f964: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x31f964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x31f968: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x31f968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31f96c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x31f96cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31f970: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x31f970u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f974: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31f974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f978: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x31f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f97c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x31f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f980: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x31f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f984: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x31f984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f988: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x31f988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f98c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31f98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31f990: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x31f990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31f994: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x31f994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31f998: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x31f998u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31f99c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x31f99cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31f9a0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x31f9a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f9a4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31f9a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f9a8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x31f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f9ac: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x31f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9b0: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x31f9b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31f9b4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x31f9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9b8: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x31f9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f9bc: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x31f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f9c0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x31f9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31f9c4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x31f9c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x31f9c8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x31f9c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31f9cc: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x31f9ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x31f9d0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31f9d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f9d4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x31f9d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f9d8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31f9d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31f9dc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x31f9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31f9e0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x31f9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9e4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x31f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9e8: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x31f9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f9ec: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x31f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31f9f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x31f9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31f9f4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x31f9f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x31f9f8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x31f9f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x31f9fc: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x31f9fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x31fa00: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x31fa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31fa04: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x31fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31fa08: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x31fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31fa0c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x31fa0cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x31fa10: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x31fa10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x31fa14: 0x4604259c  madd.s      $f22, $f4, $f4
    ctx->pc = 0x31fa14u;
    ctx->f[22] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x31fa18: 0x46160584  c1          0x160584
    ctx->pc = 0x31fa18u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
    // 0x31fa1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31fa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31fa20: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x31fa20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x31fa24: 0x0  nop
    ctx->pc = 0x31fa24u;
    // NOP
    // 0x31fa28: 0x46162803  div.s       $f0, $f5, $f22
    ctx->pc = 0x31fa28u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[22]); }
    // 0x31fa2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31fa2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31fa30: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x31fa30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31fa34: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x31fa34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x31fa38: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x31fa38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31fa3c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x31fa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31fa40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31fa40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31fa44: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x31fa44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x31fa48: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x31fa48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fa4c: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x31fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31fa50: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x31fa50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31fa54: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x31fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fa58: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x31fa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31fa5c: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x31fa5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x31fa60: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x31fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fa64: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x31fa64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x31fa68: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x31fa68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x31fa6c: 0xe6850000  swc1        $f5, 0x0($s4)
    ctx->pc = 0x31fa6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x31fa70: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x31fa70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x31fa74: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x31fa74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x31fa78: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x31fa78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x31fa7c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x31fa7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x31fa80: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x31fa80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x31fa84: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x31fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x31fa88: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x31fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x31fa8c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x31fa8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x31fa90: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x31fa90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31fa94: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31fa94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31fa98: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x31fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31fa9c: 0x4615b502  mul.s       $f20, $f22, $f21
    ctx->pc = 0x31fa9cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x31faa0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x31faa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x31faa4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x31faa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x31faa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31faa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31faac: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x31faacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31fab0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x31fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x31fab4: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x31fab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31fab8: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x31fab8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x31fabc: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x31fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fac0: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x31fac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31fac4: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x31fac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31fac8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x31fac8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x31facc: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x31faccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31fad0: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x31fad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31fad4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31FAD4u;
    SET_GPR_U32(ctx, 31, 0x31FADCu);
    ctx->pc = 0x31FAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FAD4u;
    // 0x31fad8: 0xe7a40064  swc1        $f4, 0x64($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31FAD4u, 0x31FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FADCu;
label_31fadc:
    // 0x31fadc: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x31fadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x31fae0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x31fae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31fae4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x31fae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x31fae8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x31fae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x31faec: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x31faecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x31faf0: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x31faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31faf4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x31faf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31faf8: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x31faf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31fafc: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x31fafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31fb00: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x31fb00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x31fb04: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x31fb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x31fb08: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x31fb08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x31fb0c: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x31fb0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x31fb10: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x31fb10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31fb14: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x31fb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31fb18: 0xc0c580c  jal         func_316030
    ctx->pc = 0x31FB18u;
    SET_GPR_U32(ctx, 31, 0x31FB20u);
    ctx->pc = 0x31FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FB18u;
    // 0x31fb1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x31FB18u, 0x31FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB20u;
label_31fb20:
    // 0x31fb20: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31fb24: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x31fb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31fb28: 0x8c65bd28  lw          $a1, -0x42D8($v1)
    ctx->pc = 0x31fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD28u));
    // 0x31fb2c: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x31fb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x31fb30: 0x24e7fc40  addiu       $a3, $a3, -0x3C0
    ctx->pc = 0x31fb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966336));
    // 0x31fb34: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x31fb34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31fb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb3c: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x31FB3Cu;
    SET_GPR_U32(ctx, 31, 0x31FB44u);
    ctx->pc = 0x31FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FB3Cu;
    // 0x31fb40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x31FB3Cu, 0x31FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB44u;
label_31fb44:
    // 0x31fb44: 0xc0bfeae  jal         func_2FFAB8
    ctx->pc = 0x31FB44u;
    SET_GPR_U32(ctx, 31, 0x31FB4Cu);
    ctx->pc = 0x2FFAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFAB8u, 0x31FB44u, 0x31FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB4Cu;
label_31fb4c:
    // 0x31fb4c: 0x3c05fbd0  lui         $a1, 0xFBD0
    ctx->pc = 0x31fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64464 << 16));
    // 0x31fb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31fb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb54: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x31fb54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x31fb58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31fb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fb5c: 0xc07a288  jal         func_1E8A20
    ctx->pc = 0x31FB5Cu;
    SET_GPR_U32(ctx, 31, 0x31FB64u);
    ctx->pc = 0x31FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FB5Cu;
    // 0x31fb60: 0xae5302c0  sw          $s3, 0x2C0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 704), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8A20u, 0x31FB5Cu, 0x31FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB64u;
label_31fb64:
    // 0x31fb64: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x31fb64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x31fb68: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31FB68u;
    SET_GPR_U32(ctx, 31, 0x31FB70u);
    ctx->pc = 0x31FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FB68u;
    // 0x31fb6c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31FB68u, 0x31FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB70u;
label_31fb70:
    // 0x31fb70: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x31fb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x31fb74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31fb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fb78: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x31fb78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x31fb7c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x31fb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x31fb80: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x31fb80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fb84: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x31fb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x31fb88: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x31fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fb8c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x31fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fb90: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x31fb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31fb94: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x31fb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31fb98: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x31fb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x31fb9c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x31fb9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x31fba0: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x31fba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x31fba4: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x31fba4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x31fba8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x31fba8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31fbac: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x31fbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31fbb0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x31fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31fbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fbb8: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x31fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31fbbc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x31fbbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fbc0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x31fbc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x31fbc4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x31fbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31fbc8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x31fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fbcc: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x31fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x31fbd0: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x31fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31fbd4: 0x27aa0134  addiu       $t2, $sp, 0x134
    ctx->pc = 0x31fbd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x31fbd8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x31fbd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x31fbdc: 0x8e490084  lw          $t1, 0x84($s2)
    ctx->pc = 0x31fbdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x31fbe0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x31fbe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31fbe4: 0x8e46008c  lw          $a2, 0x8C($s2)
    ctx->pc = 0x31fbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x31fbe8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x31fbe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31fbec: 0x8e470080  lw          $a3, 0x80($s2)
    ctx->pc = 0x31fbecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x31fbf0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x31fbf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x31fbf4: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x31fbf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x31fbf8: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x31fbf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x31fbfc: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x31fbfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x31fc00: 0xc07a30a  jal         func_1E8C28
    ctx->pc = 0x31FC00u;
    SET_GPR_U32(ctx, 31, 0x31FC08u);
    ctx->pc = 0x31FC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC00u;
    // 0x31fc04: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8C28u, 0x31FC00u, 0x31FC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC08u;
label_31fc08:
    // 0x31fc08: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31FC08u;
    {
        const bool branch_taken_0x31fc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC08u;
        // 0x31fc0c: 0x8ec4bd50  lw          $a0, -0x42B0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc08) {
            ctx->pc = 0x31FC44u;
            goto label_31fc44;
        }
    }
    ctx->pc = 0x31FC10u;
    // 0x31fc10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31fc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc14: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x31fc14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x31fc18: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x31fc18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fc1c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x31fc1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x31fc20: 0xc0c0678  jal         func_3019E0
    ctx->pc = 0x31FC20u;
    SET_GPR_U32(ctx, 31, 0x31FC28u);
    ctx->pc = 0x31FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FC20u;
    // 0x31fc24: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019E0u, 0x31FC20u, 0x31FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC28u;
label_31fc28:
    // 0x31fc28: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x31fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x31fc2c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FC2Cu;
    {
        const bool branch_taken_0x31fc2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc2c) {
            ctx->pc = 0x31FC44u;
            goto label_31fc44;
        }
    }
    ctx->pc = 0x31FC34u;
    // 0x31fc34: 0xc0bfeb2  jal         func_2FFAC8
    ctx->pc = 0x31FC34u;
    SET_GPR_U32(ctx, 31, 0x31FC3Cu);
    ctx->pc = 0x2FFAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFAC8u, 0x31FC34u, 0x31FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC3Cu;
label_31fc3c:
    // 0x31fc3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31FC3Cu;
    {
        const bool branch_taken_0x31fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC3Cu;
        // 0x31fc40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fc3c) {
            ctx->pc = 0x31FC50u;
            goto label_31fc50;
        }
    }
    ctx->pc = 0x31FC44u;
label_31fc44:
    // 0x31fc44: 0xc0bfeb2  jal         func_2FFAC8
    ctx->pc = 0x31FC44u;
    SET_GPR_U32(ctx, 31, 0x31FC4Cu);
    ctx->pc = 0x2FFAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFAC8u, 0x31FC44u, 0x31FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FC4Cu;
label_31fc4c:
    // 0x31fc4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31fc50:
    // 0x31fc50: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x31fc50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31fc54: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x31fc54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x31fc58: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x31fc58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x31fc5c: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x31fc5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x31fc60: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x31fc60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x31fc64: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x31fc64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x31fc68: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x31fc68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x31fc6c: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x31fc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x31fc70: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x31fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31fc74: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x31fc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31fc78: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x31fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31fc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC7Cu;
        // 0x31fc80: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FC84u;
    // 0x31fc84: 0x0  nop
    ctx->pc = 0x31fc84u;
    // NOP
    ctx->pc = 0x31fc88u;
}
