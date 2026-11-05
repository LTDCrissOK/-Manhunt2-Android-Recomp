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

// Function: sub_0013B378
// Address: 0x13b378 - 0x13b4a0
void sub_0013B378_0x13b378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B378_0x13b378");
#endif

    switch (ctx->pc) {
        case 0x13b39cu: goto label_13b39c;
        case 0x13b3b8u: goto label_13b3b8;
        case 0x13b3c8u: goto label_13b3c8;
        case 0x13b3d8u: goto label_13b3d8;
        case 0x13b3e4u: goto label_13b3e4;
        case 0x13b3fcu: goto label_13b3fc;
        case 0x13b420u: goto label_13b420;
        case 0x13b428u: goto label_13b428;
        case 0x13b434u: goto label_13b434;
        case 0x13b450u: goto label_13b450;
        case 0x13b464u: goto label_13b464;
        case 0x13b480u: goto label_13b480;
        default: break;
    }

    ctx->pc = 0x13b378u;

    // 0x13b378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b37c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13b37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13b380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b384: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13b384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b388: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13b388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b38c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13b390: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13b394: 0xc04e866  jal         func_13A198
    ctx->pc = 0x13B394u;
    SET_GPR_U32(ctx, 31, 0x13B39Cu);
    ctx->pc = 0x13B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B394u;
    // 0x13b398: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x13B394u, 0x13B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B39Cu;
label_13b39c:
    // 0x13b39c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13b3a0: 0x10430037  beq         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x13B3A0u;
    {
        const bool branch_taken_0x13b3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3A0u;
        // 0x13b3a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3a0) {
            ctx->pc = 0x13B480u;
            goto label_13b480;
        }
    }
    ctx->pc = 0x13B3A8u;
    // 0x13b3a8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b3a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b3ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b3b0: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x13B3B0u;
    SET_GPR_U32(ctx, 31, 0x13B3B8u);
    ctx->pc = 0x13B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3B0u;
    // 0x13b3b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x13B3B0u, 0x13B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3B8u;
label_13b3b8:
    // 0x13b3b8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x13b3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b3bc: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b3bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b3c0: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x13B3C0u;
    SET_GPR_U32(ctx, 31, 0x13B3C8u);
    ctx->pc = 0x13B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3C0u;
    // 0x13b3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x13B3C0u, 0x13B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3C8u;
label_13b3c8:
    // 0x13b3c8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b3c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b3cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b3d0: 0xc04e860  jal         func_13A180
    ctx->pc = 0x13B3D0u;
    SET_GPR_U32(ctx, 31, 0x13B3D8u);
    ctx->pc = 0x13B3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3D0u;
    // 0x13b3d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x13B3D0u, 0x13B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3D8u;
label_13b3d8:
    // 0x13b3d8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b3d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b3dc: 0xc04d930  jal         func_1364C0
    ctx->pc = 0x13B3DCu;
    SET_GPR_U32(ctx, 31, 0x13B3E4u);
    ctx->pc = 0x13B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3DCu;
    // 0x13b3e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364C0u, 0x13B3DCu, 0x13B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3E4u;
label_13b3e4:
    // 0x13b3e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B3E4u;
    {
        const bool branch_taken_0x13b3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3E4u;
        // 0x13b3e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3e4) {
            ctx->pc = 0x13B3F4u;
            goto label_13b3f4;
        }
    }
    ctx->pc = 0x13B3ECu;
    // 0x13b3ec: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x13b3ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b3f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13b3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b3f4:
    // 0x13b3f4: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x13B3F4u;
    SET_GPR_U32(ctx, 31, 0x13B3FCu);
    ctx->pc = 0x13B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3F4u;
    // 0x13b3f8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x13B3F4u, 0x13B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3FCu;
label_13b3fc:
    // 0x13b3fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13b3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b400: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x13b400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b404: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13b404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b408: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13b408u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b40c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x13b40cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b410: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x13b410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13b414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13b414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b418: 0xc04daca  jal         func_136B28
    ctx->pc = 0x13B418u;
    SET_GPR_U32(ctx, 31, 0x13B420u);
    ctx->pc = 0x13B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B418u;
    // 0x13b41c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x13B418u, 0x13B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B420u;
label_13b420:
    // 0x13b420: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x13B420u;
    SET_GPR_U32(ctx, 31, 0x13B428u);
    ctx->pc = 0x13B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B420u;
    // 0x13b424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x13B420u, 0x13B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B428u;
label_13b428:
    // 0x13b428: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b42c: 0xc046030  jal         func_1180C0
    ctx->pc = 0x13B42Cu;
    SET_GPR_U32(ctx, 31, 0x13B434u);
    ctx->pc = 0x13B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B42Cu;
    // 0x13b430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x13B42Cu, 0x13B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B434u;
label_13b434:
    // 0x13b434: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13b434u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13b438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b43c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13b440: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13b440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13b444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13b444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b448: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x13B448u;
    SET_GPR_U32(ctx, 31, 0x13B450u);
    ctx->pc = 0x13B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B448u;
    // 0x13b44c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x13B448u, 0x13B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B450u;
label_13b450:
    // 0x13b450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b458: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x13b458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b45c: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x13B45Cu;
    SET_GPR_U32(ctx, 31, 0x13B464u);
    ctx->pc = 0x13B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B45Cu;
    // 0x13b460: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x13B45Cu, 0x13B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B464u;
label_13b464:
    // 0x13b464: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13b464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13b468: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x13b468u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13b46c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13b470: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x13b470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13b474: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13b478: 0xc043c56  jal         func_10F158
    ctx->pc = 0x13B478u;
    SET_GPR_U32(ctx, 31, 0x13B480u);
    ctx->pc = 0x13B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B478u;
    // 0x13b47c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x13B478u, 0x13B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B480u;
label_13b480:
    // 0x13b480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b488: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13b488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b48c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13b48cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b490: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13b490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b494: 0x3e00008  jr          $ra
    ctx->pc = 0x13B494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B494u;
        // 0x13b498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B49Cu;
    // 0x13b49c: 0x0  nop
    ctx->pc = 0x13b49cu;
    // NOP
    ctx->pc = 0x13b4a0u;
}
