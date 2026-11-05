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

// Function: sub_0016BD88
// Address: 0x16bd88 - 0x16bed0
void sub_0016BD88_0x16bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BD88_0x16bd88");
#endif

    switch (ctx->pc) {
        case 0x16bdc8u: goto label_16bdc8;
        case 0x16bde8u: goto label_16bde8;
        case 0x16be10u: goto label_16be10;
        case 0x16be48u: goto label_16be48;
        case 0x16be58u: goto label_16be58;
        case 0x16be78u: goto label_16be78;
        default: break;
    }

    ctx->pc = 0x16bd88u;

    // 0x16bd88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16bd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16bd8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16bd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bd90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16bd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16bd94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16bd98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16bd98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16bd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16bda0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16bda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16bda4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16bda8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16bdac: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16bdb0: 0x92620194  lbu         $v0, 0x194($s3)
    ctx->pc = 0x16bdb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 404)));
    // 0x16bdb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16BDB4u;
    {
        const bool branch_taken_0x16bdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDB4u;
        // 0x16bdb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdb4) {
            ctx->pc = 0x16BDE0u;
            goto label_16bde0;
        }
    }
    ctx->pc = 0x16BDBCu;
    // 0x16bdbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16bdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdc0: 0xc05ab66  jal         func_16AD98
    ctx->pc = 0x16BDC0u;
    SET_GPR_U32(ctx, 31, 0x16BDC8u);
    ctx->pc = 0x16BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BDC0u;
    // 0x16bdc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AD98u, 0x16BDC0u, 0x16BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDC8u;
label_16bdc8:
    // 0x16bdc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16bdcc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16bdd0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bdd4: 0x8c74001c  lw          $s4, 0x1C($v1)
    ctx->pc = 0x16bdd4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16bdd8: 0x56800005  bnel        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BDD8u;
    {
        const bool branch_taken_0x16bdd8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bdd8) {
            ctx->pc = 0x16BDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BDD8u;
            // 0x16bddc: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BDF0u;
            goto label_16bdf0;
        }
    }
    ctx->pc = 0x16BDE0u;
label_16bde0:
    // 0x16bde0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x16BDE0u;
    {
        const bool branch_taken_0x16bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDE0u;
        // 0x16bde4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bde0) {
            ctx->pc = 0x16BEA4u;
            goto label_16bea4;
        }
    }
    ctx->pc = 0x16BDE8u;
label_16bde8:
    // 0x16bde8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x16BDE8u;
    {
        const bool branch_taken_0x16bde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDE8u;
        // 0x16bdec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bde8) {
            ctx->pc = 0x16BEA4u;
            goto label_16bea4;
        }
    }
    ctx->pc = 0x16BDF0u;
label_16bdf0:
    // 0x16bdf0: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x16bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x16bdf4: 0x8e650154  lw          $a1, 0x154($s3)
    ctx->pc = 0x16bdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x16bdf8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x16bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x16bdfc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16BDFCu;
    {
        const bool branch_taken_0x16bdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDFCu;
        // 0x16be00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdfc) {
            ctx->pc = 0x16BE30u;
            goto label_16be30;
        }
    }
    ctx->pc = 0x16BE04u;
    // 0x16be04: 0x92660194  lbu         $a2, 0x194($s3)
    ctx->pc = 0x16be04u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 404)));
    // 0x16be08: 0x26640154  addiu       $a0, $s3, 0x154
    ctx->pc = 0x16be08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 340));
    // 0x16be0c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x16be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16be10:
    // 0x16be10: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x16be10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16be14: 0x12260022  beq         $s1, $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x16BE14u;
    {
        const bool branch_taken_0x16be14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x16BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE14u;
        // 0x16be18: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be14) {
            ctx->pc = 0x16BEA0u;
            goto label_16bea0;
        }
    }
    ctx->pc = 0x16BE1Cu;
    // 0x16be1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16be20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16be20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16be24: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x16be24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x16be28: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16BE28u;
    {
        const bool branch_taken_0x16be28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE28u;
        // 0x16be2c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be28) {
            ctx->pc = 0x16BE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16be10;
        }
    }
    ctx->pc = 0x16BE30u;
label_16be30:
    // 0x16be30: 0x92620194  lbu         $v0, 0x194($s3)
    ctx->pc = 0x16be30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 404)));
    // 0x16be34: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x16be34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16be38: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16BE38u;
    {
        const bool branch_taken_0x16be38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE38u;
        // 0x16be3c: 0x8e150000  lw          $s5, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be38) {
            ctx->pc = 0x16BEA0u;
            goto label_16bea0;
        }
    }
    ctx->pc = 0x16BE40u;
    // 0x16be40: 0x26760154  addiu       $s6, $s3, 0x154
    ctx->pc = 0x16be40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 340));
    // 0x16be44: 0x0  nop
    ctx->pc = 0x16be44u;
    // NOP
label_16be48:
    // 0x16be48: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x16be48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16be4c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16be4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16be50: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x16be50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x16be54: 0x0  nop
    ctx->pc = 0x16be54u;
    // NOP
label_16be58:
    // 0x16be58: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BE58u;
    {
        const bool branch_taken_0x16be58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE58u;
        // 0x16be5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be58) {
            ctx->pc = 0x16BE64u;
            goto label_16be64;
        }
    }
    ctx->pc = 0x16BE60u;
    // 0x16be60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16be64:
    // 0x16be64: 0x1055ffe0  beq         $v0, $s5, . + 4 + (-0x20 << 2)
    ctx->pc = 0x16BE64u;
    {
        const bool branch_taken_0x16be64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x16BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE64u;
        // 0x16be68: 0x521026  xor         $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be64) {
            ctx->pc = 0x16BDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bde8;
        }
    }
    ctx->pc = 0x16BE6Cu;
    // 0x16be6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16be6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be70: 0xc041196  jal         func_104658
    ctx->pc = 0x16BE70u;
    SET_GPR_U32(ctx, 31, 0x16BE78u);
    ctx->pc = 0x16BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE70u;
    // 0x16be74: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104658u, 0x16BE70u, 0x16BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BE78u;
label_16be78:
    // 0x16be78: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16BE78u;
    {
        const bool branch_taken_0x16be78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16be78) {
            ctx->pc = 0x16BE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BE78u;
            // 0x16be7c: 0x8e83000c  lw          $v1, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16be58;
        }
    }
    ctx->pc = 0x16BE80u;
    // 0x16be80: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x16be80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16be84: 0x92640194  lbu         $a0, 0x194($s3)
    ctx->pc = 0x16be84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 404)));
    // 0x16be88: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x16be88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16be8c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16be90: 0x224202b  sltu        $a0, $s1, $a0
    ctx->pc = 0x16be90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x16be94: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x16be94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x16be98: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x16BE98u;
    {
        const bool branch_taken_0x16be98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE98u;
        // 0x16be9c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be98) {
            ctx->pc = 0x16BE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16be48;
        }
    }
    ctx->pc = 0x16BEA0u;
label_16bea0:
    // 0x16bea0: 0x92620194  lbu         $v0, 0x194($s3)
    ctx->pc = 0x16bea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 404)));
label_16bea4:
    // 0x16bea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16bea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16beac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16beacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16beb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16beb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16beb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16beb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16beb8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16beb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16bebc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16bebcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bec0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16bec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16bec4: 0x3e00008  jr          $ra
    ctx->pc = 0x16BEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEC4u;
        // 0x16bec8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BECCu;
    // 0x16becc: 0x0  nop
    ctx->pc = 0x16beccu;
    // NOP
    ctx->pc = 0x16bed0u;
}
