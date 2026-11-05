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

// Function: sub_00179C90
// Address: 0x179c90 - 0x179d80
void sub_00179C90_0x179c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179C90_0x179c90");
#endif

    switch (ctx->pc) {
        case 0x179cc8u: goto label_179cc8;
        case 0x179cecu: goto label_179cec;
        case 0x179d00u: goto label_179d00;
        case 0x179d28u: goto label_179d28;
        case 0x179d3cu: goto label_179d3c;
        default: break;
    }

    ctx->pc = 0x179c90u;

    // 0x179c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179c94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179c98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x179c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x179c9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ca0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x179ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x179ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x179ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179ca8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x179ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x179cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x179cb0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x179cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x179cb4: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x179cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x179cb8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x179CB8u;
    {
        const bool branch_taken_0x179cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CB8u;
        // 0x179cbc: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cb8) {
            ctx->pc = 0x179D60u;
            goto label_179d60;
        }
    }
    ctx->pc = 0x179CC0u;
    // 0x179cc0: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x179cc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x179cc4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x179cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_179cc8:
    // 0x179cc8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x179cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x179ccc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x179cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x179cd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x179cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179cd4: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x179CD4u;
    {
        const bool branch_taken_0x179cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CD4u;
        // 0x179cd8: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cd4) {
            ctx->pc = 0x179D40u;
            goto label_179d40;
        }
    }
    ctx->pc = 0x179CDCu;
    // 0x179cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ce0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x179ce0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179ce4: 0xc05eaee  jal         func_17ABB8
    ctx->pc = 0x179CE4u;
    SET_GPR_U32(ctx, 31, 0x179CECu);
    ctx->pc = 0x179CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CE4u;
    // 0x179ce8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABB8u, 0x179CE4u, 0x179CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179CECu;
label_179cec:
    // 0x179cec: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x179CECu;
    {
        const bool branch_taken_0x179cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CECu;
        // 0x179cf0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cec) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179CF4u;
    // 0x179cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cf8: 0xc05eb06  jal         func_17AC18
    ctx->pc = 0x179CF8u;
    SET_GPR_U32(ctx, 31, 0x179D00u);
    ctx->pc = 0x179CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CF8u;
    // 0x179cfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC18u, 0x179CF8u, 0x179D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D00u;
label_179d00:
    // 0x179d00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x179d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x179d08: 0x10540005  beq         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x179D08u;
    {
        const bool branch_taken_0x179d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x179D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D08u;
        // 0x179d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d08) {
            ctx->pc = 0x179D20u;
            goto label_179d20;
        }
    }
    ctx->pc = 0x179D10u;
    // 0x179d10: 0x9202001f  lbu         $v0, 0x1F($s0)
    ctx->pc = 0x179d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    // 0x179d14: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x179D14u;
    {
        const bool branch_taken_0x179d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D14u;
        // 0x179d18: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d14) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D1Cu;
    // 0x179d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179d20:
    // 0x179d20: 0xc05eb56  jal         func_17AD58
    ctx->pc = 0x179D20u;
    SET_GPR_U32(ctx, 31, 0x179D28u);
    ctx->pc = 0x179D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D20u;
    // 0x179d24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD58u, 0x179D20u, 0x179D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D28u;
label_179d28:
    // 0x179d28: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x179d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x179d2c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179D2Cu;
    {
        const bool branch_taken_0x179d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D2Cu;
        // 0x179d30: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d2c) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D34u;
    // 0x179d34: 0xc04f844  jal         func_13E110
    ctx->pc = 0x179D34u;
    SET_GPR_U32(ctx, 31, 0x179D3Cu);
    ctx->pc = 0x13E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E110u, 0x179D34u, 0x179D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D3Cu;
label_179d3c:
    // 0x179d3c: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x179d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
label_179d40:
    // 0x179d40: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x179d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_179d44:
    // 0x179d44: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x179d44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179d48: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x179d48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x179d4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x179D4Cu;
    {
        const bool branch_taken_0x179d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D4Cu;
        // 0x179d50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d4c) {
            ctx->pc = 0x179D64u;
            goto label_179d64;
        }
    }
    ctx->pc = 0x179D54u;
    // 0x179d54: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x179d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x179d58: 0x5662ffdb  bnel        $s3, $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x179D58u;
    {
        const bool branch_taken_0x179d58 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x179d58) {
            ctx->pc = 0x179D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179D58u;
            // 0x179d5c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179cc8;
        }
    }
    ctx->pc = 0x179D60u;
label_179d60:
    // 0x179d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179d64:
    // 0x179d64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x179d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179d68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x179d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179d6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x179d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179d70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x179d70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179d74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x179d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179d78: 0x3e00008  jr          $ra
    ctx->pc = 0x179D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D78u;
        // 0x179d7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179D80u;
}
