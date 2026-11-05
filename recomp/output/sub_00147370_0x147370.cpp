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

// Function: sub_00147370
// Address: 0x147370 - 0x147490
void sub_00147370_0x147370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147370_0x147370");
#endif

    switch (ctx->pc) {
        case 0x147390u: goto label_147390;
        case 0x1473a8u: goto label_1473a8;
        case 0x1473b4u: goto label_1473b4;
        case 0x1473c4u: goto label_1473c4;
        case 0x1473d4u: goto label_1473d4;
        case 0x1473e0u: goto label_1473e0;
        case 0x147404u: goto label_147404;
        case 0x147410u: goto label_147410;
        case 0x14741cu: goto label_14741c;
        case 0x147428u: goto label_147428;
        case 0x147444u: goto label_147444;
        case 0x147458u: goto label_147458;
        case 0x147474u: goto label_147474;
        default: break;
    }

    ctx->pc = 0x147370u;

    // 0x147370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147374: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x147374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x147378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x147378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14737c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14737cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x147380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x147384: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x147384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x147388: 0xc051b40  jal         func_146D00
    ctx->pc = 0x147388u;
    SET_GPR_U32(ctx, 31, 0x147390u);
    ctx->pc = 0x14738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147388u;
    // 0x14738c: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146D00u, 0x147388u, 0x147390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147390u;
label_147390:
    // 0x147390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147394: 0x10430037  beq         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x147394u;
    {
        const bool branch_taken_0x147394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x147398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147394u;
        // 0x147398: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147394) {
            ctx->pc = 0x147474u;
            goto label_147474;
        }
    }
    ctx->pc = 0x14739Cu;
    // 0x14739c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14739cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1473a0: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1473A0u;
    SET_GPR_U32(ctx, 31, 0x1473A8u);
    ctx->pc = 0x1473A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473A0u;
    // 0x1473a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1473A0u, 0x1473A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473A8u;
label_1473a8:
    // 0x1473a8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1473a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1473ac: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1473ACu;
    SET_GPR_U32(ctx, 31, 0x1473B4u);
    ctx->pc = 0x1473B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473ACu;
    // 0x1473b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1473ACu, 0x1473B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473B4u;
label_1473b4:
    // 0x1473b4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1473b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1473b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1473b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473bc: 0xc051b3a  jal         func_146CE8
    ctx->pc = 0x1473BCu;
    SET_GPR_U32(ctx, 31, 0x1473C4u);
    ctx->pc = 0x1473C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473BCu;
    // 0x1473c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146CE8u, 0x1473BCu, 0x1473C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473C4u;
label_1473c4:
    // 0x1473c4: 0x8e460564  lw          $a2, 0x564($s2)
    ctx->pc = 0x1473c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x1473c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1473c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473cc: 0xc051b74  jal         func_146DD0
    ctx->pc = 0x1473CCu;
    SET_GPR_U32(ctx, 31, 0x1473D4u);
    ctx->pc = 0x1473D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473CCu;
    // 0x1473d0: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146DD0u, 0x1473CCu, 0x1473D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473D4u;
label_1473d4:
    // 0x1473d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1473d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473d8: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1473D8u;
    SET_GPR_U32(ctx, 31, 0x1473E0u);
    ctx->pc = 0x1473DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473D8u;
    // 0x1473dc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1473D8u, 0x1473E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473E0u;
label_1473e0:
    // 0x1473e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1473e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473e4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1473e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1473e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1473e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1473ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473f0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1473f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1473f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1473f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1473f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1473f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473fc: 0xc04daca  jal         func_136B28
    ctx->pc = 0x1473FCu;
    SET_GPR_U32(ctx, 31, 0x147404u);
    ctx->pc = 0x147400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473FCu;
    // 0x147400: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x1473FCu, 0x147404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147404u;
label_147404:
    // 0x147404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147408: 0xc046104  jal         func_118410
    ctx->pc = 0x147408u;
    SET_GPR_U32(ctx, 31, 0x147410u);
    ctx->pc = 0x14740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147408u;
    // 0x14740c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x147408u, 0x147410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147410u;
label_147410:
    // 0x147410: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x147410u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x147414: 0xc051b7a  jal         func_146DE8
    ctx->pc = 0x147414u;
    SET_GPR_U32(ctx, 31, 0x14741Cu);
    ctx->pc = 0x147418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147414u;
    // 0x147418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146DE8u, 0x147414u, 0x14741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14741Cu;
label_14741c:
    // 0x14741c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14741cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147420: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x147420u;
    SET_GPR_U32(ctx, 31, 0x147428u);
    ctx->pc = 0x147424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147420u;
    // 0x147424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x147420u, 0x147428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147428u;
label_147428:
    // 0x147428: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x147428u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14742c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14742cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147430: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x147430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x147434: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x147434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x147438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14743c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14743Cu;
    SET_GPR_U32(ctx, 31, 0x147444u);
    ctx->pc = 0x147440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14743Cu;
    // 0x147440: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14743Cu, 0x147444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147444u;
label_147444:
    // 0x147444: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x147444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14744c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14744cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147450: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x147450u;
    SET_GPR_U32(ctx, 31, 0x147458u);
    ctx->pc = 0x147454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147450u;
    // 0x147454: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x147450u, 0x147458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147458u;
label_147458:
    // 0x147458: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x147458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14745c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14745cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x147460: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x147460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x147464: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x147464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x147468: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x147468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14746c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14746Cu;
    SET_GPR_U32(ctx, 31, 0x147474u);
    ctx->pc = 0x147470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14746Cu;
    // 0x147470: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14746Cu, 0x147474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147474u;
label_147474:
    // 0x147474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x147474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x147478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14747c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14747cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147480: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x147480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x147484: 0x3e00008  jr          $ra
    ctx->pc = 0x147484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147484u;
        // 0x147488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14748Cu;
    // 0x14748c: 0x0  nop
    ctx->pc = 0x14748cu;
    // NOP
    ctx->pc = 0x147490u;
}
