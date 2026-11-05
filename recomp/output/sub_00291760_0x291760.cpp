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

// Function: sub_00291760
// Address: 0x291760 - 0x2918f0
void sub_00291760_0x291760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291760_0x291760");
#endif

    switch (ctx->pc) {
        case 0x29179cu: goto label_29179c;
        case 0x2917acu: goto label_2917ac;
        case 0x2917bcu: goto label_2917bc;
        case 0x2917d0u: goto label_2917d0;
        case 0x2917dcu: goto label_2917dc;
        case 0x2917ecu: goto label_2917ec;
        case 0x291804u: goto label_291804;
        case 0x291810u: goto label_291810;
        case 0x291818u: goto label_291818;
        case 0x29182cu: goto label_29182c;
        case 0x29183cu: goto label_29183c;
        case 0x29184cu: goto label_29184c;
        case 0x291860u: goto label_291860;
        case 0x29186cu: goto label_29186c;
        case 0x29187cu: goto label_29187c;
        case 0x2918a8u: goto label_2918a8;
        case 0x2918b8u: goto label_2918b8;
        case 0x2918c8u: goto label_2918c8;
        case 0x2918d8u: goto label_2918d8;
        default: break;
    }

    ctx->pc = 0x291760u;

    // 0x291760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291764: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x291764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x291768: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x291768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29176c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29176cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291770: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x291770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x291774: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x291774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x291778: 0x924201f8  lbu         $v0, 0x1F8($s2)
    ctx->pc = 0x291778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 504)));
    // 0x29177c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x29177Cu;
    {
        const bool branch_taken_0x29177c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29177Cu;
        // 0x291780: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29177c) {
            ctx->pc = 0x291820u;
            goto label_291820;
        }
    }
    ctx->pc = 0x291784u;
    // 0x291784: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x291784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x291788: 0x8c43ac80  lw          $v1, -0x5380($v0)
    ctx->pc = 0x291788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945920)));
    // 0x29178c: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29178Cu;
    {
        const bool branch_taken_0x29178c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x29178c) {
            ctx->pc = 0x2917B4u;
            goto label_2917b4;
        }
    }
    ctx->pc = 0x291794u;
    // 0x291794: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x291794u;
    SET_GPR_U32(ctx, 31, 0x29179Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x291794u, 0x29179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29179Cu;
label_29179c:
    // 0x29179c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29179cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2917a0: 0x264501e8  addiu       $a1, $s2, 0x1E8
    ctx->pc = 0x2917a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 488));
    // 0x2917a4: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x2917A4u;
    SET_GPR_U32(ctx, 31, 0x2917ACu);
    ctx->pc = 0x2917A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2917A4u;
    // 0x2917a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x2917A4u, 0x2917ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2917ACu;
label_2917ac:
    // 0x2917ac: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2917ACu;
    {
        const bool branch_taken_0x2917ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917ACu;
        // 0x2917b0: 0xa24001f8  sb          $zero, 0x1F8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917ac) {
            ctx->pc = 0x2918D8u;
            goto label_2918d8;
        }
    }
    ctx->pc = 0x2917B4u;
label_2917b4:
    // 0x2917b4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2917B4u;
    SET_GPR_U32(ctx, 31, 0x2917BCu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2917B4u, 0x2917BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2917BCu;
label_2917bc:
    // 0x2917bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2917bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2917c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2917c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2917c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2917c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2917c8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2917C8u;
    SET_GPR_U32(ctx, 31, 0x2917D0u);
    ctx->pc = 0x2917CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2917C8u;
    // 0x2917cc: 0x24a5b490  addiu       $a1, $a1, -0x4B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2917C8u, 0x2917D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2917D0u;
label_2917d0:
    // 0x2917d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2917d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2917d4: 0xc0a7196  jal         func_29C658
    ctx->pc = 0x2917D4u;
    SET_GPR_U32(ctx, 31, 0x2917DCu);
    ctx->pc = 0x2917D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2917D4u;
    // 0x2917d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C658u, 0x2917D4u, 0x2917DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2917DCu;
label_2917dc:
    // 0x2917dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2917dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2917e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2917e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2917e4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2917E4u;
    SET_GPR_U32(ctx, 31, 0x2917ECu);
    ctx->pc = 0x2917E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2917E4u;
    // 0x2917e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2917E4u, 0x2917ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2917ECu;
label_2917ec:
    // 0x2917ec: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2917ECu;
    {
        const bool branch_taken_0x2917ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917ECu;
        // 0x2917f0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917ec) {
            ctx->pc = 0x2917FCu;
            goto label_2917fc;
        }
    }
    ctx->pc = 0x2917F4u;
    // 0x2917f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2917f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2917f8: 0xac62a438  sw          $v0, -0x5BC8($v1)
    ctx->pc = 0x2917f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943800), GPR_U32(ctx, 2));
label_2917fc:
    // 0x2917fc: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2917FCu;
    SET_GPR_U32(ctx, 31, 0x291804u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2917FCu, 0x291804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291804u;
label_291804:
    // 0x291804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291808: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x291808u;
    SET_GPR_U32(ctx, 31, 0x291810u);
    ctx->pc = 0x29180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291808u;
    // 0x29180c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x291808u, 0x291810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291810u;
label_291810:
    // 0x291810: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x291810u;
    SET_GPR_U32(ctx, 31, 0x291818u);
    ctx->pc = 0x291814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291810u;
    // 0x291814: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x291810u, 0x291818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291818u;
label_291818:
    // 0x291818: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x291818u;
    {
        const bool branch_taken_0x291818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291818u;
        // 0x29181c: 0xa24001f8  sb          $zero, 0x1F8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291818) {
            ctx->pc = 0x2918D8u;
            goto label_2918d8;
        }
    }
    ctx->pc = 0x291820u;
label_291820:
    // 0x291820: 0x2451ac80  addiu       $s1, $v0, -0x5380
    ctx->pc = 0x291820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
    // 0x291824: 0xc0ae338  jal         func_2B8CE0
    ctx->pc = 0x291824u;
    SET_GPR_U32(ctx, 31, 0x29182Cu);
    ctx->pc = 0x291828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291824u;
    // 0x291828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8CE0u, 0x291824u, 0x29182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29182Cu;
label_29182c:
    // 0x29182c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x29182Cu;
    {
        const bool branch_taken_0x29182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29182c) {
            ctx->pc = 0x2918C0u;
            goto label_2918c0;
        }
    }
    ctx->pc = 0x291834u;
    // 0x291834: 0xc0ae33a  jal         func_2B8CE8
    ctx->pc = 0x291834u;
    SET_GPR_U32(ctx, 31, 0x29183Cu);
    ctx->pc = 0x291838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291834u;
    // 0x291838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8CE8u, 0x291834u, 0x29183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29183Cu;
label_29183c:
    // 0x29183c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29183Cu;
    {
        const bool branch_taken_0x29183c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29183c) {
            ctx->pc = 0x2918A0u;
            goto label_2918a0;
        }
    }
    ctx->pc = 0x291844u;
    // 0x291844: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x291844u;
    SET_GPR_U32(ctx, 31, 0x29184Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x291844u, 0x29184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29184Cu;
label_29184c:
    // 0x29184c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29184cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x291850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291854: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x291854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291858: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x291858u;
    SET_GPR_U32(ctx, 31, 0x291860u);
    ctx->pc = 0x29185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291858u;
    // 0x29185c: 0x24a5b490  addiu       $a1, $a1, -0x4B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x291858u, 0x291860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291860u;
label_291860:
    // 0x291860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291864: 0xc0a7196  jal         func_29C658
    ctx->pc = 0x291864u;
    SET_GPR_U32(ctx, 31, 0x29186Cu);
    ctx->pc = 0x291868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291864u;
    // 0x291868: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C658u, 0x291864u, 0x29186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29186Cu;
label_29186c:
    // 0x29186c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29186cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291870: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x291870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291874: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x291874u;
    SET_GPR_U32(ctx, 31, 0x29187Cu);
    ctx->pc = 0x291878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291874u;
    // 0x291878: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x291874u, 0x29187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29187Cu;
label_29187c:
    // 0x29187c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29187Cu;
    {
        const bool branch_taken_0x29187c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29187Cu;
        // 0x291880: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29187c) {
            ctx->pc = 0x291888u;
            goto label_291888;
        }
    }
    ctx->pc = 0x291884u;
    // 0x291884: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x291884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_291888:
    // 0x291888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29188c: 0xae22591c  sw          $v0, 0x591C($s1)
    ctx->pc = 0x29188cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22812), GPR_U32(ctx, 2));
    // 0x291890: 0xae2358f8  sw          $v1, 0x58F8($s1)
    ctx->pc = 0x291890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22776), GPR_U32(ctx, 3));
    // 0x291894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291898: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x291898u;
    {
        const bool branch_taken_0x291898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291898u;
        // 0x29189c: 0xa24201f8  sb          $v0, 0x1F8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291898) {
            ctx->pc = 0x2918D8u;
            goto label_2918d8;
        }
    }
    ctx->pc = 0x2918A0u;
label_2918a0:
    // 0x2918a0: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2918A0u;
    SET_GPR_U32(ctx, 31, 0x2918A8u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2918A0u, 0x2918A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2918A8u;
label_2918a8:
    // 0x2918a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2918a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2918ac: 0x264501e8  addiu       $a1, $s2, 0x1E8
    ctx->pc = 0x2918acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 488));
    // 0x2918b0: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x2918B0u;
    SET_GPR_U32(ctx, 31, 0x2918B8u);
    ctx->pc = 0x2918B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2918B0u;
    // 0x2918b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x2918B0u, 0x2918B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2918B8u;
label_2918b8:
    // 0x2918b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2918B8u;
    {
        const bool branch_taken_0x2918b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918B8u;
        // 0x2918bc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918b8) {
            ctx->pc = 0x2918DCu;
            goto label_2918dc;
        }
    }
    ctx->pc = 0x2918C0u;
label_2918c0:
    // 0x2918c0: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2918C0u;
    SET_GPR_U32(ctx, 31, 0x2918C8u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2918C0u, 0x2918C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2918C8u;
label_2918c8:
    // 0x2918c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2918c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2918cc: 0x264501f0  addiu       $a1, $s2, 0x1F0
    ctx->pc = 0x2918ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    // 0x2918d0: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x2918D0u;
    SET_GPR_U32(ctx, 31, 0x2918D8u);
    ctx->pc = 0x2918D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2918D0u;
    // 0x2918d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x2918D0u, 0x2918D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2918D8u;
label_2918d8:
    // 0x2918d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2918d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2918dc:
    // 0x2918dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2918dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2918e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2918e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2918e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2918e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2918e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2918E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2918ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918E8u;
        // 0x2918ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2918E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2918F0u;
}
