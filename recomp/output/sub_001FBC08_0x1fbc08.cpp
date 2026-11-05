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

// Function: sub_001FBC08
// Address: 0x1fbc08 - 0x1fbd00
void sub_001FBC08_0x1fbc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBC08_0x1fbc08");
#endif

    switch (ctx->pc) {
        case 0x1fbc88u: goto label_1fbc88;
        case 0x1fbca0u: goto label_1fbca0;
        case 0x1fbcbcu: goto label_1fbcbc;
        case 0x1fbcccu: goto label_1fbccc;
        case 0x1fbce0u: goto label_1fbce0;
        default: break;
    }

    ctx->pc = 0x1fbc08u;

    // 0x1fbc08: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1fbc08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1fbc0c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fbc0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fbc10: 0x90c3932c  lbu         $v1, -0x6CD4($a2)
    ctx->pc = 0x1fbc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F932Cu));
    // 0x1fbc14: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fbc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fbc18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fbc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fbc1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fbc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fbc20: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1fbc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fbc24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fbc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fbc28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fbc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fbc2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fbc2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc30: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1fbc30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fbc34: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x1fbc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1fbc38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBC38u;
    {
        const bool branch_taken_0x1fbc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC38u;
        // 0x1fbc3c: 0xa0c3932c  sb          $v1, -0x6CD4($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294939436), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc38) {
            ctx->pc = 0x1FBC48u;
            goto label_1fbc48;
        }
    }
    ctx->pc = 0x1FBC40u;
    // 0x1fbc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbc44: 0xa0c2932c  sb          $v0, -0x6CD4($a2)
    ctx->pc = 0x1fbc44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294939436), (uint8_t)GPR_U32(ctx, 2));
label_1fbc48:
    // 0x1fbc48: 0x340280f0  ori         $v0, $zero, 0x80F0
    ctx->pc = 0x1fbc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1fbc4c: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1fbc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1fbc50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fbc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fbc54: 0x90c4932c  lbu         $a0, -0x6CD4($a2)
    ctx->pc = 0x1fbc54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294939436)));
    // 0x1fbc58: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x1fbc58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1fbc5c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1fbc5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fbc60: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fbc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fbc64: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FBC64u;
    {
        const bool branch_taken_0x1fbc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC64u;
        // 0x1fbc68: 0xa204003c  sb          $a0, 0x3C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc64) {
            ctx->pc = 0x1FBCE0u;
            goto label_1fbce0;
        }
    }
    ctx->pc = 0x1FBC6Cu;
    // 0x1fbc6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbc70: 0x90c6932c  lbu         $a2, -0x6CD4($a2)
    ctx->pc = 0x1fbc70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294939436)));
    // 0x1fbc74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1fbc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1fbc78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fbc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc80: 0xc07ef4e  jal         func_1FBD38
    ctx->pc = 0x1FBC80u;
    SET_GPR_U32(ctx, 31, 0x1FBC88u);
    ctx->pc = 0x1FBC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC80u;
    // 0x1fbc84: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD38u, 0x1FBC80u, 0x1FBC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC88u;
label_1fbc88:
    // 0x1fbc88: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBC88u;
    {
        const bool branch_taken_0x1fbc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbc88) {
            ctx->pc = 0x1FBC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBC88u;
            // 0x1fbc8c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBCA8u;
            goto label_1fbca8;
        }
    }
    ctx->pc = 0x1FBC90u;
    // 0x1fbc90: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1fbc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fbc94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fbc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc98: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1FBC98u;
    SET_GPR_U32(ctx, 31, 0x1FBCA0u);
    ctx->pc = 0x1FBC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC98u;
    // 0x1fbc9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1FBC98u, 0x1FBCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCA0u;
label_1fbca0:
    // 0x1fbca0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FBCA0u;
    {
        const bool branch_taken_0x1fbca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCA0u;
        // 0x1fbca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbca0) {
            ctx->pc = 0x1FBCE4u;
            goto label_1fbce4;
        }
    }
    ctx->pc = 0x1FBCA8u;
label_1fbca8:
    // 0x1fbca8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fbca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fbcac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBCACu;
    {
        const bool branch_taken_0x1fbcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCACu;
        // 0x1fbcb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcac) {
            ctx->pc = 0x1FBCC4u;
            goto label_1fbcc4;
        }
    }
    ctx->pc = 0x1FBCB4u;
    // 0x1fbcb4: 0xc07efae  jal         func_1FBEB8
    ctx->pc = 0x1FBCB4u;
    SET_GPR_U32(ctx, 31, 0x1FBCBCu);
    ctx->pc = 0x1FBCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCB4u;
    // 0x1fbcb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEB8u, 0x1FBCB4u, 0x1FBCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCBCu;
label_1fbcbc:
    // 0x1fbcbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBCBCu;
    {
        const bool branch_taken_0x1fbcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCBCu;
        // 0x1fbcc0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcbc) {
            ctx->pc = 0x1FBCD0u;
            goto label_1fbcd0;
        }
    }
    ctx->pc = 0x1FBCC4u;
label_1fbcc4:
    // 0x1fbcc4: 0xc07efba  jal         func_1FBEE8
    ctx->pc = 0x1FBCC4u;
    SET_GPR_U32(ctx, 31, 0x1FBCCCu);
    ctx->pc = 0x1FBCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCC4u;
    // 0x1fbcc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE8u, 0x1FBCC4u, 0x1FBCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCCCu;
label_1fbccc:
    // 0x1fbccc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fbcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbcd0:
    // 0x1fbcd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBCD0u;
    {
        const bool branch_taken_0x1fbcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCD0u;
        // 0x1fbcd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcd0) {
            ctx->pc = 0x1FBCE4u;
            goto label_1fbce4;
        }
    }
    ctx->pc = 0x1FBCD8u;
    // 0x1fbcd8: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1FBCD8u;
    SET_GPR_U32(ctx, 31, 0x1FBCE0u);
    ctx->pc = 0x1FBCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCD8u;
    // 0x1fbcdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1FBCD8u, 0x1FBCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCE0u;
label_1fbce0:
    // 0x1fbce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fbce4:
    // 0x1fbce4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fbce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbce8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fbce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbcec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fbcecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbcf0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fbcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fbcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCF4u;
        // 0x1fbcf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBCFCu;
    // 0x1fbcfc: 0x0  nop
    ctx->pc = 0x1fbcfcu;
    // NOP
    ctx->pc = 0x1fbd00u;
}
