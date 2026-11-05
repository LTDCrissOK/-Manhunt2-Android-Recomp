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

// Function: sub_001435A0
// Address: 0x1435a0 - 0x1436c0
void sub_001435A0_0x1435a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001435A0_0x1435a0");
#endif

    switch (ctx->pc) {
        case 0x1435b8u: goto label_1435b8;
        case 0x1435ecu: goto label_1435ec;
        case 0x1435fcu: goto label_1435fc;
        case 0x143640u: goto label_143640;
        case 0x143654u: goto label_143654;
        case 0x143684u: goto label_143684;
        case 0x143694u: goto label_143694;
        case 0x1436a4u: goto label_1436a4;
        case 0x1436acu: goto label_1436ac;
        default: break;
    }

    ctx->pc = 0x1435a0u;

    // 0x1435a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1435a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1435a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1435a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1435a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1435a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1435ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1435acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435b0: 0xc04e866  jal         func_13A198
    ctx->pc = 0x1435B0u;
    SET_GPR_U32(ctx, 31, 0x1435B8u);
    ctx->pc = 0x1435B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1435B0u;
    // 0x1435b4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x1435B0u, 0x1435B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435B8u;
label_1435b8:
    // 0x1435b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1435b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1435bc: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1435BCu;
    {
        const bool branch_taken_0x1435bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1435C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1435BCu;
        // 0x1435c0: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1435bc) {
            ctx->pc = 0x1435F4u;
            goto label_1435f4;
        }
    }
    ctx->pc = 0x1435C4u;
    // 0x1435c4: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x1435c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1435c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1435c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1435cc: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x1435ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x1435d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1435d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1435d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1435d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1435d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1435d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1435dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1435dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1435e0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1435e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1435e4: 0xc09526c  jal         func_2549B0
    ctx->pc = 0x1435E4u;
    SET_GPR_U32(ctx, 31, 0x1435ECu);
    ctx->pc = 0x1435E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1435E4u;
    // 0x1435e8: 0x8ca40108  lw          $a0, 0x108($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2549B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2549B0u, 0x1435E4u, 0x1435ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435ECu;
label_1435ec:
    // 0x1435ec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1435ECu;
    {
        const bool branch_taken_0x1435ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1435ec) {
            ctx->pc = 0x1435F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1435ECu;
            // 0x1435f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143600u;
            goto label_143600;
        }
    }
    ctx->pc = 0x1435F4u;
label_1435f4:
    // 0x1435f4: 0xc04ecde  jal         func_13B378
    ctx->pc = 0x1435F4u;
    SET_GPR_U32(ctx, 31, 0x1435FCu);
    ctx->pc = 0x1435F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1435F4u;
    // 0x1435f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B378u, 0x1435F4u, 0x1435FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435FCu;
label_1435fc:
    // 0x1435fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1435fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143600:
    // 0x143600: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x143600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143604: 0x3e00008  jr          $ra
    ctx->pc = 0x143604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143604u;
        // 0x143608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14360Cu;
    // 0x14360c: 0x0  nop
    ctx->pc = 0x14360cu;
    // NOP
    // 0x143610: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x143610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143614: 0x0  nop
    ctx->pc = 0x143614u;
    // NOP
    // 0x143618: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x143618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14361c: 0x0  nop
    ctx->pc = 0x14361cu;
    // NOP
    // 0x143620: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x143620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x143624: 0x0  nop
    ctx->pc = 0x143624u;
    // NOP
    // 0x143628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14362c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14362cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143630: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x143630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x143634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143638: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x143638u;
    SET_GPR_U32(ctx, 31, 0x143640u);
    ctx->pc = 0x14363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143638u;
    // 0x14363c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x143638u, 0x143640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143640u;
label_143640:
    // 0x143640: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x143640u;
    {
        const bool branch_taken_0x143640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143640) {
            ctx->pc = 0x143644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143640u;
            // 0x143644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1436B0u;
            goto label_1436b0;
        }
    }
    ctx->pc = 0x143648u;
    // 0x143648: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x143648u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14364c: 0xc04eb18  jal         func_13AC60
    ctx->pc = 0x14364Cu;
    SET_GPR_U32(ctx, 31, 0x143654u);
    ctx->pc = 0x143650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14364Cu;
    // 0x143650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC60u, 0x14364Cu, 0x143654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143654u;
label_143654:
    // 0x143654: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x143654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143658: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x143658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x14365c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14365Cu;
    {
        const bool branch_taken_0x14365c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14365Cu;
        // 0x143660: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14365c) {
            ctx->pc = 0x1436A4u;
            goto label_1436a4;
        }
    }
    ctx->pc = 0x143664u;
    // 0x143664: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x143664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x143668: 0x2442e980  addiu       $v0, $v0, -0x1680
    ctx->pc = 0x143668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961536));
    // 0x14366c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14366cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143670: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x143670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143674: 0x800008  jr          $a0
    ctx->pc = 0x143674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14367Cu: goto label_14367c;
            case 0x14368Cu: goto label_14368c;
            case 0x14369Cu: goto label_14369c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143674u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14367Cu;
label_14367c:
    // 0x14367c: 0xc050db0  jal         func_1436C0
    ctx->pc = 0x14367Cu;
    SET_GPR_U32(ctx, 31, 0x143684u);
    ctx->pc = 0x143680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14367Cu;
    // 0x143680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1436C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1436C0u, 0x14367Cu, 0x143684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143684u;
label_143684:
    // 0x143684: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143684u;
    {
        const bool branch_taken_0x143684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143684) {
            ctx->pc = 0x1436A4u;
            goto label_1436a4;
        }
    }
    ctx->pc = 0x14368Cu;
label_14368c:
    // 0x14368c: 0xc050dc2  jal         func_143708
    ctx->pc = 0x14368Cu;
    SET_GPR_U32(ctx, 31, 0x143694u);
    ctx->pc = 0x143690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14368Cu;
    // 0x143690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143708u, 0x14368Cu, 0x143694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143694u;
label_143694:
    // 0x143694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143694u;
    {
        const bool branch_taken_0x143694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143694) {
            ctx->pc = 0x1436A4u;
            goto label_1436a4;
        }
    }
    ctx->pc = 0x14369Cu;
label_14369c:
    // 0x14369c: 0xc050dd4  jal         func_143750
    ctx->pc = 0x14369Cu;
    SET_GPR_U32(ctx, 31, 0x1436A4u);
    ctx->pc = 0x1436A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14369Cu;
    // 0x1436a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143750u, 0x14369Cu, 0x1436A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436A4u;
label_1436a4:
    // 0x1436a4: 0xc04e71a  jal         func_139C68
    ctx->pc = 0x1436A4u;
    SET_GPR_U32(ctx, 31, 0x1436ACu);
    ctx->pc = 0x1436A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1436A4u;
    // 0x1436a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C68u, 0x1436A4u, 0x1436ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436ACu;
label_1436ac:
    // 0x1436ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1436acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1436b0:
    // 0x1436b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1436b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1436b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1436B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1436B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436B4u;
        // 0x1436b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1436B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1436BCu;
    // 0x1436bc: 0x0  nop
    ctx->pc = 0x1436bcu;
    // NOP
    ctx->pc = 0x1436c0u;
}
