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

// Function: sub_00170A70
// Address: 0x170a70 - 0x170b10
void sub_00170A70_0x170a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170A70_0x170a70");
#endif

    switch (ctx->pc) {
        case 0x170aa0u: goto label_170aa0;
        case 0x170accu: goto label_170acc;
        case 0x170ae0u: goto label_170ae0;
        default: break;
    }

    ctx->pc = 0x170a70u;

    // 0x170a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170a74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170a7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x170a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x170a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x170a84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x170a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x170a88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x170a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x170a8c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x170a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x170a90: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x170A90u;
    {
        const bool branch_taken_0x170a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A90u;
        // 0x170a94: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a90) {
            ctx->pc = 0x170AF4u;
            goto label_170af4;
        }
    }
    ctx->pc = 0x170A98u;
    // 0x170a98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x170a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a9c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x170a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_170aa0:
    // 0x170aa0: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x170AA0u;
    {
        const bool branch_taken_0x170aa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x170AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AA0u;
        // 0x170aa4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170aa0) {
            ctx->pc = 0x170AF4u;
            goto label_170af4;
        }
    }
    ctx->pc = 0x170AA8u;
    // 0x170aa8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x170aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x170aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170ab0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x170ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170ab4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x170AB4u;
    {
        const bool branch_taken_0x170ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x170AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AB4u;
        // 0x170ab8: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ab4) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x170ABCu;
    // 0x170abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ac0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x170ac0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x170ac4: 0xc04f8e6  jal         func_13E398
    ctx->pc = 0x170AC4u;
    SET_GPR_U32(ctx, 31, 0x170ACCu);
    ctx->pc = 0x170AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170AC4u;
    // 0x170ac8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E398u, 0x170AC4u, 0x170ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170ACCu;
label_170acc:
    // 0x170acc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170ACCu;
    {
        const bool branch_taken_0x170acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170ACCu;
        // 0x170ad0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170acc) {
            ctx->pc = 0x170AE4u;
            goto label_170ae4;
        }
    }
    ctx->pc = 0x170AD4u;
    // 0x170ad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ad8: 0xc05d12e  jal         func_1744B8
    ctx->pc = 0x170AD8u;
    SET_GPR_U32(ctx, 31, 0x170AE0u);
    ctx->pc = 0x170ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170AD8u;
    // 0x170adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1744B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1744B8u, 0x170AD8u, 0x170AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170AE0u;
label_170ae0:
    // 0x170ae0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x170ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_170ae4:
    // 0x170ae4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x170ae4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x170ae8: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x170ae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x170aec: 0x5460ffec  bnel        $v1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x170AECu;
    {
        const bool branch_taken_0x170aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x170aec) {
            ctx->pc = 0x170AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170AECu;
            // 0x170af0: 0x92220009  lbu         $v0, 0x9($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170aa0;
        }
    }
    ctx->pc = 0x170AF4u;
label_170af4:
    // 0x170af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170af8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170afc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x170afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170b00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x170b00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170b04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x170b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170b08: 0x3e00008  jr          $ra
    ctx->pc = 0x170B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B08u;
        // 0x170b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170B10u;
}
