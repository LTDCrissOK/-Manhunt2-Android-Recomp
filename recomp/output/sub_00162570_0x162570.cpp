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

// Function: sub_00162570
// Address: 0x162570 - 0x162670
void sub_00162570_0x162570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162570_0x162570");
#endif

    switch (ctx->pc) {
        case 0x162598u: goto label_162598;
        case 0x1625a4u: goto label_1625a4;
        case 0x1625c4u: goto label_1625c4;
        case 0x1625d4u: goto label_1625d4;
        case 0x1625e0u: goto label_1625e0;
        case 0x162600u: goto label_162600;
        case 0x162610u: goto label_162610;
        case 0x162620u: goto label_162620;
        case 0x16262cu: goto label_16262c;
        case 0x16263cu: goto label_16263c;
        case 0x162650u: goto label_162650;
        case 0x162658u: goto label_162658;
        default: break;
    }

    ctx->pc = 0x162570u;

    // 0x162570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16257c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16257cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162584: 0x8e02039c  lw          $v0, 0x39C($s0)
    ctx->pc = 0x162584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
    // 0x162588: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x162588u;
    {
        const bool branch_taken_0x162588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162588u;
        // 0x16258c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162588) {
            ctx->pc = 0x1625B4u;
            goto label_1625b4;
        }
    }
    ctx->pc = 0x162590u;
    // 0x162590: 0xc058aa6  jal         func_162A98
    ctx->pc = 0x162590u;
    SET_GPR_U32(ctx, 31, 0x162598u);
    ctx->pc = 0x162A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A98u, 0x162590u, 0x162598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162598u;
label_162598:
    // 0x162598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x162598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16259c: 0xc058a4c  jal         func_162930
    ctx->pc = 0x16259Cu;
    SET_GPR_U32(ctx, 31, 0x1625A4u);
    ctx->pc = 0x1625A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16259Cu;
    // 0x1625a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162930u, 0x16259Cu, 0x1625A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1625A4u;
label_1625a4:
    // 0x1625a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1625a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1625a8: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x1625a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
    // 0x1625ac: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1625ACu;
    {
        const bool branch_taken_0x1625ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1625B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625ACu;
        // 0x1625b0: 0xae02033c  sw          $v0, 0x33C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625ac) {
            ctx->pc = 0x162658u;
            goto label_162658;
        }
    }
    ctx->pc = 0x1625B4u;
label_1625b4:
    // 0x1625b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1625b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1625b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1625b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1625bc: 0xc058b2c  jal         func_162CB0
    ctx->pc = 0x1625BCu;
    SET_GPR_U32(ctx, 31, 0x1625C4u);
    ctx->pc = 0x1625C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1625BCu;
    // 0x1625c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162CB0u, 0x1625BCu, 0x1625C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1625C4u;
label_1625c4:
    // 0x1625c4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1625C4u;
    {
        const bool branch_taken_0x1625c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1625c4) {
            ctx->pc = 0x1625C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1625C4u;
            // 0x1625c8: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1625ECu;
            goto label_1625ec;
        }
    }
    ctx->pc = 0x1625CCu;
    // 0x1625cc: 0xc058aa6  jal         func_162A98
    ctx->pc = 0x1625CCu;
    SET_GPR_U32(ctx, 31, 0x1625D4u);
    ctx->pc = 0x1625D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1625CCu;
    // 0x1625d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A98u, 0x1625CCu, 0x1625D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1625D4u;
label_1625d4:
    // 0x1625d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1625d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1625d8: 0xc058a4c  jal         func_162930
    ctx->pc = 0x1625D8u;
    SET_GPR_U32(ctx, 31, 0x1625E0u);
    ctx->pc = 0x1625DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1625D8u;
    // 0x1625dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162930u, 0x1625D8u, 0x1625E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1625E0u;
label_1625e0:
    // 0x1625e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1625e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1625e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1625E4u;
    {
        const bool branch_taken_0x1625e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1625E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625E4u;
        // 0x1625e8: 0xae02033c  sw          $v0, 0x33C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625e4) {
            ctx->pc = 0x162658u;
            goto label_162658;
        }
    }
    ctx->pc = 0x1625ECu;
label_1625ec:
    // 0x1625ec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1625ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1625f0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1625F0u;
    {
        const bool branch_taken_0x1625f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1625f0) {
            ctx->pc = 0x1625F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1625F0u;
            // 0x1625f4: 0xae00034c  sw          $zero, 0x34C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162608u;
            goto label_162608;
        }
    }
    ctx->pc = 0x1625F8u;
    // 0x1625f8: 0xc058e92  jal         func_163A48
    ctx->pc = 0x1625F8u;
    SET_GPR_U32(ctx, 31, 0x162600u);
    ctx->pc = 0x1625FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1625F8u;
    // 0x1625fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163A48u, 0x1625F8u, 0x162600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162600u;
label_162600:
    // 0x162600: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162600u;
    {
        const bool branch_taken_0x162600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162600) {
            ctx->pc = 0x162618u;
            goto label_162618;
        }
    }
    ctx->pc = 0x162608u;
label_162608:
    // 0x162608: 0xc058eca  jal         func_163B28
    ctx->pc = 0x162608u;
    SET_GPR_U32(ctx, 31, 0x162610u);
    ctx->pc = 0x16260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162608u;
    // 0x16260c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163B28u, 0x162608u, 0x162610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162610u;
label_162610:
    // 0x162610: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x162610u;
    {
        const bool branch_taken_0x162610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162610) {
            ctx->pc = 0x162634u;
            goto label_162634;
        }
    }
    ctx->pc = 0x162618u;
label_162618:
    // 0x162618: 0xc058aa6  jal         func_162A98
    ctx->pc = 0x162618u;
    SET_GPR_U32(ctx, 31, 0x162620u);
    ctx->pc = 0x16261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162618u;
    // 0x16261c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A98u, 0x162618u, 0x162620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162620u;
label_162620:
    // 0x162620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162624: 0xc058a4c  jal         func_162930
    ctx->pc = 0x162624u;
    SET_GPR_U32(ctx, 31, 0x16262Cu);
    ctx->pc = 0x162628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162624u;
    // 0x162628: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162930u, 0x162624u, 0x16262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16262Cu;
label_16262c:
    // 0x16262c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16262Cu;
    {
        const bool branch_taken_0x16262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16262Cu;
        // 0x162630: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16262c) {
            ctx->pc = 0x16265Cu;
            goto label_16265c;
        }
    }
    ctx->pc = 0x162634u;
label_162634:
    // 0x162634: 0xc058bf0  jal         func_162FC0
    ctx->pc = 0x162634u;
    SET_GPR_U32(ctx, 31, 0x16263Cu);
    ctx->pc = 0x162638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162634u;
    // 0x162638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162FC0u, 0x162634u, 0x16263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16263Cu;
label_16263c:
    // 0x16263c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16263Cu;
    {
        const bool branch_taken_0x16263c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16263Cu;
        // 0x162640: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16263c) {
            ctx->pc = 0x162658u;
            goto label_162658;
        }
    }
    ctx->pc = 0x162644u;
    // 0x162644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162648: 0xc058bf4  jal         func_162FD0
    ctx->pc = 0x162648u;
    SET_GPR_U32(ctx, 31, 0x162650u);
    ctx->pc = 0x16264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162648u;
    // 0x16264c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162FD0u, 0x162648u, 0x162650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162650u;
label_162650:
    // 0x162650: 0xc058e4c  jal         func_163930
    ctx->pc = 0x162650u;
    SET_GPR_U32(ctx, 31, 0x162658u);
    ctx->pc = 0x162654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162650u;
    // 0x162654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163930u, 0x162650u, 0x162658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162658u;
label_162658:
    // 0x162658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16265c:
    // 0x16265c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16265cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162664: 0x3e00008  jr          $ra
    ctx->pc = 0x162664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162664u;
        // 0x162668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16266Cu;
    // 0x16266c: 0x0  nop
    ctx->pc = 0x16266cu;
    // NOP
    ctx->pc = 0x162670u;
}
