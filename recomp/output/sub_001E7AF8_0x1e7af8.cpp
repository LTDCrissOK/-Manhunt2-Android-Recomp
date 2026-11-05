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

// Function: sub_001E7AF8
// Address: 0x1e7af8 - 0x1e7bc8
void sub_001E7AF8_0x1e7af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7AF8_0x1e7af8");
#endif

    switch (ctx->pc) {
        case 0x1e7b30u: goto label_1e7b30;
        case 0x1e7b84u: goto label_1e7b84;
        case 0x1e7b8cu: goto label_1e7b8c;
        case 0x1e7b94u: goto label_1e7b94;
        default: break;
    }

    ctx->pc = 0x1e7af8u;

    // 0x1e7af8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7b00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e7b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e7b04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7b0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e7b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e7b10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e7b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e7b14: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e7b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e7b18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7b1c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E7B1Cu;
    {
        const bool branch_taken_0x1e7b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B1Cu;
        // 0x1e7b20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b1c) {
            ctx->pc = 0x1E7BA4u;
            goto label_1e7ba4;
        }
    }
    ctx->pc = 0x1E7B24u;
    // 0x1e7b24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e7b24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e7b28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b2c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1e7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1e7b30:
    // 0x1e7b30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e7b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e7b34: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1e7b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e7b38: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1e7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e7b3c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1e7b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e7b40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e7b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7b44: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1e7b44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1e7b48: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1e7b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e7b4c: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1e7b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1e7b50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e7b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e7b54: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1e7b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1e7b58: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1e7b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1e7b5c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e7b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e7b60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e7b64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1e7b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e7b68: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e7b6c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1e7b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1e7b70: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1e7b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b78: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x1e7b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x1e7b7c: 0xc07a846  jal         func_1EA118
    ctx->pc = 0x1E7B7Cu;
    SET_GPR_U32(ctx, 31, 0x1E7B84u);
    ctx->pc = 0x1E7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B7Cu;
    // 0x1e7b80: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA118u, 0x1E7B7Cu, 0x1E7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B84u;
label_1e7b84:
    // 0x1e7b84: 0xc0f7508  jal         func_3DD420
    ctx->pc = 0x1E7B84u;
    SET_GPR_U32(ctx, 31, 0x1E7B8Cu);
    ctx->pc = 0x1E7B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B84u;
    // 0x1e7b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD420u, 0x1E7B84u, 0x1E7B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B8Cu;
label_1e7b8c:
    // 0x1e7b8c: 0xc07a880  jal         func_1EA200
    ctx->pc = 0x1E7B8Cu;
    SET_GPR_U32(ctx, 31, 0x1E7B94u);
    ctx->pc = 0x1E7B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B8Cu;
    // 0x1e7b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA200u, 0x1E7B8Cu, 0x1E7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B94u;
label_1e7b94:
    // 0x1e7b94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7b98: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1e7b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7b9c: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1E7B9Cu;
    {
        const bool branch_taken_0x1e7b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b9c) {
            ctx->pc = 0x1E7BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7B9Cu;
            // 0x1e7ba0: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7b30;
        }
    }
    ctx->pc = 0x1E7BA4u;
label_1e7ba4:
    // 0x1e7ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7bac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e7bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7bb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e7bb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e7bb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e7bb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7bb8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e7bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e7bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BBCu;
        // 0x1e7bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7BC4u;
    // 0x1e7bc4: 0x0  nop
    ctx->pc = 0x1e7bc4u;
    // NOP
    ctx->pc = 0x1e7bc8u;
}
