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

// Function: sub_0014C880
// Address: 0x14c880 - 0x14c960
void sub_0014C880_0x14c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C880_0x14c880");
#endif

    switch (ctx->pc) {
        case 0x14c8a4u: goto label_14c8a4;
        case 0x14c8b0u: goto label_14c8b0;
        case 0x14c8c0u: goto label_14c8c0;
        case 0x14c8ccu: goto label_14c8cc;
        case 0x14c8f0u: goto label_14c8f0;
        case 0x14c90cu: goto label_14c90c;
        case 0x14c920u: goto label_14c920;
        case 0x14c93cu: goto label_14c93c;
        case 0x14c948u: goto label_14c948;
        default: break;
    }

    ctx->pc = 0x14c880u;

    // 0x14c880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c884: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14c884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c88c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c894: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14c898: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14c898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14c89c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14C89Cu;
    SET_GPR_U32(ctx, 31, 0x14C8A4u);
    ctx->pc = 0x14C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C89Cu;
    // 0x14c8a0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14C89Cu, 0x14C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8A4u;
label_14c8a4:
    // 0x14c8a4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14c8a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14c8a8: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14C8A8u;
    SET_GPR_U32(ctx, 31, 0x14C8B0u);
    ctx->pc = 0x14C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8A8u;
    // 0x14c8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14C8A8u, 0x14C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8B0u;
label_14c8b0:
    // 0x14c8b0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14c8b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14c8b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14c8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c8b8: 0xc053062  jal         func_14C188
    ctx->pc = 0x14C8B8u;
    SET_GPR_U32(ctx, 31, 0x14C8C0u);
    ctx->pc = 0x14C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8B8u;
    // 0x14c8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C188u, 0x14C8B8u, 0x14C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8C0u;
label_14c8c0:
    // 0x14c8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8c4: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14C8C4u;
    SET_GPR_U32(ctx, 31, 0x14C8CCu);
    ctx->pc = 0x14C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8C4u;
    // 0x14c8c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14C8C4u, 0x14C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8CCu;
label_14c8cc:
    // 0x14c8cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14c8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8d0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14c8d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c8d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14c8d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14c8d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14c8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14c8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8e8: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14C8E8u;
    SET_GPR_U32(ctx, 31, 0x14C8F0u);
    ctx->pc = 0x14C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8E8u;
    // 0x14c8ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14C8E8u, 0x14C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8F0u;
label_14c8f0:
    // 0x14c8f0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14c8f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14c8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14c8fc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14c900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c904: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14C904u;
    SET_GPR_U32(ctx, 31, 0x14C90Cu);
    ctx->pc = 0x14C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C904u;
    // 0x14c908: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14C904u, 0x14C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C90Cu;
label_14c90c:
    // 0x14c90c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14c90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c910: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14c910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c918: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14C918u;
    SET_GPR_U32(ctx, 31, 0x14C920u);
    ctx->pc = 0x14C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C918u;
    // 0x14c91c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14C918u, 0x14C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C920u;
label_14c920:
    // 0x14c920: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14c920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14c924: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x14c924u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14c928: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14c928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14c92c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x14c92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x14c930: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14c930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14c934: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14C934u;
    SET_GPR_U32(ctx, 31, 0x14C93Cu);
    ctx->pc = 0x14C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C934u;
    // 0x14c938: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14C934u, 0x14C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C93Cu;
label_14c93c:
    // 0x14c93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c940: 0xc053396  jal         func_14CE58
    ctx->pc = 0x14C940u;
    SET_GPR_U32(ctx, 31, 0x14C948u);
    ctx->pc = 0x14C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C940u;
    // 0x14c944: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CE58u, 0x14C940u, 0x14C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C948u;
label_14c948:
    // 0x14c948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c94c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c950: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14c950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c954: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14c954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c958: 0x3e00008  jr          $ra
    ctx->pc = 0x14C958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C958u;
        // 0x14c95c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C960u;
}
