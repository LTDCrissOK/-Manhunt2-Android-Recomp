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

// Function: sub_002D7710
// Address: 0x2d7710 - 0x2d77e0
void sub_002D7710_0x2d7710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7710_0x2d7710");
#endif

    switch (ctx->pc) {
        case 0x2d7730u: goto label_2d7730;
        case 0x2d7750u: goto label_2d7750;
        default: break;
    }

    ctx->pc = 0x2d7710u;

    // 0x2d7710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d7710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d7714: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d7714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d7718: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d7718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d771c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d771cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7720: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d7720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d7724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d7728: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2D7728u;
    SET_GPR_U32(ctx, 31, 0x2D7730u);
    ctx->pc = 0x2D772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7728u;
    // 0x2d772c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2D7728u, 0x2D7730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7730u;
label_2d7730:
    // 0x2d7730: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2d7730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2d7734: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x2d7734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2d7738: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2d7738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d773c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2d773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d7740: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D7740u;
    {
        const bool branch_taken_0x2d7740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7740u;
        // 0x2d7744: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7740) {
            ctx->pc = 0x2D776Cu;
            goto label_2d776c;
        }
    }
    ctx->pc = 0x2D7748u;
    // 0x2d7748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d774c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2d7750:
    // 0x2d7750: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2d7750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d7754: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7754u;
    {
        const bool branch_taken_0x2d7754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7754) {
            ctx->pc = 0x2D7758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7754u;
            // 0x2d7758: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7764u;
            goto label_2d7764;
        }
    }
    ctx->pc = 0x2D775Cu;
    // 0x2d775c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2d775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7760: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d7760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d7764:
    // 0x2d7764: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D7764u;
    {
        const bool branch_taken_0x2d7764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7764) {
            ctx->pc = 0x2D7768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7764u;
            // 0x2d7768: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7750;
        }
    }
    ctx->pc = 0x2D776Cu;
label_2d776c:
    // 0x2d776c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2d776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d7770: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7770u;
    {
        const bool branch_taken_0x2d7770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7770u;
        // 0x2d7774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7770) {
            ctx->pc = 0x2D778Cu;
            goto label_2d778c;
        }
    }
    ctx->pc = 0x2D7778u;
    // 0x2d7778: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2d7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d777c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2d777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d7780: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d7780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d7784: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7784u;
    {
        const bool branch_taken_0x2d7784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7784) {
            ctx->pc = 0x2D7788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7784u;
            // 0x2d7788: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7794u;
            goto label_2d7794;
        }
    }
    ctx->pc = 0x2D778Cu;
label_2d778c:
    // 0x2d778c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d778cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7790: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d7790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d7794:
    // 0x2d7794: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2d7794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2d7798: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7798u;
    {
        const bool branch_taken_0x2d7798 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7798u;
        // 0x2d779c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7798) {
            ctx->pc = 0x2D77A8u;
            goto label_2d77a8;
        }
    }
    ctx->pc = 0x2D77A0u;
    // 0x2d77a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D77A0u;
    {
        const bool branch_taken_0x2d77a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77A0u;
        // 0x2d77a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77a0) {
            ctx->pc = 0x2D77CCu;
            goto label_2d77cc;
        }
    }
    ctx->pc = 0x2D77A8u;
label_2d77a8:
    // 0x2d77a8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2d77a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2d77ac: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2d77acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2d77b0: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x2d77b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x2d77b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d77b8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D77B8u;
    {
        const bool branch_taken_0x2d77b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77B8u;
        // 0x2d77bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77b8) {
            ctx->pc = 0x2D77C4u;
            goto label_2d77c4;
        }
    }
    ctx->pc = 0x2D77C0u;
    // 0x2d77c0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2d77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2d77c4:
    // 0x2d77c4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2d77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2d77c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d77cc:
    // 0x2d77cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d77ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d77d0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d77d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d77d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d77d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d77d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D77D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D77D8u;
        // 0x2d77dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D77D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D77E0u;
}
