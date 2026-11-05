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

// Function: sub_001FD7F0
// Address: 0x1fd7f0 - 0x1fd948
void sub_001FD7F0_0x1fd7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD7F0_0x1fd7f0");
#endif

    switch (ctx->pc) {
        case 0x1fd838u: goto label_1fd838;
        case 0x1fd860u: goto label_1fd860;
        case 0x1fd870u: goto label_1fd870;
        case 0x1fd878u: goto label_1fd878;
        case 0x1fd880u: goto label_1fd880;
        case 0x1fd88cu: goto label_1fd88c;
        case 0x1fd8a0u: goto label_1fd8a0;
        case 0x1fd8b4u: goto label_1fd8b4;
        case 0x1fd8c4u: goto label_1fd8c4;
        case 0x1fd8e4u: goto label_1fd8e4;
        case 0x1fd8ecu: goto label_1fd8ec;
        case 0x1fd8fcu: goto label_1fd8fc;
        case 0x1fd908u: goto label_1fd908;
        case 0x1fd914u: goto label_1fd914;
        default: break;
    }

    ctx->pc = 0x1fd7f0u;

    // 0x1fd7f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fd7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fd7f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd7f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fd7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fd7fc: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1fd7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd800: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fd800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fd804: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fd804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd808: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd80c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fd80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fd810: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fd810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fd814: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fd814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fd818: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1fd818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fd81c: 0x1050002b  beq         $v0, $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1FD81Cu;
    {
        const bool branch_taken_0x1fd81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1FD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD81Cu;
        // 0x1fd820: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd81c) {
            ctx->pc = 0x1FD8CCu;
            goto label_1fd8cc;
        }
    }
    ctx->pc = 0x1FD824u;
    // 0x1fd824: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x1fd824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1fd828: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1FD828u;
    {
        const bool branch_taken_0x1fd828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD828u;
        // 0x1fd82c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd828) {
            ctx->pc = 0x1FD924u;
            goto label_1fd924;
        }
    }
    ctx->pc = 0x1FD830u;
    // 0x1fd830: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1FD830u;
    SET_GPR_U32(ctx, 31, 0x1FD838u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1FD830u, 0x1FD838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD838u;
label_1fd838:
    // 0x1fd838: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fd838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd83c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1fd83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fd840: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD840u;
    {
        const bool branch_taken_0x1fd840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1FD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD840u;
        // 0x1fd844: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd840) {
            ctx->pc = 0x1FD850u;
            goto label_1fd850;
        }
    }
    ctx->pc = 0x1FD848u;
    // 0x1fd848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD848u;
    {
        const bool branch_taken_0x1fd848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD848u;
        // 0x1fd84c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd848) {
            ctx->pc = 0x1FD858u;
            goto label_1fd858;
        }
    }
    ctx->pc = 0x1FD850u;
label_1fd850:
    // 0x1fd850: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fd850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd854: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1fd854u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1fd858:
    // 0x1fd858: 0xc08153c  jal         func_2054F0
    ctx->pc = 0x1FD858u;
    SET_GPR_U32(ctx, 31, 0x1FD860u);
    ctx->pc = 0x1FD85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD858u;
    // 0x1fd85c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2054F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2054F0u, 0x1FD858u, 0x1FD860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD860u;
label_1fd860:
    // 0x1fd860: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1FD860u;
    {
        const bool branch_taken_0x1fd860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD860u;
        // 0x1fd864: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd860) {
            ctx->pc = 0x1FD924u;
            goto label_1fd924;
        }
    }
    ctx->pc = 0x1FD868u;
    // 0x1fd868: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1FD868u;
    SET_GPR_U32(ctx, 31, 0x1FD870u);
    ctx->pc = 0x1FD86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD868u;
    // 0x1fd86c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1FD868u, 0x1FD870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD870u;
label_1fd870:
    // 0x1fd870: 0xc0821d6  jal         func_208758
    ctx->pc = 0x1FD870u;
    SET_GPR_U32(ctx, 31, 0x1FD878u);
    ctx->pc = 0x1FD874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD870u;
    // 0x1fd874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208758u, 0x1FD870u, 0x1FD878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD878u;
label_1fd878:
    // 0x1fd878: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1FD878u;
    SET_GPR_U32(ctx, 31, 0x1FD880u);
    ctx->pc = 0x1FD87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD878u;
    // 0x1fd87c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1FD878u, 0x1FD880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD880u;
label_1fd880:
    // 0x1fd880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd884: 0xc08217a  jal         func_2085E8
    ctx->pc = 0x1FD884u;
    SET_GPR_U32(ctx, 31, 0x1FD88Cu);
    ctx->pc = 0x1FD888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD884u;
    // 0x1fd888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x1FD884u, 0x1FD88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD88Cu;
label_1fd88c:
    // 0x1fd88c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd890: 0x12140024  beq         $s0, $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x1FD890u;
    {
        const bool branch_taken_0x1fd890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x1FD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD890u;
        // 0x1fd894: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd890) {
            ctx->pc = 0x1FD924u;
            goto label_1fd924;
        }
    }
    ctx->pc = 0x1FD898u;
    // 0x1fd898: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1FD898u;
    SET_GPR_U32(ctx, 31, 0x1FD8A0u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1FD898u, 0x1FD8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8A0u;
label_1fd8a0:
    // 0x1fd8a0: 0x240300f8  addiu       $v1, $zero, 0xF8
    ctx->pc = 0x1fd8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x1fd8a4: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x1fd8a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fd8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd8ac: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1FD8ACu;
    SET_GPR_U32(ctx, 31, 0x1FD8B4u);
    ctx->pc = 0x1FD8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD8ACu;
    // 0x1fd8b0: 0x8c510024  lw          $s1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1FD8ACu, 0x1FD8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8B4u;
label_1fd8b4:
    // 0x1fd8b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8bc: 0xc0820dc  jal         func_208370
    ctx->pc = 0x1FD8BCu;
    SET_GPR_U32(ctx, 31, 0x1FD8C4u);
    ctx->pc = 0x1FD8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD8BCu;
    // 0x1fd8c0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208370u, 0x1FD8BCu, 0x1FD8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8C4u;
label_1fd8c4:
    // 0x1fd8c4: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD8C4u;
    {
        const bool branch_taken_0x1fd8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1FD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8C4u;
        // 0x1fd8c8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8c4) {
            ctx->pc = 0x1FD8D4u;
            goto label_1fd8d4;
        }
    }
    ctx->pc = 0x1FD8CCu;
label_1fd8cc:
    // 0x1fd8cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FD8CCu;
    {
        const bool branch_taken_0x1fd8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8CCu;
        // 0x1fd8d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8cc) {
            ctx->pc = 0x1FD924u;
            goto label_1fd924;
        }
    }
    ctx->pc = 0x1FD8D4u;
label_1fd8d4:
    // 0x1fd8d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fd8d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fd8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8dc: 0xc081436  jal         func_2050D8
    ctx->pc = 0x1FD8DCu;
    SET_GPR_U32(ctx, 31, 0x1FD8E4u);
    ctx->pc = 0x1FD8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD8DCu;
    // 0x1fd8e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050D8u, 0x1FD8DCu, 0x1FD8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8E4u;
label_1fd8e4:
    // 0x1fd8e4: 0xc081710  jal         func_205C40
    ctx->pc = 0x1FD8E4u;
    SET_GPR_U32(ctx, 31, 0x1FD8ECu);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FD8E4u, 0x1FD8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8ECu;
label_1fd8ec:
    // 0x1fd8ec: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fd8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1fd8f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8f4: 0xc080616  jal         func_201858
    ctx->pc = 0x1FD8F4u;
    SET_GPR_U32(ctx, 31, 0x1FD8FCu);
    ctx->pc = 0x1FD8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD8F4u;
    // 0x1fd8f8: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201858u, 0x1FD8F4u, 0x1FD8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8FCu;
label_1fd8fc:
    // 0x1fd8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd900: 0xc0817d4  jal         func_205F50
    ctx->pc = 0x1FD900u;
    SET_GPR_U32(ctx, 31, 0x1FD908u);
    ctx->pc = 0x1FD904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD900u;
    // 0x1fd904: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1FD900u, 0x1FD908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD908u;
label_1fd908:
    // 0x1fd908: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fd908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd90c: 0xc081560  jal         func_205580
    ctx->pc = 0x1FD90Cu;
    SET_GPR_U32(ctx, 31, 0x1FD914u);
    ctx->pc = 0x1FD910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD90Cu;
    // 0x1fd910: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x1FD90Cu, 0x1FD914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD914u;
label_1fd914:
    // 0x1fd914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd918: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x1fd918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
    // 0x1fd91c: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x1fd91cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fd920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd924:
    // 0x1fd924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd92c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fd92cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd930: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fd930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fd934: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fd934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd938: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fd938u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fd93c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fd93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd940: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD940u;
        // 0x1fd944: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD948u;
}
