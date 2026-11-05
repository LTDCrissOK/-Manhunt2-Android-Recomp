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

// Function: sub_0016BC70
// Address: 0x16bc70 - 0x16bd88
void sub_0016BC70_0x16bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BC70_0x16bc70");
#endif

    switch (ctx->pc) {
        case 0x16bcb4u: goto label_16bcb4;
        case 0x16bcd4u: goto label_16bcd4;
        case 0x16bcf8u: goto label_16bcf8;
        case 0x16bd10u: goto label_16bd10;
        case 0x16bd30u: goto label_16bd30;
        default: break;
    }

    ctx->pc = 0x16bc70u;

    // 0x16bc70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16bc74: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16bc78: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x16bc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x16bc7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16bc7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16bc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bc84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16bc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16bc88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16bc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16bc8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16bc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16bc90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16bc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16bc94: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16bc98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16bc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16bc9c: 0x92a20194  lbu         $v0, 0x194($s5)
    ctx->pc = 0x16bc9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
    // 0x16bca0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16BCA0u;
    {
        const bool branch_taken_0x16bca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCA0u;
        // 0x16bca4: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bca0) {
            ctx->pc = 0x16BCCCu;
            goto label_16bccc;
        }
    }
    ctx->pc = 0x16BCA8u;
    // 0x16bca8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16bca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bcac: 0xc05ab66  jal         func_16AD98
    ctx->pc = 0x16BCACu;
    SET_GPR_U32(ctx, 31, 0x16BCB4u);
    ctx->pc = 0x16BCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCACu;
    // 0x16bcb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AD98u, 0x16BCACu, 0x16BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCB4u;
label_16bcb4:
    // 0x16bcb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16bcb8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x16bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16bcbc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bcc0: 0x8c72001c  lw          $s2, 0x1C($v1)
    ctx->pc = 0x16bcc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16bcc4: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BCC4u;
    {
        const bool branch_taken_0x16bcc4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bcc4) {
            ctx->pc = 0x16BCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BCC4u;
            // 0x16bcc8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BCDCu;
            goto label_16bcdc;
        }
    }
    ctx->pc = 0x16BCCCu;
label_16bccc:
    // 0x16bccc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x16BCCCu;
    {
        const bool branch_taken_0x16bccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCCCu;
        // 0x16bcd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bccc) {
            ctx->pc = 0x16BD5Cu;
            goto label_16bd5c;
        }
    }
    ctx->pc = 0x16BCD4u;
label_16bcd4:
    // 0x16bcd4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x16BCD4u;
    {
        const bool branch_taken_0x16bcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCD4u;
        // 0x16bcd8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bcd4) {
            ctx->pc = 0x16BD5Cu;
            goto label_16bd5c;
        }
    }
    ctx->pc = 0x16BCDCu;
label_16bcdc:
    // 0x16bcdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16bcdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bce0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x16bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x16bce4: 0x92a30194  lbu         $v1, 0x194($s5)
    ctx->pc = 0x16bce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
    // 0x16bce8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x16BCE8u;
    {
        const bool branch_taken_0x16bce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCE8u;
        // 0x16bcec: 0x8ea50154  lw          $a1, 0x154($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bce8) {
            ctx->pc = 0x16BD58u;
            goto label_16bd58;
        }
    }
    ctx->pc = 0x16BCF0u;
    // 0x16bcf0: 0x26b60154  addiu       $s6, $s5, 0x154
    ctx->pc = 0x16bcf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 340));
    // 0x16bcf4: 0x0  nop
    ctx->pc = 0x16bcf4u;
    // NOP
label_16bcf8:
    // 0x16bcf8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x16bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x16bcfc: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16BCFCu;
    {
        const bool branch_taken_0x16bcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCFCu;
        // 0x16bd00: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bcfc) {
            ctx->pc = 0x16BCD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bcd4;
        }
    }
    ctx->pc = 0x16BD04u;
    // 0x16bd04: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x16bd04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bd08: 0x8ef30000  lw          $s3, 0x0($s7)
    ctx->pc = 0x16bd08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x16bd0c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x16bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_16bd10:
    // 0x16bd10: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BD10u;
    {
        const bool branch_taken_0x16bd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD10u;
        // 0x16bd14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd10) {
            ctx->pc = 0x16BD1Cu;
            goto label_16bd1c;
        }
    }
    ctx->pc = 0x16BD18u;
    // 0x16bd18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16bd1c:
    // 0x16bd1c: 0x1053ffed  beq         $v0, $s3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x16BD1Cu;
    {
        const bool branch_taken_0x16bd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x16BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD1Cu;
        // 0x16bd20: 0x541026  xor         $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd1c) {
            ctx->pc = 0x16BCD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bcd4;
        }
    }
    ctx->pc = 0x16BD24u;
    // 0x16bd24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16bd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd28: 0xc041180  jal         func_104600
    ctx->pc = 0x16BD28u;
    SET_GPR_U32(ctx, 31, 0x16BD30u);
    ctx->pc = 0x16BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BD28u;
    // 0x16bd2c: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104600u, 0x16BD28u, 0x16BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD30u;
label_16bd30:
    // 0x16bd30: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16BD30u;
    {
        const bool branch_taken_0x16bd30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bd30) {
            ctx->pc = 0x16BD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BD30u;
            // 0x16bd34: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bd10;
        }
    }
    ctx->pc = 0x16BD38u;
    // 0x16bd38: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x16bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16bd3c: 0x92a40194  lbu         $a0, 0x194($s5)
    ctx->pc = 0x16bd3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
    // 0x16bd40: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x16bd40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16bd44: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16bd48: 0x224202b  sltu        $a0, $s1, $a0
    ctx->pc = 0x16bd48u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x16bd4c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x16bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x16bd50: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x16BD50u;
    {
        const bool branch_taken_0x16bd50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD50u;
        // 0x16bd54: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd50) {
            ctx->pc = 0x16BCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bcf8;
        }
    }
    ctx->pc = 0x16BD58u;
label_16bd58:
    // 0x16bd58: 0x92a20194  lbu         $v0, 0x194($s5)
    ctx->pc = 0x16bd58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 404)));
label_16bd5c:
    // 0x16bd5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bd5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bd60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16bd60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bd64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16bd64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bd68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16bd68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bd6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16bd6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bd70: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16bd70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16bd74: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16bd74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bd78: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x16bd78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16bd7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16bd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16bd80: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD80u;
        // 0x16bd84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BD88u;
}
