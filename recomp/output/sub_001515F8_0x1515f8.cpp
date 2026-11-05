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

// Function: sub_001515F8
// Address: 0x1515f8 - 0x151688
void sub_001515F8_0x1515f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001515F8_0x1515f8");
#endif

    switch (ctx->pc) {
        case 0x15161cu: goto label_15161c;
        case 0x15162cu: goto label_15162c;
        case 0x151638u: goto label_151638;
        case 0x151650u: goto label_151650;
        default: break;
    }

    ctx->pc = 0x1515f8u;

    // 0x1515f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1515f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1515fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1515fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x151600: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x151600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x151604: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x151604u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x151608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15160c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15160cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151610: 0x2610a080  addiu       $s0, $s0, -0x5F80
    ctx->pc = 0x151610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942848));
    // 0x151614: 0xc04f022  jal         func_13C088
    ctx->pc = 0x151614u;
    SET_GPR_U32(ctx, 31, 0x15161Cu);
    ctx->pc = 0x151618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151614u;
    // 0x151618: 0x8c840468  lw          $a0, 0x468($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C088u, 0x151614u, 0x15161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15161Cu;
label_15161c:
    // 0x15161c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15161cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151624: 0xc0484da  jal         func_121368
    ctx->pc = 0x151624u;
    SET_GPR_U32(ctx, 31, 0x15162Cu);
    ctx->pc = 0x151628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151624u;
    // 0x151628: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121368u, 0x151624u, 0x15162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15162Cu;
label_15162c:
    // 0x15162c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15162cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151630: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x151630u;
    {
        const bool branch_taken_0x151630 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x151630) {
            ctx->pc = 0x151634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151630u;
            // 0x151634: 0x92250020  lbu         $a1, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151640u;
            goto label_151640;
        }
    }
    ctx->pc = 0x151638u;
label_151638:
    // 0x151638: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x151638u;
    {
        const bool branch_taken_0x151638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151638u;
        // 0x15163c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151638) {
            ctx->pc = 0x151670u;
            goto label_151670;
        }
    }
    ctx->pc = 0x151640u;
label_151640:
    // 0x151640: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x151640u;
    {
        const bool branch_taken_0x151640 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x151644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151640u;
        // 0x151644: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151640) {
            ctx->pc = 0x15166Cu;
            goto label_15166c;
        }
    }
    ctx->pc = 0x151648u;
    // 0x151648: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x151648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x15164c: 0x0  nop
    ctx->pc = 0x15164cu;
    // NOP
label_151650:
    // 0x151650: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x151650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151654: 0x1065fff8  beq         $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x151654u;
    {
        const bool branch_taken_0x151654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x151658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151654u;
        // 0x151658: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151654) {
            ctx->pc = 0x151638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151638;
        }
    }
    ctx->pc = 0x15165Cu;
    // 0x15165c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15165cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151660: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x151660u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x151664: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x151664u;
    {
        const bool branch_taken_0x151664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151664u;
        // 0x151668: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151664) {
            ctx->pc = 0x151650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151650;
        }
    }
    ctx->pc = 0x15166Cu;
label_15166c:
    // 0x15166c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15166cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151670:
    // 0x151670: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x151670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151674: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x151674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x151678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15167c: 0x3e00008  jr          $ra
    ctx->pc = 0x15167Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15167Cu;
        // 0x151680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15167Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151684u;
    // 0x151684: 0x0  nop
    ctx->pc = 0x151684u;
    // NOP
    ctx->pc = 0x151688u;
}
