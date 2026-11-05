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

// Function: sub_003A43B8
// Address: 0x3a43b8 - 0x3a4530
void sub_003A43B8_0x3a43b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A43B8_0x3a43b8");
#endif

    switch (ctx->pc) {
        case 0x3a4408u: goto label_3a4408;
        case 0x3a4428u: goto label_3a4428;
        case 0x3a443cu: goto label_3a443c;
        case 0x3a445cu: goto label_3a445c;
        case 0x3a446cu: goto label_3a446c;
        case 0x3a4474u: goto label_3a4474;
        case 0x3a447cu: goto label_3a447c;
        case 0x3a4484u: goto label_3a4484;
        case 0x3a4490u: goto label_3a4490;
        case 0x3a44a8u: goto label_3a44a8;
        case 0x3a44b0u: goto label_3a44b0;
        default: break;
    }

    ctx->pc = 0x3a43b8u;

    // 0x3a43b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a43b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a43bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a43bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a43c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a43c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a43c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a43c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a43c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a43c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a43cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a43ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a43d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a43d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a43d4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A43D4u;
    {
        const bool branch_taken_0x3a43d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43D4u;
        // 0x3a43d8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43d4) {
            ctx->pc = 0x3A43E8u;
            goto label_3a43e8;
        }
    }
    ctx->pc = 0x3A43DCu;
    // 0x3a43dc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a43dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a43e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A43E0u;
    {
        const bool branch_taken_0x3a43e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43E0u;
        // 0x3a43e4: 0x24a5d7f0  addiu       $a1, $a1, -0x2810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43e0) {
            ctx->pc = 0x3A4420u;
            goto label_3a4420;
        }
    }
    ctx->pc = 0x3A43E8u;
label_3a43e8:
    // 0x3a43e8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A43E8u;
    {
        const bool branch_taken_0x3a43e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43E8u;
        // 0x3a43ec: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43e8) {
            ctx->pc = 0x3A4400u;
            goto label_3a4400;
        }
    }
    ctx->pc = 0x3A43F0u;
    // 0x3a43f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a43f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a43f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A43F4u;
    {
        const bool branch_taken_0x3a43f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43F4u;
        // 0x3a43f8: 0x24a5d818  addiu       $a1, $a1, -0x27E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43f4) {
            ctx->pc = 0x3A4420u;
            goto label_3a4420;
        }
    }
    ctx->pc = 0x3A43FCu;
    // 0x3a43fc: 0x0  nop
    ctx->pc = 0x3a43fcu;
    // NOP
label_3a4400:
    // 0x3a4400: 0xc0e90d8  jal         func_3A4360
    ctx->pc = 0x3A4400u;
    SET_GPR_U32(ctx, 31, 0x3A4408u);
    ctx->pc = 0x3A4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4360u, 0x3A4400u, 0x3A4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4408u;
label_3a4408:
    // 0x3a4408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a4408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a440c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A440Cu;
    {
        const bool branch_taken_0x3a440c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A440Cu;
        // 0x3a4410: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a440c) {
            ctx->pc = 0x3A4430u;
            goto label_3a4430;
        }
    }
    ctx->pc = 0x3A4414u;
    // 0x3a4414: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a4414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a4418: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a4418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a441c: 0x24a5d840  addiu       $a1, $a1, -0x27C0
    ctx->pc = 0x3a441cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957120));
label_3a4420:
    // 0x3a4420: 0xc0e8ff0  jal         func_3A3FC0
    ctx->pc = 0x3A4420u;
    SET_GPR_U32(ctx, 31, 0x3A4428u);
    ctx->pc = 0x3A3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FC0u, 0x3A4420u, 0x3A4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4428u;
label_3a4428:
    // 0x3a4428: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3A4428u;
    {
        const bool branch_taken_0x3a4428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4428u;
        // 0x3a442c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4428) {
            ctx->pc = 0x3A4510u;
            goto label_3a4510;
        }
    }
    ctx->pc = 0x3A4430u;
label_3a4430:
    // 0x3a4430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a4430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4434: 0xc0e9508  jal         func_3A5420
    ctx->pc = 0x3A4434u;
    SET_GPR_U32(ctx, 31, 0x3A443Cu);
    ctx->pc = 0x3A4438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4434u;
    // 0x3a4438: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5420u, 0x3A4434u, 0x3A443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A443Cu;
label_3a443c:
    // 0x3a443c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3a443cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3a4440: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A4440u;
    {
        const bool branch_taken_0x3a4440 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4440u;
        // 0x3a4444: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4440) {
            ctx->pc = 0x3A44C0u;
            goto label_3a44c0;
        }
    }
    ctx->pc = 0x3A4448u;
    // 0x3a4448: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x3a4448u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x3a444c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a444cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4450: 0x26103650  addiu       $s0, $s0, 0x3650
    ctx->pc = 0x3a4450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13904));
    // 0x3a4454: 0xc0e92ec  jal         func_3A4BB0
    ctx->pc = 0x3A4454u;
    SET_GPR_U32(ctx, 31, 0x3A445Cu);
    ctx->pc = 0x3A4458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4454u;
    // 0x3a4458: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BB0u, 0x3A4454u, 0x3A445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A445Cu;
label_3a445c:
    // 0x3a445c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a445cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a4460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a4460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4464: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A4464u;
    SET_GPR_U32(ctx, 31, 0x3A446Cu);
    ctx->pc = 0x3A4468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4464u;
    // 0x3a4468: 0x2484d870  addiu       $a0, $a0, -0x2790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A4464u, 0x3A446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A446Cu;
label_3a446c:
    // 0x3a446c: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A446Cu;
    SET_GPR_U32(ctx, 31, 0x3A4474u);
    ctx->pc = 0x3A4470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A446Cu;
    // 0x3a4470: 0x34048300  ori         $a0, $zero, 0x8300 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A446Cu, 0x3A4474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4474u;
label_3a4474:
    // 0x3a4474: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A4474u;
    SET_GPR_U32(ctx, 31, 0x3A447Cu);
    ctx->pc = 0x3A4478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4474u;
    // 0x3a4478: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A4474u, 0x3A447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A447Cu;
label_3a447c:
    // 0x3a447c: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A447Cu;
    SET_GPR_U32(ctx, 31, 0x3A4484u);
    ctx->pc = 0x3A4480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A447Cu;
    // 0x3a4480: 0x34048301  ori         $a0, $zero, 0x8301 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33537);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A447Cu, 0x3A4484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4484u;
label_3a4484:
    // 0x3a4484: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a4484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4488: 0xc0e8ffc  jal         func_3A3FF0
    ctx->pc = 0x3A4488u;
    SET_GPR_U32(ctx, 31, 0x3A4490u);
    ctx->pc = 0x3A448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4488u;
    // 0x3a448c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FF0u, 0x3A4488u, 0x3A4490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4490u;
label_3a4490:
    // 0x3a4490: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A4490u;
    {
        const bool branch_taken_0x3a4490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4490) {
            ctx->pc = 0x3A4494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4490u;
            // 0x3a4494: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A44B8u;
            goto label_3a44b8;
        }
    }
    ctx->pc = 0x3A4498u;
    // 0x3a4498: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a4498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a449c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a44a0: 0xc0e8ff0  jal         func_3A3FC0
    ctx->pc = 0x3A44A0u;
    SET_GPR_U32(ctx, 31, 0x3A44A8u);
    ctx->pc = 0x3A44A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A44A0u;
    // 0x3a44a4: 0x24a5d898  addiu       $a1, $a1, -0x2768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FC0u, 0x3A44A0u, 0x3A44A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A44A8u;
label_3a44a8:
    // 0x3a44a8: 0xc0e90e6  jal         func_3A4398
    ctx->pc = 0x3A44A8u;
    SET_GPR_U32(ctx, 31, 0x3A44B0u);
    ctx->pc = 0x3A44ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A44A8u;
    // 0x3a44ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4398u, 0x3A44A8u, 0x3A44B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A44B0u;
label_3a44b0:
    // 0x3a44b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3A44B0u;
    {
        const bool branch_taken_0x3a44b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44B0u;
        // 0x3a44b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a44b0) {
            ctx->pc = 0x3A4510u;
            goto label_3a4510;
        }
    }
    ctx->pc = 0x3A44B8u;
label_3a44b8:
    // 0x3a44b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A44B8u;
    {
        const bool branch_taken_0x3a44b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44B8u;
        // 0x3a44bc: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a44b8) {
            ctx->pc = 0x3A44C8u;
            goto label_3a44c8;
        }
    }
    ctx->pc = 0x3A44C0u;
label_3a44c0:
    // 0x3a44c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a44c4: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x3a44c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a44c8:
    // 0x3a44c8: 0x24a207ff  addiu       $v0, $a1, 0x7FF
    ctx->pc = 0x3a44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x3a44cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a44ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a44d0: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x3a44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x3a44d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a44d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a44d8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3a44d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3a44dc: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3a44dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a44e0: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x3a44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x3a44e4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3a44e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x3a44e8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x3a44e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x3a44ec: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3a44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3a44f0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3a44f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x3a44f4: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3a44f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a44f8: 0x16840004  bne         $s4, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A44F8u;
    {
        const bool branch_taken_0x3a44f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A44FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44F8u;
        // 0x3a44fc: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a44f8) {
            ctx->pc = 0x3A450Cu;
            goto label_3a450c;
        }
    }
    ctx->pc = 0x3A4500u;
    // 0x3a4500: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3a4500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3a4504: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4508: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3a4508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3a450c:
    // 0x3a450c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a450cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a4510:
    // 0x3a4510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a4510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a4514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a4518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a4518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a451c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a451cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a4520: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a4520u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4524: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a4524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a4528: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4528u;
        // 0x3a452c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4530u;
}
