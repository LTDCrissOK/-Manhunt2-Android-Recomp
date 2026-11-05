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

// Function: sub_003EA7E0
// Address: 0x3ea7e0 - 0x3ea918
void sub_003EA7E0_0x3ea7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA7E0_0x3ea7e0");
#endif

    switch (ctx->pc) {
        case 0x3ea7e0u: goto label_3ea7e0;
        case 0x3ea7e4u: goto label_3ea7e4;
        case 0x3ea7e8u: goto label_3ea7e8;
        case 0x3ea7ecu: goto label_3ea7ec;
        case 0x3ea7f0u: goto label_3ea7f0;
        case 0x3ea7f4u: goto label_3ea7f4;
        case 0x3ea7f8u: goto label_3ea7f8;
        case 0x3ea7fcu: goto label_3ea7fc;
        case 0x3ea800u: goto label_3ea800;
        case 0x3ea804u: goto label_3ea804;
        case 0x3ea808u: goto label_3ea808;
        case 0x3ea80cu: goto label_3ea80c;
        case 0x3ea810u: goto label_3ea810;
        case 0x3ea814u: goto label_3ea814;
        case 0x3ea818u: goto label_3ea818;
        case 0x3ea81cu: goto label_3ea81c;
        case 0x3ea820u: goto label_3ea820;
        case 0x3ea824u: goto label_3ea824;
        case 0x3ea828u: goto label_3ea828;
        case 0x3ea82cu: goto label_3ea82c;
        case 0x3ea830u: goto label_3ea830;
        case 0x3ea834u: goto label_3ea834;
        case 0x3ea838u: goto label_3ea838;
        case 0x3ea83cu: goto label_3ea83c;
        case 0x3ea840u: goto label_3ea840;
        case 0x3ea844u: goto label_3ea844;
        case 0x3ea848u: goto label_3ea848;
        case 0x3ea84cu: goto label_3ea84c;
        case 0x3ea850u: goto label_3ea850;
        case 0x3ea854u: goto label_3ea854;
        case 0x3ea858u: goto label_3ea858;
        case 0x3ea85cu: goto label_3ea85c;
        case 0x3ea860u: goto label_3ea860;
        case 0x3ea864u: goto label_3ea864;
        case 0x3ea868u: goto label_3ea868;
        case 0x3ea86cu: goto label_3ea86c;
        case 0x3ea870u: goto label_3ea870;
        case 0x3ea874u: goto label_3ea874;
        case 0x3ea878u: goto label_3ea878;
        case 0x3ea87cu: goto label_3ea87c;
        case 0x3ea880u: goto label_3ea880;
        case 0x3ea884u: goto label_3ea884;
        case 0x3ea888u: goto label_3ea888;
        case 0x3ea88cu: goto label_3ea88c;
        case 0x3ea890u: goto label_3ea890;
        case 0x3ea894u: goto label_3ea894;
        case 0x3ea898u: goto label_3ea898;
        case 0x3ea89cu: goto label_3ea89c;
        case 0x3ea8a0u: goto label_3ea8a0;
        case 0x3ea8a4u: goto label_3ea8a4;
        case 0x3ea8a8u: goto label_3ea8a8;
        case 0x3ea8acu: goto label_3ea8ac;
        case 0x3ea8b0u: goto label_3ea8b0;
        case 0x3ea8b4u: goto label_3ea8b4;
        case 0x3ea8b8u: goto label_3ea8b8;
        case 0x3ea8bcu: goto label_3ea8bc;
        case 0x3ea8c0u: goto label_3ea8c0;
        case 0x3ea8c4u: goto label_3ea8c4;
        case 0x3ea8c8u: goto label_3ea8c8;
        case 0x3ea8ccu: goto label_3ea8cc;
        case 0x3ea8d0u: goto label_3ea8d0;
        case 0x3ea8d4u: goto label_3ea8d4;
        case 0x3ea8d8u: goto label_3ea8d8;
        case 0x3ea8dcu: goto label_3ea8dc;
        case 0x3ea8e0u: goto label_3ea8e0;
        case 0x3ea8e4u: goto label_3ea8e4;
        case 0x3ea8e8u: goto label_3ea8e8;
        case 0x3ea8ecu: goto label_3ea8ec;
        case 0x3ea8f0u: goto label_3ea8f0;
        case 0x3ea8f4u: goto label_3ea8f4;
        case 0x3ea8f8u: goto label_3ea8f8;
        case 0x3ea8fcu: goto label_3ea8fc;
        case 0x3ea900u: goto label_3ea900;
        case 0x3ea904u: goto label_3ea904;
        case 0x3ea908u: goto label_3ea908;
        case 0x3ea90cu: goto label_3ea90c;
        case 0x3ea910u: goto label_3ea910;
        case 0x3ea914u: goto label_3ea914;
        default: break;
    }

    ctx->pc = 0x3ea7e0u;

label_3ea7e0:
    // 0x3ea7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ea7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ea7e4:
    // 0x3ea7e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ea7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ea7e8:
    // 0x3ea7e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ea7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ea7ec:
    // 0x3ea7ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ea7ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea7f0:
    // 0x3ea7f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ea7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3ea7f4:
    // 0x3ea7f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ea7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3ea7f8:
    // 0x3ea7f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea7fc:
    // 0x3ea7fc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3ea800:
    if (ctx->pc == 0x3EA800u) {
        ctx->pc = 0x3EA800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7FCu;
        // 0x3ea800: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA804u;
        goto label_3ea804;
    }
    ctx->pc = 0x3EA7FCu;
    {
        const bool branch_taken_0x3ea7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7FCu;
        // 0x3ea800: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea7fc) {
            ctx->pc = 0x3EA87Cu;
            goto label_3ea87c;
        }
    }
    ctx->pc = 0x3EA804u;
label_3ea804:
    // 0x3ea804: 0x0  nop
    ctx->pc = 0x3ea804u;
    // NOP
label_3ea808:
    // 0x3ea808: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea80c:
    // 0x3ea80c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea810:
    // 0x3ea810: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea814:
    if (ctx->pc == 0x3EA814u) {
        ctx->pc = 0x3EA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA810u;
        // 0x3ea814: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA818u;
        goto label_3ea818;
    }
    ctx->pc = 0x3EA810u;
    {
        const bool branch_taken_0x3ea810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea810) {
            ctx->pc = 0x3EA814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA810u;
            // 0x3ea814: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA86Cu;
            goto label_3ea86c;
        }
    }
    ctx->pc = 0x3EA818u;
label_3ea818:
    // 0x3ea818: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea81c:
    // 0x3ea81c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea81cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea820:
    // 0x3ea820: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea824:
    // 0x3ea824: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea828:
    if (ctx->pc == 0x3EA828u) {
        ctx->pc = 0x3EA828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA824u;
        // 0x3ea828: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA82Cu;
        goto label_3ea82c;
    }
    ctx->pc = 0x3EA824u;
    {
        const bool branch_taken_0x3ea824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea824) {
            ctx->pc = 0x3EA828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA824u;
            // 0x3ea828: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA858u;
            goto label_3ea858;
        }
    }
    ctx->pc = 0x3EA82Cu;
label_3ea82c:
    // 0x3ea82c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea830:
    // 0x3ea830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea834:
    // 0x3ea834: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea838:
    // 0x3ea838: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea83c:
    // 0x3ea83c: 0x40f809  jalr        $v0
label_3ea840:
    if (ctx->pc == 0x3EA840u) {
        ctx->pc = 0x3EA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA83Cu;
        // 0x3ea840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA844u;
        goto label_3ea844;
    }
    ctx->pc = 0x3EA83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA844u);
        ctx->pc = 0x3EA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA83Cu;
        // 0x3ea840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA83Cu, 0x3EA844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA844u;
label_3ea844:
    // 0x3ea844: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ea844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea848:
    // 0x3ea848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea84c:
    // 0x3ea84c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea850:
    if (ctx->pc == 0x3EA850u) {
        ctx->pc = 0x3EA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA84Cu;
        // 0x3ea850: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA854u;
        goto label_3ea854;
    }
    ctx->pc = 0x3EA84Cu;
    {
        const bool branch_taken_0x3ea84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA84Cu;
        // 0x3ea850: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea84c) {
            ctx->pc = 0x3EA830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea830;
        }
    }
    ctx->pc = 0x3EA854u;
label_3ea854:
    // 0x3ea854: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea858:
    // 0x3ea858: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea85c:
    // 0x3ea85c: 0xc0f528a  jal         func_3D4A28
label_3ea860:
    if (ctx->pc == 0x3EA860u) {
        ctx->pc = 0x3EA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA85Cu;
        // 0x3ea860: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA864u;
        goto label_3ea864;
    }
    ctx->pc = 0x3EA85Cu;
    SET_GPR_U32(ctx, 31, 0x3EA864u);
    ctx->pc = 0x3EA860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA85Cu;
    // 0x3ea860: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA85Cu, 0x3EA864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA864u;
label_3ea864:
    // 0x3ea864: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea868:
    // 0x3ea868: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea86c:
    // 0x3ea86c: 0xc0f5222  jal         func_3D4888
label_3ea870:
    if (ctx->pc == 0x3EA870u) {
        ctx->pc = 0x3EA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA86Cu;
        // 0x3ea870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA874u;
        goto label_3ea874;
    }
    ctx->pc = 0x3EA86Cu;
    SET_GPR_U32(ctx, 31, 0x3EA874u);
    ctx->pc = 0x3EA870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA86Cu;
    // 0x3ea870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA86Cu, 0x3EA874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA874u;
label_3ea874:
    // 0x3ea874: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea878:
    if (ctx->pc == 0x3EA878u) {
        ctx->pc = 0x3EA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA874u;
        // 0x3ea878: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA87Cu;
        goto label_3ea87c;
    }
    ctx->pc = 0x3EA874u;
    {
        const bool branch_taken_0x3ea874 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA874u;
        // 0x3ea878: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea874) {
            ctx->pc = 0x3EA808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea808;
        }
    }
    ctx->pc = 0x3EA87Cu;
label_3ea87c:
    // 0x3ea87c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea880:
    // 0x3ea880: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ea884:
    if (ctx->pc == 0x3EA884u) {
        ctx->pc = 0x3EA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA880u;
        // 0x3ea884: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA888u;
        goto label_3ea888;
    }
    ctx->pc = 0x3EA880u;
    {
        const bool branch_taken_0x3ea880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA880u;
        // 0x3ea884: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea880) {
            ctx->pc = 0x3EA8FCu;
            goto label_3ea8fc;
        }
    }
    ctx->pc = 0x3EA888u;
label_3ea888:
    // 0x3ea888: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea88c:
    // 0x3ea88c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea890:
    // 0x3ea890: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea894:
    if (ctx->pc == 0x3EA894u) {
        ctx->pc = 0x3EA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA890u;
        // 0x3ea894: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA898u;
        goto label_3ea898;
    }
    ctx->pc = 0x3EA890u;
    {
        const bool branch_taken_0x3ea890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea890) {
            ctx->pc = 0x3EA894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA890u;
            // 0x3ea894: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA8ECu;
            goto label_3ea8ec;
        }
    }
    ctx->pc = 0x3EA898u;
label_3ea898:
    // 0x3ea898: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea89c:
    // 0x3ea89c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea89cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea8a0:
    // 0x3ea8a0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea8a4:
    // 0x3ea8a4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea8a8:
    if (ctx->pc == 0x3EA8A8u) {
        ctx->pc = 0x3EA8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8A4u;
        // 0x3ea8a8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA8ACu;
        goto label_3ea8ac;
    }
    ctx->pc = 0x3EA8A4u;
    {
        const bool branch_taken_0x3ea8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea8a4) {
            ctx->pc = 0x3EA8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA8A4u;
            // 0x3ea8a8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA8D8u;
            goto label_3ea8d8;
        }
    }
    ctx->pc = 0x3EA8ACu;
label_3ea8ac:
    // 0x3ea8ac: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea8acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea8b0:
    // 0x3ea8b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea8b4:
    // 0x3ea8b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea8b8:
    // 0x3ea8b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea8bc:
    // 0x3ea8bc: 0x40f809  jalr        $v0
label_3ea8c0:
    if (ctx->pc == 0x3EA8C0u) {
        ctx->pc = 0x3EA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8BCu;
        // 0x3ea8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA8C4u;
        goto label_3ea8c4;
    }
    ctx->pc = 0x3EA8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA8C4u);
        ctx->pc = 0x3EA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8BCu;
        // 0x3ea8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA8BCu, 0x3EA8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA8C4u;
label_3ea8c4:
    // 0x3ea8c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ea8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea8c8:
    // 0x3ea8c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea8cc:
    // 0x3ea8cc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea8d0:
    if (ctx->pc == 0x3EA8D0u) {
        ctx->pc = 0x3EA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8CCu;
        // 0x3ea8d0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA8D4u;
        goto label_3ea8d4;
    }
    ctx->pc = 0x3EA8CCu;
    {
        const bool branch_taken_0x3ea8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8CCu;
        // 0x3ea8d0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea8cc) {
            ctx->pc = 0x3EA8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea8b0;
        }
    }
    ctx->pc = 0x3EA8D4u;
label_3ea8d4:
    // 0x3ea8d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea8d8:
    // 0x3ea8d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea8dc:
    // 0x3ea8dc: 0xc0f528a  jal         func_3D4A28
label_3ea8e0:
    if (ctx->pc == 0x3EA8E0u) {
        ctx->pc = 0x3EA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8DCu;
        // 0x3ea8e0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA8E4u;
        goto label_3ea8e4;
    }
    ctx->pc = 0x3EA8DCu;
    SET_GPR_U32(ctx, 31, 0x3EA8E4u);
    ctx->pc = 0x3EA8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA8DCu;
    // 0x3ea8e0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA8DCu, 0x3EA8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA8E4u;
label_3ea8e4:
    // 0x3ea8e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea8e8:
    // 0x3ea8e8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea8ec:
    // 0x3ea8ec: 0xc0f5222  jal         func_3D4888
label_3ea8f0:
    if (ctx->pc == 0x3EA8F0u) {
        ctx->pc = 0x3EA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8ECu;
        // 0x3ea8f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA8F4u;
        goto label_3ea8f4;
    }
    ctx->pc = 0x3EA8ECu;
    SET_GPR_U32(ctx, 31, 0x3EA8F4u);
    ctx->pc = 0x3EA8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA8ECu;
    // 0x3ea8f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA8ECu, 0x3EA8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA8F4u;
label_3ea8f4:
    // 0x3ea8f4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea8f8:
    if (ctx->pc == 0x3EA8F8u) {
        ctx->pc = 0x3EA8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8F4u;
        // 0x3ea8f8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA8FCu;
        goto label_3ea8fc;
    }
    ctx->pc = 0x3EA8F4u;
    {
        const bool branch_taken_0x3ea8f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8F4u;
        // 0x3ea8f8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea8f4) {
            ctx->pc = 0x3EA888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea888;
        }
    }
    ctx->pc = 0x3EA8FCu;
label_3ea8fc:
    // 0x3ea8fc: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3ea8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3ea900:
    // 0x3ea900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ea900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea904:
    // 0x3ea904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ea904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ea908:
    // 0x3ea908: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ea908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea90c:
    // 0x3ea90c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ea90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ea910:
    // 0x3ea910: 0x3e00008  jr          $ra
label_3ea914:
    if (ctx->pc == 0x3EA914u) {
        ctx->pc = 0x3EA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA910u;
        // 0x3ea914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA918u;
        goto label_fallthrough_0x3ea910;
    }
    ctx->pc = 0x3EA910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA910u;
        // 0x3ea914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea910:
    ctx->pc = 0x3EA918u;
}
