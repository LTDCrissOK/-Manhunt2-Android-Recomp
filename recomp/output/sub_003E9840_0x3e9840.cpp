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

// Function: sub_003E9840
// Address: 0x3e9840 - 0x3e9978
void sub_003E9840_0x3e9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9840_0x3e9840");
#endif

    switch (ctx->pc) {
        case 0x3e9840u: goto label_3e9840;
        case 0x3e9844u: goto label_3e9844;
        case 0x3e9848u: goto label_3e9848;
        case 0x3e984cu: goto label_3e984c;
        case 0x3e9850u: goto label_3e9850;
        case 0x3e9854u: goto label_3e9854;
        case 0x3e9858u: goto label_3e9858;
        case 0x3e985cu: goto label_3e985c;
        case 0x3e9860u: goto label_3e9860;
        case 0x3e9864u: goto label_3e9864;
        case 0x3e9868u: goto label_3e9868;
        case 0x3e986cu: goto label_3e986c;
        case 0x3e9870u: goto label_3e9870;
        case 0x3e9874u: goto label_3e9874;
        case 0x3e9878u: goto label_3e9878;
        case 0x3e987cu: goto label_3e987c;
        case 0x3e9880u: goto label_3e9880;
        case 0x3e9884u: goto label_3e9884;
        case 0x3e9888u: goto label_3e9888;
        case 0x3e988cu: goto label_3e988c;
        case 0x3e9890u: goto label_3e9890;
        case 0x3e9894u: goto label_3e9894;
        case 0x3e9898u: goto label_3e9898;
        case 0x3e989cu: goto label_3e989c;
        case 0x3e98a0u: goto label_3e98a0;
        case 0x3e98a4u: goto label_3e98a4;
        case 0x3e98a8u: goto label_3e98a8;
        case 0x3e98acu: goto label_3e98ac;
        case 0x3e98b0u: goto label_3e98b0;
        case 0x3e98b4u: goto label_3e98b4;
        case 0x3e98b8u: goto label_3e98b8;
        case 0x3e98bcu: goto label_3e98bc;
        case 0x3e98c0u: goto label_3e98c0;
        case 0x3e98c4u: goto label_3e98c4;
        case 0x3e98c8u: goto label_3e98c8;
        case 0x3e98ccu: goto label_3e98cc;
        case 0x3e98d0u: goto label_3e98d0;
        case 0x3e98d4u: goto label_3e98d4;
        case 0x3e98d8u: goto label_3e98d8;
        case 0x3e98dcu: goto label_3e98dc;
        case 0x3e98e0u: goto label_3e98e0;
        case 0x3e98e4u: goto label_3e98e4;
        case 0x3e98e8u: goto label_3e98e8;
        case 0x3e98ecu: goto label_3e98ec;
        case 0x3e98f0u: goto label_3e98f0;
        case 0x3e98f4u: goto label_3e98f4;
        case 0x3e98f8u: goto label_3e98f8;
        case 0x3e98fcu: goto label_3e98fc;
        case 0x3e9900u: goto label_3e9900;
        case 0x3e9904u: goto label_3e9904;
        case 0x3e9908u: goto label_3e9908;
        case 0x3e990cu: goto label_3e990c;
        case 0x3e9910u: goto label_3e9910;
        case 0x3e9914u: goto label_3e9914;
        case 0x3e9918u: goto label_3e9918;
        case 0x3e991cu: goto label_3e991c;
        case 0x3e9920u: goto label_3e9920;
        case 0x3e9924u: goto label_3e9924;
        case 0x3e9928u: goto label_3e9928;
        case 0x3e992cu: goto label_3e992c;
        case 0x3e9930u: goto label_3e9930;
        case 0x3e9934u: goto label_3e9934;
        case 0x3e9938u: goto label_3e9938;
        case 0x3e993cu: goto label_3e993c;
        case 0x3e9940u: goto label_3e9940;
        case 0x3e9944u: goto label_3e9944;
        case 0x3e9948u: goto label_3e9948;
        case 0x3e994cu: goto label_3e994c;
        case 0x3e9950u: goto label_3e9950;
        case 0x3e9954u: goto label_3e9954;
        case 0x3e9958u: goto label_3e9958;
        case 0x3e995cu: goto label_3e995c;
        case 0x3e9960u: goto label_3e9960;
        case 0x3e9964u: goto label_3e9964;
        case 0x3e9968u: goto label_3e9968;
        case 0x3e996cu: goto label_3e996c;
        case 0x3e9970u: goto label_3e9970;
        case 0x3e9974u: goto label_3e9974;
        default: break;
    }

    ctx->pc = 0x3e9840u;

label_3e9840:
    // 0x3e9840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e9844:
    // 0x3e9844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e9844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3e9848:
    // 0x3e9848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3e984c:
    // 0x3e984c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e984cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9850:
    // 0x3e9850: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e9850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3e9854:
    // 0x3e9854: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e9854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3e9858:
    // 0x3e9858: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e985c:
    // 0x3e985c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3e9860:
    if (ctx->pc == 0x3E9860u) {
        ctx->pc = 0x3E9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E985Cu;
        // 0x3e9860: 0x24120044  addiu       $s2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9864u;
        goto label_3e9864;
    }
    ctx->pc = 0x3E985Cu;
    {
        const bool branch_taken_0x3e985c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E985Cu;
        // 0x3e9860: 0x24120044  addiu       $s2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e985c) {
            ctx->pc = 0x3E98DCu;
            goto label_3e98dc;
        }
    }
    ctx->pc = 0x3E9864u;
label_3e9864:
    // 0x3e9864: 0x0  nop
    ctx->pc = 0x3e9864u;
    // NOP
label_3e9868:
    // 0x3e9868: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e986c:
    // 0x3e986c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9870:
    // 0x3e9870: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3e9874:
    if (ctx->pc == 0x3E9874u) {
        ctx->pc = 0x3E9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9870u;
        // 0x3e9874: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9878u;
        goto label_3e9878;
    }
    ctx->pc = 0x3E9870u;
    {
        const bool branch_taken_0x3e9870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9870) {
            ctx->pc = 0x3E9874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9870u;
            // 0x3e9874: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E98CCu;
            goto label_3e98cc;
        }
    }
    ctx->pc = 0x3E9878u;
label_3e9878:
    // 0x3e9878: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e9878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3e987c:
    // 0x3e987c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3e987cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e9880:
    // 0x3e9880: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e9880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e9884:
    // 0x3e9884: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3e9888:
    if (ctx->pc == 0x3E9888u) {
        ctx->pc = 0x3E9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9884u;
        // 0x3e9888: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E988Cu;
        goto label_3e988c;
    }
    ctx->pc = 0x3E9884u;
    {
        const bool branch_taken_0x3e9884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e9884) {
            ctx->pc = 0x3E9888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9884u;
            // 0x3e9888: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E98B8u;
            goto label_3e98b8;
        }
    }
    ctx->pc = 0x3E988Cu;
label_3e988c:
    // 0x3e988c: 0x2610ffbc  addiu       $s0, $s0, -0x44
    ctx->pc = 0x3e988cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967228));
label_3e9890:
    // 0x3e9890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9894:
    // 0x3e9894: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x3e9894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3e9898:
    // 0x3e9898: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e9898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e989c:
    // 0x3e989c: 0x40f809  jalr        $v0
label_3e98a0:
    if (ctx->pc == 0x3E98A0u) {
        ctx->pc = 0x3E98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E989Cu;
        // 0x3e98a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E98A4u;
        goto label_3e98a4;
    }
    ctx->pc = 0x3E989Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E98A4u);
        ctx->pc = 0x3E98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E989Cu;
        // 0x3e98a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E989Cu, 0x3E98A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E98A4u;
label_3e98a4:
    // 0x3e98a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e98a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e98a8:
    // 0x3e98a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e98ac:
    // 0x3e98ac: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3e98b0:
    if (ctx->pc == 0x3E98B0u) {
        ctx->pc = 0x3E98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98ACu;
        // 0x3e98b0: 0x2610ffbc  addiu       $s0, $s0, -0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E98B4u;
        goto label_3e98b4;
    }
    ctx->pc = 0x3E98ACu;
    {
        const bool branch_taken_0x3e98ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98ACu;
        // 0x3e98b0: 0x2610ffbc  addiu       $s0, $s0, -0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e98ac) {
            ctx->pc = 0x3E9890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9890;
        }
    }
    ctx->pc = 0x3E98B4u;
label_3e98b4:
    // 0x3e98b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e98b8:
    // 0x3e98b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e98b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e98bc:
    // 0x3e98bc: 0xc0f528a  jal         func_3D4A28
label_3e98c0:
    if (ctx->pc == 0x3E98C0u) {
        ctx->pc = 0x3E98C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98BCu;
        // 0x3e98c0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E98C4u;
        goto label_3e98c4;
    }
    ctx->pc = 0x3E98BCu;
    SET_GPR_U32(ctx, 31, 0x3E98C4u);
    ctx->pc = 0x3E98C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E98BCu;
    // 0x3e98c0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E98BCu, 0x3E98C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E98C4u;
label_3e98c4:
    // 0x3e98c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e98c8:
    // 0x3e98c8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e98c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e98cc:
    // 0x3e98cc: 0xc0f5222  jal         func_3D4888
label_3e98d0:
    if (ctx->pc == 0x3E98D0u) {
        ctx->pc = 0x3E98D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98CCu;
        // 0x3e98d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E98D4u;
        goto label_3e98d4;
    }
    ctx->pc = 0x3E98CCu;
    SET_GPR_U32(ctx, 31, 0x3E98D4u);
    ctx->pc = 0x3E98D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E98CCu;
    // 0x3e98d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E98CCu, 0x3E98D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E98D4u;
label_3e98d4:
    // 0x3e98d4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3e98d8:
    if (ctx->pc == 0x3E98D8u) {
        ctx->pc = 0x3E98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98D4u;
        // 0x3e98d8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E98DCu;
        goto label_3e98dc;
    }
    ctx->pc = 0x3E98D4u;
    {
        const bool branch_taken_0x3e98d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98D4u;
        // 0x3e98d8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e98d4) {
            ctx->pc = 0x3E9868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9868;
        }
    }
    ctx->pc = 0x3E98DCu;
label_3e98dc:
    // 0x3e98dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e98e0:
    // 0x3e98e0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3e98e4:
    if (ctx->pc == 0x3E98E4u) {
        ctx->pc = 0x3E98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98E0u;
        // 0x3e98e4: 0x24120044  addiu       $s2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E98E8u;
        goto label_3e98e8;
    }
    ctx->pc = 0x3E98E0u;
    {
        const bool branch_taken_0x3e98e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98E0u;
        // 0x3e98e4: 0x24120044  addiu       $s2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e98e0) {
            ctx->pc = 0x3E995Cu;
            goto label_3e995c;
        }
    }
    ctx->pc = 0x3E98E8u;
label_3e98e8:
    // 0x3e98e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e98ec:
    // 0x3e98ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e98f0:
    // 0x3e98f0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3e98f4:
    if (ctx->pc == 0x3E98F4u) {
        ctx->pc = 0x3E98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98F0u;
        // 0x3e98f4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E98F8u;
        goto label_3e98f8;
    }
    ctx->pc = 0x3E98F0u;
    {
        const bool branch_taken_0x3e98f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e98f0) {
            ctx->pc = 0x3E98F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E98F0u;
            // 0x3e98f4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E994Cu;
            goto label_3e994c;
        }
    }
    ctx->pc = 0x3E98F8u;
label_3e98f8:
    // 0x3e98f8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3e98fc:
    // 0x3e98fc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3e98fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e9900:
    // 0x3e9900: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e9900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e9904:
    // 0x3e9904: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3e9908:
    if (ctx->pc == 0x3E9908u) {
        ctx->pc = 0x3E9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9904u;
        // 0x3e9908: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E990Cu;
        goto label_3e990c;
    }
    ctx->pc = 0x3E9904u;
    {
        const bool branch_taken_0x3e9904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e9904) {
            ctx->pc = 0x3E9908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9904u;
            // 0x3e9908: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9938u;
            goto label_3e9938;
        }
    }
    ctx->pc = 0x3E990Cu;
label_3e990c:
    // 0x3e990c: 0x2610ffbc  addiu       $s0, $s0, -0x44
    ctx->pc = 0x3e990cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967228));
label_3e9910:
    // 0x3e9910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9914:
    // 0x3e9914: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x3e9914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3e9918:
    // 0x3e9918: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e9918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e991c:
    // 0x3e991c: 0x40f809  jalr        $v0
label_3e9920:
    if (ctx->pc == 0x3E9920u) {
        ctx->pc = 0x3E9920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E991Cu;
        // 0x3e9920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9924u;
        goto label_3e9924;
    }
    ctx->pc = 0x3E991Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9924u);
        ctx->pc = 0x3E9920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E991Cu;
        // 0x3e9920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E991Cu, 0x3E9924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9924u;
label_3e9924:
    // 0x3e9924: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e9924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9928:
    // 0x3e9928: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e9928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e992c:
    // 0x3e992c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3e9930:
    if (ctx->pc == 0x3E9930u) {
        ctx->pc = 0x3E9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E992Cu;
        // 0x3e9930: 0x2610ffbc  addiu       $s0, $s0, -0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9934u;
        goto label_3e9934;
    }
    ctx->pc = 0x3E992Cu;
    {
        const bool branch_taken_0x3e992c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E992Cu;
        // 0x3e9930: 0x2610ffbc  addiu       $s0, $s0, -0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e992c) {
            ctx->pc = 0x3E9910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9910;
        }
    }
    ctx->pc = 0x3E9934u;
label_3e9934:
    // 0x3e9934: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9938:
    // 0x3e9938: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e993c:
    // 0x3e993c: 0xc0f528a  jal         func_3D4A28
label_3e9940:
    if (ctx->pc == 0x3E9940u) {
        ctx->pc = 0x3E9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E993Cu;
        // 0x3e9940: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9944u;
        goto label_3e9944;
    }
    ctx->pc = 0x3E993Cu;
    SET_GPR_U32(ctx, 31, 0x3E9944u);
    ctx->pc = 0x3E9940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E993Cu;
    // 0x3e9940: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E993Cu, 0x3E9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9944u;
label_3e9944:
    // 0x3e9944: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9948:
    // 0x3e9948: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e994c:
    // 0x3e994c: 0xc0f5222  jal         func_3D4888
label_3e9950:
    if (ctx->pc == 0x3E9950u) {
        ctx->pc = 0x3E9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E994Cu;
        // 0x3e9950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9954u;
        goto label_3e9954;
    }
    ctx->pc = 0x3E994Cu;
    SET_GPR_U32(ctx, 31, 0x3E9954u);
    ctx->pc = 0x3E9950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E994Cu;
    // 0x3e9950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E994Cu, 0x3E9954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9954u;
label_3e9954:
    // 0x3e9954: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3e9958:
    if (ctx->pc == 0x3E9958u) {
        ctx->pc = 0x3E9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9954u;
        // 0x3e9958: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E995Cu;
        goto label_3e995c;
    }
    ctx->pc = 0x3E9954u;
    {
        const bool branch_taken_0x3e9954 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9954u;
        // 0x3e9958: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9954) {
            ctx->pc = 0x3E98E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e98e8;
        }
    }
    ctx->pc = 0x3E995Cu;
label_3e995c:
    // 0x3e995c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e995cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e9960:
    // 0x3e9960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e9960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9964:
    // 0x3e9964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e9964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3e9968:
    // 0x3e9968: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e9968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e996c:
    // 0x3e996c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e996cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3e9970:
    // 0x3e9970: 0x3e00008  jr          $ra
label_3e9974:
    if (ctx->pc == 0x3E9974u) {
        ctx->pc = 0x3E9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9970u;
        // 0x3e9974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9978u;
        goto label_fallthrough_0x3e9970;
    }
    ctx->pc = 0x3E9970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9970u;
        // 0x3e9974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e9970:
    ctx->pc = 0x3E9978u;
}
