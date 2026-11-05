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

// Function: sub_00179A08
// Address: 0x179a08 - 0x179ae8
void sub_00179A08_0x179a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179A08_0x179a08");
#endif

    switch (ctx->pc) {
        case 0x179a48u: goto label_179a48;
        case 0x179a8cu: goto label_179a8c;
        case 0x179a9cu: goto label_179a9c;
        case 0x179ab0u: goto label_179ab0;
        default: break;
    }

    ctx->pc = 0x179a08u;

    // 0x179a08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179a0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x179a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179a14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x179a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x179a1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x179a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x179a20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x179a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x179a24: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x179a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x179a28: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x179a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x179a2c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x179A2Cu;
    {
        const bool branch_taken_0x179a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A2Cu;
        // 0x179a30: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a2c) {
            ctx->pc = 0x179AC4u;
            goto label_179ac4;
        }
    }
    ctx->pc = 0x179A34u;
    // 0x179a34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x179a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a38: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x179a38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x179a3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x179a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a40: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x179a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x179a44: 0x0  nop
    ctx->pc = 0x179a44u;
    // NOP
label_179a48:
    // 0x179a48: 0x1262001e  beq         $s3, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x179A48u;
    {
        const bool branch_taken_0x179a48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x179A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A48u;
        // 0x179a4c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a48) {
            ctx->pc = 0x179AC4u;
            goto label_179ac4;
        }
    }
    ctx->pc = 0x179A50u;
    // 0x179a50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x179a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x179a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179a58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x179a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179a5c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x179A5Cu;
    {
        const bool branch_taken_0x179a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A5Cu;
        // 0x179a60: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a5c) {
            ctx->pc = 0x179AB0u;
            goto label_179ab0;
        }
    }
    ctx->pc = 0x179A64u;
    // 0x179a64: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x179a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x179a68: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x179a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x179a6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x179a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179a70: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x179A70u;
    {
        const bool branch_taken_0x179a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A70u;
        // 0x179a74: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a70) {
            ctx->pc = 0x179AB0u;
            goto label_179ab0;
        }
    }
    ctx->pc = 0x179A78u;
    // 0x179a78: 0x8c500284  lw          $s0, 0x284($v0)
    ctx->pc = 0x179a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
    // 0x179a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a84: 0xc05eb24  jal         func_17AC90
    ctx->pc = 0x179A84u;
    SET_GPR_U32(ctx, 31, 0x179A8Cu);
    ctx->pc = 0x179A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A84u;
    // 0x179a88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC90u, 0x179A84u, 0x179A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A8Cu;
label_179a8c:
    // 0x179a8c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x179A8Cu;
    {
        const bool branch_taken_0x179a8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A8Cu;
        // 0x179a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a8c) {
            ctx->pc = 0x179AB0u;
            goto label_179ab0;
        }
    }
    ctx->pc = 0x179A94u;
    // 0x179a94: 0xc05eaee  jal         func_17ABB8
    ctx->pc = 0x179A94u;
    SET_GPR_U32(ctx, 31, 0x179A9Cu);
    ctx->pc = 0x179A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A94u;
    // 0x179a98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABB8u, 0x179A94u, 0x179A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A9Cu;
label_179a9c:
    // 0x179a9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179A9Cu;
    {
        const bool branch_taken_0x179a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A9Cu;
        // 0x179aa0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a9c) {
            ctx->pc = 0x179AB4u;
            goto label_179ab4;
        }
    }
    ctx->pc = 0x179AA4u;
    // 0x179aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179aa8: 0xc05eb56  jal         func_17AD58
    ctx->pc = 0x179AA8u;
    SET_GPR_U32(ctx, 31, 0x179AB0u);
    ctx->pc = 0x179AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179AA8u;
    // 0x179aac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD58u, 0x179AA8u, 0x179AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AB0u;
label_179ab0:
    // 0x179ab0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x179ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_179ab4:
    // 0x179ab4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x179ab4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179ab8: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x179ab8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x179abc: 0x5460ffe2  bnel        $v1, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x179ABCu;
    {
        const bool branch_taken_0x179abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179abc) {
            ctx->pc = 0x179AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179ABCu;
            // 0x179ac0: 0x92220009  lbu         $v0, 0x9($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179a48;
        }
    }
    ctx->pc = 0x179AC4u;
label_179ac4:
    // 0x179ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x179ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179acc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x179accu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179ad0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x179ad0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179ad4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x179ad4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179ad8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x179ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179adc: 0x3e00008  jr          $ra
    ctx->pc = 0x179ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ADCu;
        // 0x179ae0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179AE4u;
    // 0x179ae4: 0x0  nop
    ctx->pc = 0x179ae4u;
    // NOP
    ctx->pc = 0x179ae8u;
}
