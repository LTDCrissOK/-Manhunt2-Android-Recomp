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

// Function: sub_00109A68
// Address: 0x109a68 - 0x109ba8
void sub_00109A68_0x109a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109A68_0x109a68");
#endif

    switch (ctx->pc) {
        case 0x109aa0u: goto label_109aa0;
        case 0x109ab4u: goto label_109ab4;
        case 0x109ae8u: goto label_109ae8;
        case 0x109b08u: goto label_109b08;
        case 0x109b30u: goto label_109b30;
        default: break;
    }

    ctx->pc = 0x109a68u;

    // 0x109a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109a6c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x109a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x109a70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x109a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x109a74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x109a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x109a78: 0x24539a08  addiu       $s3, $v0, -0x65F8
    ctx->pc = 0x109a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x109a7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109a80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x109a80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109a88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x109a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x109a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x109a90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x109a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x109a98: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x109A98u;
    SET_GPR_U32(ctx, 31, 0x109AA0u);
    ctx->pc = 0x109A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A98u;
    // 0x109a9c: 0x24120021  addiu       $s2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x109A98u, 0x109AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AA0u;
label_109aa0:
    // 0x109aa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109aa4: 0x12120010  beq         $s0, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x109AA4u;
    {
        const bool branch_taken_0x109aa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x109AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AA4u;
        // 0x109aa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109aa4) {
            ctx->pc = 0x109AE8u;
            goto label_109ae8;
        }
    }
    ctx->pc = 0x109AACu;
    // 0x109aac: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x109AACu;
    SET_GPR_U32(ctx, 31, 0x109AB4u);
    ctx->pc = 0x109AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AACu;
    // 0x109ab0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x109AACu, 0x109AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AB4u;
label_109ab4:
    // 0x109ab4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109ab4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ab8: 0x10720032  beq         $v1, $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x109AB8u;
    {
        const bool branch_taken_0x109ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x109ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AB8u;
        // 0x109abc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ab8) {
            ctx->pc = 0x109B84u;
            goto label_109b84;
        }
    }
    ctx->pc = 0x109AC0u;
    // 0x109ac0: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x109AC0u;
    {
        const bool branch_taken_0x109ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x109AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AC0u;
        // 0x109ac4: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ac0) {
            ctx->pc = 0x109AE8u;
            goto label_109ae8;
        }
    }
    ctx->pc = 0x109AC8u;
    // 0x109ac8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x109ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x109acc: 0x244200cd  addiu       $v0, $v0, 0xCD
    ctx->pc = 0x109accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 205));
    // 0x109ad0: 0x2825821  addu        $t3, $s4, $v0
    ctx->pc = 0x109ad0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x109ad4: 0x916a0010  lbu         $t2, 0x10($t3)
    ctx->pc = 0x109ad4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x109ad8: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x109AD8u;
    {
        const bool branch_taken_0x109ad8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AD8u;
        // 0x109adc: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ad8) {
            ctx->pc = 0x109AF0u;
            goto label_109af0;
        }
    }
    ctx->pc = 0x109AE0u;
    // 0x109ae0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x109AE0u;
    {
        const bool branch_taken_0x109ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AE0u;
        // 0x109ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ae0) {
            ctx->pc = 0x109B84u;
            goto label_109b84;
        }
    }
    ctx->pc = 0x109AE8u;
label_109ae8:
    // 0x109ae8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x109AE8u;
    {
        const bool branch_taken_0x109ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AE8u;
        // 0x109aec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ae8) {
            ctx->pc = 0x109B84u;
            goto label_109b84;
        }
    }
    ctx->pc = 0x109AF0u;
label_109af0:
    // 0x109af0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x109af0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109af8: 0x244200cd  addiu       $v0, $v0, 0xCD
    ctx->pc = 0x109af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 205));
    // 0x109afc: 0x11400020  beqz        $t2, . + 4 + (0x20 << 2)
    ctx->pc = 0x109AFCu;
    {
        const bool branch_taken_0x109afc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AFCu;
        // 0x109b00: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109afc) {
            ctx->pc = 0x109B80u;
            goto label_109b80;
        }
    }
    ctx->pc = 0x109B04u;
    // 0x109b04: 0x1691021  addu        $v0, $t3, $t1
    ctx->pc = 0x109b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_109b08:
    // 0x109b08: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x109b08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109b0c: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x109b0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109b10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x109b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109b14: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x109B14u;
    {
        const bool branch_taken_0x109b14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B14u;
        // 0x109b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b14) {
            ctx->pc = 0x109B50u;
            goto label_109b50;
        }
    }
    ctx->pc = 0x109B1Cu;
    // 0x109b1c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x109b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109b20: 0x5047000b  beql        $v0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x109B20u;
    {
        const bool branch_taken_0x109b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x109b20) {
            ctx->pc = 0x109B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109B20u;
            // 0x109b24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109B50u;
            goto label_109b50;
        }
    }
    ctx->pc = 0x109B28u;
    // 0x109b28: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x109b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x109b2c: 0x0  nop
    ctx->pc = 0x109b2cu;
    // NOP
label_109b30:
    // 0x109b30: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x109b30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x109b34: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x109b34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x109b38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x109B38u;
    {
        const bool branch_taken_0x109b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B38u;
        // 0x109b3c: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b38) {
            ctx->pc = 0x109B50u;
            goto label_109b50;
        }
    }
    ctx->pc = 0x109B40u;
    // 0x109b40: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x109b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109b44: 0x1467fffa  bne         $v1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x109B44u;
    {
        const bool branch_taken_0x109b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x109B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B44u;
        // 0x109b48: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b44) {
            ctx->pc = 0x109B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109b30;
        }
    }
    ctx->pc = 0x109B4Cu;
    // 0x109b4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x109b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109b50:
    // 0x109b50: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109B50u;
    {
        const bool branch_taken_0x109b50 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B50u;
        // 0x109b54: 0x2cc20010  sltiu       $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b50) {
            ctx->pc = 0x109B6Cu;
            goto label_109b6c;
        }
    }
    ctx->pc = 0x109B58u;
    // 0x109b58: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x109B58u;
    {
        const bool branch_taken_0x109b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B58u;
        // 0x109b5c: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b58) {
            ctx->pc = 0x109AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109ae8;
        }
    }
    ctx->pc = 0x109B60u;
    // 0x109b60: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x109b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x109b64: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x109b64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x109b68: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x109b68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
label_109b6c:
    // 0x109b6c: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x109b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x109b70: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x109b70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x109b74: 0x12a182b  sltu        $v1, $t1, $t2
    ctx->pc = 0x109b74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x109b78: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x109B78u;
    {
        const bool branch_taken_0x109b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x109B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B78u;
        // 0x109b7c: 0x1691021  addu        $v0, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b78) {
            ctx->pc = 0x109B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109b08;
        }
    }
    ctx->pc = 0x109B80u;
label_109b80:
    // 0x109b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109b84:
    // 0x109b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109b88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x109b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109b8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x109b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109b90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x109b90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109b94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x109b94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109b98: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x109b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x109b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x109B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B9Cu;
        // 0x109ba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109BA4u;
    // 0x109ba4: 0x0  nop
    ctx->pc = 0x109ba4u;
    // NOP
    ctx->pc = 0x109ba8u;
}
