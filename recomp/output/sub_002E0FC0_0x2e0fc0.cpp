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

// Function: sub_002E0FC0
// Address: 0x2e0fc0 - 0x2e1090
void sub_002E0FC0_0x2e0fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0FC0_0x2e0fc0");
#endif

    switch (ctx->pc) {
        case 0x2e0fc0u: goto label_2e0fc0;
        case 0x2e0fc4u: goto label_2e0fc4;
        case 0x2e0fc8u: goto label_2e0fc8;
        case 0x2e0fccu: goto label_2e0fcc;
        case 0x2e0fd0u: goto label_2e0fd0;
        case 0x2e0fd4u: goto label_2e0fd4;
        case 0x2e0fd8u: goto label_2e0fd8;
        case 0x2e0fdcu: goto label_2e0fdc;
        case 0x2e0fe0u: goto label_2e0fe0;
        case 0x2e0fe4u: goto label_2e0fe4;
        case 0x2e0fe8u: goto label_2e0fe8;
        case 0x2e0fecu: goto label_2e0fec;
        case 0x2e0ff0u: goto label_2e0ff0;
        case 0x2e0ff4u: goto label_2e0ff4;
        case 0x2e0ff8u: goto label_2e0ff8;
        case 0x2e0ffcu: goto label_2e0ffc;
        case 0x2e1000u: goto label_2e1000;
        case 0x2e1004u: goto label_2e1004;
        case 0x2e1008u: goto label_2e1008;
        case 0x2e100cu: goto label_2e100c;
        case 0x2e1010u: goto label_2e1010;
        case 0x2e1014u: goto label_2e1014;
        case 0x2e1018u: goto label_2e1018;
        case 0x2e101cu: goto label_2e101c;
        case 0x2e1020u: goto label_2e1020;
        case 0x2e1024u: goto label_2e1024;
        case 0x2e1028u: goto label_2e1028;
        case 0x2e102cu: goto label_2e102c;
        case 0x2e1030u: goto label_2e1030;
        case 0x2e1034u: goto label_2e1034;
        case 0x2e1038u: goto label_2e1038;
        case 0x2e103cu: goto label_2e103c;
        case 0x2e1040u: goto label_2e1040;
        case 0x2e1044u: goto label_2e1044;
        case 0x2e1048u: goto label_2e1048;
        case 0x2e104cu: goto label_2e104c;
        case 0x2e1050u: goto label_2e1050;
        case 0x2e1054u: goto label_2e1054;
        case 0x2e1058u: goto label_2e1058;
        case 0x2e105cu: goto label_2e105c;
        case 0x2e1060u: goto label_2e1060;
        case 0x2e1064u: goto label_2e1064;
        case 0x2e1068u: goto label_2e1068;
        case 0x2e106cu: goto label_2e106c;
        case 0x2e1070u: goto label_2e1070;
        case 0x2e1074u: goto label_2e1074;
        case 0x2e1078u: goto label_2e1078;
        case 0x2e107cu: goto label_2e107c;
        case 0x2e1080u: goto label_2e1080;
        case 0x2e1084u: goto label_2e1084;
        case 0x2e1088u: goto label_2e1088;
        case 0x2e108cu: goto label_2e108c;
        default: break;
    }

    ctx->pc = 0x2e0fc0u;

label_2e0fc0:
    // 0x2e0fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e0fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e0fc4:
    // 0x2e0fc4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e0fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2e0fc8:
    // 0x2e0fc8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2e0fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2e0fcc:
    // 0x2e0fcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e0fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e0fd0:
    // 0x2e0fd0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2e0fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2e0fd4:
    // 0x2e0fd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e0fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e0fd8:
    // 0x2e0fd8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2e0fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2e0fdc:
    // 0x2e0fdc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e0fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e0fe0:
    // 0x2e0fe0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e0fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e0fe4:
    // 0x2e0fe4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e0fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e0fe8:
    // 0x2e0fe8: 0xc0f6a96  jal         func_3DAA58
label_2e0fec:
    if (ctx->pc == 0x2E0FECu) {
        ctx->pc = 0x2E0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FE8u;
        // 0x2e0fec: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0FF0u;
        goto label_2e0ff0;
    }
    ctx->pc = 0x2E0FE8u;
    SET_GPR_U32(ctx, 31, 0x2E0FF0u);
    ctx->pc = 0x2E0FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0FE8u;
    // 0x2e0fec: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E0FE8u, 0x2E0FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FF0u;
label_2e0ff0:
    // 0x2e0ff0: 0xc0f6a96  jal         func_3DAA58
label_2e0ff4:
    if (ctx->pc == 0x2E0FF4u) {
        ctx->pc = 0x2E0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FF0u;
        // 0x2e0ff4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0FF8u;
        goto label_2e0ff8;
    }
    ctx->pc = 0x2E0FF0u;
    SET_GPR_U32(ctx, 31, 0x2E0FF8u);
    ctx->pc = 0x2E0FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0FF0u;
    // 0x2e0ff4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E0FF0u, 0x2E0FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FF8u;
label_2e0ff8:
    // 0x2e0ff8: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x2e0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_2e0ffc:
    // 0x2e0ffc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2e0ffcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2e1000:
    // 0x2e1000: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e1000u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1004:
    // 0x2e1004: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2e1004u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2e1008:
    // 0x2e1008: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2e1008u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e100c:
    // 0x2e100c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2e100cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2e1010:
    // 0x2e1010: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e1010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1014:
    // 0x2e1014: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e1014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1018:
    // 0x2e1018: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e1018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e101c:
    // 0x2e101c: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2e101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e1020:
    // 0x2e1020: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2e1020u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1024:
    // 0x2e1024: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e1024u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1028:
    // 0x2e1028: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2e1028u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2e102c:
    // 0x2e102c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2e102cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e1030:
    // 0x2e1030: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2e1030u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2e1034:
    // 0x2e1034: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e1034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1038:
    // 0x2e1038: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e1038u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e103c:
    // 0x2e103c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e103cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e1040:
    // 0x2e1040: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x2e1040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e1044:
    // 0x2e1044: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e1044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e1048:
    // 0x2e1048: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x2e1048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_2e104c:
    // 0x2e104c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2e104cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2e1050:
    // 0x2e1050: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2e1054:
    if (ctx->pc == 0x2E1054u) {
        ctx->pc = 0x2E1054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1050u;
        // 0x2e1054: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1058u;
        goto label_2e1058;
    }
    ctx->pc = 0x2E1050u;
    {
        const bool branch_taken_0x2e1050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1050u;
        // 0x2e1054: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1050) {
            ctx->pc = 0x2E1078u;
            goto label_2e1078;
        }
    }
    ctx->pc = 0x2E1058u;
label_2e1058:
    // 0x2e1058: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x2e1058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2e105c:
    // 0x2e105c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e105cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e1060:
    // 0x2e1060: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e1060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e1064:
    // 0x2e1064: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e1064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e1068:
    // 0x2e1068: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2e1068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2e106c:
    // 0x2e106c: 0x40f809  jalr        $v0
label_2e1070:
    if (ctx->pc == 0x2E1070u) {
        ctx->pc = 0x2E1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E106Cu;
        // 0x2e1070: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1074u;
        goto label_2e1074;
    }
    ctx->pc = 0x2E106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1074u);
        ctx->pc = 0x2E1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E106Cu;
        // 0x2e1070: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E106Cu, 0x2E1074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1074u;
label_2e1074:
    // 0x2e1074: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e1074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e1078:
    // 0x2e1078: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2e1078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2e107c:
    // 0x2e107c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e107cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e1080:
    // 0x2e1080: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2e1080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2e1084:
    // 0x2e1084: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e1084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e1088:
    // 0x2e1088: 0x3e00008  jr          $ra
label_2e108c:
    if (ctx->pc == 0x2E108Cu) {
        ctx->pc = 0x2E108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1088u;
        // 0x2e108c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1090u;
        goto label_fallthrough_0x2e1088;
    }
    ctx->pc = 0x2E1088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1088u;
        // 0x2e108c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e1088:
    ctx->pc = 0x2E1090u;
}
