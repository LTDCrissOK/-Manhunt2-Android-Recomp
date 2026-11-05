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

// Function: sub_00142748
// Address: 0x142748 - 0x142820
void sub_00142748_0x142748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142748_0x142748");
#endif

    switch (ctx->pc) {
        case 0x142764u: goto label_142764;
        case 0x142774u: goto label_142774;
        case 0x142798u: goto label_142798;
        case 0x1427a4u: goto label_1427a4;
        case 0x1427b0u: goto label_1427b0;
        case 0x1427ccu: goto label_1427cc;
        case 0x1427e0u: goto label_1427e0;
        case 0x1427fcu: goto label_1427fc;
        case 0x142808u: goto label_142808;
        default: break;
    }

    ctx->pc = 0x142748u;

    // 0x142748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14274c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14274cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142754: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x142754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x142758: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x142758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14275c: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x14275Cu;
    SET_GPR_U32(ctx, 31, 0x142764u);
    ctx->pc = 0x142760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14275Cu;
    // 0x142760: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x14275Cu, 0x142764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142764u;
label_142764:
    // 0x142764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x142764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14276c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14276Cu;
    SET_GPR_U32(ctx, 31, 0x142774u);
    ctx->pc = 0x142770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14276Cu;
    // 0x142770: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14276Cu, 0x142774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142774u;
label_142774:
    // 0x142774: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x142774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142778: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x142778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14277c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14277cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142780: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x142780u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142784: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x142784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x142788: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x142788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14278c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14278cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142790: 0xc04daca  jal         func_136B28
    ctx->pc = 0x142790u;
    SET_GPR_U32(ctx, 31, 0x142798u);
    ctx->pc = 0x142794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142790u;
    // 0x142794: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x142790u, 0x142798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142798u;
label_142798:
    // 0x142798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14279c: 0xc046030  jal         func_1180C0
    ctx->pc = 0x14279Cu;
    SET_GPR_U32(ctx, 31, 0x1427A4u);
    ctx->pc = 0x1427A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14279Cu;
    // 0x1427a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x14279Cu, 0x1427A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427A4u;
label_1427a4:
    // 0x1427a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1427a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427a8: 0xc0460c4  jal         func_118310
    ctx->pc = 0x1427A8u;
    SET_GPR_U32(ctx, 31, 0x1427B0u);
    ctx->pc = 0x1427ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1427A8u;
    // 0x1427ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x1427A8u, 0x1427B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427B0u;
label_1427b0:
    // 0x1427b0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1427b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1427b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1427b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1427b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1427bc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1427bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1427c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1427c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1427c4: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x1427C4u;
    SET_GPR_U32(ctx, 31, 0x1427CCu);
    ctx->pc = 0x1427C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1427C4u;
    // 0x1427c8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x1427C4u, 0x1427CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427CCu;
label_1427cc:
    // 0x1427cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1427ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1427d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1427d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1427d8: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x1427D8u;
    SET_GPR_U32(ctx, 31, 0x1427E0u);
    ctx->pc = 0x1427DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1427D8u;
    // 0x1427dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x1427D8u, 0x1427E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427E0u;
label_1427e0:
    // 0x1427e0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1427e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1427e4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1427e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1427e8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1427e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1427ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1427ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1427f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1427f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1427f4: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1427F4u;
    SET_GPR_U32(ctx, 31, 0x1427FCu);
    ctx->pc = 0x1427F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1427F4u;
    // 0x1427f8: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1427F4u, 0x1427FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427FCu;
label_1427fc:
    // 0x1427fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1427fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142800: 0xc050874  jal         func_1421D0
    ctx->pc = 0x142800u;
    SET_GPR_U32(ctx, 31, 0x142808u);
    ctx->pc = 0x142804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142800u;
    // 0x142804: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421D0u, 0x142800u, 0x142808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142808u;
label_142808:
    // 0x142808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14280c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14280cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142810: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142814: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x142814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x142818: 0x3e00008  jr          $ra
    ctx->pc = 0x142818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142818u;
        // 0x14281c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142820u;
}
