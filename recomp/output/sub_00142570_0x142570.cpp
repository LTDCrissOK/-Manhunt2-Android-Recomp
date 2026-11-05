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

// Function: sub_00142570
// Address: 0x142570 - 0x142670
void sub_00142570_0x142570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142570_0x142570");
#endif

    switch (ctx->pc) {
        case 0x14258cu: goto label_14258c;
        case 0x1425a8u: goto label_1425a8;
        case 0x1425d8u: goto label_1425d8;
        case 0x1425ecu: goto label_1425ec;
        case 0x14260cu: goto label_14260c;
        case 0x142618u: goto label_142618;
        case 0x142628u: goto label_142628;
        case 0x142630u: goto label_142630;
        case 0x14264cu: goto label_14264c;
        case 0x14265cu: goto label_14265c;
        default: break;
    }

    ctx->pc = 0x142570u;

    // 0x142570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14257c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14257cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142584: 0xc04e866  jal         func_13A198
    ctx->pc = 0x142584u;
    SET_GPR_U32(ctx, 31, 0x14258Cu);
    ctx->pc = 0x142588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142584u;
    // 0x142588: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x142584u, 0x14258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14258Cu;
label_14258c:
    // 0x14258c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x142590: 0x50430033  beql        $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x142590u;
    {
        const bool branch_taken_0x142590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x142590) {
            ctx->pc = 0x142594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142590u;
            // 0x142594: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142660u;
            goto label_142660;
        }
    }
    ctx->pc = 0x142598u;
    // 0x142598: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x142598u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14259c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14259cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425a0: 0xc050868  jal         func_1421A0
    ctx->pc = 0x1425A0u;
    SET_GPR_U32(ctx, 31, 0x1425A8u);
    ctx->pc = 0x1425A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1425A0u;
    // 0x1425a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421A0u, 0x1425A0u, 0x1425A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425A8u;
label_1425a8:
    // 0x1425a8: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x1425a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1425ac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1425acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1425b0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1425b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1425b4: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1425b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x1425b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1425b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1425bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1425bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1425c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1425c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1425c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1425c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1425c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1425c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1425cc: 0x8c91020c  lw          $s1, 0x20C($a0)
    ctx->pc = 0x1425ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1425d0: 0xc04392e  jal         func_10E4B8
    ctx->pc = 0x1425D0u;
    SET_GPR_U32(ctx, 31, 0x1425D8u);
    ctx->pc = 0x1425D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1425D0u;
    // 0x1425d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4B8u, 0x1425D0u, 0x1425D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425D8u;
label_1425d8:
    // 0x1425d8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1425D8u;
    {
        const bool branch_taken_0x1425d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1425d8) {
            ctx->pc = 0x1425DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1425D8u;
            // 0x1425dc: 0x8e2201ec  lw          $v0, 0x1EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1425F4u;
            goto label_1425f4;
        }
    }
    ctx->pc = 0x1425E0u;
    // 0x1425e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1425e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425e4: 0xc04398a  jal         func_10E628
    ctx->pc = 0x1425E4u;
    SET_GPR_U32(ctx, 31, 0x1425ECu);
    ctx->pc = 0x1425E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1425E4u;
    // 0x1425e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x1425E4u, 0x1425ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425ECu;
label_1425ec:
    // 0x1425ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1425ECu;
    {
        const bool branch_taken_0x1425ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1425F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425ECu;
        // 0x1425f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425ec) {
            ctx->pc = 0x142660u;
            goto label_142660;
        }
    }
    ctx->pc = 0x1425F4u;
label_1425f4:
    // 0x1425f4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1425F4u;
    {
        const bool branch_taken_0x1425f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1425f4) {
            ctx->pc = 0x1425F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1425F4u;
            // 0x1425f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142660u;
            goto label_142660;
        }
    }
    ctx->pc = 0x1425FCu;
    // 0x1425fc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1425fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x142600: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x142600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142604: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x142604u;
    SET_GPR_U32(ctx, 31, 0x14260Cu);
    ctx->pc = 0x142608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142604u;
    // 0x142608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x142604u, 0x14260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14260Cu;
label_14260c:
    // 0x14260c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14260cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x142610: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x142610u;
    SET_GPR_U32(ctx, 31, 0x142618u);
    ctx->pc = 0x142614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142610u;
    // 0x142614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x142610u, 0x142618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142618u;
label_142618:
    // 0x142618: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x142618u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14261c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14261cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142620: 0xc04e860  jal         func_13A180
    ctx->pc = 0x142620u;
    SET_GPR_U32(ctx, 31, 0x142628u);
    ctx->pc = 0x142624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142620u;
    // 0x142624: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x142620u, 0x142628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142628u;
label_142628:
    // 0x142628: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x142628u;
    SET_GPR_U32(ctx, 31, 0x142630u);
    ctx->pc = 0x14262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142628u;
    // 0x14262c: 0x8e040468  lw          $a0, 0x468($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x142628u, 0x142630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142630u;
label_142630:
    // 0x142630: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x142630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142634: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x142634u;
    {
        const bool branch_taken_0x142634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142634u;
        // 0x142638: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142634) {
            ctx->pc = 0x142654u;
            goto label_142654;
        }
    }
    ctx->pc = 0x14263Cu;
    // 0x14263c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14263Cu;
    {
        const bool branch_taken_0x14263c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14263c) {
            ctx->pc = 0x142640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14263Cu;
            // 0x142640: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142660u;
            goto label_142660;
        }
    }
    ctx->pc = 0x142644u;
    // 0x142644: 0xc05099c  jal         func_142670
    ctx->pc = 0x142644u;
    SET_GPR_U32(ctx, 31, 0x14264Cu);
    ctx->pc = 0x142648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142644u;
    // 0x142648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142670u, 0x142644u, 0x14264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14264Cu;
label_14264c:
    // 0x14264c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14264Cu;
    {
        const bool branch_taken_0x14264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14264Cu;
        // 0x142650: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14264c) {
            ctx->pc = 0x142660u;
            goto label_142660;
        }
    }
    ctx->pc = 0x142654u;
label_142654:
    // 0x142654: 0xc0509d2  jal         func_142748
    ctx->pc = 0x142654u;
    SET_GPR_U32(ctx, 31, 0x14265Cu);
    ctx->pc = 0x142658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142654u;
    // 0x142658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142748u, 0x142654u, 0x14265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14265Cu;
label_14265c:
    // 0x14265c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14265cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142660:
    // 0x142660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142668: 0x3e00008  jr          $ra
    ctx->pc = 0x142668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142668u;
        // 0x14266c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142670u;
}
