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

// Function: sub_00143788
// Address: 0x143788 - 0x143880
void sub_00143788_0x143788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143788_0x143788");
#endif

    switch (ctx->pc) {
        case 0x1437a8u: goto label_1437a8;
        case 0x1437c0u: goto label_1437c0;
        case 0x1437ccu: goto label_1437cc;
        case 0x1437dcu: goto label_1437dc;
        case 0x1437e4u: goto label_1437e4;
        case 0x1437f4u: goto label_1437f4;
        case 0x143818u: goto label_143818;
        case 0x143834u: goto label_143834;
        case 0x143848u: goto label_143848;
        case 0x143864u: goto label_143864;
        default: break;
    }

    ctx->pc = 0x143788u;

    // 0x143788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14378c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14378cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x143790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143794: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x143794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143798: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14379c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1437a0: 0xc04e866  jal         func_13A198
    ctx->pc = 0x1437A0u;
    SET_GPR_U32(ctx, 31, 0x1437A8u);
    ctx->pc = 0x1437A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437A0u;
    // 0x1437a4: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x1437A0u, 0x1437A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437A8u;
label_1437a8:
    // 0x1437a8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1437a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1437ac: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1437ACu;
    {
        const bool branch_taken_0x1437ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1437B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437ACu;
        // 0x1437b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1437ac) {
            ctx->pc = 0x143864u;
            goto label_143864;
        }
    }
    ctx->pc = 0x1437B4u;
    // 0x1437b4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1437b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1437b8: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1437B8u;
    SET_GPR_U32(ctx, 31, 0x1437C0u);
    ctx->pc = 0x1437BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437B8u;
    // 0x1437bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1437B8u, 0x1437C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437C0u;
label_1437c0:
    // 0x1437c0: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1437c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1437c4: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1437C4u;
    SET_GPR_U32(ctx, 31, 0x1437CCu);
    ctx->pc = 0x1437C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437C4u;
    // 0x1437c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1437C4u, 0x1437CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437CCu;
label_1437cc:
    // 0x1437cc: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1437ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1437d0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1437d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1437d4: 0xc04e860  jal         func_13A180
    ctx->pc = 0x1437D4u;
    SET_GPR_U32(ctx, 31, 0x1437DCu);
    ctx->pc = 0x1437D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437D4u;
    // 0x1437d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x1437D4u, 0x1437DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437DCu;
label_1437dc:
    // 0x1437dc: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x1437DCu;
    SET_GPR_U32(ctx, 31, 0x1437E4u);
    ctx->pc = 0x1437E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437DCu;
    // 0x1437e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x1437DCu, 0x1437E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437E4u;
label_1437e4:
    // 0x1437e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1437e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1437e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437ec: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1437ECu;
    SET_GPR_U32(ctx, 31, 0x1437F4u);
    ctx->pc = 0x1437F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437ECu;
    // 0x1437f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1437ECu, 0x1437F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437F4u;
label_1437f4:
    // 0x1437f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1437f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437f8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1437f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437fc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1437fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143800: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x143800u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143808: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x143808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14380c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14380cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143810: 0xc04daca  jal         func_136B28
    ctx->pc = 0x143810u;
    SET_GPR_U32(ctx, 31, 0x143818u);
    ctx->pc = 0x143814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143810u;
    // 0x143814: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x143810u, 0x143818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143818u;
label_143818:
    // 0x143818: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x143818u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14381c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14381cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143820: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x143820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x143824: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x143824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x143828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14382c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14382Cu;
    SET_GPR_U32(ctx, 31, 0x143834u);
    ctx->pc = 0x143830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14382Cu;
    // 0x143830: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14382Cu, 0x143834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143834u;
label_143834:
    // 0x143834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14383c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14383cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143840: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x143840u;
    SET_GPR_U32(ctx, 31, 0x143848u);
    ctx->pc = 0x143844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143840u;
    // 0x143844: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x143840u, 0x143848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143848u;
label_143848:
    // 0x143848: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x143848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14384c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14384cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x143850: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x143850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x143854: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x143854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x143858: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x143858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14385c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14385Cu;
    SET_GPR_U32(ctx, 31, 0x143864u);
    ctx->pc = 0x143860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14385Cu;
    // 0x143860: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14385Cu, 0x143864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143864u;
label_143864:
    // 0x143864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143868: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14386c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14386cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143870: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x143870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143874: 0x3e00008  jr          $ra
    ctx->pc = 0x143874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143874u;
        // 0x143878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14387Cu;
    // 0x14387c: 0x0  nop
    ctx->pc = 0x14387cu;
    // NOP
    ctx->pc = 0x143880u;
}
