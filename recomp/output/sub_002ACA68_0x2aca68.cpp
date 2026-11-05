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

// Function: sub_002ACA68
// Address: 0x2aca68 - 0x2acb70
void sub_002ACA68_0x2aca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACA68_0x2aca68");
#endif

    switch (ctx->pc) {
        case 0x2acab0u: goto label_2acab0;
        case 0x2acaf0u: goto label_2acaf0;
        case 0x2acb10u: goto label_2acb10;
        default: break;
    }

    ctx->pc = 0x2aca68u;

    // 0x2aca68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aca6c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2aca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2aca70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2aca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2aca74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2aca74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2aca78: 0x8c74bd50  lw          $s4, -0x42B0($v1)
    ctx->pc = 0x2aca78u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x2aca7c: 0x8c43aa7c  lw          $v1, -0x5584($v0)
    ctx->pc = 0x2aca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA7Cu));
    // 0x2aca80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aca84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2aca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2aca88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2aca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2aca8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2aca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2aca90: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2aca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2aca94: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2ACA94u;
    {
        const bool branch_taken_0x2aca94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA94u;
        // 0x2aca98: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca94) {
            ctx->pc = 0x2ACB48u;
            goto label_2acb48;
        }
    }
    ctx->pc = 0x2ACA9Cu;
    // 0x2aca9c: 0x2491001c  addiu       $s1, $a0, 0x1C
    ctx->pc = 0x2aca9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x2acaa0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2acaa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acaa4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2acaa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2acaa8: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x2acaa8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x2acaac: 0x0  nop
    ctx->pc = 0x2acaacu;
    // NOP
label_2acab0:
    // 0x2acab0: 0x8e820224  lw          $v0, 0x224($s4)
    ctx->pc = 0x2acab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 548)));
    // 0x2acab4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2acab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2acab8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2acab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2acabc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acac0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2acac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2acac4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ACAC4u;
    {
        const bool branch_taken_0x2acac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAC4u;
        // 0x2acac8: 0x92a2dc68  lbu         $v0, -0x2398($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294958184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acac4) {
            ctx->pc = 0x2ACB30u;
            goto label_2acb30;
        }
    }
    ctx->pc = 0x2ACACCu;
    // 0x2acacc: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x2acaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2acad0: 0x84a2000c  lh          $v0, 0xC($a1)
    ctx->pc = 0x2acad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2acad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACAD4u;
    {
        const bool branch_taken_0x2acad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAD4u;
        // 0x2acad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acad4) {
            ctx->pc = 0x2ACAE4u;
            goto label_2acae4;
        }
    }
    ctx->pc = 0x2ACADCu;
    // 0x2acadc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACADCu;
    {
        const bool branch_taken_0x2acadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACADCu;
        // 0x2acae0: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acadc) {
            ctx->pc = 0x2ACAE8u;
            goto label_2acae8;
        }
    }
    ctx->pc = 0x2ACAE4u;
label_2acae4:
    // 0x2acae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acae8:
    // 0x2acae8: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2ACAE8u;
    SET_GPR_U32(ctx, 31, 0x2ACAF0u);
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2ACAE8u, 0x2ACAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACAF0u;
label_2acaf0:
    // 0x2acaf0: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x2acaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x2acaf4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2acaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2acaf8: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2acaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2acafc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2ACAFCu;
    {
        const bool branch_taken_0x2acafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acafc) {
            ctx->pc = 0x2ACB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACAFCu;
            // 0x2acb00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACB3Cu;
            goto label_2acb3c;
        }
    }
    ctx->pc = 0x2ACB04u;
    // 0x2acb04: 0x8e100274  lw          $s0, 0x274($s0)
    ctx->pc = 0x2acb04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x2acb08: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2ACB08u;
    SET_GPR_U32(ctx, 31, 0x2ACB10u);
    ctx->pc = 0x2ACB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB08u;
    // 0x2acb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2ACB08u, 0x2ACB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB10u;
label_2acb10:
    // 0x2acb10: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2acb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2acb14: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ACB14u;
    {
        const bool branch_taken_0x2acb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acb14) {
            ctx->pc = 0x2ACB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACB14u;
            // 0x2acb18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACB3Cu;
            goto label_2acb3c;
        }
    }
    ctx->pc = 0x2ACB1Cu;
    // 0x2acb1c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2acb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2acb20: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2acb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2acb24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2acb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2acb28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACB28u;
    {
        const bool branch_taken_0x2acb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB28u;
        // 0x2acb2c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb28) {
            ctx->pc = 0x2ACB38u;
            goto label_2acb38;
        }
    }
    ctx->pc = 0x2ACB30u;
label_2acb30:
    // 0x2acb30: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x2acb30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x2acb34: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2acb34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2acb38:
    // 0x2acb38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2acb38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2acb3c:
    // 0x2acb3c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2acb3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2acb40: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2ACB40u;
    {
        const bool branch_taken_0x2acb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB40u;
        // 0x2acb44: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb40) {
            ctx->pc = 0x2ACAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acab0;
        }
    }
    ctx->pc = 0x2ACB48u;
label_2acb48:
    // 0x2acb48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2acb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acb4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2acb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2acb50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2acb50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acb54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2acb54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2acb58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2acb58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acb5c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2acb5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2acb60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2acb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acb64: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB64u;
        // 0x2acb68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACB6Cu;
    // 0x2acb6c: 0x0  nop
    ctx->pc = 0x2acb6cu;
    // NOP
    ctx->pc = 0x2acb70u;
}
