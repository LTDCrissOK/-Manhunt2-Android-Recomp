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

// Function: sub_001EBB48
// Address: 0x1ebb48 - 0x1ebc40
void sub_001EBB48_0x1ebb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBB48_0x1ebb48");
#endif

    switch (ctx->pc) {
        case 0x1ebbccu: goto label_1ebbcc;
        case 0x1ebbe4u: goto label_1ebbe4;
        case 0x1ebc00u: goto label_1ebc00;
        case 0x1ebc10u: goto label_1ebc10;
        case 0x1ebc24u: goto label_1ebc24;
        default: break;
    }

    ctx->pc = 0x1ebb48u;

    // 0x1ebb48: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1ebb48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1ebb4c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ebb4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ebb50: 0x90c3920c  lbu         $v1, -0x6DF4($a2)
    ctx->pc = 0x1ebb50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F920Cu));
    // 0x1ebb54: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ebb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ebb58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ebb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ebb5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ebb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ebb60: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ebb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ebb64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ebb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ebb68: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ebb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ebb6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ebb6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb70: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1ebb70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ebb74: 0x2c42005b  sltiu       $v0, $v0, 0x5B
    ctx->pc = 0x1ebb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x1ebb78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBB78u;
    {
        const bool branch_taken_0x1ebb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB78u;
        // 0x1ebb7c: 0xa0c3920c  sb          $v1, -0x6DF4($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294939148), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb78) {
            ctx->pc = 0x1EBB88u;
            goto label_1ebb88;
        }
    }
    ctx->pc = 0x1EBB80u;
    // 0x1ebb80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebb84: 0xa0c2920c  sb          $v0, -0x6DF4($a2)
    ctx->pc = 0x1ebb84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294939148), (uint8_t)GPR_U32(ctx, 2));
label_1ebb88:
    // 0x1ebb88: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1ebb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ebb8c: 0x34028420  ori         $v0, $zero, 0x8420
    ctx->pc = 0x1ebb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1ebb90: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1ebb90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ebb94: 0x90c4920c  lbu         $a0, -0x6DF4($a2)
    ctx->pc = 0x1ebb94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294939148)));
    // 0x1ebb98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ebb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ebb9c: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x1ebb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1ebba0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ebba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebba4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ebba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ebba8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EBBA8u;
    {
        const bool branch_taken_0x1ebba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBA8u;
        // 0x1ebbac: 0xa2040040  sb          $a0, 0x40($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebba8) {
            ctx->pc = 0x1EBC24u;
            goto label_1ebc24;
        }
    }
    ctx->pc = 0x1EBBB0u;
    // 0x1ebbb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebbb4: 0x90c6920c  lbu         $a2, -0x6DF4($a2)
    ctx->pc = 0x1ebbb4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294939148)));
    // 0x1ebbb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ebbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ebbbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ebbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ebbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbc4: 0xc07af1e  jal         func_1EBC78
    ctx->pc = 0x1EBBC4u;
    SET_GPR_U32(ctx, 31, 0x1EBBCCu);
    ctx->pc = 0x1EBBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBBC4u;
    // 0x1ebbc8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBC78u, 0x1EBBC4u, 0x1EBBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBCCu;
label_1ebbcc:
    // 0x1ebbcc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBBCCu;
    {
        const bool branch_taken_0x1ebbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebbcc) {
            ctx->pc = 0x1EBBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBBCCu;
            // 0x1ebbd0: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBBECu;
            goto label_1ebbec;
        }
    }
    ctx->pc = 0x1EBBD4u;
    // 0x1ebbd4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ebbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ebbd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ebbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbdc: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1EBBDCu;
    SET_GPR_U32(ctx, 31, 0x1EBBE4u);
    ctx->pc = 0x1EBBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBBDCu;
    // 0x1ebbe0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1EBBDCu, 0x1EBBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBE4u;
label_1ebbe4:
    // 0x1ebbe4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EBBE4u;
    {
        const bool branch_taken_0x1ebbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBE4u;
        // 0x1ebbe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbe4) {
            ctx->pc = 0x1EBC28u;
            goto label_1ebc28;
        }
    }
    ctx->pc = 0x1EBBECu;
label_1ebbec:
    // 0x1ebbec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ebbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ebbf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBBF0u;
    {
        const bool branch_taken_0x1ebbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBF0u;
        // 0x1ebbf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbf0) {
            ctx->pc = 0x1EBC08u;
            goto label_1ebc08;
        }
    }
    ctx->pc = 0x1EBBF8u;
    // 0x1ebbf8: 0xc07af78  jal         func_1EBDE0
    ctx->pc = 0x1EBBF8u;
    SET_GPR_U32(ctx, 31, 0x1EBC00u);
    ctx->pc = 0x1EBBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBBF8u;
    // 0x1ebbfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBDE0u, 0x1EBBF8u, 0x1EBC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC00u;
label_1ebc00:
    // 0x1ebc00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBC00u;
    {
        const bool branch_taken_0x1ebc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC00u;
        // 0x1ebc04: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc00) {
            ctx->pc = 0x1EBC14u;
            goto label_1ebc14;
        }
    }
    ctx->pc = 0x1EBC08u;
label_1ebc08:
    // 0x1ebc08: 0xc07af86  jal         func_1EBE18
    ctx->pc = 0x1EBC08u;
    SET_GPR_U32(ctx, 31, 0x1EBC10u);
    ctx->pc = 0x1EBC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBC08u;
    // 0x1ebc0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBE18u, 0x1EBC08u, 0x1EBC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC10u;
label_1ebc10:
    // 0x1ebc10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ebc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebc14:
    // 0x1ebc14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBC14u;
    {
        const bool branch_taken_0x1ebc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC14u;
        // 0x1ebc18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc14) {
            ctx->pc = 0x1EBC28u;
            goto label_1ebc28;
        }
    }
    ctx->pc = 0x1EBC1Cu;
    // 0x1ebc1c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1EBC1Cu;
    SET_GPR_U32(ctx, 31, 0x1EBC24u);
    ctx->pc = 0x1EBC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBC1Cu;
    // 0x1ebc20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1EBC1Cu, 0x1EBC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC24u;
label_1ebc24:
    // 0x1ebc24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebc28:
    // 0x1ebc28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ebc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebc2c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ebc2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ebc30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ebc30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebc34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ebc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ebc38: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC38u;
        // 0x1ebc3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBC40u;
}
