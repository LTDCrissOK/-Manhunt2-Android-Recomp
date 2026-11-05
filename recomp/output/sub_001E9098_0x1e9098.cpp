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

// Function: sub_001E9098
// Address: 0x1e9098 - 0x1e9260
void sub_001E9098_0x1e9098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9098_0x1e9098");
#endif

    switch (ctx->pc) {
        case 0x1e90e4u: goto label_1e90e4;
        case 0x1e9108u: goto label_1e9108;
        case 0x1e9118u: goto label_1e9118;
        case 0x1e9124u: goto label_1e9124;
        case 0x1e9138u: goto label_1e9138;
        case 0x1e91d0u: goto label_1e91d0;
        default: break;
    }

    ctx->pc = 0x1e9098u;

    // 0x1e9098: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e9098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1e909c: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1e909cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1e90a0: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x1e90a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x1e90a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e90a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90a8: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1e90a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1e90ac: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x1e90acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e90b0: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x1e90b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1e90b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e90b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90b8: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x1e90b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x1e90bc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1e90bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90c0: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x1e90c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x1e90c4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1e90c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90c8: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x1e90c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x1e90cc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1e90ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90d0: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1e90d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1e90d4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1e90d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1e90d8: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1e90d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1e90dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E90DCu;
    SET_GPR_U32(ctx, 31, 0x1E90E4u);
    ctx->pc = 0x1E90E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E90DCu;
    // 0x1e90e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E90DCu, 0x1E90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90E4u;
label_1e90e4:
    // 0x1e90e4: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x1e90e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e90e8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1e90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1e90ec: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1e90ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1e90f0: 0x7fa00010  sq          $zero, 0x10($sp)
    ctx->pc = 0x1e90f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 0));
    // 0x1e90f4: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x1e90f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x1e90f8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x1e90f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1e90fc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1e90fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9100: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1E9100u;
    SET_GPR_U32(ctx, 31, 0x1E9108u);
    ctx->pc = 0x1E9104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9100u;
    // 0x1e9104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1E9100u, 0x1E9108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9108u;
label_1e9108:
    // 0x1e9108: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9108u;
    {
        const bool branch_taken_0x1e9108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9108u;
        // 0x1e910c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9108) {
            ctx->pc = 0x1E911Cu;
            goto label_1e911c;
        }
    }
    ctx->pc = 0x1E9110u;
    // 0x1e9110: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1E9110u;
    SET_GPR_U32(ctx, 31, 0x1E9118u);
    ctx->pc = 0x1E9114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9110u;
    // 0x1e9114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1E9110u, 0x1E9118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9118u;
label_1e9118:
    // 0x1e9118: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e9118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e911c:
    // 0x1e911c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1E911Cu;
    SET_GPR_U32(ctx, 31, 0x1E9124u);
    ctx->pc = 0x1E9120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E911Cu;
    // 0x1e9120: 0x26320080  addiu       $s2, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1E911Cu, 0x1E9124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9124u;
label_1e9124:
    // 0x1e9124: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1e9124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e9128: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e912c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e912cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9130: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x1E9130u;
    SET_GPR_U32(ctx, 31, 0x1E9138u);
    ctx->pc = 0x1E9134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9130u;
    // 0x1e9134: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x1E9130u, 0x1E9138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9138u;
label_1e9138:
    // 0x1e9138: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1e9138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e913c: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x1e913cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1e9140: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x1e9140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1e9144: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1e9144u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e9148: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e9148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e914c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1e914cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e9150: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e9150u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9154: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e9154u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9158: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e9158u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e915c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e915cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9160: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x1e9160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1e9164: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e9164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9168: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e9168u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e916c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e916cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9170: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e9170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9174: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1e9174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e9178: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1e9178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e917c: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x1e917cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e9180: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x1e9180u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e9184: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x1e9184u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1e9188: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e9188u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e918c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e918cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e9190: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e9190u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e9194: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1e9194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e9198: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1e9198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e919c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1e919cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e91a0: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x1e91a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e91a4: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x1e91a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e91a8: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x1e91a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1e91ac: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e91acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e91b0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e91b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e91b4: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e91b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e91b8: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x1e91b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e91bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e91bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91c0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1e91c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e91c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91c8: 0xc079fa2  jal         func_1E7E88
    ctx->pc = 0x1E91C8u;
    SET_GPR_U32(ctx, 31, 0x1E91D0u);
    ctx->pc = 0x1E91CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E91C8u;
    // 0x1e91cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E88u, 0x1E91C8u, 0x1E91D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91D0u;
label_1e91d0:
    // 0x1e91d0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E91D0u;
    {
        const bool branch_taken_0x1e91d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E91D0u;
        // 0x1e91d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91d0) {
            ctx->pc = 0x1E922Cu;
            goto label_1e922c;
        }
    }
    ctx->pc = 0x1E91D8u;
    // 0x1e91d8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e91d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e91dc: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1e91dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e91e0: 0xda430010  lqc2        $vf3, 0x10($s2)
    ctx->pc = 0x1e91e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e91e4: 0xda440020  lqc2        $vf4, 0x20($s2)
    ctx->pc = 0x1e91e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1e91e8: 0xda450030  lqc2        $vf5, 0x30($s2)
    ctx->pc = 0x1e91e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1e91ec: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e91ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e91f0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e91f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e91f4: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1e91f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e91f8: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1e91f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e91fc: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e91fcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9200: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x1e9200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1e9204: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e9204u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9208: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1e9208u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e920c: 0xda430010  lqc2        $vf3, 0x10($s2)
    ctx->pc = 0x1e920cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e9210: 0xda440020  lqc2        $vf4, 0x20($s2)
    ctx->pc = 0x1e9210u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1e9214: 0xda450030  lqc2        $vf5, 0x30($s2)
    ctx->pc = 0x1e9214u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1e9218: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e9218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e921c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e921cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e9220: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e9220u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e9224: 0xfa650010  sqc2        $vf5, 0x10($s3)
    ctx->pc = 0x1e9224u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e9228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e922c:
    // 0x1e922c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1e922cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e9230: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1e9230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e9234: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1e9234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e9238: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1e9238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e923c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1e923cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e9240: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1e9240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e9244: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1e9244u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e9248: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x1e9248u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e924c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1e924cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e9250: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1e9250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9254: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9254u;
        // 0x1e9258: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E925Cu;
    // 0x1e925c: 0x0  nop
    ctx->pc = 0x1e925cu;
    // NOP
    ctx->pc = 0x1e9260u;
}
