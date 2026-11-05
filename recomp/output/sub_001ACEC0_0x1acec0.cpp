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

// Function: sub_001ACEC0
// Address: 0x1acec0 - 0x1acfb0
void sub_001ACEC0_0x1acec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACEC0_0x1acec0");
#endif

    ctx->pc = 0x1acec0u;

    // 0x1acec0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1acec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1acec4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1acec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1acec8: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x1acec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x1acecc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aceccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aced0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aced4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1aced4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aced8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACED8u;
        // 0x1acedc: 0xac850154  sw          $a1, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACEE0u;
    // 0x1acee0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1acee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acee4: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1acee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1acee8: 0x8ca40150  lw          $a0, 0x150($a1)
    ctx->pc = 0x1acee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x1aceec: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ACEECu;
    {
        const bool branch_taken_0x1aceec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEECu;
        // 0x1acef0: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aceec) {
            ctx->pc = 0x1ACF04u;
            goto label_1acf04;
        }
    }
    ctx->pc = 0x1ACEF4u;
    // 0x1acef4: 0x8ca300a8  lw          $v1, 0xA8($a1)
    ctx->pc = 0x1acef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x1acef8: 0x24020577  addiu       $v0, $zero, 0x577
    ctx->pc = 0x1acef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1399));
    // 0x1acefc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ACEFCu;
    {
        const bool branch_taken_0x1acefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ACF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEFCu;
        // 0x1acf00: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acefc) {
            ctx->pc = 0x1ACF1Cu;
            goto label_1acf1c;
        }
    }
    ctx->pc = 0x1ACF04u;
label_1acf04:
    // 0x1acf04: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ACF04u;
    {
        const bool branch_taken_0x1acf04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acf04) {
            ctx->pc = 0x1ACF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACF04u;
            // 0x1acf08: 0x8ca20150  lw          $v0, 0x150($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACF28u;
            goto label_1acf28;
        }
    }
    ctx->pc = 0x1ACF0Cu;
    // 0x1acf0c: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x1acf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x1acf10: 0x24020680  addiu       $v0, $zero, 0x680
    ctx->pc = 0x1acf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x1acf14: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACF14u;
    {
        const bool branch_taken_0x1acf14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acf14) {
            ctx->pc = 0x1ACF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACF14u;
            // 0x1acf18: 0x8ca20150  lw          $v0, 0x150($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACF28u;
            goto label_1acf28;
        }
    }
    ctx->pc = 0x1ACF1Cu;
label_1acf1c:
    // 0x1acf1c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1acf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1acf20: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF20u;
        // 0x1acf24: 0xaca20154  sw          $v0, 0x154($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACF28u;
label_1acf28:
    // 0x1acf28: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1acf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1acf2c: 0x246323d8  addiu       $v1, $v1, 0x23D8
    ctx->pc = 0x1acf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9176));
    // 0x1acf30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1acf30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1acf34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acf38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1acf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1acf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF3Cu;
        // 0x1acf40: 0xaca40154  sw          $a0, 0x154($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACF44u;
    // 0x1acf44: 0x0  nop
    ctx->pc = 0x1acf44u;
    // NOP
    // 0x1acf48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1acf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf4c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1acf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1acf50: 0x8ca40150  lw          $a0, 0x150($a1)
    ctx->pc = 0x1acf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x1acf54: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ACF54u;
    {
        const bool branch_taken_0x1acf54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF54u;
        // 0x1acf58: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf54) {
            ctx->pc = 0x1ACF6Cu;
            goto label_1acf6c;
        }
    }
    ctx->pc = 0x1ACF5Cu;
    // 0x1acf5c: 0x8ca300a8  lw          $v1, 0xA8($a1)
    ctx->pc = 0x1acf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x1acf60: 0x24020577  addiu       $v0, $zero, 0x577
    ctx->pc = 0x1acf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1399));
    // 0x1acf64: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ACF64u;
    {
        const bool branch_taken_0x1acf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ACF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF64u;
        // 0x1acf68: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf64) {
            ctx->pc = 0x1ACF84u;
            goto label_1acf84;
        }
    }
    ctx->pc = 0x1ACF6Cu;
label_1acf6c:
    // 0x1acf6c: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ACF6Cu;
    {
        const bool branch_taken_0x1acf6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acf6c) {
            ctx->pc = 0x1ACF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACF6Cu;
            // 0x1acf70: 0x8ca20150  lw          $v0, 0x150($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACF90u;
            goto label_1acf90;
        }
    }
    ctx->pc = 0x1ACF74u;
    // 0x1acf74: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x1acf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x1acf78: 0x24020680  addiu       $v0, $zero, 0x680
    ctx->pc = 0x1acf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x1acf7c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACF7Cu;
    {
        const bool branch_taken_0x1acf7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acf7c) {
            ctx->pc = 0x1ACF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACF7Cu;
            // 0x1acf80: 0x8ca20150  lw          $v0, 0x150($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACF90u;
            goto label_1acf90;
        }
    }
    ctx->pc = 0x1ACF84u;
label_1acf84:
    // 0x1acf84: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1acf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1acf88: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF88u;
        // 0x1acf8c: 0xaca20154  sw          $v0, 0x154($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACF90u;
label_1acf90:
    // 0x1acf90: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1acf90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1acf94: 0x24632520  addiu       $v1, $v1, 0x2520
    ctx->pc = 0x1acf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9504));
    // 0x1acf98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1acf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1acf9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acfa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1acfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFA4u;
        // 0x1acfa8: 0xaca40154  sw          $a0, 0x154($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACFACu;
    // 0x1acfac: 0x0  nop
    ctx->pc = 0x1acfacu;
    // NOP
    ctx->pc = 0x1acfb0u;
}
