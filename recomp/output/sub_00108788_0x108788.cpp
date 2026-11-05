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

// Function: sub_00108788
// Address: 0x108788 - 0x1088d8
void sub_00108788_0x108788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108788_0x108788");
#endif

    switch (ctx->pc) {
        case 0x1087a8u: goto label_1087a8;
        case 0x108804u: goto label_108804;
        case 0x108814u: goto label_108814;
        case 0x108824u: goto label_108824;
        case 0x108834u: goto label_108834;
        case 0x108848u: goto label_108848;
        case 0x10885cu: goto label_10885c;
        case 0x10886cu: goto label_10886c;
        case 0x108880u: goto label_108880;
        case 0x108890u: goto label_108890;
        case 0x1088a4u: goto label_1088a4;
        default: break;
    }

    ctx->pc = 0x108788u;

    // 0x108788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10878c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10878cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108790: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x108790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x108794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108798: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10879c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10879cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1087a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1087a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1087a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1087a8:
    // 0x1087a8: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x1087a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x1087ac: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x1087acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1087b0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1087B0u;
    {
        const bool branch_taken_0x1087b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1087b0) {
            ctx->pc = 0x1087B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1087B0u;
            // 0x1087b4: 0x92020045  lbu         $v0, 0x45($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1087C0u;
            goto label_1087c0;
        }
    }
    ctx->pc = 0x1087B8u;
    // 0x1087b8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1087B8u;
    {
        const bool branch_taken_0x1087b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087B8u;
        // 0x1087bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087b8) {
            ctx->pc = 0x1088B8u;
            goto label_1088b8;
        }
    }
    ctx->pc = 0x1087C0u;
label_1087c0:
    // 0x1087c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1087c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1087c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1087c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1087c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1087cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1087ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1087d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1087d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1087d4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1087d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1087d8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1087D8u;
    {
        const bool branch_taken_0x1087d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1087DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087D8u;
        // 0x1087dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087d8) {
            ctx->pc = 0x1088A4u;
            goto label_1088a4;
        }
    }
    ctx->pc = 0x1087E0u;
    // 0x1087e0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1087e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1087e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1087e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1087e8: 0x2442a5f0  addiu       $v0, $v0, -0x5A10
    ctx->pc = 0x1087e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944240));
    // 0x1087ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1087ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1087f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1087f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1087f4: 0x800008  jr          $a0
    ctx->pc = 0x1087F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1087FCu: goto label_1087fc;
            case 0x10881Cu: goto label_10881c;
            case 0x10883Cu: goto label_10883c;
            case 0x108850u: goto label_108850;
            case 0x108864u: goto label_108864;
            case 0x108888u: goto label_108888;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1087F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1087FCu;
label_1087fc:
    // 0x1087fc: 0xc0422b0  jal         func_108AC0
    ctx->pc = 0x1087FCu;
    SET_GPR_U32(ctx, 31, 0x108804u);
    ctx->pc = 0x108800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087FCu;
    // 0x108800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AC0u, 0x1087FCu, 0x108804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108804u;
label_108804:
    // 0x108804: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x108804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10880c: 0xc0422b8  jal         func_108AE0
    ctx->pc = 0x10880Cu;
    SET_GPR_U32(ctx, 31, 0x108814u);
    ctx->pc = 0x108810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10880Cu;
    // 0x108810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x10880Cu, 0x108814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108814u;
label_108814:
    // 0x108814: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x108814u;
    {
        const bool branch_taken_0x108814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108814u;
        // 0x108818: 0x92020045  lbu         $v0, 0x45($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108814) {
            ctx->pc = 0x1088A8u;
            goto label_1088a8;
        }
    }
    ctx->pc = 0x10881Cu;
label_10881c:
    // 0x10881c: 0xc0422b0  jal         func_108AC0
    ctx->pc = 0x10881Cu;
    SET_GPR_U32(ctx, 31, 0x108824u);
    ctx->pc = 0x108820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10881Cu;
    // 0x108820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AC0u, 0x10881Cu, 0x108824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108824u;
label_108824:
    // 0x108824: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x108824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10882c: 0xc0422da  jal         func_108B68
    ctx->pc = 0x10882Cu;
    SET_GPR_U32(ctx, 31, 0x108834u);
    ctx->pc = 0x108830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10882Cu;
    // 0x108830: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B68u, 0x10882Cu, 0x108834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108834u;
label_108834:
    // 0x108834: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x108834u;
    {
        const bool branch_taken_0x108834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108834u;
        // 0x108838: 0x92020045  lbu         $v0, 0x45($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108834) {
            ctx->pc = 0x1088A8u;
            goto label_1088a8;
        }
    }
    ctx->pc = 0x10883Cu;
label_10883c:
    // 0x10883c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108840: 0xc0422f0  jal         func_108BC0
    ctx->pc = 0x108840u;
    SET_GPR_U32(ctx, 31, 0x108848u);
    ctx->pc = 0x108844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108840u;
    // 0x108844: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108BC0u, 0x108840u, 0x108848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108848u;
label_108848:
    // 0x108848: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x108848u;
    {
        const bool branch_taken_0x108848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108848u;
        // 0x10884c: 0x92020045  lbu         $v0, 0x45($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108848) {
            ctx->pc = 0x1088A8u;
            goto label_1088a8;
        }
    }
    ctx->pc = 0x108850u;
label_108850:
    // 0x108850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108854: 0xc0422f6  jal         func_108BD8
    ctx->pc = 0x108854u;
    SET_GPR_U32(ctx, 31, 0x10885Cu);
    ctx->pc = 0x108858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108854u;
    // 0x108858: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108BD8u, 0x108854u, 0x10885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10885Cu;
label_10885c:
    // 0x10885c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10885Cu;
    {
        const bool branch_taken_0x10885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10885Cu;
        // 0x108860: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10885c) {
            ctx->pc = 0x1088A4u;
            goto label_1088a4;
        }
    }
    ctx->pc = 0x108864u;
label_108864:
    // 0x108864: 0xc0422b0  jal         func_108AC0
    ctx->pc = 0x108864u;
    SET_GPR_U32(ctx, 31, 0x10886Cu);
    ctx->pc = 0x108868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108864u;
    // 0x108868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AC0u, 0x108864u, 0x10886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10886Cu;
label_10886c:
    // 0x10886c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10886cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108878: 0xc04230a  jal         func_108C28
    ctx->pc = 0x108878u;
    SET_GPR_U32(ctx, 31, 0x108880u);
    ctx->pc = 0x10887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108878u;
    // 0x10887c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108C28u, 0x108878u, 0x108880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108880u;
label_108880:
    // 0x108880: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x108880u;
    {
        const bool branch_taken_0x108880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108880u;
        // 0x108884: 0x92020045  lbu         $v0, 0x45($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108880) {
            ctx->pc = 0x1088A8u;
            goto label_1088a8;
        }
    }
    ctx->pc = 0x108888u;
label_108888:
    // 0x108888: 0xc0422b0  jal         func_108AC0
    ctx->pc = 0x108888u;
    SET_GPR_U32(ctx, 31, 0x108890u);
    ctx->pc = 0x10888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108888u;
    // 0x10888c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AC0u, 0x108888u, 0x108890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108890u;
label_108890:
    // 0x108890: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x108890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108898: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10889c: 0xc042326  jal         func_108C98
    ctx->pc = 0x10889Cu;
    SET_GPR_U32(ctx, 31, 0x1088A4u);
    ctx->pc = 0x1088A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10889Cu;
    // 0x1088a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108C98u, 0x10889Cu, 0x1088A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1088A4u;
label_1088a4:
    // 0x1088a4: 0x92020045  lbu         $v0, 0x45($s0)
    ctx->pc = 0x1088a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
label_1088a8:
    // 0x1088a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1088a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1088ac: 0x1660ffbe  bnez        $s3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1088ACu;
    {
        const bool branch_taken_0x1088ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1088B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088ACu;
        // 0x1088b0: 0xa2020045  sb          $v0, 0x45($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1088ac) {
            ctx->pc = 0x1087A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1087a8;
        }
    }
    ctx->pc = 0x1088B4u;
    // 0x1088b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1088b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1088b8:
    // 0x1088b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1088b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1088bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1088bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1088c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1088c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1088c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1088c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1088c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1088c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1088cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1088CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1088D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088CCu;
        // 0x1088d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1088CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1088D4u;
    // 0x1088d4: 0x0  nop
    ctx->pc = 0x1088d4u;
    // NOP
    ctx->pc = 0x1088d8u;
}
