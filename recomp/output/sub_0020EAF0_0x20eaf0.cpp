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

// Function: sub_0020EAF0
// Address: 0x20eaf0 - 0x20eca8
void sub_0020EAF0_0x20eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EAF0_0x20eaf0");
#endif

    switch (ctx->pc) {
        case 0x20eaf0u: goto label_20eaf0;
        case 0x20eaf4u: goto label_20eaf4;
        case 0x20eaf8u: goto label_20eaf8;
        case 0x20eafcu: goto label_20eafc;
        case 0x20eb00u: goto label_20eb00;
        case 0x20eb04u: goto label_20eb04;
        case 0x20eb08u: goto label_20eb08;
        case 0x20eb0cu: goto label_20eb0c;
        case 0x20eb10u: goto label_20eb10;
        case 0x20eb14u: goto label_20eb14;
        case 0x20eb18u: goto label_20eb18;
        case 0x20eb1cu: goto label_20eb1c;
        case 0x20eb20u: goto label_20eb20;
        case 0x20eb24u: goto label_20eb24;
        case 0x20eb28u: goto label_20eb28;
        case 0x20eb2cu: goto label_20eb2c;
        case 0x20eb30u: goto label_20eb30;
        case 0x20eb34u: goto label_20eb34;
        case 0x20eb38u: goto label_20eb38;
        case 0x20eb3cu: goto label_20eb3c;
        case 0x20eb40u: goto label_20eb40;
        case 0x20eb44u: goto label_20eb44;
        case 0x20eb48u: goto label_20eb48;
        case 0x20eb4cu: goto label_20eb4c;
        case 0x20eb50u: goto label_20eb50;
        case 0x20eb54u: goto label_20eb54;
        case 0x20eb58u: goto label_20eb58;
        case 0x20eb5cu: goto label_20eb5c;
        case 0x20eb60u: goto label_20eb60;
        case 0x20eb64u: goto label_20eb64;
        case 0x20eb68u: goto label_20eb68;
        case 0x20eb6cu: goto label_20eb6c;
        case 0x20eb70u: goto label_20eb70;
        case 0x20eb74u: goto label_20eb74;
        case 0x20eb78u: goto label_20eb78;
        case 0x20eb7cu: goto label_20eb7c;
        case 0x20eb80u: goto label_20eb80;
        case 0x20eb84u: goto label_20eb84;
        case 0x20eb88u: goto label_20eb88;
        case 0x20eb8cu: goto label_20eb8c;
        case 0x20eb90u: goto label_20eb90;
        case 0x20eb94u: goto label_20eb94;
        case 0x20eb98u: goto label_20eb98;
        case 0x20eb9cu: goto label_20eb9c;
        case 0x20eba0u: goto label_20eba0;
        case 0x20eba4u: goto label_20eba4;
        case 0x20eba8u: goto label_20eba8;
        case 0x20ebacu: goto label_20ebac;
        case 0x20ebb0u: goto label_20ebb0;
        case 0x20ebb4u: goto label_20ebb4;
        case 0x20ebb8u: goto label_20ebb8;
        case 0x20ebbcu: goto label_20ebbc;
        case 0x20ebc0u: goto label_20ebc0;
        case 0x20ebc4u: goto label_20ebc4;
        case 0x20ebc8u: goto label_20ebc8;
        case 0x20ebccu: goto label_20ebcc;
        case 0x20ebd0u: goto label_20ebd0;
        case 0x20ebd4u: goto label_20ebd4;
        case 0x20ebd8u: goto label_20ebd8;
        case 0x20ebdcu: goto label_20ebdc;
        case 0x20ebe0u: goto label_20ebe0;
        case 0x20ebe4u: goto label_20ebe4;
        case 0x20ebe8u: goto label_20ebe8;
        case 0x20ebecu: goto label_20ebec;
        case 0x20ebf0u: goto label_20ebf0;
        case 0x20ebf4u: goto label_20ebf4;
        case 0x20ebf8u: goto label_20ebf8;
        case 0x20ebfcu: goto label_20ebfc;
        case 0x20ec00u: goto label_20ec00;
        case 0x20ec04u: goto label_20ec04;
        case 0x20ec08u: goto label_20ec08;
        case 0x20ec0cu: goto label_20ec0c;
        case 0x20ec10u: goto label_20ec10;
        case 0x20ec14u: goto label_20ec14;
        case 0x20ec18u: goto label_20ec18;
        case 0x20ec1cu: goto label_20ec1c;
        case 0x20ec20u: goto label_20ec20;
        case 0x20ec24u: goto label_20ec24;
        case 0x20ec28u: goto label_20ec28;
        case 0x20ec2cu: goto label_20ec2c;
        case 0x20ec30u: goto label_20ec30;
        case 0x20ec34u: goto label_20ec34;
        case 0x20ec38u: goto label_20ec38;
        case 0x20ec3cu: goto label_20ec3c;
        case 0x20ec40u: goto label_20ec40;
        case 0x20ec44u: goto label_20ec44;
        case 0x20ec48u: goto label_20ec48;
        case 0x20ec4cu: goto label_20ec4c;
        case 0x20ec50u: goto label_20ec50;
        case 0x20ec54u: goto label_20ec54;
        case 0x20ec58u: goto label_20ec58;
        case 0x20ec5cu: goto label_20ec5c;
        case 0x20ec60u: goto label_20ec60;
        case 0x20ec64u: goto label_20ec64;
        case 0x20ec68u: goto label_20ec68;
        case 0x20ec6cu: goto label_20ec6c;
        case 0x20ec70u: goto label_20ec70;
        case 0x20ec74u: goto label_20ec74;
        case 0x20ec78u: goto label_20ec78;
        case 0x20ec7cu: goto label_20ec7c;
        case 0x20ec80u: goto label_20ec80;
        case 0x20ec84u: goto label_20ec84;
        case 0x20ec88u: goto label_20ec88;
        case 0x20ec8cu: goto label_20ec8c;
        case 0x20ec90u: goto label_20ec90;
        case 0x20ec94u: goto label_20ec94;
        case 0x20ec98u: goto label_20ec98;
        case 0x20ec9cu: goto label_20ec9c;
        case 0x20eca0u: goto label_20eca0;
        case 0x20eca4u: goto label_20eca4;
        default: break;
    }

    ctx->pc = 0x20eaf0u;

label_20eaf0:
    // 0x20eaf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_20eaf4:
    // 0x20eaf4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x20eaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_20eaf8:
    // 0x20eaf8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x20eaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_20eafc:
    // 0x20eafc: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x20eafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_20eb00:
    // 0x20eb00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20eb00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20eb04:
    // 0x20eb04: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x20eb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_20eb08:
    // 0x20eb08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20eb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20eb0c:
    // 0x20eb0c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x20eb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_20eb10:
    // 0x20eb10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20eb10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20eb14:
    // 0x20eb14: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x20eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_20eb18:
    // 0x20eb18: 0xc0f6a96  jal         func_3DAA58
label_20eb1c:
    if (ctx->pc == 0x20EB1Cu) {
        ctx->pc = 0x20EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB18u;
        // 0x20eb1c: 0x8e5100b8  lw          $s1, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB20u;
        goto label_20eb20;
    }
    ctx->pc = 0x20EB18u;
    SET_GPR_U32(ctx, 31, 0x20EB20u);
    ctx->pc = 0x20EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB18u;
    // 0x20eb1c: 0x8e5100b8  lw          $s1, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20EB18u, 0x20EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB20u;
label_20eb20:
    // 0x20eb20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x20eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20eb24:
    // 0x20eb24: 0xc0f6a96  jal         func_3DAA58
label_20eb28:
    if (ctx->pc == 0x20EB28u) {
        ctx->pc = 0x20EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB24u;
        // 0x20eb28: 0x263300e0  addiu       $s3, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB2Cu;
        goto label_20eb2c;
    }
    ctx->pc = 0x20EB24u;
    SET_GPR_U32(ctx, 31, 0x20EB2Cu);
    ctx->pc = 0x20EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB24u;
    // 0x20eb28: 0x263300e0  addiu       $s3, $s1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20EB24u, 0x20EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB2Cu;
label_20eb2c:
    // 0x20eb2c: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x20eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_20eb30:
    // 0x20eb30: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20eb30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20eb34:
    // 0x20eb34: 0xc0f70ce  jal         func_3DC338
label_20eb38:
    if (ctx->pc == 0x20EB38u) {
        ctx->pc = 0x20EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB34u;
        // 0x20eb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB3Cu;
        goto label_20eb3c;
    }
    ctx->pc = 0x20EB34u;
    SET_GPR_U32(ctx, 31, 0x20EB3Cu);
    ctx->pc = 0x20EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB34u;
    // 0x20eb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x20EB34u, 0x20EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB3Cu;
label_20eb3c:
    // 0x20eb3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20eb40:
    if (ctx->pc == 0x20EB40u) {
        ctx->pc = 0x20EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB3Cu;
        // 0x20eb40: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB44u;
        goto label_20eb44;
    }
    ctx->pc = 0x20EB3Cu;
    {
        const bool branch_taken_0x20eb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB3Cu;
        // 0x20eb40: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb3c) {
            ctx->pc = 0x20EB50u;
            goto label_20eb50;
        }
    }
    ctx->pc = 0x20EB44u;
label_20eb44:
    // 0x20eb44: 0xc0c4900  jal         func_312400
label_20eb48:
    if (ctx->pc == 0x20EB48u) {
        ctx->pc = 0x20EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB44u;
        // 0x20eb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB4Cu;
        goto label_20eb4c;
    }
    ctx->pc = 0x20EB44u;
    SET_GPR_U32(ctx, 31, 0x20EB4Cu);
    ctx->pc = 0x20EB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB44u;
    // 0x20eb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x20EB44u, 0x20EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB4Cu;
label_20eb4c:
    // 0x20eb4c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x20eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_20eb50:
    // 0x20eb50: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x20eb50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_20eb54:
    // 0x20eb54: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x20eb54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20eb58:
    // 0x20eb58: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x20eb58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20eb5c:
    // 0x20eb5c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x20eb5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_20eb60:
    // 0x20eb60: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x20eb60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_20eb64:
    // 0x20eb64: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x20eb64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_20eb68:
    // 0x20eb68: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x20eb68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_20eb6c:
    // 0x20eb6c: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x20eb6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_20eb70:
    // 0x20eb70: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x20eb70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20eb74:
    // 0x20eb74: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x20eb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_20eb78:
    // 0x20eb78: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x20eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_20eb7c:
    // 0x20eb7c: 0x263100f0  addiu       $s1, $s1, 0xF0
    ctx->pc = 0x20eb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_20eb80:
    // 0x20eb80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20eb80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20eb84:
    // 0x20eb84: 0xc0f70ce  jal         func_3DC338
label_20eb88:
    if (ctx->pc == 0x20EB88u) {
        ctx->pc = 0x20EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB84u;
        // 0x20eb88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB8Cu;
        goto label_20eb8c;
    }
    ctx->pc = 0x20EB84u;
    SET_GPR_U32(ctx, 31, 0x20EB8Cu);
    ctx->pc = 0x20EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB84u;
    // 0x20eb88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x20EB84u, 0x20EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB8Cu;
label_20eb8c:
    // 0x20eb8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20eb90:
    if (ctx->pc == 0x20EB90u) {
        ctx->pc = 0x20EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB8Cu;
        // 0x20eb90: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB94u;
        goto label_20eb94;
    }
    ctx->pc = 0x20EB8Cu;
    {
        const bool branch_taken_0x20eb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB8Cu;
        // 0x20eb90: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb8c) {
            ctx->pc = 0x20EBA0u;
            goto label_20eba0;
        }
    }
    ctx->pc = 0x20EB94u;
label_20eb94:
    // 0x20eb94: 0xc0c4900  jal         func_312400
label_20eb98:
    if (ctx->pc == 0x20EB98u) {
        ctx->pc = 0x20EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB94u;
        // 0x20eb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB9Cu;
        goto label_20eb9c;
    }
    ctx->pc = 0x20EB94u;
    SET_GPR_U32(ctx, 31, 0x20EB9Cu);
    ctx->pc = 0x20EB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB94u;
    // 0x20eb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x20EB94u, 0x20EB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB9Cu;
label_20eb9c:
    // 0x20eb9c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x20eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_20eba0:
    // 0x20eba0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x20eba0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_20eba4:
    // 0x20eba4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x20eba4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20eba8:
    // 0x20eba8: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x20eba8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20ebac:
    // 0x20ebac: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x20ebacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_20ebb0:
    // 0x20ebb0: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x20ebb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_20ebb4:
    // 0x20ebb4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x20ebb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_20ebb8:
    // 0x20ebb8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x20ebb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_20ebbc:
    // 0x20ebbc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x20ebbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20ebc0:
    // 0x20ebc0: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x20ebc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_20ebc4:
    // 0x20ebc4: 0xc085d2a  jal         func_2174A8
label_20ebc8:
    if (ctx->pc == 0x20EBC8u) {
        ctx->pc = 0x20EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBC4u;
        // 0x20ebc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBCCu;
        goto label_20ebcc;
    }
    ctx->pc = 0x20EBC4u;
    SET_GPR_U32(ctx, 31, 0x20EBCCu);
    ctx->pc = 0x20EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBC4u;
    // 0x20ebc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x20EBC4u, 0x20EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBCCu;
label_20ebcc:
    // 0x20ebcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20ebd0:
    if (ctx->pc == 0x20EBD0u) {
        ctx->pc = 0x20EBD4u;
        goto label_20ebd4;
    }
    ctx->pc = 0x20EBCCu;
    {
        const bool branch_taken_0x20ebcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ebcc) {
            ctx->pc = 0x20EBDCu;
            goto label_20ebdc;
        }
    }
    ctx->pc = 0x20EBD4u;
label_20ebd4:
    // 0x20ebd4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_20ebd8:
    if (ctx->pc == 0x20EBD8u) {
        ctx->pc = 0x20EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBD4u;
        // 0x20ebd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBDCu;
        goto label_20ebdc;
    }
    ctx->pc = 0x20EBD4u;
    {
        const bool branch_taken_0x20ebd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBD4u;
        // 0x20ebd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ebd4) {
            ctx->pc = 0x20EC88u;
            goto label_20ec88;
        }
    }
    ctx->pc = 0x20EBDCu;
label_20ebdc:
    // 0x20ebdc: 0xc083072  jal         func_20C1C8
label_20ebe0:
    if (ctx->pc == 0x20EBE0u) {
        ctx->pc = 0x20EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBDCu;
        // 0x20ebe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBE4u;
        goto label_20ebe4;
    }
    ctx->pc = 0x20EBDCu;
    SET_GPR_U32(ctx, 31, 0x20EBE4u);
    ctx->pc = 0x20EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBDCu;
    // 0x20ebe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x20EBDCu, 0x20EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBE4u;
label_20ebe4:
    // 0x20ebe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20ebe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ebe8:
    // 0x20ebe8: 0xc0b1488  jal         func_2C5220
label_20ebec:
    if (ctx->pc == 0x20EBECu) {
        ctx->pc = 0x20EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBE8u;
        // 0x20ebec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBF0u;
        goto label_20ebf0;
    }
    ctx->pc = 0x20EBE8u;
    SET_GPR_U32(ctx, 31, 0x20EBF0u);
    ctx->pc = 0x20EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBE8u;
    // 0x20ebec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x20EBE8u, 0x20EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBF0u;
label_20ebf0:
    // 0x20ebf0: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x20ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_20ebf4:
    // 0x20ebf4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x20ebf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20ebf8:
    // 0x20ebf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ebf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ebfc:
    // 0x20ebfc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ec00:
    // 0x20ec00: 0xc0b1680  jal         func_2C5A00
label_20ec04:
    if (ctx->pc == 0x20EC04u) {
        ctx->pc = 0x20EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC00u;
        // 0x20ec04: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC08u;
        goto label_20ec08;
    }
    ctx->pc = 0x20EC00u;
    SET_GPR_U32(ctx, 31, 0x20EC08u);
    ctx->pc = 0x20EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC00u;
    // 0x20ec04: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x20EC00u, 0x20EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC08u;
label_20ec08:
    // 0x20ec08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20ec08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20ec0c:
    // 0x20ec0c: 0xc0b1612  jal         func_2C5848
label_20ec10:
    if (ctx->pc == 0x20EC10u) {
        ctx->pc = 0x20EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC0Cu;
        // 0x20ec10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC14u;
        goto label_20ec14;
    }
    ctx->pc = 0x20EC0Cu;
    SET_GPR_U32(ctx, 31, 0x20EC14u);
    ctx->pc = 0x20EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC0Cu;
    // 0x20ec10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5848u, 0x20EC0Cu, 0x20EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC14u;
label_20ec14:
    // 0x20ec14: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x20ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_20ec18:
    // 0x20ec18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ec18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ec1c:
    // 0x20ec1c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20ec20:
    // 0x20ec20: 0x40f809  jalr        $v0
label_20ec24:
    if (ctx->pc == 0x20EC24u) {
        ctx->pc = 0x20EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC20u;
        // 0x20ec24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC28u;
        goto label_20ec28;
    }
    ctx->pc = 0x20EC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20EC28u);
        ctx->pc = 0x20EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC20u;
        // 0x20ec24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EC20u, 0x20EC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EC28u;
label_20ec28:
    // 0x20ec28: 0xc083bc0  jal         func_20EF00
label_20ec2c:
    if (ctx->pc == 0x20EC2Cu) {
        ctx->pc = 0x20EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC28u;
        // 0x20ec2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC30u;
        goto label_20ec30;
    }
    ctx->pc = 0x20EC28u;
    SET_GPR_U32(ctx, 31, 0x20EC30u);
    ctx->pc = 0x20EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC28u;
    // 0x20ec2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x20EC28u, 0x20EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC30u;
label_20ec30:
    // 0x20ec30: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x20ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_20ec34:
    // 0x20ec34: 0xc0b7264  jal         func_2DC990
label_20ec38:
    if (ctx->pc == 0x20EC38u) {
        ctx->pc = 0x20EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC34u;
        // 0x20ec38: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC3Cu;
        goto label_20ec3c;
    }
    ctx->pc = 0x20EC34u;
    SET_GPR_U32(ctx, 31, 0x20EC3Cu);
    ctx->pc = 0x20EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC34u;
    // 0x20ec38: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x20EC34u, 0x20EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC3Cu;
label_20ec3c:
    // 0x20ec3c: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x20ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_20ec40:
    // 0x20ec40: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x20ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20ec44:
    // 0x20ec44: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x20ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_20ec48:
    // 0x20ec48: 0x60f809  jalr        $v1
label_20ec4c:
    if (ctx->pc == 0x20EC4Cu) {
        ctx->pc = 0x20EC50u;
        goto label_20ec50;
    }
    ctx->pc = 0x20EC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20EC50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EC48u, 0x20EC50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EC50u;
label_20ec50:
    // 0x20ec50: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x20ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_20ec54:
    // 0x20ec54: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x20ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
label_20ec58:
    // 0x20ec58: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x20ec58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_20ec5c:
    // 0x20ec5c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_20ec60:
    if (ctx->pc == 0x20EC60u) {
        ctx->pc = 0x20EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC5Cu;
        // 0x20ec60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC64u;
        goto label_20ec64;
    }
    ctx->pc = 0x20EC5Cu;
    {
        const bool branch_taken_0x20ec5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC5Cu;
        // 0x20ec60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec5c) {
            ctx->pc = 0x20EC88u;
            goto label_20ec88;
        }
    }
    ctx->pc = 0x20EC64u;
label_20ec64:
    // 0x20ec64: 0xc097f26  jal         func_25FC98
label_20ec68:
    if (ctx->pc == 0x20EC68u) {
        ctx->pc = 0x20EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC64u;
        // 0x20ec68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC6Cu;
        goto label_20ec6c;
    }
    ctx->pc = 0x20EC64u;
    SET_GPR_U32(ctx, 31, 0x20EC6Cu);
    ctx->pc = 0x20EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC64u;
    // 0x20ec68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x20EC64u, 0x20EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC6Cu;
label_20ec6c:
    // 0x20ec6c: 0x24030067  addiu       $v1, $zero, 0x67
    ctx->pc = 0x20ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_20ec70:
    // 0x20ec70: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_20ec74:
    if (ctx->pc == 0x20EC74u) {
        ctx->pc = 0x20EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC70u;
        // 0x20ec74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC78u;
        goto label_20ec78;
    }
    ctx->pc = 0x20EC70u;
    {
        const bool branch_taken_0x20ec70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC70u;
        // 0x20ec74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec70) {
            ctx->pc = 0x20EC88u;
            goto label_20ec88;
        }
    }
    ctx->pc = 0x20EC78u;
label_20ec78:
    // 0x20ec78: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x20ec78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_20ec7c:
    // 0x20ec7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20ec7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ec80:
    // 0x20ec80: 0x0  nop
    ctx->pc = 0x20ec80u;
    // NOP
label_20ec84:
    // 0x20ec84: 0xe6200244  swc1        $f0, 0x244($s1)
    ctx->pc = 0x20ec84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
label_20ec88:
    // 0x20ec88: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x20ec88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20ec8c:
    // 0x20ec8c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x20ec8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_20ec90:
    // 0x20ec90: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x20ec90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_20ec94:
    // 0x20ec94: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x20ec94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_20ec98:
    // 0x20ec98: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x20ec98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_20ec9c:
    // 0x20ec9c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x20ec9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_20eca0:
    // 0x20eca0: 0x3e00008  jr          $ra
label_20eca4:
    if (ctx->pc == 0x20ECA4u) {
        ctx->pc = 0x20ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECA0u;
        // 0x20eca4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ECA8u;
        goto label_fallthrough_0x20eca0;
    }
    ctx->pc = 0x20ECA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECA0u;
        // 0x20eca4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ECA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20eca0:
    ctx->pc = 0x20ECA8u;
}
