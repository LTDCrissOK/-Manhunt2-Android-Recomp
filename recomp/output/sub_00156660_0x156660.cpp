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

// Function: sub_00156660
// Address: 0x156660 - 0x156760
void sub_00156660_0x156660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156660_0x156660");
#endif

    switch (ctx->pc) {
        case 0x156690u: goto label_156690;
        case 0x15669cu: goto label_15669c;
        case 0x1566acu: goto label_1566ac;
        case 0x1566dcu: goto label_1566dc;
        case 0x1566ecu: goto label_1566ec;
        case 0x156710u: goto label_156710;
        case 0x15671cu: goto label_15671c;
        case 0x156730u: goto label_156730;
        case 0x15673cu: goto label_15673c;
        default: break;
    }

    ctx->pc = 0x156660u;

    // 0x156660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156664: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15666c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156674: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x156674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x156678: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x156678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15667c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x15667cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156680: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x156680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x156684: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x156684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x156688: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x156688u;
    SET_GPR_U32(ctx, 31, 0x156690u);
    ctx->pc = 0x15668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156688u;
    // 0x15668c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x156688u, 0x156690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156690u;
label_156690:
    // 0x156690: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x156690u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156694: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x156694u;
    SET_GPR_U32(ctx, 31, 0x15669Cu);
    ctx->pc = 0x156698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156694u;
    // 0x156698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x156694u, 0x15669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15669Cu;
label_15669c:
    // 0x15669c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x15669cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1566a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1566a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1566a4: 0xc055950  jal         func_156540
    ctx->pc = 0x1566A4u;
    SET_GPR_U32(ctx, 31, 0x1566ACu);
    ctx->pc = 0x1566A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566A4u;
    // 0x1566a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x1566A4u, 0x1566ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1566ACu;
label_1566ac:
    // 0x1566ac: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1566acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1566b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1566b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1566b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1566b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1566b8: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1566b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x1566bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1566bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1566c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1566c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1566c4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1566c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1566c8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1566c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1566cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1566ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1566d0: 0x8c94020c  lw          $s4, 0x20C($a0)
    ctx->pc = 0x1566d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1566d4: 0xc043996  jal         func_10E658
    ctx->pc = 0x1566D4u;
    SET_GPR_U32(ctx, 31, 0x1566DCu);
    ctx->pc = 0x1566D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566D4u;
    // 0x1566d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x1566D4u, 0x1566DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1566DCu;
label_1566dc:
    // 0x1566dc: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x1566dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x1566e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1566e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566e4: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1566E4u;
    SET_GPR_U32(ctx, 31, 0x1566ECu);
    ctx->pc = 0x1566E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566E4u;
    // 0x1566e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1566E4u, 0x1566ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1566ECu;
label_1566ec:
    // 0x1566ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1566ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1566f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1566f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1566f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1566f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1566fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156708: 0xc04daca  jal         func_136B28
    ctx->pc = 0x156708u;
    SET_GPR_U32(ctx, 31, 0x156710u);
    ctx->pc = 0x15670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156708u;
    // 0x15670c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x156708u, 0x156710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156710u;
label_156710:
    // 0x156710: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x156710u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156714: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x156714u;
    SET_GPR_U32(ctx, 31, 0x15671Cu);
    ctx->pc = 0x156718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156714u;
    // 0x156718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x156714u, 0x15671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15671Cu;
label_15671c:
    // 0x15671c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156720: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x156720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156724: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x156724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156728: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x156728u;
    SET_GPR_U32(ctx, 31, 0x156730u);
    ctx->pc = 0x15672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156728u;
    // 0x15672c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x156728u, 0x156730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156730u;
label_156730:
    // 0x156730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x156730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156734: 0xc043c56  jal         func_10F158
    ctx->pc = 0x156734u;
    SET_GPR_U32(ctx, 31, 0x15673Cu);
    ctx->pc = 0x156738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156734u;
    // 0x156738: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x156734u, 0x15673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15673Cu;
label_15673c:
    // 0x15673c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15673cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x156744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156748: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x156748u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15674c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15674cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156750: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x156750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x156754: 0x3e00008  jr          $ra
    ctx->pc = 0x156754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156754u;
        // 0x156758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15675Cu;
    // 0x15675c: 0x0  nop
    ctx->pc = 0x15675cu;
    // NOP
    ctx->pc = 0x156760u;
}
