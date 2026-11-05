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

// Function: sub_001443E0
// Address: 0x1443e0 - 0x144510
void sub_001443E0_0x1443e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001443E0_0x1443e0");
#endif

    switch (ctx->pc) {
        case 0x144404u: goto label_144404;
        case 0x144434u: goto label_144434;
        case 0x144440u: goto label_144440;
        case 0x144450u: goto label_144450;
        case 0x144458u: goto label_144458;
        case 0x144468u: goto label_144468;
        case 0x144480u: goto label_144480;
        case 0x1444a4u: goto label_1444a4;
        case 0x1444c0u: goto label_1444c0;
        case 0x1444d4u: goto label_1444d4;
        case 0x1444f0u: goto label_1444f0;
        default: break;
    }

    ctx->pc = 0x1443e0u;

    // 0x1443e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1443e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1443e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1443e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1443e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1443e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1443ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1443ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1443f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1443f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1443f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1443f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1443f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1443f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1443fc: 0xc04e866  jal         func_13A198
    ctx->pc = 0x1443FCu;
    SET_GPR_U32(ctx, 31, 0x144404u);
    ctx->pc = 0x144400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443FCu;
    // 0x144400: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x1443FCu, 0x144404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144404u;
label_144404:
    // 0x144404: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x144404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x144408: 0x10430039  beq         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x144408u;
    {
        const bool branch_taken_0x144408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144408u;
        // 0x14440c: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144408) {
            ctx->pc = 0x1444F0u;
            goto label_1444f0;
        }
    }
    ctx->pc = 0x144410u;
    // 0x144410: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x144410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144414: 0x8c620784  lw          $v0, 0x784($v1)
    ctx->pc = 0x144414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1924)));
    // 0x144418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14441c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x14441cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144420: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x144420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x144424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x144428: 0xac620784  sw          $v0, 0x784($v1)
    ctx->pc = 0x144428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1924), GPR_U32(ctx, 2));
    // 0x14442c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14442Cu;
    SET_GPR_U32(ctx, 31, 0x144434u);
    ctx->pc = 0x144430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14442Cu;
    // 0x144430: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14442Cu, 0x144434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144434u;
label_144434:
    // 0x144434: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x144434u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x144438: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x144438u;
    SET_GPR_U32(ctx, 31, 0x144440u);
    ctx->pc = 0x14443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144438u;
    // 0x14443c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x144438u, 0x144440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144440u;
label_144440:
    // 0x144440: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x144440u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x144444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144448: 0xc04e860  jal         func_13A180
    ctx->pc = 0x144448u;
    SET_GPR_U32(ctx, 31, 0x144450u);
    ctx->pc = 0x14444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144448u;
    // 0x14444c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x144448u, 0x144450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144450u;
label_144450:
    // 0x144450: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x144450u;
    SET_GPR_U32(ctx, 31, 0x144458u);
    ctx->pc = 0x144454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144450u;
    // 0x144454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x144450u, 0x144458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144458u;
label_144458:
    // 0x144458: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x144458u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14445c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14445cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144460: 0xc04d930  jal         func_1364C0
    ctx->pc = 0x144460u;
    SET_GPR_U32(ctx, 31, 0x144468u);
    ctx->pc = 0x144464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144460u;
    // 0x144464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364C0u, 0x144460u, 0x144468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144468u;
label_144468:
    // 0x144468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144468u;
    {
        const bool branch_taken_0x144468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144468u;
        // 0x14446c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144468) {
            ctx->pc = 0x144478u;
            goto label_144478;
        }
    }
    ctx->pc = 0x144470u;
    // 0x144470: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x144470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144474: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x144474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144478:
    // 0x144478: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x144478u;
    SET_GPR_U32(ctx, 31, 0x144480u);
    ctx->pc = 0x14447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144478u;
    // 0x14447c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x144478u, 0x144480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144480u;
label_144480:
    // 0x144480: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x144480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144484: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x144484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x144488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14448c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14448cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144490: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x144490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14449c: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14449Cu;
    SET_GPR_U32(ctx, 31, 0x1444A4u);
    ctx->pc = 0x1444A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14449Cu;
    // 0x1444a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14449Cu, 0x1444A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444A4u;
label_1444a4:
    // 0x1444a4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1444a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1444a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1444a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1444acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1444b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1444b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1444b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1444b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1444b8: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x1444B8u;
    SET_GPR_U32(ctx, 31, 0x1444C0u);
    ctx->pc = 0x1444BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444B8u;
    // 0x1444bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x1444B8u, 0x1444C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444C0u;
label_1444c0:
    // 0x1444c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1444c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1444c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1444c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444cc: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x1444CCu;
    SET_GPR_U32(ctx, 31, 0x1444D4u);
    ctx->pc = 0x1444D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444CCu;
    // 0x1444d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x1444CCu, 0x1444D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444D4u;
label_1444d4:
    // 0x1444d4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1444d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1444d8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1444d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1444dc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1444dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1444e0: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x1444e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1444e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1444e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1444e8: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1444E8u;
    SET_GPR_U32(ctx, 31, 0x1444F0u);
    ctx->pc = 0x1444ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444E8u;
    // 0x1444ec: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1444E8u, 0x1444F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444F0u;
label_1444f0:
    // 0x1444f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1444f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1444f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1444f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1444f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1444f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1444fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1444fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x144500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x144500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144504: 0x3e00008  jr          $ra
    ctx->pc = 0x144504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144504u;
        // 0x144508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14450Cu;
    // 0x14450c: 0x0  nop
    ctx->pc = 0x14450cu;
    // NOP
    ctx->pc = 0x144510u;
}
