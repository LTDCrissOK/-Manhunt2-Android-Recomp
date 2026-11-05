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

// Function: sub_00137918
// Address: 0x137918 - 0x137bb8
void sub_00137918_0x137918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137918_0x137918");
#endif

    switch (ctx->pc) {
        case 0x137948u: goto label_137948;
        case 0x1379a8u: goto label_1379a8;
        case 0x1379d4u: goto label_1379d4;
        case 0x137a68u: goto label_137a68;
        case 0x137a84u: goto label_137a84;
        case 0x137a98u: goto label_137a98;
        case 0x137aacu: goto label_137aac;
        case 0x137ac0u: goto label_137ac0;
        case 0x137ad0u: goto label_137ad0;
        case 0x137aecu: goto label_137aec;
        case 0x137b10u: goto label_137b10;
        case 0x137b24u: goto label_137b24;
        case 0x137b38u: goto label_137b38;
        case 0x137b50u: goto label_137b50;
        case 0x137b60u: goto label_137b60;
        case 0x137b7cu: goto label_137b7c;
        case 0x137b94u: goto label_137b94;
        default: break;
    }

    ctx->pc = 0x137918u;

    // 0x137918: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x137918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x13791c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x13791cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x137920: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x137920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x137924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x137924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137928: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x137928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x13792c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x13792cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x137930: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x137930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x137934: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x137934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137938: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x137938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x13793c: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x13793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x137940: 0xc04d914  jal         func_136450
    ctx->pc = 0x137940u;
    SET_GPR_U32(ctx, 31, 0x137948u);
    ctx->pc = 0x137944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137940u;
    // 0x137944: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136450u, 0x137940u, 0x137948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137948u;
label_137948:
    // 0x137948: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x137948u;
    {
        const bool branch_taken_0x137948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137948u;
        // 0x13794c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137948) {
            ctx->pc = 0x137B98u;
            goto label_137b98;
        }
    }
    ctx->pc = 0x137950u;
    // 0x137950: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x137950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137954: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x137954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x137958: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x137958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13795c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13795cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x137960: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x137960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x137964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x137964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137968: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13796c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x137970: 0x8c930108  lw          $s3, 0x108($a0)
    ctx->pc = 0x137970u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x137974: 0x12600084  beqz        $s3, . + 4 + (0x84 << 2)
    ctx->pc = 0x137974u;
    {
        const bool branch_taken_0x137974 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x137978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137974u;
        // 0x137978: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137974) {
            ctx->pc = 0x137B88u;
            goto label_137b88;
        }
    }
    ctx->pc = 0x13797Cu;
    // 0x13797c: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x13797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x137980: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x137980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x137984: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x137984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x137988: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x137988u;
    {
        const bool branch_taken_0x137988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137988) {
            ctx->pc = 0x137B88u;
            goto label_137b88;
        }
    }
    ctx->pc = 0x137990u;
    // 0x137990: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x137990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x137994: 0x8c442b18  lw          $a0, 0x2B18($v0)
    ctx->pc = 0x137994u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B18u));
    // 0x137998: 0x5080007c  beql        $a0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x137998u;
    {
        const bool branch_taken_0x137998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x137998) {
            ctx->pc = 0x13799Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137998u;
            // 0x13799c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137B8Cu;
            goto label_137b8c;
        }
    }
    ctx->pc = 0x1379A0u;
    // 0x1379a0: 0xc095368  jal         func_254DA0
    ctx->pc = 0x1379A0u;
    SET_GPR_U32(ctx, 31, 0x1379A8u);
    ctx->pc = 0x1379A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379A0u;
    // 0x1379a4: 0x3c120043  lui         $s2, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x1379A0u, 0x1379A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379A8u;
label_1379a8:
    // 0x1379a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1379a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1379ac: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1379acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1379b0: 0x246305d0  addiu       $v1, $v1, 0x5D0
    ctx->pc = 0x1379b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1488));
    // 0x1379b4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1379b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1379b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1379b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1379bc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1379bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1379c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1379c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1379c4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1379c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1379c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1379c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1379cc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1379CCu;
    SET_GPR_U32(ctx, 31, 0x1379D4u);
    ctx->pc = 0x1379D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379CCu;
    // 0x1379d0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1379CCu, 0x1379D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379D4u;
label_1379d4:
    // 0x1379d4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1379d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1379d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1379d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1379dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1379dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1379e0: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x1379e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x1379e4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1379e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1379e8: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x1379e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x1379ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1379ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1379f0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1379f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1379f4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1379f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1379f8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1379f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1379fc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1379fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137a00: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x137a00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x137a04: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x137a04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x137a08: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x137a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x137a0c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x137a0cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x137a10: 0x4a0003bf  vwaitq
    ctx->pc = 0x137a10u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x137a14: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x137a14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x137a18: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x137a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x137a1c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x137a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x137a20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x137a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x137a24: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x137a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137a28: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x137a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x137a2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x137a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a30: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x137a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x137a34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x137a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a38: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x137a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x137a3c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x137a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x137a40: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x137a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x137a44: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x137a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x137a48: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x137a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x137a4c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x137a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x137a50: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x137a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x137a54: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x137a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x137a58: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x137a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x137a5c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x137a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x137a60: 0xc0b651a  jal         func_2D9468
    ctx->pc = 0x137A60u;
    SET_GPR_U32(ctx, 31, 0x137A68u);
    ctx->pc = 0x137A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A60u;
    // 0x137a64: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9468u, 0x137A60u, 0x137A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A68u;
label_137a68:
    // 0x137a68: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x137A68u;
    {
        const bool branch_taken_0x137a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A68u;
        // 0x137a6c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a68) {
            ctx->pc = 0x137AFCu;
            goto label_137afc;
        }
    }
    ctx->pc = 0x137A70u;
    // 0x137a70: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x137a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137a74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137A74u;
    {
        const bool branch_taken_0x137a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A74u;
        // 0x137a78: 0x8c53fffc  lw          $s3, -0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a74) {
            ctx->pc = 0x137A84u;
            goto label_137a84;
        }
    }
    ctx->pc = 0x137A7Cu;
    // 0x137a7c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x137A7Cu;
    SET_GPR_U32(ctx, 31, 0x137A84u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x137A7Cu, 0x137A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A84u;
label_137a84:
    // 0x137a84: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x137a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137a88: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x137A88u;
    {
        const bool branch_taken_0x137a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x137a88) {
            ctx->pc = 0x137A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137A88u;
            // 0x137a8c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137A9Cu;
            goto label_137a9c;
        }
    }
    ctx->pc = 0x137A90u;
    // 0x137a90: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x137A90u;
    SET_GPR_U32(ctx, 31, 0x137A98u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x137A90u, 0x137A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A98u;
label_137a98:
    // 0x137a98: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x137a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_137a9c:
    // 0x137a9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137A9Cu;
    {
        const bool branch_taken_0x137a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A9Cu;
        // 0x137aa0: 0x8fb10034  lw          $s1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a9c) {
            ctx->pc = 0x137AB0u;
            goto label_137ab0;
        }
    }
    ctx->pc = 0x137AA4u;
    // 0x137aa4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x137AA4u;
    SET_GPR_U32(ctx, 31, 0x137AACu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x137AA4u, 0x137AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AACu;
label_137aac:
    // 0x137aac: 0x8fb10034  lw          $s1, 0x34($sp)
    ctx->pc = 0x137aacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_137ab0:
    // 0x137ab0: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x137ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137ab4: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x137AB4u;
    {
        const bool branch_taken_0x137ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x137AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AB4u;
        // 0x137ab8: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ab4) {
            ctx->pc = 0x137ADCu;
            goto label_137adc;
        }
    }
    ctx->pc = 0x137ABCu;
    // 0x137abc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x137abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_137ac0:
    // 0x137ac0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137AC0u;
    {
        const bool branch_taken_0x137ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AC0u;
        // 0x137ac4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ac0) {
            ctx->pc = 0x137AD0u;
            goto label_137ad0;
        }
    }
    ctx->pc = 0x137AC8u;
    // 0x137ac8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x137AC8u;
    SET_GPR_U32(ctx, 31, 0x137AD0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x137AC8u, 0x137AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AD0u;
label_137ad0:
    // 0x137ad0: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x137AD0u;
    {
        const bool branch_taken_0x137ad0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x137ad0) {
            ctx->pc = 0x137AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137AD0u;
            // 0x137ad4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137ac0;
        }
    }
    ctx->pc = 0x137AD8u;
    // 0x137ad8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x137ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_137adc:
    // 0x137adc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137ADCu;
    {
        const bool branch_taken_0x137adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137ADCu;
        // 0x137ae0: 0x264305e0  addiu       $v1, $s2, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137adc) {
            ctx->pc = 0x137AF0u;
            goto label_137af0;
        }
    }
    ctx->pc = 0x137AE4u;
    // 0x137ae4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x137AE4u;
    SET_GPR_U32(ctx, 31, 0x137AECu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x137AE4u, 0x137AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AECu;
label_137aec:
    // 0x137aec: 0x264305e0  addiu       $v1, $s2, 0x5E0
    ctx->pc = 0x137aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1504));
label_137af0:
    // 0x137af0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x137af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137af4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x137AF4u;
    {
        const bool branch_taken_0x137af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AF4u;
        // 0x137af8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137af4) {
            ctx->pc = 0x137B98u;
            goto label_137b98;
        }
    }
    ctx->pc = 0x137AFCu;
label_137afc:
    // 0x137afc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x137afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137b00: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x137B00u;
    {
        const bool branch_taken_0x137b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x137b00) {
            ctx->pc = 0x137B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137B00u;
            // 0x137b04: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137B14u;
            goto label_137b14;
        }
    }
    ctx->pc = 0x137B08u;
    // 0x137b08: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x137B08u;
    SET_GPR_U32(ctx, 31, 0x137B10u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x137B08u, 0x137B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B10u;
label_137b10:
    // 0x137b10: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x137b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_137b14:
    // 0x137b14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x137B14u;
    {
        const bool branch_taken_0x137b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x137b14) {
            ctx->pc = 0x137B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137B14u;
            // 0x137b18: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137B28u;
            goto label_137b28;
        }
    }
    ctx->pc = 0x137B1Cu;
    // 0x137b1c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x137B1Cu;
    SET_GPR_U32(ctx, 31, 0x137B24u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x137B1Cu, 0x137B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B24u;
label_137b24:
    // 0x137b24: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x137b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_137b28:
    // 0x137b28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137B28u;
    {
        const bool branch_taken_0x137b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B28u;
        // 0x137b2c: 0x8fb10034  lw          $s1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b28) {
            ctx->pc = 0x137B3Cu;
            goto label_137b3c;
        }
    }
    ctx->pc = 0x137B30u;
    // 0x137b30: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x137B30u;
    SET_GPR_U32(ctx, 31, 0x137B38u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x137B30u, 0x137B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B38u;
label_137b38:
    // 0x137b38: 0x8fb10034  lw          $s1, 0x34($sp)
    ctx->pc = 0x137b38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_137b3c:
    // 0x137b3c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x137b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137b40: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x137B40u;
    {
        const bool branch_taken_0x137b40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x137B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B40u;
        // 0x137b44: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b40) {
            ctx->pc = 0x137B6Cu;
            goto label_137b6c;
        }
    }
    ctx->pc = 0x137B48u;
    // 0x137b48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x137b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137b4c: 0x0  nop
    ctx->pc = 0x137b4cu;
    // NOP
label_137b50:
    // 0x137b50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137B50u;
    {
        const bool branch_taken_0x137b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B50u;
        // 0x137b54: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b50) {
            ctx->pc = 0x137B60u;
            goto label_137b60;
        }
    }
    ctx->pc = 0x137B58u;
    // 0x137b58: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x137B58u;
    SET_GPR_U32(ctx, 31, 0x137B60u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x137B58u, 0x137B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B60u;
label_137b60:
    // 0x137b60: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x137B60u;
    {
        const bool branch_taken_0x137b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x137b60) {
            ctx->pc = 0x137B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137B60u;
            // 0x137b64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137b50;
        }
    }
    ctx->pc = 0x137B68u;
    // 0x137b68: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x137b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_137b6c:
    // 0x137b6c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137B6Cu;
    {
        const bool branch_taken_0x137b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B6Cu;
        // 0x137b70: 0x264205e0  addiu       $v0, $s2, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b6c) {
            ctx->pc = 0x137B80u;
            goto label_137b80;
        }
    }
    ctx->pc = 0x137B74u;
    // 0x137b74: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x137B74u;
    SET_GPR_U32(ctx, 31, 0x137B7Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x137B74u, 0x137B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B7Cu;
label_137b7c:
    // 0x137b7c: 0x264205e0  addiu       $v0, $s2, 0x5E0
    ctx->pc = 0x137b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1504));
label_137b80:
    // 0x137b80: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x137b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x137b84: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x137b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_137b88:
    // 0x137b88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x137b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137b8c:
    // 0x137b8c: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x137B8Cu;
    SET_GPR_U32(ctx, 31, 0x137B94u);
    ctx->pc = 0x137B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B8Cu;
    // 0x137b90: 0x24a5e598  addiu       $a1, $a1, -0x1A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x137B8Cu, 0x137B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B94u;
label_137b94:
    // 0x137b94: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x137b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_137b98:
    // 0x137b98: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x137b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137b9c: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x137b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x137ba0: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x137ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x137ba4: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x137ba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x137ba8: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x137ba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x137bac: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x137bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x137bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x137BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BB0u;
        // 0x137bb4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137BB8u;
}
