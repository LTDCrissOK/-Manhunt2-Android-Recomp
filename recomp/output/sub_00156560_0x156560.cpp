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

// Function: sub_00156560
// Address: 0x156560 - 0x156660
void sub_00156560_0x156560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156560_0x156560");
#endif

    switch (ctx->pc) {
        case 0x156590u: goto label_156590;
        case 0x15659cu: goto label_15659c;
        case 0x1565acu: goto label_1565ac;
        case 0x1565dcu: goto label_1565dc;
        case 0x1565ecu: goto label_1565ec;
        case 0x156610u: goto label_156610;
        case 0x15661cu: goto label_15661c;
        case 0x156630u: goto label_156630;
        case 0x15663cu: goto label_15663c;
        default: break;
    }

    ctx->pc = 0x156560u;

    // 0x156560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156564: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15656c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15656cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156574: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x156574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x156578: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x156578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15657c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x15657cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156580: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x156580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x156584: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x156584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x156588: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x156588u;
    SET_GPR_U32(ctx, 31, 0x156590u);
    ctx->pc = 0x15658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156588u;
    // 0x15658c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x156588u, 0x156590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156590u;
label_156590:
    // 0x156590: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x156590u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156594: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x156594u;
    SET_GPR_U32(ctx, 31, 0x15659Cu);
    ctx->pc = 0x156598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156594u;
    // 0x156598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x156594u, 0x15659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15659Cu;
label_15659c:
    // 0x15659c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x15659cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1565a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1565a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565a4: 0xc055950  jal         func_156540
    ctx->pc = 0x1565A4u;
    SET_GPR_U32(ctx, 31, 0x1565ACu);
    ctx->pc = 0x1565A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1565A4u;
    // 0x1565a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x1565A4u, 0x1565ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1565ACu;
label_1565ac:
    // 0x1565ac: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1565acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1565b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1565b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1565b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1565b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1565b8: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1565b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x1565bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1565bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1565c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1565c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1565c4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1565c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1565c8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1565c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1565cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1565ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1565d0: 0x8c94020c  lw          $s4, 0x20C($a0)
    ctx->pc = 0x1565d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1565d4: 0xc043996  jal         func_10E658
    ctx->pc = 0x1565D4u;
    SET_GPR_U32(ctx, 31, 0x1565DCu);
    ctx->pc = 0x1565D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1565D4u;
    // 0x1565d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x1565D4u, 0x1565DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1565DCu;
label_1565dc:
    // 0x1565dc: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x1565dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x1565e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1565e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565e4: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1565E4u;
    SET_GPR_U32(ctx, 31, 0x1565ECu);
    ctx->pc = 0x1565E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1565E4u;
    // 0x1565e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1565E4u, 0x1565ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1565ECu;
label_1565ec:
    // 0x1565ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1565ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1565f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1565f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1565f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1565f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1565fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156608: 0xc04daca  jal         func_136B28
    ctx->pc = 0x156608u;
    SET_GPR_U32(ctx, 31, 0x156610u);
    ctx->pc = 0x15660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156608u;
    // 0x15660c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x156608u, 0x156610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156610u;
label_156610:
    // 0x156610: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x156610u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156614: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x156614u;
    SET_GPR_U32(ctx, 31, 0x15661Cu);
    ctx->pc = 0x156618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156614u;
    // 0x156618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x156614u, 0x15661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15661Cu;
label_15661c:
    // 0x15661c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15661cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156620: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x156620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156624: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x156624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156628: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x156628u;
    SET_GPR_U32(ctx, 31, 0x156630u);
    ctx->pc = 0x15662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156628u;
    // 0x15662c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x156628u, 0x156630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156630u;
label_156630:
    // 0x156630: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x156630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156634: 0xc043c56  jal         func_10F158
    ctx->pc = 0x156634u;
    SET_GPR_U32(ctx, 31, 0x15663Cu);
    ctx->pc = 0x156638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156634u;
    // 0x156638: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x156634u, 0x15663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15663Cu;
label_15663c:
    // 0x15663c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15663cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x156644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156648: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x156648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15664c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15664cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156650: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x156650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x156654: 0x3e00008  jr          $ra
    ctx->pc = 0x156654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156654u;
        // 0x156658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15665Cu;
    // 0x15665c: 0x0  nop
    ctx->pc = 0x15665cu;
    // NOP
    ctx->pc = 0x156660u;
}
