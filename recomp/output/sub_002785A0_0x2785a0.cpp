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

// Function: sub_002785A0
// Address: 0x2785a0 - 0x278680
void sub_002785A0_0x2785a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002785A0_0x2785a0");
#endif

    switch (ctx->pc) {
        case 0x2785bcu: goto label_2785bc;
        case 0x2785e8u: goto label_2785e8;
        case 0x278640u: goto label_278640;
        case 0x27866cu: goto label_27866c;
        default: break;
    }

    ctx->pc = 0x2785a0u;

    // 0x2785a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2785a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2785a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2785a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2785a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2785a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2785acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2785b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2785b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2785b4: 0xc09e062  jal         func_278188
    ctx->pc = 0x2785B4u;
    SET_GPR_U32(ctx, 31, 0x2785BCu);
    ctx->pc = 0x2785B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2785B4u;
    // 0x2785b8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x2785B4u, 0x2785BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785BCu;
label_2785bc:
    // 0x2785bc: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2785bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2785c0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2785c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2785c4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2785c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2785c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2785c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2785cc: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2785ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2785d0: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2785D0u;
    {
        const bool branch_taken_0x2785d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2785d0) {
            ctx->pc = 0x2785D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2785D0u;
            // 0x2785d4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2785E8u;
            goto label_2785e8;
        }
    }
    ctx->pc = 0x2785D8u;
    // 0x2785d8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2785d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2785dc: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2785DCu;
    {
        const bool branch_taken_0x2785dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2785E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785DCu;
        // 0x2785e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2785dc) {
            ctx->pc = 0x278618u;
            goto label_278618;
        }
    }
    ctx->pc = 0x2785E4u;
    // 0x2785e4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2785e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2785e8:
    // 0x2785e8: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2785e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2785ec: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2785ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2785f0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2785f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2785f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2785f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2785f8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x2785f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x2785fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2785fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278600: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278600u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278604: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x278604u;
    {
        const bool branch_taken_0x278604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x278604) {
            ctx->pc = 0x278608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278604u;
            // 0x278608: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2785E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2785e8;
        }
    }
    ctx->pc = 0x27860Cu;
    // 0x27860c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278610: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x278610u;
    {
        const bool branch_taken_0x278610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278610) {
            ctx->pc = 0x278614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278610u;
            // 0x278614: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2785E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2785e8;
        }
    }
    ctx->pc = 0x278618u;
label_278618:
    // 0x278618: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x278618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x27861c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278620: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x278620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x278624: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x278624u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278628: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x278628u;
    {
        const bool branch_taken_0x278628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x27862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278628u;
        // 0x27862c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278628) {
            ctx->pc = 0x278660u;
            goto label_278660;
        }
    }
    ctx->pc = 0x278630u;
    // 0x278630: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x278630u;
    {
        const bool branch_taken_0x278630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x278634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278630u;
        // 0x278634: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278630) {
            ctx->pc = 0x278660u;
            goto label_278660;
        }
    }
    ctx->pc = 0x278638u;
    // 0x278638: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x278638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27863c: 0x0  nop
    ctx->pc = 0x27863cu;
    // NOP
label_278640:
    // 0x278640: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x278640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x278644: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x278644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x278648: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x278648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x27864c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27864cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278650: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x278650u;
    {
        const bool branch_taken_0x278650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x278654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278650u;
        // 0x278654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278650) {
            ctx->pc = 0x278664u;
            goto label_278664;
        }
    }
    ctx->pc = 0x278658u;
    // 0x278658: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x278658u;
    {
        const bool branch_taken_0x278658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x27865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278658u;
        // 0x27865c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278658) {
            ctx->pc = 0x278640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278640;
        }
    }
    ctx->pc = 0x278660u;
label_278660:
    // 0x278660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278664:
    // 0x278664: 0xc09e056  jal         func_278158
    ctx->pc = 0x278664u;
    SET_GPR_U32(ctx, 31, 0x27866Cu);
    ctx->pc = 0x278668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278664u;
    // 0x278668: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x278664u, 0x27866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27866Cu;
label_27866c:
    // 0x27866c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27866cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278670: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278678: 0x3e00008  jr          $ra
    ctx->pc = 0x278678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278678u;
        // 0x27867c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278680u;
}
