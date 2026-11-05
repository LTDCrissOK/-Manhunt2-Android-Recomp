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

// Function: sub_0020ECA8
// Address: 0x20eca8 - 0x20ee98
void sub_0020ECA8_0x20eca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ECA8_0x20eca8");
#endif

    switch (ctx->pc) {
        case 0x20eca8u: goto label_20eca8;
        case 0x20ecacu: goto label_20ecac;
        case 0x20ecb0u: goto label_20ecb0;
        case 0x20ecb4u: goto label_20ecb4;
        case 0x20ecb8u: goto label_20ecb8;
        case 0x20ecbcu: goto label_20ecbc;
        case 0x20ecc0u: goto label_20ecc0;
        case 0x20ecc4u: goto label_20ecc4;
        case 0x20ecc8u: goto label_20ecc8;
        case 0x20ecccu: goto label_20eccc;
        case 0x20ecd0u: goto label_20ecd0;
        case 0x20ecd4u: goto label_20ecd4;
        case 0x20ecd8u: goto label_20ecd8;
        case 0x20ecdcu: goto label_20ecdc;
        case 0x20ece0u: goto label_20ece0;
        case 0x20ece4u: goto label_20ece4;
        case 0x20ece8u: goto label_20ece8;
        case 0x20ececu: goto label_20ecec;
        case 0x20ecf0u: goto label_20ecf0;
        case 0x20ecf4u: goto label_20ecf4;
        case 0x20ecf8u: goto label_20ecf8;
        case 0x20ecfcu: goto label_20ecfc;
        case 0x20ed00u: goto label_20ed00;
        case 0x20ed04u: goto label_20ed04;
        case 0x20ed08u: goto label_20ed08;
        case 0x20ed0cu: goto label_20ed0c;
        case 0x20ed10u: goto label_20ed10;
        case 0x20ed14u: goto label_20ed14;
        case 0x20ed18u: goto label_20ed18;
        case 0x20ed1cu: goto label_20ed1c;
        case 0x20ed20u: goto label_20ed20;
        case 0x20ed24u: goto label_20ed24;
        case 0x20ed28u: goto label_20ed28;
        case 0x20ed2cu: goto label_20ed2c;
        case 0x20ed30u: goto label_20ed30;
        case 0x20ed34u: goto label_20ed34;
        case 0x20ed38u: goto label_20ed38;
        case 0x20ed3cu: goto label_20ed3c;
        case 0x20ed40u: goto label_20ed40;
        case 0x20ed44u: goto label_20ed44;
        case 0x20ed48u: goto label_20ed48;
        case 0x20ed4cu: goto label_20ed4c;
        case 0x20ed50u: goto label_20ed50;
        case 0x20ed54u: goto label_20ed54;
        case 0x20ed58u: goto label_20ed58;
        case 0x20ed5cu: goto label_20ed5c;
        case 0x20ed60u: goto label_20ed60;
        case 0x20ed64u: goto label_20ed64;
        case 0x20ed68u: goto label_20ed68;
        case 0x20ed6cu: goto label_20ed6c;
        case 0x20ed70u: goto label_20ed70;
        case 0x20ed74u: goto label_20ed74;
        case 0x20ed78u: goto label_20ed78;
        case 0x20ed7cu: goto label_20ed7c;
        case 0x20ed80u: goto label_20ed80;
        case 0x20ed84u: goto label_20ed84;
        case 0x20ed88u: goto label_20ed88;
        case 0x20ed8cu: goto label_20ed8c;
        case 0x20ed90u: goto label_20ed90;
        case 0x20ed94u: goto label_20ed94;
        case 0x20ed98u: goto label_20ed98;
        case 0x20ed9cu: goto label_20ed9c;
        case 0x20eda0u: goto label_20eda0;
        case 0x20eda4u: goto label_20eda4;
        case 0x20eda8u: goto label_20eda8;
        case 0x20edacu: goto label_20edac;
        case 0x20edb0u: goto label_20edb0;
        case 0x20edb4u: goto label_20edb4;
        case 0x20edb8u: goto label_20edb8;
        case 0x20edbcu: goto label_20edbc;
        case 0x20edc0u: goto label_20edc0;
        case 0x20edc4u: goto label_20edc4;
        case 0x20edc8u: goto label_20edc8;
        case 0x20edccu: goto label_20edcc;
        case 0x20edd0u: goto label_20edd0;
        case 0x20edd4u: goto label_20edd4;
        case 0x20edd8u: goto label_20edd8;
        case 0x20eddcu: goto label_20eddc;
        case 0x20ede0u: goto label_20ede0;
        case 0x20ede4u: goto label_20ede4;
        case 0x20ede8u: goto label_20ede8;
        case 0x20edecu: goto label_20edec;
        case 0x20edf0u: goto label_20edf0;
        case 0x20edf4u: goto label_20edf4;
        case 0x20edf8u: goto label_20edf8;
        case 0x20edfcu: goto label_20edfc;
        case 0x20ee00u: goto label_20ee00;
        case 0x20ee04u: goto label_20ee04;
        case 0x20ee08u: goto label_20ee08;
        case 0x20ee0cu: goto label_20ee0c;
        case 0x20ee10u: goto label_20ee10;
        case 0x20ee14u: goto label_20ee14;
        case 0x20ee18u: goto label_20ee18;
        case 0x20ee1cu: goto label_20ee1c;
        case 0x20ee20u: goto label_20ee20;
        case 0x20ee24u: goto label_20ee24;
        case 0x20ee28u: goto label_20ee28;
        case 0x20ee2cu: goto label_20ee2c;
        case 0x20ee30u: goto label_20ee30;
        case 0x20ee34u: goto label_20ee34;
        case 0x20ee38u: goto label_20ee38;
        case 0x20ee3cu: goto label_20ee3c;
        case 0x20ee40u: goto label_20ee40;
        case 0x20ee44u: goto label_20ee44;
        case 0x20ee48u: goto label_20ee48;
        case 0x20ee4cu: goto label_20ee4c;
        case 0x20ee50u: goto label_20ee50;
        case 0x20ee54u: goto label_20ee54;
        case 0x20ee58u: goto label_20ee58;
        case 0x20ee5cu: goto label_20ee5c;
        case 0x20ee60u: goto label_20ee60;
        case 0x20ee64u: goto label_20ee64;
        case 0x20ee68u: goto label_20ee68;
        case 0x20ee6cu: goto label_20ee6c;
        case 0x20ee70u: goto label_20ee70;
        case 0x20ee74u: goto label_20ee74;
        case 0x20ee78u: goto label_20ee78;
        case 0x20ee7cu: goto label_20ee7c;
        case 0x20ee80u: goto label_20ee80;
        case 0x20ee84u: goto label_20ee84;
        case 0x20ee88u: goto label_20ee88;
        case 0x20ee8cu: goto label_20ee8c;
        case 0x20ee90u: goto label_20ee90;
        case 0x20ee94u: goto label_20ee94;
        default: break;
    }

    ctx->pc = 0x20eca8u;

label_20eca8:
    // 0x20eca8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20eca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_20ecac:
    // 0x20ecac: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x20ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_20ecb0:
    // 0x20ecb0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x20ecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_20ecb4:
    // 0x20ecb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20ecb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20ecb8:
    // 0x20ecb8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x20ecb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_20ecbc:
    // 0x20ecbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20ecbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ecc0:
    // 0x20ecc0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x20ecc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_20ecc4:
    // 0x20ecc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20ecc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20ecc8:
    // 0x20ecc8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x20ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_20eccc:
    // 0x20eccc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20ecccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ecd0:
    // 0x20ecd0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x20ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_20ecd4:
    // 0x20ecd4: 0xc0f6a96  jal         func_3DAA58
label_20ecd8:
    if (ctx->pc == 0x20ECD8u) {
        ctx->pc = 0x20ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECD4u;
        // 0x20ecd8: 0x8e5000b8  lw          $s0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ECDCu;
        goto label_20ecdc;
    }
    ctx->pc = 0x20ECD4u;
    SET_GPR_U32(ctx, 31, 0x20ECDCu);
    ctx->pc = 0x20ECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ECD4u;
    // 0x20ecd8: 0x8e5000b8  lw          $s0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20ECD4u, 0x20ECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECDCu;
label_20ecdc:
    // 0x20ecdc: 0xc0f6a96  jal         func_3DAA58
label_20ece0:
    if (ctx->pc == 0x20ECE0u) {
        ctx->pc = 0x20ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECDCu;
        // 0x20ece0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ECE4u;
        goto label_20ece4;
    }
    ctx->pc = 0x20ECDCu;
    SET_GPR_U32(ctx, 31, 0x20ECE4u);
    ctx->pc = 0x20ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ECDCu;
    // 0x20ece0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20ECDCu, 0x20ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ECE4u;
label_20ece4:
    // 0x20ece4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_20ece8:
    if (ctx->pc == 0x20ECE8u) {
        ctx->pc = 0x20ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECE4u;
        // 0x20ece8: 0x260200e0  addiu       $v0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ECECu;
        goto label_20ecec;
    }
    ctx->pc = 0x20ECE4u;
    {
        const bool branch_taken_0x20ece4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECE4u;
        // 0x20ece8: 0x260200e0  addiu       $v0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ece4) {
            ctx->pc = 0x20ED04u;
            goto label_20ed04;
        }
    }
    ctx->pc = 0x20ECECu;
label_20ecec:
    // 0x20ecec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x20ececu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20ecf0:
    // 0x20ecf0: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x20ecf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_20ecf4:
    // 0x20ecf4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x20ecf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20ecf8:
    // 0x20ecf8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x20ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_20ecfc:
    // 0x20ecfc: 0x10000004  b           . + 4 + (0x4 << 2)
label_20ed00:
    if (ctx->pc == 0x20ED00u) {
        ctx->pc = 0x20ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECFCu;
        // 0x20ed00: 0x260200f0  addiu       $v0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED04u;
        goto label_20ed04;
    }
    ctx->pc = 0x20ECFCu;
    {
        const bool branch_taken_0x20ecfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ECFCu;
        // 0x20ed00: 0x260200f0  addiu       $v0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ecfc) {
            ctx->pc = 0x20ED10u;
            goto label_20ed10;
        }
    }
    ctx->pc = 0x20ED04u;
label_20ed04:
    // 0x20ed04: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x20ed04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20ed08:
    // 0x20ed08: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x20ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_20ed0c:
    // 0x20ed0c: 0x260200f0  addiu       $v0, $s0, 0xF0
    ctx->pc = 0x20ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_20ed10:
    // 0x20ed10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x20ed10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20ed14:
    // 0x20ed14: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x20ed14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_20ed18:
    // 0x20ed18: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x20ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_20ed1c:
    // 0x20ed1c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x20ed1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ed20:
    // 0x20ed20: 0xc0f70ce  jal         func_3DC338
label_20ed24:
    if (ctx->pc == 0x20ED24u) {
        ctx->pc = 0x20ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED20u;
        // 0x20ed24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED28u;
        goto label_20ed28;
    }
    ctx->pc = 0x20ED20u;
    SET_GPR_U32(ctx, 31, 0x20ED28u);
    ctx->pc = 0x20ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED20u;
    // 0x20ed24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x20ED20u, 0x20ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED28u;
label_20ed28:
    // 0x20ed28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20ed2c:
    if (ctx->pc == 0x20ED2Cu) {
        ctx->pc = 0x20ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED28u;
        // 0x20ed2c: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED30u;
        goto label_20ed30;
    }
    ctx->pc = 0x20ED28u;
    {
        const bool branch_taken_0x20ed28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED28u;
        // 0x20ed2c: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed28) {
            ctx->pc = 0x20ED3Cu;
            goto label_20ed3c;
        }
    }
    ctx->pc = 0x20ED30u;
label_20ed30:
    // 0x20ed30: 0xc0c4900  jal         func_312400
label_20ed34:
    if (ctx->pc == 0x20ED34u) {
        ctx->pc = 0x20ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED30u;
        // 0x20ed34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED38u;
        goto label_20ed38;
    }
    ctx->pc = 0x20ED30u;
    SET_GPR_U32(ctx, 31, 0x20ED38u);
    ctx->pc = 0x20ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED30u;
    // 0x20ed34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x20ED30u, 0x20ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED38u;
label_20ed38:
    // 0x20ed38: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x20ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_20ed3c:
    // 0x20ed3c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x20ed3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ed40:
    // 0x20ed40: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x20ed40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20ed44:
    // 0x20ed44: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x20ed44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20ed48:
    // 0x20ed48: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x20ed48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_20ed4c:
    // 0x20ed4c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x20ed4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_20ed50:
    // 0x20ed50: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x20ed50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_20ed54:
    // 0x20ed54: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x20ed54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_20ed58:
    // 0x20ed58: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x20ed58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_20ed5c:
    // 0x20ed5c: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x20ed5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20ed60:
    // 0x20ed60: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x20ed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_20ed64:
    // 0x20ed64: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x20ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_20ed68:
    // 0x20ed68: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x20ed68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ed6c:
    // 0x20ed6c: 0xc0f70ce  jal         func_3DC338
label_20ed70:
    if (ctx->pc == 0x20ED70u) {
        ctx->pc = 0x20ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED6Cu;
        // 0x20ed70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED74u;
        goto label_20ed74;
    }
    ctx->pc = 0x20ED6Cu;
    SET_GPR_U32(ctx, 31, 0x20ED74u);
    ctx->pc = 0x20ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED6Cu;
    // 0x20ed70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x20ED6Cu, 0x20ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED74u;
label_20ed74:
    // 0x20ed74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20ed78:
    if (ctx->pc == 0x20ED78u) {
        ctx->pc = 0x20ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED74u;
        // 0x20ed78: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED7Cu;
        goto label_20ed7c;
    }
    ctx->pc = 0x20ED74u;
    {
        const bool branch_taken_0x20ed74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED74u;
        // 0x20ed78: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed74) {
            ctx->pc = 0x20ED88u;
            goto label_20ed88;
        }
    }
    ctx->pc = 0x20ED7Cu;
label_20ed7c:
    // 0x20ed7c: 0xc0c4900  jal         func_312400
label_20ed80:
    if (ctx->pc == 0x20ED80u) {
        ctx->pc = 0x20ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED7Cu;
        // 0x20ed80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ED84u;
        goto label_20ed84;
    }
    ctx->pc = 0x20ED7Cu;
    SET_GPR_U32(ctx, 31, 0x20ED84u);
    ctx->pc = 0x20ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED7Cu;
    // 0x20ed80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x20ED7Cu, 0x20ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED84u;
label_20ed84:
    // 0x20ed84: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x20ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_20ed88:
    // 0x20ed88: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x20ed88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20ed8c:
    // 0x20ed8c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x20ed8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_20ed90:
    // 0x20ed90: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x20ed90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20ed94:
    // 0x20ed94: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x20ed94u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_20ed98:
    // 0x20ed98: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x20ed98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_20ed9c:
    // 0x20ed9c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x20ed9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_20eda0:
    // 0x20eda0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x20eda0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_20eda4:
    // 0x20eda4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x20eda4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_20eda8:
    // 0x20eda8: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x20eda8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_20edac:
    // 0x20edac: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x20edacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_20edb0:
    // 0x20edb0: 0xc085d2a  jal         func_2174A8
label_20edb4:
    if (ctx->pc == 0x20EDB4u) {
        ctx->pc = 0x20EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDB0u;
        // 0x20edb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDB8u;
        goto label_20edb8;
    }
    ctx->pc = 0x20EDB0u;
    SET_GPR_U32(ctx, 31, 0x20EDB8u);
    ctx->pc = 0x20EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDB0u;
    // 0x20edb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x20EDB0u, 0x20EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDB8u;
label_20edb8:
    // 0x20edb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20edbc:
    if (ctx->pc == 0x20EDBCu) {
        ctx->pc = 0x20EDC0u;
        goto label_20edc0;
    }
    ctx->pc = 0x20EDB8u;
    {
        const bool branch_taken_0x20edb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20edb8) {
            ctx->pc = 0x20EDC8u;
            goto label_20edc8;
        }
    }
    ctx->pc = 0x20EDC0u;
label_20edc0:
    // 0x20edc0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_20edc4:
    if (ctx->pc == 0x20EDC4u) {
        ctx->pc = 0x20EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDC0u;
        // 0x20edc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDC8u;
        goto label_20edc8;
    }
    ctx->pc = 0x20EDC0u;
    {
        const bool branch_taken_0x20edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDC0u;
        // 0x20edc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edc0) {
            ctx->pc = 0x20EE74u;
            goto label_20ee74;
        }
    }
    ctx->pc = 0x20EDC8u;
label_20edc8:
    // 0x20edc8: 0xc083072  jal         func_20C1C8
label_20edcc:
    if (ctx->pc == 0x20EDCCu) {
        ctx->pc = 0x20EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDC8u;
        // 0x20edcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDD0u;
        goto label_20edd0;
    }
    ctx->pc = 0x20EDC8u;
    SET_GPR_U32(ctx, 31, 0x20EDD0u);
    ctx->pc = 0x20EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDC8u;
    // 0x20edcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x20EDC8u, 0x20EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDD0u;
label_20edd0:
    // 0x20edd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20edd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20edd4:
    // 0x20edd4: 0xc0b1488  jal         func_2C5220
label_20edd8:
    if (ctx->pc == 0x20EDD8u) {
        ctx->pc = 0x20EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDD4u;
        // 0x20edd8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDDCu;
        goto label_20eddc;
    }
    ctx->pc = 0x20EDD4u;
    SET_GPR_U32(ctx, 31, 0x20EDDCu);
    ctx->pc = 0x20EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDD4u;
    // 0x20edd8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x20EDD4u, 0x20EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDDCu;
label_20eddc:
    // 0x20eddc: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x20eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_20ede0:
    // 0x20ede0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x20ede0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20ede4:
    // 0x20ede4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ede8:
    // 0x20ede8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20edec:
    // 0x20edec: 0xc0b1680  jal         func_2C5A00
label_20edf0:
    if (ctx->pc == 0x20EDF0u) {
        ctx->pc = 0x20EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDECu;
        // 0x20edf0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EDF4u;
        goto label_20edf4;
    }
    ctx->pc = 0x20EDECu;
    SET_GPR_U32(ctx, 31, 0x20EDF4u);
    ctx->pc = 0x20EDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDECu;
    // 0x20edf0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x20EDECu, 0x20EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDF4u;
label_20edf4:
    // 0x20edf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20edf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20edf8:
    // 0x20edf8: 0xc0b1612  jal         func_2C5848
label_20edfc:
    if (ctx->pc == 0x20EDFCu) {
        ctx->pc = 0x20EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDF8u;
        // 0x20edfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE00u;
        goto label_20ee00;
    }
    ctx->pc = 0x20EDF8u;
    SET_GPR_U32(ctx, 31, 0x20EE00u);
    ctx->pc = 0x20EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDF8u;
    // 0x20edfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5848u, 0x20EDF8u, 0x20EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE00u;
label_20ee00:
    // 0x20ee00: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x20ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_20ee04:
    // 0x20ee04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ee04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ee08:
    // 0x20ee08: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20ee0c:
    // 0x20ee0c: 0x40f809  jalr        $v0
label_20ee10:
    if (ctx->pc == 0x20EE10u) {
        ctx->pc = 0x20EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE0Cu;
        // 0x20ee10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE14u;
        goto label_20ee14;
    }
    ctx->pc = 0x20EE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20EE14u);
        ctx->pc = 0x20EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE0Cu;
        // 0x20ee10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EE0Cu, 0x20EE14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EE14u;
label_20ee14:
    // 0x20ee14: 0xc083bc0  jal         func_20EF00
label_20ee18:
    if (ctx->pc == 0x20EE18u) {
        ctx->pc = 0x20EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE14u;
        // 0x20ee18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE1Cu;
        goto label_20ee1c;
    }
    ctx->pc = 0x20EE14u;
    SET_GPR_U32(ctx, 31, 0x20EE1Cu);
    ctx->pc = 0x20EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EE14u;
    // 0x20ee18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x20EE14u, 0x20EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE1Cu;
label_20ee1c:
    // 0x20ee1c: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x20ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_20ee20:
    // 0x20ee20: 0xc0b7264  jal         func_2DC990
label_20ee24:
    if (ctx->pc == 0x20EE24u) {
        ctx->pc = 0x20EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE20u;
        // 0x20ee24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE28u;
        goto label_20ee28;
    }
    ctx->pc = 0x20EE20u;
    SET_GPR_U32(ctx, 31, 0x20EE28u);
    ctx->pc = 0x20EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EE20u;
    // 0x20ee24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x20EE20u, 0x20EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE28u;
label_20ee28:
    // 0x20ee28: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x20ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_20ee2c:
    // 0x20ee2c: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x20ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20ee30:
    // 0x20ee30: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x20ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_20ee34:
    // 0x20ee34: 0x60f809  jalr        $v1
label_20ee38:
    if (ctx->pc == 0x20EE38u) {
        ctx->pc = 0x20EE3Cu;
        goto label_20ee3c;
    }
    ctx->pc = 0x20EE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20EE3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EE34u, 0x20EE3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EE3Cu;
label_20ee3c:
    // 0x20ee3c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x20ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_20ee40:
    // 0x20ee40: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x20ee40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
label_20ee44:
    // 0x20ee44: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x20ee44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_20ee48:
    // 0x20ee48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_20ee4c:
    if (ctx->pc == 0x20EE4Cu) {
        ctx->pc = 0x20EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE48u;
        // 0x20ee4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE50u;
        goto label_20ee50;
    }
    ctx->pc = 0x20EE48u;
    {
        const bool branch_taken_0x20ee48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE48u;
        // 0x20ee4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee48) {
            ctx->pc = 0x20EE74u;
            goto label_20ee74;
        }
    }
    ctx->pc = 0x20EE50u;
label_20ee50:
    // 0x20ee50: 0xc097f26  jal         func_25FC98
label_20ee54:
    if (ctx->pc == 0x20EE54u) {
        ctx->pc = 0x20EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE50u;
        // 0x20ee54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE58u;
        goto label_20ee58;
    }
    ctx->pc = 0x20EE50u;
    SET_GPR_U32(ctx, 31, 0x20EE58u);
    ctx->pc = 0x20EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EE50u;
    // 0x20ee54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x20EE50u, 0x20EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE58u;
label_20ee58:
    // 0x20ee58: 0x24030067  addiu       $v1, $zero, 0x67
    ctx->pc = 0x20ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_20ee5c:
    // 0x20ee5c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_20ee60:
    if (ctx->pc == 0x20EE60u) {
        ctx->pc = 0x20EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE5Cu;
        // 0x20ee60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE64u;
        goto label_20ee64;
    }
    ctx->pc = 0x20EE5Cu;
    {
        const bool branch_taken_0x20ee5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE5Cu;
        // 0x20ee60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee5c) {
            ctx->pc = 0x20EE74u;
            goto label_20ee74;
        }
    }
    ctx->pc = 0x20EE64u;
label_20ee64:
    // 0x20ee64: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x20ee64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_20ee68:
    // 0x20ee68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20ee68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20ee6c:
    // 0x20ee6c: 0x0  nop
    ctx->pc = 0x20ee6cu;
    // NOP
label_20ee70:
    // 0x20ee70: 0xe6200244  swc1        $f0, 0x244($s1)
    ctx->pc = 0x20ee70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
label_20ee74:
    // 0x20ee74: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x20ee74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20ee78:
    // 0x20ee78: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x20ee78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_20ee7c:
    // 0x20ee7c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x20ee7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_20ee80:
    // 0x20ee80: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x20ee80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_20ee84:
    // 0x20ee84: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x20ee84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_20ee88:
    // 0x20ee88: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x20ee88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_20ee8c:
    // 0x20ee8c: 0x3e00008  jr          $ra
label_20ee90:
    if (ctx->pc == 0x20EE90u) {
        ctx->pc = 0x20EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE8Cu;
        // 0x20ee90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EE94u;
        goto label_20ee94;
    }
    ctx->pc = 0x20EE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE8Cu;
        // 0x20ee90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EE94u;
label_20ee94:
    // 0x20ee94: 0x0  nop
    ctx->pc = 0x20ee94u;
    // NOP
    ctx->pc = 0x20ee98u;
}
