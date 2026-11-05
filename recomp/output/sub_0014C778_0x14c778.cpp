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

// Function: sub_0014C778
// Address: 0x14c778 - 0x14c880
void sub_0014C778_0x14c778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C778_0x14c778");
#endif

    switch (ctx->pc) {
        case 0x14c79cu: goto label_14c79c;
        case 0x14c7a8u: goto label_14c7a8;
        case 0x14c7b8u: goto label_14c7b8;
        case 0x14c7c4u: goto label_14c7c4;
        case 0x14c7e8u: goto label_14c7e8;
        case 0x14c7f4u: goto label_14c7f4;
        case 0x14c7fcu: goto label_14c7fc;
        case 0x14c808u: goto label_14c808;
        case 0x14c81cu: goto label_14c81c;
        case 0x14c838u: goto label_14c838;
        case 0x14c84cu: goto label_14c84c;
        case 0x14c868u: goto label_14c868;
        default: break;
    }

    ctx->pc = 0x14c778u;

    // 0x14c778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c77c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14c77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c78c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14c790: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14c790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14c794: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14C794u;
    SET_GPR_U32(ctx, 31, 0x14C79Cu);
    ctx->pc = 0x14C798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C794u;
    // 0x14c798: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14C794u, 0x14C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C79Cu;
label_14c79c:
    // 0x14c79c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14c79cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14c7a0: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14C7A0u;
    SET_GPR_U32(ctx, 31, 0x14C7A8u);
    ctx->pc = 0x14C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7A0u;
    // 0x14c7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14C7A0u, 0x14C7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7A8u;
label_14c7a8:
    // 0x14c7a8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14c7a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14c7ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7b0: 0xc053062  jal         func_14C188
    ctx->pc = 0x14C7B0u;
    SET_GPR_U32(ctx, 31, 0x14C7B8u);
    ctx->pc = 0x14C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7B0u;
    // 0x14c7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C188u, 0x14C7B0u, 0x14C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7B8u;
label_14c7b8:
    // 0x14c7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7bc: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14C7BCu;
    SET_GPR_U32(ctx, 31, 0x14C7C4u);
    ctx->pc = 0x14C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7BCu;
    // 0x14c7c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14C7BCu, 0x14C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7C4u;
label_14c7c4:
    // 0x14c7c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14c7c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7c8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14c7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c7cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14c7ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14c7d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7d4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x14c7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14c7d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14c7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7e0: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14C7E0u;
    SET_GPR_U32(ctx, 31, 0x14C7E8u);
    ctx->pc = 0x14C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7E0u;
    // 0x14c7e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14C7E0u, 0x14C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7E8u;
label_14c7e8:
    // 0x14c7e8: 0x8e050660  lw          $a1, 0x660($s0)
    ctx->pc = 0x14c7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x14c7ec: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x14C7ECu;
    SET_GPR_U32(ctx, 31, 0x14C7F4u);
    ctx->pc = 0x14C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7ECu;
    // 0x14c7f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x14C7ECu, 0x14C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7F4u;
label_14c7f4:
    // 0x14c7f4: 0xc0533e4  jal         func_14CF90
    ctx->pc = 0x14C7F4u;
    SET_GPR_U32(ctx, 31, 0x14C7FCu);
    ctx->pc = 0x14C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C7F4u;
    // 0x14c7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF90u, 0x14C7F4u, 0x14C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C7FCu;
label_14c7fc:
    // 0x14c7fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14c7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c800: 0xc046104  jal         func_118410
    ctx->pc = 0x14C800u;
    SET_GPR_U32(ctx, 31, 0x14C808u);
    ctx->pc = 0x14C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C800u;
    // 0x14c804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x14C800u, 0x14C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C808u;
label_14c808:
    // 0x14c808: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x14c808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x14c80c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14c80cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14c810: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14c810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c814: 0xc046290  jal         func_118A40
    ctx->pc = 0x14C814u;
    SET_GPR_U32(ctx, 31, 0x14C81Cu);
    ctx->pc = 0x14C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C814u;
    // 0x14c818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x14C814u, 0x14C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C81Cu;
label_14c81c:
    // 0x14c81c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14c81cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14c820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c824: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14c828: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14c828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14c82c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c830: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14C830u;
    SET_GPR_U32(ctx, 31, 0x14C838u);
    ctx->pc = 0x14C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C830u;
    // 0x14c834: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14C830u, 0x14C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C838u;
label_14c838:
    // 0x14c838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c83c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14c83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c840: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14c840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c844: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14C844u;
    SET_GPR_U32(ctx, 31, 0x14C84Cu);
    ctx->pc = 0x14C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C844u;
    // 0x14c848: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14C844u, 0x14C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C84Cu;
label_14c84c:
    // 0x14c84c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14c850: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x14c850u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14c854: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14c858: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x14c858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x14c85c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14c860: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14C860u;
    SET_GPR_U32(ctx, 31, 0x14C868u);
    ctx->pc = 0x14C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C860u;
    // 0x14c864: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14C860u, 0x14C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C868u;
label_14c868:
    // 0x14c868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c86c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14c870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c874: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14c874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c878: 0x3e00008  jr          $ra
    ctx->pc = 0x14C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C878u;
        // 0x14c87c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C880u;
}
