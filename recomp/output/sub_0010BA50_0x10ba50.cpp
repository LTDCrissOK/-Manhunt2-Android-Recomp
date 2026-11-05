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

// Function: sub_0010BA50
// Address: 0x10ba50 - 0x10bb50
void sub_0010BA50_0x10ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BA50_0x10ba50");
#endif

    switch (ctx->pc) {
        case 0x10ba98u: goto label_10ba98;
        case 0x10bb18u: goto label_10bb18;
        default: break;
    }

    ctx->pc = 0x10ba50u;

    // 0x10ba50: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10ba54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10ba54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba58: 0x8cc403b4  lw          $a0, 0x3B4($a2)
    ctx->pc = 0x10ba58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 948)));
    // 0x10ba5c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x10ba5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba60: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x10ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x10ba64: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x10BA64u;
    {
        const bool branch_taken_0x10ba64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x10BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA64u;
        // 0x10ba68: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba64) {
            ctx->pc = 0x10BB04u;
            goto label_10bb04;
        }
    }
    ctx->pc = 0x10BA6Cu;
    // 0x10ba6c: 0x90c200cc  lbu         $v0, 0xCC($a2)
    ctx->pc = 0x10ba6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x10ba70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba74: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x10ba74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10ba78: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10BA78u;
    {
        const bool branch_taken_0x10ba78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA78u;
        // 0x10ba7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba78) {
            ctx->pc = 0x10BAFCu;
            goto label_10bafc;
        }
    }
    ctx->pc = 0x10BA80u;
    // 0x10ba80: 0x90c203b0  lbu         $v0, 0x3B0($a2)
    ctx->pc = 0x10ba80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 944)));
    // 0x10ba84: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10BA84u;
    {
        const bool branch_taken_0x10ba84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA84u;
        // 0x10ba88: 0x8d42a9d4  lw          $v0, -0x562C($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294945236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba84) {
            ctx->pc = 0x10BB00u;
            goto label_10bb00;
        }
    }
    ctx->pc = 0x10BA8Cu;
    // 0x10ba8c: 0x24c8000c  addiu       $t0, $a2, 0xC
    ctx->pc = 0x10ba8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x10ba90: 0x24c702f0  addiu       $a3, $a2, 0x2F0
    ctx->pc = 0x10ba90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
    // 0x10ba94: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x10ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_10ba98:
    // 0x10ba98: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x10ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x10ba9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10baa0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10BAA0u;
    {
        const bool branch_taken_0x10baa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAA0u;
        // 0x10baa4: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10baa0) {
            ctx->pc = 0x10BADCu;
            goto label_10badc;
        }
    }
    ctx->pc = 0x10BAA8u;
    // 0x10baa8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x10baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10baac: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10BAACu;
    {
        const bool branch_taken_0x10baac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10baac) {
            ctx->pc = 0x10BAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BAACu;
            // 0x10bab0: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BADCu;
            goto label_10badc;
        }
    }
    ctx->pc = 0x10BAB4u;
    // 0x10bab4: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x10bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x10bab8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BAB8u;
    {
        const bool branch_taken_0x10bab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bab8) {
            ctx->pc = 0x10BABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BAB8u;
            // 0x10babc: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BADCu;
            goto label_10badc;
        }
    }
    ctx->pc = 0x10BAC0u;
    // 0x10bac0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x10bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x10bac4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10bac8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x10bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x10bacc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10baccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10bad0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10bad4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x10bad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x10bad8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x10bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_10badc:
    // 0x10badc: 0x90c200cc  lbu         $v0, 0xCC($a2)
    ctx->pc = 0x10badcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x10bae0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x10bae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10bae4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x10bae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10bae8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BAE8u;
    {
        const bool branch_taken_0x10bae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAE8u;
        // 0x10baec: 0x8d42a9d4  lw          $v0, -0x562C($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294945236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bae8) {
            ctx->pc = 0x10BB00u;
            goto label_10bb00;
        }
    }
    ctx->pc = 0x10BAF0u;
    // 0x10baf0: 0x90c203b0  lbu         $v0, 0x3B0($a2)
    ctx->pc = 0x10baf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 944)));
    // 0x10baf4: 0x1482ffe8  bne         $a0, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x10BAF4u;
    {
        const bool branch_taken_0x10baf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAF4u;
        // 0x10baf8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10baf4) {
            ctx->pc = 0x10BA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ba98;
        }
    }
    ctx->pc = 0x10BAFCu;
label_10bafc:
    // 0x10bafc: 0x8d42a9d4  lw          $v0, -0x562C($t2)
    ctx->pc = 0x10bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294945236)));
label_10bb00:
    // 0x10bb00: 0xacc203b4  sw          $v0, 0x3B4($a2)
    ctx->pc = 0x10bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 948), GPR_U32(ctx, 2));
label_10bb04:
    // 0x10bb04: 0x90c203b0  lbu         $v0, 0x3B0($a2)
    ctx->pc = 0x10bb04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 944)));
    // 0x10bb08: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10BB08u;
    {
        const bool branch_taken_0x10bb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB08u;
        // 0x10bb0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb08) {
            ctx->pc = 0x10BB48u;
            goto label_10bb48;
        }
    }
    ctx->pc = 0x10BB10u;
    // 0x10bb10: 0x24c702f0  addiu       $a3, $a2, 0x2F0
    ctx->pc = 0x10bb10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
    // 0x10bb14: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x10bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_10bb18:
    // 0x10bb18: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x10bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x10bb1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10bb20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10bb24: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x10bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x10bb28: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x10bb28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x10bb2c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10bb30: 0x90c203b0  lbu         $v0, 0x3B0($a2)
    ctx->pc = 0x10bb30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 944)));
    // 0x10bb34: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x10bb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10bb38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10BB38u;
    {
        const bool branch_taken_0x10bb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB38u;
        // 0x10bb3c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb38) {
            ctx->pc = 0x10BB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bb18;
        }
    }
    ctx->pc = 0x10BB40u;
    // 0x10bb40: 0x3e00008  jr          $ra
    ctx->pc = 0x10BB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB40u;
        // 0x10bb44: 0x90c203b0  lbu         $v0, 0x3B0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 944)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BB48u;
label_10bb48:
    // 0x10bb48: 0x3e00008  jr          $ra
    ctx->pc = 0x10BB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BB50u;
}
