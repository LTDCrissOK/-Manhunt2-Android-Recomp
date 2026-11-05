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

// Function: sub_0013B590
// Address: 0x13b590 - 0x13b698
void sub_0013B590_0x13b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B590_0x13b590");
#endif

    switch (ctx->pc) {
        case 0x13b5b4u: goto label_13b5b4;
        case 0x13b5c4u: goto label_13b5c4;
        case 0x13b5d0u: goto label_13b5d0;
        case 0x13b5e0u: goto label_13b5e0;
        case 0x13b614u: goto label_13b614;
        case 0x13b638u: goto label_13b638;
        case 0x13b644u: goto label_13b644;
        case 0x13b658u: goto label_13b658;
        case 0x13b664u: goto label_13b664;
        case 0x13b678u: goto label_13b678;
        default: break;
    }

    ctx->pc = 0x13b590u;

    // 0x13b590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b598: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b59c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13b5a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13b5a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13b5ac: 0xc04eaa6  jal         func_13AA98
    ctx->pc = 0x13B5ACu;
    SET_GPR_U32(ctx, 31, 0x13B5B4u);
    ctx->pc = 0x13B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B5ACu;
    // 0x13b5b0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AA98u, 0x13B5ACu, 0x13B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5B4u;
label_13b5b4:
    // 0x13b5b4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13b5b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13b5b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13b5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b5bc: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x13B5BCu;
    SET_GPR_U32(ctx, 31, 0x13B5C4u);
    ctx->pc = 0x13B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B5BCu;
    // 0x13b5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x13B5BCu, 0x13B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5C4u;
label_13b5c4:
    // 0x13b5c4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13b5c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13b5c8: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x13B5C8u;
    SET_GPR_U32(ctx, 31, 0x13B5D0u);
    ctx->pc = 0x13B5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B5C8u;
    // 0x13b5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x13B5C8u, 0x13B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5D0u;
label_13b5d0:
    // 0x13b5d0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13b5d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13b5d4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x13b5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13b5d8: 0xc04e860  jal         func_13A180
    ctx->pc = 0x13B5D8u;
    SET_GPR_U32(ctx, 31, 0x13B5E0u);
    ctx->pc = 0x13B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B5D8u;
    // 0x13b5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x13B5D8u, 0x13B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5E0u;
label_13b5e0:
    // 0x13b5e0: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x13b5e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13b5e4: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x13b5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x13b5e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13b5ec: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x13b5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x13b5f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13b5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13b5fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13b5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b600: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x13b600u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b604: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13b604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13b608: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x13b608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13b60c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x13B60Cu;
    SET_GPR_U32(ctx, 31, 0x13B614u);
    ctx->pc = 0x13B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B60Cu;
    // 0x13b610: 0x8cd3020c  lw          $s3, 0x20C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x13B60Cu, 0x13B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B614u;
label_13b614:
    // 0x13b614: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13b614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b618: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x13b618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b61c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13b61cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b620: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13b620u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b628: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x13b628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b630: 0xc04daca  jal         func_136B28
    ctx->pc = 0x13B630u;
    SET_GPR_U32(ctx, 31, 0x13B638u);
    ctx->pc = 0x13B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B630u;
    // 0x13b634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x13B630u, 0x13B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B638u;
label_13b638:
    // 0x13b638: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13b638u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13b63c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x13B63Cu;
    SET_GPR_U32(ctx, 31, 0x13B644u);
    ctx->pc = 0x13B640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B63Cu;
    // 0x13b640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x13B63Cu, 0x13B644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B644u;
label_13b644:
    // 0x13b644: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13b644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b648: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x13b648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b650: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x13B650u;
    SET_GPR_U32(ctx, 31, 0x13B658u);
    ctx->pc = 0x13B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B650u;
    // 0x13b654: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x13B650u, 0x13B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B658u;
label_13b658:
    // 0x13b658: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b65c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x13B65Cu;
    SET_GPR_U32(ctx, 31, 0x13B664u);
    ctx->pc = 0x13B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B65Cu;
    // 0x13b660: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x13B65Cu, 0x13B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B664u;
label_13b664:
    // 0x13b664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b668: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13b668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b66c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13b670: 0xc04db9a  jal         func_136E68
    ctx->pc = 0x13B670u;
    SET_GPR_U32(ctx, 31, 0x13B678u);
    ctx->pc = 0x13B674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B670u;
    // 0x13b674: 0x24070022  addiu       $a3, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E68u, 0x13B670u, 0x13B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B678u;
label_13b678:
    // 0x13b678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b67c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b67cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b680: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13b680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b684: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13b684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13b688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b68c: 0x3e00008  jr          $ra
    ctx->pc = 0x13B68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B68Cu;
        // 0x13b690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B694u;
    // 0x13b694: 0x0  nop
    ctx->pc = 0x13b694u;
    // NOP
    ctx->pc = 0x13b698u;
}
