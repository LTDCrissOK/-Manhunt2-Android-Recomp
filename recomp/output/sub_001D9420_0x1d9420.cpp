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

// Function: sub_001D9420
// Address: 0x1d9420 - 0x1d95d0
void sub_001D9420_0x1d9420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9420_0x1d9420");
#endif

    switch (ctx->pc) {
        case 0x1d9498u: goto label_1d9498;
        case 0x1d94a0u: goto label_1d94a0;
        case 0x1d94a8u: goto label_1d94a8;
        case 0x1d94b0u: goto label_1d94b0;
        case 0x1d9518u: goto label_1d9518;
        case 0x1d9520u: goto label_1d9520;
        case 0x1d9528u: goto label_1d9528;
        case 0x1d9544u: goto label_1d9544;
        case 0x1d9578u: goto label_1d9578;
        case 0x1d95a0u: goto label_1d95a0;
        case 0x1d95acu: goto label_1d95ac;
        case 0x1d95b4u: goto label_1d95b4;
        case 0x1d95bcu: goto label_1d95bc;
        default: break;
    }

    ctx->pc = 0x1d9420u;

    // 0x1d9420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d942c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d942cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9430: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x1d9430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x1d9434: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d9434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9438: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d9438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d943c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9440: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d9440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9444: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1d9444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1d9448: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d9448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d944c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1d944cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9450: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x1d9450u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d9454: 0xd8a40020  lqc2        $vf4, 0x20($a1)
    ctx->pc = 0x1d9454u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1d9458: 0xd8a50030  lqc2        $vf5, 0x30($a1)
    ctx->pc = 0x1d9458u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1d945c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1d945cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d9460: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1d9460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d9464: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1d9464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d9468: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1d9468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d946c: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1d946cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9470: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1d9470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9474: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x1d9474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x1d9478: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d9478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d947c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d9480: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9480u;
    {
        const bool branch_taken_0x1d9480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9480) {
            ctx->pc = 0x1D9498u;
            goto label_1d9498;
        }
    }
    ctx->pc = 0x1D9488u;
    // 0x1d9488: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d9488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d948c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1d948cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d9490: 0xc0797ca  jal         func_1E5F28
    ctx->pc = 0x1D9490u;
    SET_GPR_U32(ctx, 31, 0x1D9498u);
    ctx->pc = 0x1D9494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9490u;
    // 0x1d9494: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5F28u, 0x1D9490u, 0x1D9498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9498u;
label_1d9498:
    // 0x1d9498: 0xc0767e2  jal         func_1D9F88
    ctx->pc = 0x1D9498u;
    SET_GPR_U32(ctx, 31, 0x1D94A0u);
    ctx->pc = 0x1D949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9498u;
    // 0x1d949c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F88u, 0x1D9498u, 0x1D94A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94A0u;
label_1d94a0:
    // 0x1d94a0: 0xc076de4  jal         func_1DB790
    ctx->pc = 0x1D94A0u;
    SET_GPR_U32(ctx, 31, 0x1D94A8u);
    ctx->pc = 0x1D94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94A0u;
    // 0x1d94a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x1D94A0u, 0x1D94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94A8u;
label_1d94a8:
    // 0x1d94a8: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x1D94A8u;
    SET_GPR_U32(ctx, 31, 0x1D94B0u);
    ctx->pc = 0x1D94ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94A8u;
    // 0x1d94ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x1D94A8u, 0x1D94B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94B0u;
label_1d94b0:
    // 0x1d94b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d94b4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d94b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d94b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d94b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d94bc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d94bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d94c0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1d94c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d94c4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1d94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1d94c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d94c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d94cc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1d94ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d94d0: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x1d94d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d94d4: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x1d94d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1d94d8: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x1d94d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d94dc: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1d94dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d94e0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1d94e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d94e4: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1d94e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d94e8: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1d94e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d94ec: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1d94ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d94f0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1d94f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d94f4: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x1d94f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x1d94f8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d94fc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d94fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d9500: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9500u;
    {
        const bool branch_taken_0x1d9500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9500) {
            ctx->pc = 0x1D9518u;
            goto label_1d9518;
        }
    }
    ctx->pc = 0x1D9508u;
    // 0x1d9508: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d9508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d950c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1d950cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d9510: 0xc0797ca  jal         func_1E5F28
    ctx->pc = 0x1D9510u;
    SET_GPR_U32(ctx, 31, 0x1D9518u);
    ctx->pc = 0x1D9514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9510u;
    // 0x1d9514: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5F28u, 0x1D9510u, 0x1D9518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9518u;
label_1d9518:
    // 0x1d9518: 0xc0767e2  jal         func_1D9F88
    ctx->pc = 0x1D9518u;
    SET_GPR_U32(ctx, 31, 0x1D9520u);
    ctx->pc = 0x1D951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9518u;
    // 0x1d951c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F88u, 0x1D9518u, 0x1D9520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9520u;
label_1d9520:
    // 0x1d9520: 0xc076de4  jal         func_1DB790
    ctx->pc = 0x1D9520u;
    SET_GPR_U32(ctx, 31, 0x1D9528u);
    ctx->pc = 0x1D9524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9520u;
    // 0x1d9524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x1D9520u, 0x1D9528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9528u;
label_1d9528:
    // 0x1d9528: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d9528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d952c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1d952cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d9530: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9530u;
    {
        const bool branch_taken_0x1d9530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9530u;
        // 0x1d9534: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9530) {
            ctx->pc = 0x1D9548u;
            goto label_1d9548;
        }
    }
    ctx->pc = 0x1D9538u;
    // 0x1d9538: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1d9538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d953c: 0xc079482  jal         func_1E5208
    ctx->pc = 0x1D953Cu;
    SET_GPR_U32(ctx, 31, 0x1D9544u);
    ctx->pc = 0x1D9540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D953Cu;
    // 0x1d9540: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5208u, 0x1D953Cu, 0x1D9544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9544u;
label_1d9544:
    // 0x1d9544: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d9544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d9548:
    // 0x1d9548: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1d9548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d954c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D954Cu;
    {
        const bool branch_taken_0x1d954c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d954c) {
            ctx->pc = 0x1D95ACu;
            goto label_1d95ac;
        }
    }
    ctx->pc = 0x1D9554u;
    // 0x1d9554: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1d9554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d9558: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D9558u;
    {
        const bool branch_taken_0x1d9558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9558) {
            ctx->pc = 0x1D95ACu;
            goto label_1d95ac;
        }
    }
    ctx->pc = 0x1D9560u;
    // 0x1d9560: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d9560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d9564: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d9564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d9568: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9568u;
    {
        const bool branch_taken_0x1d9568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9568) {
            ctx->pc = 0x1D956Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9568u;
            // 0x1d956c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9588u;
            goto label_1d9588;
        }
    }
    ctx->pc = 0x1D9570u;
    // 0x1d9570: 0xc079e80  jal         func_1E7A00
    ctx->pc = 0x1D9570u;
    SET_GPR_U32(ctx, 31, 0x1D9578u);
    ctx->pc = 0x1E7A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A00u, 0x1D9570u, 0x1D9578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9578u;
label_1d9578:
    // 0x1d9578: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d9578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d957c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1d957cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1d9580: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d9580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d9584: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1d9584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1d9588:
    // 0x1d9588: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9588u;
    {
        const bool branch_taken_0x1d9588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9588) {
            ctx->pc = 0x1D958Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9588u;
            // 0x1d958c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D95A4u;
            goto label_1d95a4;
        }
    }
    ctx->pc = 0x1D9590u;
    // 0x1d9590: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d9590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9594: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1d9594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d9598: 0xc079ef2  jal         func_1E7BC8
    ctx->pc = 0x1D9598u;
    SET_GPR_U32(ctx, 31, 0x1D95A0u);
    ctx->pc = 0x1D959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9598u;
    // 0x1d959c: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7BC8u, 0x1D9598u, 0x1D95A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95A0u;
label_1d95a0:
    // 0x1d95a0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d95a4:
    // 0x1d95a4: 0xc079ebe  jal         func_1E7AF8
    ctx->pc = 0x1D95A4u;
    SET_GPR_U32(ctx, 31, 0x1D95ACu);
    ctx->pc = 0x1D95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95A4u;
    // 0x1d95a8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AF8u, 0x1D95A4u, 0x1D95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95ACu;
label_1d95ac:
    // 0x1d95ac: 0xc076628  jal         func_1D98A0
    ctx->pc = 0x1D95ACu;
    SET_GPR_U32(ctx, 31, 0x1D95B4u);
    ctx->pc = 0x1D95B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95ACu;
    // 0x1d95b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98A0u, 0x1D95ACu, 0x1D95B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95B4u;
label_1d95b4:
    // 0x1d95b4: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x1D95B4u;
    SET_GPR_U32(ctx, 31, 0x1D95BCu);
    ctx->pc = 0x1D95B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95B4u;
    // 0x1d95b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x1D95B4u, 0x1D95BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95BCu;
label_1d95bc:
    // 0x1d95bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d95bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d95c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d95c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d95c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D95C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95C4u;
        // 0x1d95c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D95C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D95CCu;
    // 0x1d95cc: 0x0  nop
    ctx->pc = 0x1d95ccu;
    // NOP
    ctx->pc = 0x1d95d0u;
}
