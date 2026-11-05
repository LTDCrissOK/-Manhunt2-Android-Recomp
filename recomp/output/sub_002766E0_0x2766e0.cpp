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

// Function: sub_002766E0
// Address: 0x2766e0 - 0x276780
void sub_002766E0_0x2766e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002766E0_0x2766e0");
#endif

    switch (ctx->pc) {
        case 0x27670cu: goto label_27670c;
        case 0x276738u: goto label_276738;
        case 0x276740u: goto label_276740;
        default: break;
    }

    ctx->pc = 0x2766e0u;

    // 0x2766e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2766e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2766e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2766e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2766e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2766e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2766ec: 0x3c10004b  lui         $s0, 0x4B
    ctx->pc = 0x2766ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)75 << 16));
    // 0x2766f0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2766f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2766f4: 0x26104790  addiu       $s0, $s0, 0x4790
    ctx->pc = 0x2766f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18320));
    // 0x2766f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2766f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2766fc: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x2766fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276700: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x276700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x276704: 0xc09d72a  jal         func_275CA8
    ctx->pc = 0x276704u;
    SET_GPR_U32(ctx, 31, 0x27670Cu);
    ctx->pc = 0x276708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276704u;
    // 0x276708: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275CA8u, 0x276704u, 0x27670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27670Cu;
label_27670c:
    // 0x27670c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x27670Cu;
    {
        const bool branch_taken_0x27670c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27670c) {
            ctx->pc = 0x276710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27670Cu;
            // 0x276710: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276714u;
            goto label_276714;
        }
    }
    ctx->pc = 0x276714u;
label_276714:
    // 0x276714: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x276714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x276718: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x276718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27671c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x276720: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x276720u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276724: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x276724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276728: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x276728u;
    {
        const bool branch_taken_0x276728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x27672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276728u;
        // 0x27672c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276728) {
            ctx->pc = 0x276758u;
            goto label_276758;
        }
    }
    ctx->pc = 0x276730u;
    // 0x276730: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x276730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x276734: 0x0  nop
    ctx->pc = 0x276734u;
    // NOP
label_276738:
    // 0x276738: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x276738u;
    SET_GPR_U32(ctx, 31, 0x276740u);
    ctx->pc = 0x27673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276738u;
    // 0x27673c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x276738u, 0x276740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276740u;
label_276740:
    // 0x276740: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276740u;
    {
        const bool branch_taken_0x276740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276740u;
        // 0x276744: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276740) {
            ctx->pc = 0x276758u;
            goto label_276758;
        }
    }
    ctx->pc = 0x276748u;
    // 0x276748: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x276748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x27674c: 0x5611fffa  bnel        $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27674Cu;
    {
        const bool branch_taken_0x27674c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x27674c) {
            ctx->pc = 0x276750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27674Cu;
            // 0x276750: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276738;
        }
    }
    ctx->pc = 0x276754u;
    // 0x276754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276758:
    // 0x276758: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x276758u;
    {
        const bool branch_taken_0x276758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276758) {
            ctx->pc = 0x27675Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276758u;
            // 0x27675c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276764u;
            goto label_276764;
        }
    }
    ctx->pc = 0x276760u;
    // 0x276760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276764:
    // 0x276764: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x276764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276768: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x276768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27676c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27676cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276770: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x276770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x276774: 0x3e00008  jr          $ra
    ctx->pc = 0x276774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276774u;
        // 0x276778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27677Cu;
    // 0x27677c: 0x0  nop
    ctx->pc = 0x27677cu;
    // NOP
    ctx->pc = 0x276780u;
}
