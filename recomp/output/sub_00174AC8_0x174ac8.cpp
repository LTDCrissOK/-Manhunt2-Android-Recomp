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

// Function: sub_00174AC8
// Address: 0x174ac8 - 0x174bb8
void sub_00174AC8_0x174ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174AC8_0x174ac8");
#endif

    switch (ctx->pc) {
        case 0x174b00u: goto label_174b00;
        case 0x174b18u: goto label_174b18;
        case 0x174b28u: goto label_174b28;
        case 0x174b4cu: goto label_174b4c;
        default: break;
    }

    ctx->pc = 0x174ac8u;

    // 0x174ac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174acc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174ad0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x174ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174ad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174adc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x174adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x174ae0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x174ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x174ae4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x174ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x174ae8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x174ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x174aec: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x174aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x174af0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174AF0u;
    {
        const bool branch_taken_0x174af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AF0u;
        // 0x174af4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174af0) {
            ctx->pc = 0x174B08u;
            goto label_174b08;
        }
    }
    ctx->pc = 0x174AF8u;
    // 0x174af8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x174AF8u;
    {
        const bool branch_taken_0x174af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AF8u;
        // 0x174afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174af8) {
            ctx->pc = 0x174B90u;
            goto label_174b90;
        }
    }
    ctx->pc = 0x174B00u;
label_174b00:
    // 0x174b00: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x174B00u;
    {
        const bool branch_taken_0x174b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B00u;
        // 0x174b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b00) {
            ctx->pc = 0x174B90u;
            goto label_174b90;
        }
    }
    ctx->pc = 0x174B08u;
label_174b08:
    // 0x174b08: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x174b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x174b0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x174b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b10: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x174B10u;
    SET_GPR_U32(ctx, 31, 0x174B18u);
    ctx->pc = 0x174B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B10u;
    // 0x174b14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x174B10u, 0x174B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B18u;
label_174b18:
    // 0x174b18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x174b18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b1c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x174b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x174b20: 0x24559c14  addiu       $s5, $v0, -0x63EC
    ctx->pc = 0x174b20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x174b24: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x174b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_174b28:
    // 0x174b28: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x174b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174b30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x174b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174b34: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x174B34u;
    {
        const bool branch_taken_0x174b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B34u;
        // 0x174b38: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b34) {
            ctx->pc = 0x174B78u;
            goto label_174b78;
        }
    }
    ctx->pc = 0x174B3Cu;
    // 0x174b3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x174b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b40: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x174b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x174b44: 0xc044234  jal         func_1108D0
    ctx->pc = 0x174B44u;
    SET_GPR_U32(ctx, 31, 0x174B4Cu);
    ctx->pc = 0x174B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B44u;
    // 0x174b48: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x174B44u, 0x174B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B4Cu;
label_174b4c:
    // 0x174b4c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x174b50: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x174B50u;
    {
        const bool branch_taken_0x174b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174b50) {
            ctx->pc = 0x174B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174B50u;
            // 0x174b54: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174B7Cu;
            goto label_174b7c;
        }
    }
    ctx->pc = 0x174B58u;
    // 0x174b58: 0x1243ffe9  beq         $s2, $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x174B58u;
    {
        const bool branch_taken_0x174b58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x174B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B58u;
        // 0x174b5c: 0x52102a  slt         $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b58) {
            ctx->pc = 0x174B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174b00;
        }
    }
    ctx->pc = 0x174B60u;
    // 0x174b60: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x174B60u;
    {
        const bool branch_taken_0x174b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B60u;
        // 0x174b64: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b60) {
            ctx->pc = 0x174B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174b00;
        }
    }
    ctx->pc = 0x174B68u;
    // 0x174b68: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x174b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x174b6c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x174b6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174b70: 0x12630007  beq         $s3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x174B70u;
    {
        const bool branch_taken_0x174b70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x174B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B70u;
        // 0x174b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b70) {
            ctx->pc = 0x174B90u;
            goto label_174b90;
        }
    }
    ctx->pc = 0x174B78u;
label_174b78:
    // 0x174b78: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x174b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_174b7c:
    // 0x174b7c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x174b7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174b80: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x174b80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x174b84: 0x5460ffe8  bnel        $v1, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x174B84u;
    {
        const bool branch_taken_0x174b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b84) {
            ctx->pc = 0x174B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174B84u;
            // 0x174b88: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174b28;
        }
    }
    ctx->pc = 0x174B8Cu;
    // 0x174b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174b90:
    // 0x174b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174b94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174b98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x174b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174b9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x174b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174ba0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x174ba0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174ba4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x174ba4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x174ba8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x174ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174bac: 0x3e00008  jr          $ra
    ctx->pc = 0x174BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BACu;
        // 0x174bb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174BB4u;
    // 0x174bb4: 0x0  nop
    ctx->pc = 0x174bb4u;
    // NOP
    ctx->pc = 0x174bb8u;
}
