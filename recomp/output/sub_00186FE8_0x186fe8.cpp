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

// Function: sub_00186FE8
// Address: 0x186fe8 - 0x187118
void sub_00186FE8_0x186fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186FE8_0x186fe8");
#endif

    switch (ctx->pc) {
        case 0x186fe8u: goto label_186fe8;
        case 0x186fecu: goto label_186fec;
        case 0x186ff0u: goto label_186ff0;
        case 0x186ff4u: goto label_186ff4;
        case 0x186ff8u: goto label_186ff8;
        case 0x186ffcu: goto label_186ffc;
        case 0x187000u: goto label_187000;
        case 0x187004u: goto label_187004;
        case 0x187008u: goto label_187008;
        case 0x18700cu: goto label_18700c;
        case 0x187010u: goto label_187010;
        case 0x187014u: goto label_187014;
        case 0x187018u: goto label_187018;
        case 0x18701cu: goto label_18701c;
        case 0x187020u: goto label_187020;
        case 0x187024u: goto label_187024;
        case 0x187028u: goto label_187028;
        case 0x18702cu: goto label_18702c;
        case 0x187030u: goto label_187030;
        case 0x187034u: goto label_187034;
        case 0x187038u: goto label_187038;
        case 0x18703cu: goto label_18703c;
        case 0x187040u: goto label_187040;
        case 0x187044u: goto label_187044;
        case 0x187048u: goto label_187048;
        case 0x18704cu: goto label_18704c;
        case 0x187050u: goto label_187050;
        case 0x187054u: goto label_187054;
        case 0x187058u: goto label_187058;
        case 0x18705cu: goto label_18705c;
        case 0x187060u: goto label_187060;
        case 0x187064u: goto label_187064;
        case 0x187068u: goto label_187068;
        case 0x18706cu: goto label_18706c;
        case 0x187070u: goto label_187070;
        case 0x187074u: goto label_187074;
        case 0x187078u: goto label_187078;
        case 0x18707cu: goto label_18707c;
        case 0x187080u: goto label_187080;
        case 0x187084u: goto label_187084;
        case 0x187088u: goto label_187088;
        case 0x18708cu: goto label_18708c;
        case 0x187090u: goto label_187090;
        case 0x187094u: goto label_187094;
        case 0x187098u: goto label_187098;
        case 0x18709cu: goto label_18709c;
        case 0x1870a0u: goto label_1870a0;
        case 0x1870a4u: goto label_1870a4;
        case 0x1870a8u: goto label_1870a8;
        case 0x1870acu: goto label_1870ac;
        case 0x1870b0u: goto label_1870b0;
        case 0x1870b4u: goto label_1870b4;
        case 0x1870b8u: goto label_1870b8;
        case 0x1870bcu: goto label_1870bc;
        case 0x1870c0u: goto label_1870c0;
        case 0x1870c4u: goto label_1870c4;
        case 0x1870c8u: goto label_1870c8;
        case 0x1870ccu: goto label_1870cc;
        case 0x1870d0u: goto label_1870d0;
        case 0x1870d4u: goto label_1870d4;
        case 0x1870d8u: goto label_1870d8;
        case 0x1870dcu: goto label_1870dc;
        case 0x1870e0u: goto label_1870e0;
        case 0x1870e4u: goto label_1870e4;
        case 0x1870e8u: goto label_1870e8;
        case 0x1870ecu: goto label_1870ec;
        case 0x1870f0u: goto label_1870f0;
        case 0x1870f4u: goto label_1870f4;
        case 0x1870f8u: goto label_1870f8;
        case 0x1870fcu: goto label_1870fc;
        case 0x187100u: goto label_187100;
        case 0x187104u: goto label_187104;
        case 0x187108u: goto label_187108;
        case 0x18710cu: goto label_18710c;
        case 0x187110u: goto label_187110;
        case 0x187114u: goto label_187114;
        default: break;
    }

    ctx->pc = 0x186fe8u;

label_186fe8:
    // 0x186fe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_186fec:
    // 0x186fec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x186fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_186ff0:
    // 0x186ff0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x186ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_186ff4:
    // 0x186ff4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x186ff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186ff8:
    // 0x186ff8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x186ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_186ffc:
    // 0x186ffc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x186ffcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_187000:
    // 0x187000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187004:
    // 0x187004: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187008:
    // 0x187008: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x187008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_18700c:
    // 0x18700c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_187010:
    // 0x187010: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x187010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_187014:
    // 0x187014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x187014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_187018:
    // 0x187018: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x187018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_18701c:
    // 0x18701c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187020:
    if (ctx->pc == 0x187020u) {
        ctx->pc = 0x187020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18701Cu;
        // 0x187020: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187024u;
        goto label_187024;
    }
    ctx->pc = 0x18701Cu;
    {
        const bool branch_taken_0x18701c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18701Cu;
        // 0x187020: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18701c) {
            ctx->pc = 0x187034u;
            goto label_187034;
        }
    }
    ctx->pc = 0x187024u;
label_187024:
    // 0x187024: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187028:
    // 0x187028: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x187028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18702c:
    // 0x18702c: 0x40f809  jalr        $v0
label_187030:
    if (ctx->pc == 0x187030u) {
        ctx->pc = 0x187034u;
        goto label_187034;
    }
    ctx->pc = 0x18702Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187034u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18702Cu, 0x187034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187034u;
label_187034:
    // 0x187034: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x187034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_187038:
    // 0x187038: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_18703c:
    if (ctx->pc == 0x18703Cu) {
        ctx->pc = 0x18703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187038u;
        // 0x18703c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187040u;
        goto label_187040;
    }
    ctx->pc = 0x187038u;
    {
        const bool branch_taken_0x187038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187038u;
        // 0x18703c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187038) {
            ctx->pc = 0x1870D0u;
            goto label_1870d0;
        }
    }
    ctx->pc = 0x187040u;
label_187040:
    // 0x187040: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x187040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_187044:
    // 0x187044: 0xc0f5240  jal         func_3D4900
label_187048:
    if (ctx->pc == 0x187048u) {
        ctx->pc = 0x187048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187044u;
        // 0x187048: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18704Cu;
        goto label_18704c;
    }
    ctx->pc = 0x187044u;
    SET_GPR_U32(ctx, 31, 0x18704Cu);
    ctx->pc = 0x187048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187044u;
    // 0x187048: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187044u, 0x18704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18704Cu;
label_18704c:
    // 0x18704c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18704cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187050:
    // 0x187050: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x187050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_187054:
    // 0x187054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187058:
    // 0x187058: 0xc061a32  jal         func_1868C8
label_18705c:
    if (ctx->pc == 0x18705Cu) {
        ctx->pc = 0x18705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187058u;
        // 0x18705c: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187060u;
        goto label_187060;
    }
    ctx->pc = 0x187058u;
    SET_GPR_U32(ctx, 31, 0x187060u);
    ctx->pc = 0x18705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187058u;
    // 0x18705c: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x187058u, 0x187060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187060u;
label_187060:
    // 0x187060: 0x26130040  addiu       $s3, $s0, 0x40
    ctx->pc = 0x187060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_187064:
    // 0x187064: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x187064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_187068:
    // 0x187068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x187068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18706c:
    // 0x18706c: 0x244212f0  addiu       $v0, $v0, 0x12F0
    ctx->pc = 0x18706cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4848));
label_187070:
    // 0x187070: 0xc0f6a96  jal         func_3DAA58
label_187074:
    if (ctx->pc == 0x187074u) {
        ctx->pc = 0x187074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187070u;
        // 0x187074: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187078u;
        goto label_187078;
    }
    ctx->pc = 0x187070u;
    SET_GPR_U32(ctx, 31, 0x187078u);
    ctx->pc = 0x187074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187070u;
    // 0x187074: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187070u, 0x187078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187078u;
label_187078:
    // 0x187078: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x187078u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
label_18707c:
    // 0x18707c: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x18707cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
label_187080:
    // 0x187080: 0x26310f90  addiu       $s1, $s1, 0xF90
    ctx->pc = 0x187080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3984));
label_187084:
    // 0x187084: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x187084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_187088:
    // 0x187088: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x187088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
label_18708c:
    // 0x18708c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18708cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_187090:
    // 0x187090: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x187090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_187094:
    // 0x187094: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x187094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_187098:
    // 0x187098: 0xc0f6a96  jal         func_3DAA58
label_18709c:
    if (ctx->pc == 0x18709Cu) {
        ctx->pc = 0x18709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187098u;
        // 0x18709c: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870A0u;
        goto label_1870a0;
    }
    ctx->pc = 0x187098u;
    SET_GPR_U32(ctx, 31, 0x1870A0u);
    ctx->pc = 0x18709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187098u;
    // 0x18709c: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187098u, 0x1870A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870A0u;
label_1870a0:
    // 0x1870a0: 0xae710018  sw          $s1, 0x18($s3)
    ctx->pc = 0x1870a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 17));
label_1870a4:
    // 0x1870a4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1870a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1870a8:
    // 0x1870a8: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x1870a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
label_1870ac:
    // 0x1870ac: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1870acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_1870b0:
    // 0x1870b0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1870b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1870b4:
    // 0x1870b4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1870b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1870b8:
    // 0x1870b8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1870b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1870bc:
    // 0x1870bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1870bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1870c0:
    // 0x1870c0: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x1870c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_1870c4:
    // 0x1870c4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1870c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1870c8:
    // 0x1870c8: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1870c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_1870cc:
    // 0x1870cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1870ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1870d0:
    // 0x1870d0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1870d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1870d4:
    // 0x1870d4: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x1870d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_1870d8:
    // 0x1870d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1870d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1870dc:
    // 0x1870dc: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x1870dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1870e0:
    // 0x1870e0: 0xe0f809  jalr        $a3
label_1870e4:
    if (ctx->pc == 0x1870E4u) {
        ctx->pc = 0x1870E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870E0u;
        // 0x1870e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870E8u;
        goto label_1870e8;
    }
    ctx->pc = 0x1870E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1870E8u);
        ctx->pc = 0x1870E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870E0u;
        // 0x1870e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1870E0u, 0x1870E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1870E8u;
label_1870e8:
    // 0x1870e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1870e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1870ec:
    // 0x1870ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1870ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1870f0:
    // 0x1870f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1870f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1870f4:
    // 0x1870f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1870f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1870f8:
    // 0x1870f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1870f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1870fc:
    // 0x1870fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1870fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_187100:
    // 0x187100: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x187100u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_187104:
    // 0x187104: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x187104u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_187108:
    // 0x187108: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x187108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18710c:
    // 0x18710c: 0x3e00008  jr          $ra
label_187110:
    if (ctx->pc == 0x187110u) {
        ctx->pc = 0x187110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18710Cu;
        // 0x187110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187114u;
        goto label_187114;
    }
    ctx->pc = 0x18710Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18710Cu;
        // 0x187110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18710Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187114u;
label_187114:
    // 0x187114: 0x0  nop
    ctx->pc = 0x187114u;
    // NOP
    ctx->pc = 0x187118u;
}
