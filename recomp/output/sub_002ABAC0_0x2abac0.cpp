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

// Function: sub_002ABAC0
// Address: 0x2abac0 - 0x2abbc0
void sub_002ABAC0_0x2abac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABAC0_0x2abac0");
#endif

    switch (ctx->pc) {
        case 0x2abb9cu: goto label_2abb9c;
        case 0x2abba8u: goto label_2abba8;
        default: break;
    }

    ctx->pc = 0x2abac0u;

    // 0x2abac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2abac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2abac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2abac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2abac8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2abac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2abacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2abaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abad0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2abad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2abad4: 0x9603004a  lhu         $v1, 0x4A($s0)
    ctx->pc = 0x2abad4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x2abad8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ABAD8u;
    {
        const bool branch_taken_0x2abad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAD8u;
        // 0x2abadc: 0x30a6ffff  andi        $a2, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abad8) {
            ctx->pc = 0x2ABAF8u;
            goto label_2abaf8;
        }
    }
    ctx->pc = 0x2ABAE0u;
    // 0x2abae0: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x2abae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2abae4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABAE4u;
    {
        const bool branch_taken_0x2abae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2abae4) {
            ctx->pc = 0x2ABAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABAE4u;
            // 0x2abae8: 0x96030026  lhu         $v1, 0x26($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABAFCu;
            goto label_2abafc;
        }
    }
    ctx->pc = 0x2ABAECu;
    // 0x2abaec: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2abaecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2abaf0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2ABAF0u;
    {
        const bool branch_taken_0x2abaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAF0u;
        // 0x2abaf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abaf0) {
            ctx->pc = 0x2ABBACu;
            goto label_2abbac;
        }
    }
    ctx->pc = 0x2ABAF8u;
label_2abaf8:
    // 0x2abaf8: 0x96030026  lhu         $v1, 0x26($s0)
    ctx->pc = 0x2abaf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
label_2abafc:
    // 0x2abafc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2abafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abb00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2abb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2abb04: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABB04u;
    {
        const bool branch_taken_0x2abb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB04u;
        // 0x2abb08: 0x96070024  lhu         $a3, 0x24($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb04) {
            ctx->pc = 0x2ABB1Cu;
            goto label_2abb1c;
        }
    }
    ctx->pc = 0x2ABB0Cu;
    // 0x2abb0c: 0x9602004a  lhu         $v0, 0x4A($s0)
    ctx->pc = 0x2abb0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x2abb10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2abb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb14: 0xa6000028  sh          $zero, 0x28($s0)
    ctx->pc = 0x2abb14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x2abb18: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x2abb18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
label_2abb1c:
    // 0x2abb1c: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2ABB1Cu;
    {
        const bool branch_taken_0x2abb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abb1c) {
            ctx->pc = 0x2ABB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABB1Cu;
            // 0x2abb20: 0x96020024  lhu         $v0, 0x24($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB7Cu;
            goto label_2abb7c;
        }
    }
    ctx->pc = 0x2ABB24u;
    // 0x2abb24: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x2abb24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x2abb28: 0x9605004a  lhu         $a1, 0x4A($s0)
    ctx->pc = 0x2abb28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x2abb2c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2abb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2abb30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2abb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2abb34: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABB34u;
    {
        const bool branch_taken_0x2abb34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB34u;
        // 0x2abb38: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb34) {
            ctx->pc = 0x2ABB50u;
            goto label_2abb50;
        }
    }
    ctx->pc = 0x2ABB3Cu;
    // 0x2abb3c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2abb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2abb40: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABB40u;
    {
        const bool branch_taken_0x2abb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abb40) {
            ctx->pc = 0x2ABB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABB40u;
            // 0x2abb44: 0x96020026  lhu         $v0, 0x26($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB54u;
            goto label_2abb54;
        }
    }
    ctx->pc = 0x2ABB48u;
    // 0x2abb48: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2abb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb4c: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x2abb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
label_2abb50:
    // 0x2abb50: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x2abb50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
label_2abb54:
    // 0x2abb54: 0x96040024  lhu         $a0, 0x24($s0)
    ctx->pc = 0x2abb54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2abb58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2abb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2abb5c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2abb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2abb60: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x2abb60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2abb64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABB64u;
    {
        const bool branch_taken_0x2abb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB64u;
        // 0x2abb68: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb64) {
            ctx->pc = 0x2ABB74u;
            goto label_2abb74;
        }
    }
    ctx->pc = 0x2ABB6Cu;
    // 0x2abb6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ABB6Cu;
    {
        const bool branch_taken_0x2abb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB6Cu;
        // 0x2abb70: 0xa6020028  sh          $v0, 0x28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb6c) {
            ctx->pc = 0x2ABB78u;
            goto label_2abb78;
        }
    }
    ctx->pc = 0x2ABB74u;
label_2abb74:
    // 0x2abb74: 0xa6000028  sh          $zero, 0x28($s0)
    ctx->pc = 0x2abb74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 0));
label_2abb78:
    // 0x2abb78: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x2abb78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_2abb7c:
    // 0x2abb7c: 0x54e20003  bnel        $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABB7Cu;
    {
        const bool branch_taken_0x2abb7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2abb7c) {
            ctx->pc = 0x2ABB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABB7Cu;
            // 0x2abb80: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB8Cu;
            goto label_2abb8c;
        }
    }
    ctx->pc = 0x2ABB84u;
    // 0x2abb84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2ABB84u;
    {
        const bool branch_taken_0x2abb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB84u;
        // 0x2abb88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb84) {
            ctx->pc = 0x2ABBACu;
            goto label_2abbac;
        }
    }
    ctx->pc = 0x2ABB8Cu;
label_2abb8c:
    // 0x2abb8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABB8Cu;
    {
        const bool branch_taken_0x2abb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB8Cu;
        // 0x2abb90: 0x2611000c  addiu       $s1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb8c) {
            ctx->pc = 0x2ABB9Cu;
            goto label_2abb9c;
        }
    }
    ctx->pc = 0x2ABB94u;
    // 0x2abb94: 0xc0ab39e  jal         func_2ACE78
    ctx->pc = 0x2ABB94u;
    SET_GPR_U32(ctx, 31, 0x2ABB9Cu);
    ctx->pc = 0x2ABB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB94u;
    // 0x2abb98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE78u, 0x2ABB94u, 0x2ABB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB9Cu;
label_2abb9c:
    // 0x2abb9c: 0x96050024  lhu         $a1, 0x24($s0)
    ctx->pc = 0x2abb9cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2abba0: 0xc0ab386  jal         func_2ACE18
    ctx->pc = 0x2ABBA0u;
    SET_GPR_U32(ctx, 31, 0x2ABBA8u);
    ctx->pc = 0x2ABBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABBA0u;
    // 0x2abba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE18u, 0x2ABBA0u, 0x2ABBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABBA8u;
label_2abba8:
    // 0x2abba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abbac:
    // 0x2abbac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2abbacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abbb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2abbb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2abbb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2abbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBB8u;
        // 0x2abbbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABBC0u;
}
