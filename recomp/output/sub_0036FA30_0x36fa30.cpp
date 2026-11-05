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

// Function: sub_0036FA30
// Address: 0x36fa30 - 0x36fc30
void sub_0036FA30_0x36fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FA30_0x36fa30");
#endif

    switch (ctx->pc) {
        case 0x36fa60u: goto label_36fa60;
        case 0x36fa68u: goto label_36fa68;
        case 0x36faccu: goto label_36facc;
        case 0x36fae8u: goto label_36fae8;
        case 0x36faf4u: goto label_36faf4;
        case 0x36fb00u: goto label_36fb00;
        case 0x36fb0cu: goto label_36fb0c;
        case 0x36fb1cu: goto label_36fb1c;
        case 0x36fb24u: goto label_36fb24;
        case 0x36fb88u: goto label_36fb88;
        case 0x36fba8u: goto label_36fba8;
        case 0x36fbb0u: goto label_36fbb0;
        case 0x36fbb8u: goto label_36fbb8;
        default: break;
    }

    ctx->pc = 0x36fa30u;

    // 0x36fa30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36fa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36fa34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36fa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36fa38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36fa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x36fa3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36fa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x36fa40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x36fa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x36fa44: 0x14a20074  bne         $a1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x36FA44u;
    {
        const bool branch_taken_0x36fa44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x36FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA44u;
        // 0x36fa48: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fa44) {
            ctx->pc = 0x36FC18u;
            goto label_36fc18;
        }
    }
    ctx->pc = 0x36FA4Cu;
    // 0x36fa4c: 0x10800072  beqz        $a0, . + 4 + (0x72 << 2)
    ctx->pc = 0x36FA4Cu;
    {
        const bool branch_taken_0x36fa4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA4Cu;
        // 0x36fa50: 0x3c11005c  lui         $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fa4c) {
            ctx->pc = 0x36FC18u;
            goto label_36fc18;
        }
    }
    ctx->pc = 0x36FA54u;
    // 0x36fa54: 0x2631f1b0  addiu       $s1, $s1, -0xE50
    ctx->pc = 0x36fa54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963632));
    // 0x36fa58: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36FA58u;
    SET_GPR_U32(ctx, 31, 0x36FA60u);
    ctx->pc = 0x36FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA58u;
    // 0x36fa5c: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36FA58u, 0x36FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FA60u;
label_36fa60:
    // 0x36fa60: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36FA60u;
    SET_GPR_U32(ctx, 31, 0x36FA68u);
    ctx->pc = 0x36FA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA60u;
    // 0x36fa64: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36FA60u, 0x36FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FA68u;
label_36fa68:
    // 0x36fa68: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x36fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x36fa6c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x36fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x36fa70: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36fa74: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x36fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x36fa78: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x36fa78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fa7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x36fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x36fa80: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x36fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x36fa84: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x36fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x36fa88: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x36fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x36fa8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36fa90: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x36fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x36fa94: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36fa94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fa98: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x36fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36fa9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x36fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x36faa0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x36faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x36faa4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36faa8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x36faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x36faac: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36faacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fab0: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x36fab0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36fab4: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x36fab4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x36fab8: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x36fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x36fabc: 0x2610f210  addiu       $s0, $s0, -0xDF0
    ctx->pc = 0x36fabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963728));
    // 0x36fac0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x36fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x36fac4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36FAC4u;
    SET_GPR_U32(ctx, 31, 0x36FACCu);
    ctx->pc = 0x36FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FAC4u;
    // 0x36fac8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36FAC4u, 0x36FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FACCu;
label_36facc:
    // 0x36facc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x36faccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x36fad0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x36fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x36fad4: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x36fad4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x36fad8: 0x7e000040  sq          $zero, 0x40($s0)
    ctx->pc = 0x36fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 0));
    // 0x36fadc: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36fae0: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x36FAE0u;
    SET_GPR_U32(ctx, 31, 0x36FAE8u);
    ctx->pc = 0x36FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FAE0u;
    // 0x36fae4: 0x2484f260  addiu       $a0, $a0, -0xDA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x36FAE0u, 0x36FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FAE8u;
label_36fae8:
    // 0x36fae8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36fae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36faec: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x36FAECu;
    SET_GPR_U32(ctx, 31, 0x36FAF4u);
    ctx->pc = 0x36FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FAECu;
    // 0x36faf0: 0x2484f2c0  addiu       $a0, $a0, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x36FAECu, 0x36FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FAF4u;
label_36faf4:
    // 0x36faf4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36faf8: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x36FAF8u;
    SET_GPR_U32(ctx, 31, 0x36FB00u);
    ctx->pc = 0x36FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FAF8u;
    // 0x36fafc: 0x2484f320  addiu       $a0, $a0, -0xCE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x36FAF8u, 0x36FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB00u;
label_36fb00:
    // 0x36fb00: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36fb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36fb04: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x36FB04u;
    SET_GPR_U32(ctx, 31, 0x36FB0Cu);
    ctx->pc = 0x36FB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB04u;
    // 0x36fb08: 0x2484f380  addiu       $a0, $a0, -0xC80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x36FB04u, 0x36FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB0Cu;
label_36fb0c:
    // 0x36fb0c: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x36fb0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x36fb10: 0x2631f3b0  addiu       $s1, $s1, -0xC50
    ctx->pc = 0x36fb10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964144));
    // 0x36fb14: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36FB14u;
    SET_GPR_U32(ctx, 31, 0x36FB1Cu);
    ctx->pc = 0x36FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB14u;
    // 0x36fb18: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36FB14u, 0x36FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB1Cu;
label_36fb1c:
    // 0x36fb1c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36FB1Cu;
    SET_GPR_U32(ctx, 31, 0x36FB24u);
    ctx->pc = 0x36FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB1Cu;
    // 0x36fb20: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36FB1Cu, 0x36FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB24u;
label_36fb24:
    // 0x36fb24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x36fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x36fb28: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x36fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x36fb2c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36fb30: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x36fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x36fb34: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x36fb34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fb38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x36fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x36fb3c: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x36fb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x36fb40: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x36fb40u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x36fb44: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x36fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x36fb48: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36fb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36fb4c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x36fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x36fb50: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36fb50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fb54: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x36fb54u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36fb58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x36fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x36fb5c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x36fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x36fb60: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36fb64: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x36fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x36fb68: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36fb68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fb6c: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x36fb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36fb70: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x36fb70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x36fb74: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x36fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x36fb78: 0x2610f410  addiu       $s0, $s0, -0xBF0
    ctx->pc = 0x36fb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964240));
    // 0x36fb7c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x36fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x36fb80: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36FB80u;
    SET_GPR_U32(ctx, 31, 0x36FB88u);
    ctx->pc = 0x36FB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB80u;
    // 0x36fb84: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36FB80u, 0x36FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB88u;
label_36fb88:
    // 0x36fb88: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x36fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x36fb8c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x36fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x36fb90: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x36fb90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x36fb94: 0x7e000040  sq          $zero, 0x40($s0)
    ctx->pc = 0x36fb94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 0));
    // 0x36fb98: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x36fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x36fb9c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x36fb9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36fba0: 0x2450f460  addiu       $s0, $v0, -0xBA0
    ctx->pc = 0x36fba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964320));
    // 0x36fba4: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x36fba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_36fba8:
    // 0x36fba8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36FBA8u;
    SET_GPR_U32(ctx, 31, 0x36FBB0u);
    ctx->pc = 0x36FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FBA8u;
    // 0x36fbac: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36FBA8u, 0x36FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBB0u;
label_36fbb0:
    // 0x36fbb0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36FBB0u;
    SET_GPR_U32(ctx, 31, 0x36FBB8u);
    ctx->pc = 0x36FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FBB0u;
    // 0x36fbb4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36FBB0u, 0x36FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBB8u;
label_36fbb8:
    // 0x36fbb8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x36fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x36fbbc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x36fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x36fbc0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36fbc4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x36fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x36fbc8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x36fbc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fbcc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x36fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x36fbd0: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x36fbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x36fbd4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x36fbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x36fbd8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x36fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x36fbdc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36fbe0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x36fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x36fbe4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36fbe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fbe8: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x36fbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36fbec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x36fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x36fbf0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x36fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x36fbf4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36fbf8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x36fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x36fbfc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36fbfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fc00: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x36fc00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36fc04: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x36fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x36fc08: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x36fc08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x36fc0c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x36fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x36fc10: 0x1632ffe5  bne         $s1, $s2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x36FC10u;
    {
        const bool branch_taken_0x36fc10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x36FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC10u;
        // 0x36fc14: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc10) {
            ctx->pc = 0x36FBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fba8;
        }
    }
    ctx->pc = 0x36FC18u;
label_36fc18:
    // 0x36fc18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36fc18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fc1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36fc1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36fc20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x36fc20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36fc24: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x36fc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36fc28: 0x3e00008  jr          $ra
    ctx->pc = 0x36FC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC28u;
        // 0x36fc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FC30u;
}
