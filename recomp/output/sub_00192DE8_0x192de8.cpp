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

// Function: sub_00192DE8
// Address: 0x192de8 - 0x193040
void sub_00192DE8_0x192de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192DE8_0x192de8");
#endif

    switch (ctx->pc) {
        case 0x192e24u: goto label_192e24;
        case 0x192e94u: goto label_192e94;
        case 0x192ea4u: goto label_192ea4;
        case 0x192f88u: goto label_192f88;
        case 0x192fb8u: goto label_192fb8;
        case 0x192fd8u: goto label_192fd8;
        default: break;
    }

    ctx->pc = 0x192de8u;

    // 0x192de8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x192de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x192dec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x192decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x192df0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x192df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x192df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192df8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x192df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x192dfc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x192dfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x192e00: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x192e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x192e04: 0x8e111004  lw          $s1, 0x1004($s0)
    ctx->pc = 0x192e04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x192e08: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x192e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x192e0c: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x192e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x192e10: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x192e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x192e14: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x192E14u;
    {
        const bool branch_taken_0x192e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192e14) {
            ctx->pc = 0x192E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192E14u;
            // 0x192e18: 0x8e020ff8  lw          $v0, 0xFF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192F9Cu;
            goto label_192f9c;
        }
    }
    ctx->pc = 0x192E1Cu;
    // 0x192e1c: 0xc06e0fa  jal         func_1B83E8
    ctx->pc = 0x192E1Cu;
    SET_GPR_U32(ctx, 31, 0x192E24u);
    ctx->pc = 0x192E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E1Cu;
    // 0x192e20: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x192E1Cu, 0x192E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E24u;
label_192e24:
    // 0x192e24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x192E24u;
    {
        const bool branch_taken_0x192e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192e24) {
            ctx->pc = 0x192E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192E24u;
            // 0x192e28: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192E3Cu;
            goto label_192e3c;
        }
    }
    ctx->pc = 0x192E2Cu;
    // 0x192e2c: 0x8e22121c  lw          $v0, 0x121C($s1)
    ctx->pc = 0x192e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
    // 0x192e30: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x192e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x192e34: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x192E34u;
    {
        const bool branch_taken_0x192e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E34u;
        // 0x192e38: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e34) {
            ctx->pc = 0x193024u;
            goto label_193024;
        }
    }
    ctx->pc = 0x192E3Cu;
label_192e3c:
    // 0x192e3c: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x192e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x192e40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x192e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192e44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x192e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192e48: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x192e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x192e4c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x192e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x192e50: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x192e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192e54: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x192e54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192e58: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x192e58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x192e5c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x192e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x192e60: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x192e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192e64: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x192e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x192e68: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x192e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192e6c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x192e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x192e70: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x192e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e74: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x192e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x192e78: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x192e78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x192e7c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x192e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x192e80: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x192e80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x192e84: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x192e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x192e88: 0x8c500100  lw          $s0, 0x100($v0)
    ctx->pc = 0x192e88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x192e8c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x192E8Cu;
    SET_GPR_U32(ctx, 31, 0x192E94u);
    ctx->pc = 0x192E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E8Cu;
    // 0x192e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x192E8Cu, 0x192E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E94u;
label_192e94:
    // 0x192e94: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x192E94u;
    {
        const bool branch_taken_0x192e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192e94) {
            ctx->pc = 0x192E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192E94u;
            // 0x192e98: 0xc60100a0  lwc1        $f1, 0xA0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x192EA8u;
            goto label_192ea8;
        }
    }
    ctx->pc = 0x192E9Cu;
    // 0x192e9c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x192E9Cu;
    SET_GPR_U32(ctx, 31, 0x192EA4u);
    ctx->pc = 0x192EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E9Cu;
    // 0x192ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x192E9Cu, 0x192EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192EA4u;
label_192ea4:
    // 0x192ea4: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x192ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_192ea8:
    // 0x192ea8: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x192ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x192eac: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x192eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x192eb0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x192eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192eb4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x192eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x192eb8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x192eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192ebc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x192ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x192ec0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x192ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192ec4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x192ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x192ec8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x192ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x192ecc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x192eccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192ed0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x192ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x192ed4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x192ed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x192ed8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x192ed8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x192edc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x192edcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x192ee0: 0x4a0003bf  vwaitq
    ctx->pc = 0x192ee0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x192ee4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x192ee4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x192ee8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x192ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x192eec: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x192eecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192ef0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x192ef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x192ef4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x192ef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x192ef8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x192ef8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x192efc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x192efcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x192f00: 0x4a0003bf  vwaitq
    ctx->pc = 0x192f00u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x192f04: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x192f04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x192f08: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x192f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x192f0c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x192f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192f10: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x192f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192f14: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x192f14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x192f18: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x192f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192f1c: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x192f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192f20: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x192f20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x192f24: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x192f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192f28: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x192f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192f2c: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x192f2cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x192f30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x192f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x192f34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192f38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x192f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x192f3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192f40: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x192f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192f44: 0x0  nop
    ctx->pc = 0x192f44u;
    // NOP
    // 0x192f48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x192F48u;
    {
        const bool branch_taken_0x192f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192f48) {
            ctx->pc = 0x192F58u;
            goto label_192f58;
        }
    }
    ctx->pc = 0x192F50u;
    // 0x192f50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x192F50u;
    {
        const bool branch_taken_0x192f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F50u;
        // 0x192f54: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f50) {
            ctx->pc = 0x192F68u;
            goto label_192f68;
        }
    }
    ctx->pc = 0x192F58u;
label_192f58:
    // 0x192f58: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x192f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192f5c: 0x0  nop
    ctx->pc = 0x192f5cu;
    // NOP
    // 0x192f60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x192F60u;
    {
        const bool branch_taken_0x192f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192f60) {
            ctx->pc = 0x192F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192F60u;
            // 0x192f64: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x192F68u;
            goto label_192f68;
        }
    }
    ctx->pc = 0x192F68u;
label_192f68:
    // 0x192f68: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x192f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x192f6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x192f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x192f70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x192f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192f74: 0x0  nop
    ctx->pc = 0x192f74u;
    // NOP
    // 0x192f78: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x192f78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x192f7c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x192f7cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x192f80: 0xc0e404c  jal         func_390130
    ctx->pc = 0x192F80u;
    SET_GPR_U32(ctx, 31, 0x192F88u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x192F80u, 0x192F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192F88u;
label_192f88:
    // 0x192f88: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x192f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x192f8c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x192f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x192f90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192f94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192F94u;
    {
        const bool branch_taken_0x192f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F94u;
        // 0x192f98: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f94) {
            ctx->pc = 0x192FA4u;
            goto label_192fa4;
        }
    }
    ctx->pc = 0x192F9Cu;
label_192f9c:
    // 0x192f9c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x192f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192fa0: 0x46000505  abs.s       $f20, $f0
    ctx->pc = 0x192fa0u;
    ctx->f[20] = FPU_ABS_S(ctx->f[0]);
label_192fa4:
    // 0x192fa4: 0x8e220ff8  lw          $v0, 0xFF8($s1)
    ctx->pc = 0x192fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
    // 0x192fa8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x192fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x192fac: 0x2450002c  addiu       $s0, $v0, 0x2C
    ctx->pc = 0x192facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x192fb0: 0xc0f7182  jal         func_3DC608
    ctx->pc = 0x192FB0u;
    SET_GPR_U32(ctx, 31, 0x192FB8u);
    ctx->pc = 0x192FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FB0u;
    // 0x192fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC608u, 0x192FB0u, 0x192FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FB8u;
label_192fb8:
    // 0x192fb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192FB8u;
    {
        const bool branch_taken_0x192fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192FB8u;
        // 0x192fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192fb8) {
            ctx->pc = 0x192FD0u;
            goto label_192fd0;
        }
    }
    ctx->pc = 0x192FC0u;
    // 0x192fc0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x192fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x192fc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192fc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x192FC8u;
    {
        const bool branch_taken_0x192fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192fc8) {
            ctx->pc = 0x192FF0u;
            goto label_192ff0;
        }
    }
    ctx->pc = 0x192FD0u;
label_192fd0:
    // 0x192fd0: 0xc0f7182  jal         func_3DC608
    ctx->pc = 0x192FD0u;
    SET_GPR_U32(ctx, 31, 0x192FD8u);
    ctx->pc = 0x192FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FD0u;
    // 0x192fd4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC608u, 0x192FD0u, 0x192FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FD8u;
label_192fd8:
    // 0x192fd8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x192fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x192fdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192fe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192FE0u;
    {
        const bool branch_taken_0x192fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192fe0) {
            ctx->pc = 0x192FF0u;
            goto label_192ff0;
        }
    }
    ctx->pc = 0x192FE8u;
    // 0x192fe8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x192fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x192fec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192ff0:
    // 0x192ff0: 0x0  nop
    ctx->pc = 0x192ff0u;
    // NOP
    // 0x192ff4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x192ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192ff8: 0x0  nop
    ctx->pc = 0x192ff8u;
    // NOP
    // 0x192ffc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x192FFCu;
    {
        const bool branch_taken_0x192ffc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192FFCu;
        // 0x193000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ffc) {
            ctx->pc = 0x193024u;
            goto label_193024;
        }
    }
    ctx->pc = 0x193004u;
    // 0x193004: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x193004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x193008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19300c: 0x0  nop
    ctx->pc = 0x19300cu;
    // NOP
    // 0x193010: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193014: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x193014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193018: 0x0  nop
    ctx->pc = 0x193018u;
    // NOP
    // 0x19301c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19301Cu;
    {
        const bool branch_taken_0x19301c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19301c) {
            ctx->pc = 0x193020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19301Cu;
            // 0x193020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193024u;
            goto label_193024;
        }
    }
    ctx->pc = 0x193024u;
label_193024:
    // 0x193024: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x193024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193028: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x193028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19302c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19302cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193030: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x193030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x193034: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x193034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193038: 0x3e00008  jr          $ra
    ctx->pc = 0x193038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193038u;
        // 0x19303c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193040u;
}
