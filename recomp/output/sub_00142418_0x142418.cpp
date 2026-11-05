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

// Function: sub_00142418
// Address: 0x142418 - 0x142570
void sub_00142418_0x142418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142418_0x142418");
#endif

    switch (ctx->pc) {
        case 0x142438u: goto label_142438;
        case 0x142450u: goto label_142450;
        case 0x142460u: goto label_142460;
        case 0x142474u: goto label_142474;
        case 0x142484u: goto label_142484;
        case 0x142494u: goto label_142494;
        case 0x1424a4u: goto label_1424a4;
        case 0x1424b0u: goto label_1424b0;
        case 0x1424c0u: goto label_1424c0;
        case 0x1424c8u: goto label_1424c8;
        case 0x1424d8u: goto label_1424d8;
        case 0x1424fcu: goto label_1424fc;
        case 0x142508u: goto label_142508;
        case 0x142524u: goto label_142524;
        case 0x142538u: goto label_142538;
        case 0x142554u: goto label_142554;
        default: break;
    }

    ctx->pc = 0x142418u;

    // 0x142418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14241c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x142420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142424: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x142424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142428: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14242c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14242cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x142430: 0xc04e866  jal         func_13A198
    ctx->pc = 0x142430u;
    SET_GPR_U32(ctx, 31, 0x142438u);
    ctx->pc = 0x142434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142430u;
    // 0x142434: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x142430u, 0x142438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142438u;
label_142438:
    // 0x142438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14243c: 0x10430046  beq         $v0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x14243Cu;
    {
        const bool branch_taken_0x14243c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x142440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14243Cu;
        // 0x142440: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14243c) {
            ctx->pc = 0x142558u;
            goto label_142558;
        }
    }
    ctx->pc = 0x142444u;
    // 0x142444: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x142444u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x142448: 0xc04deee  jal         func_137BB8
    ctx->pc = 0x142448u;
    SET_GPR_U32(ctx, 31, 0x142450u);
    ctx->pc = 0x14244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142448u;
    // 0x14244c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137BB8u, 0x142448u, 0x142450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142450u;
label_142450:
    // 0x142450: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x142450u;
    {
        const bool branch_taken_0x142450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142450u;
        // 0x142454: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142450) {
            ctx->pc = 0x14247Cu;
            goto label_14247c;
        }
    }
    ctx->pc = 0x142458u;
    // 0x142458: 0xc050892  jal         func_142248
    ctx->pc = 0x142458u;
    SET_GPR_U32(ctx, 31, 0x142460u);
    ctx->pc = 0x14245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142458u;
    // 0x14245c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142248u, 0x142458u, 0x142460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142460u;
label_142460:
    // 0x142460: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x142460u;
    {
        const bool branch_taken_0x142460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142460) {
            ctx->pc = 0x142464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142460u;
            // 0x142464: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142558u;
            goto label_142558;
        }
    }
    ctx->pc = 0x142468u;
    // 0x142468: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x142468u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14246c: 0xc050874  jal         func_1421D0
    ctx->pc = 0x14246Cu;
    SET_GPR_U32(ctx, 31, 0x142474u);
    ctx->pc = 0x142470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14246Cu;
    // 0x142470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421D0u, 0x14246Cu, 0x142474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142474u;
label_142474:
    // 0x142474: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x142474u;
    {
        const bool branch_taken_0x142474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142474u;
        // 0x142478: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142474) {
            ctx->pc = 0x142488u;
            goto label_142488;
        }
    }
    ctx->pc = 0x14247Cu;
label_14247c:
    // 0x14247c: 0xc05088c  jal         func_142230
    ctx->pc = 0x14247Cu;
    SET_GPR_U32(ctx, 31, 0x142484u);
    ctx->pc = 0x142480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14247Cu;
    // 0x142480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142230u, 0x14247Cu, 0x142484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142484u;
label_142484:
    // 0x142484: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x142484u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
label_142488:
    // 0x142488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14248c: 0xc050868  jal         func_1421A0
    ctx->pc = 0x14248Cu;
    SET_GPR_U32(ctx, 31, 0x142494u);
    ctx->pc = 0x142490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14248Cu;
    // 0x142490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421A0u, 0x14248Cu, 0x142494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142494u;
label_142494:
    // 0x142494: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x142494u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x142498: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x142498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14249c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14249Cu;
    SET_GPR_U32(ctx, 31, 0x1424A4u);
    ctx->pc = 0x1424A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14249Cu;
    // 0x1424a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14249Cu, 0x1424A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424A4u;
label_1424a4:
    // 0x1424a4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1424a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1424a8: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1424A8u;
    SET_GPR_U32(ctx, 31, 0x1424B0u);
    ctx->pc = 0x1424ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424A8u;
    // 0x1424ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1424A8u, 0x1424B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424B0u;
label_1424b0:
    // 0x1424b0: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1424b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1424b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1424b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1424b8: 0xc04e860  jal         func_13A180
    ctx->pc = 0x1424B8u;
    SET_GPR_U32(ctx, 31, 0x1424C0u);
    ctx->pc = 0x1424BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424B8u;
    // 0x1424bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x1424B8u, 0x1424C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424C0u;
label_1424c0:
    // 0x1424c0: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x1424C0u;
    SET_GPR_U32(ctx, 31, 0x1424C8u);
    ctx->pc = 0x1424C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424C0u;
    // 0x1424c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x1424C0u, 0x1424C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424C8u;
label_1424c8:
    // 0x1424c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1424c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1424ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424d0: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1424D0u;
    SET_GPR_U32(ctx, 31, 0x1424D8u);
    ctx->pc = 0x1424D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424D0u;
    // 0x1424d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1424D0u, 0x1424D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424D8u;
label_1424d8:
    // 0x1424d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1424d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424dc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1424dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424e0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1424e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1424e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1424e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424e8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1424e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1424ec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1424ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1424f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1424f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424f4: 0xc04daca  jal         func_136B28
    ctx->pc = 0x1424F4u;
    SET_GPR_U32(ctx, 31, 0x1424FCu);
    ctx->pc = 0x1424F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424F4u;
    // 0x1424f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x1424F4u, 0x1424FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424FCu;
label_1424fc:
    // 0x1424fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1424fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142500: 0xc046030  jal         func_1180C0
    ctx->pc = 0x142500u;
    SET_GPR_U32(ctx, 31, 0x142508u);
    ctx->pc = 0x142504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142500u;
    // 0x142504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x142500u, 0x142508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142508u;
label_142508:
    // 0x142508: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x142508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14250c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14250cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142510: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x142510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142514: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x142514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x142518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14251c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14251Cu;
    SET_GPR_U32(ctx, 31, 0x142524u);
    ctx->pc = 0x142520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14251Cu;
    // 0x142520: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14251Cu, 0x142524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142524u;
label_142524:
    // 0x142524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142528: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14252c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14252cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142530: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x142530u;
    SET_GPR_U32(ctx, 31, 0x142538u);
    ctx->pc = 0x142534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142530u;
    // 0x142534: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x142530u, 0x142538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142538u;
label_142538:
    // 0x142538: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x142538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14253c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14253cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x142540: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x142540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x142544: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x142544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x142548: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x142548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14254c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14254Cu;
    SET_GPR_U32(ctx, 31, 0x142554u);
    ctx->pc = 0x142550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14254Cu;
    // 0x142550: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14254Cu, 0x142554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142554u;
label_142554:
    // 0x142554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142558:
    // 0x142558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14255c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14255cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142560: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x142560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x142564: 0x3e00008  jr          $ra
    ctx->pc = 0x142564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142564u;
        // 0x142568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14256Cu;
    // 0x14256c: 0x0  nop
    ctx->pc = 0x14256cu;
    // NOP
    ctx->pc = 0x142570u;
}
