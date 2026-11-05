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

// Function: sub_002B4B00
// Address: 0x2b4b00 - 0x2b4bf0
void sub_002B4B00_0x2b4b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4B00_0x2b4b00");
#endif

    switch (ctx->pc) {
        case 0x2b4b30u: goto label_2b4b30;
        case 0x2b4b38u: goto label_2b4b38;
        case 0x2b4b48u: goto label_2b4b48;
        case 0x2b4b74u: goto label_2b4b74;
        case 0x2b4b98u: goto label_2b4b98;
        case 0x2b4bacu: goto label_2b4bac;
        case 0x2b4bc0u: goto label_2b4bc0;
        case 0x2b4bc8u: goto label_2b4bc8;
        default: break;
    }

    ctx->pc = 0x2b4b00u;

    // 0x2b4b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4b08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b4b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b4b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b4b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b4b14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b4b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b4b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b4b1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b4b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b4b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b4b24: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b4b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b4b28: 0xc082ea8  jal         func_20BAA0
    ctx->pc = 0x2B4B28u;
    SET_GPR_U32(ctx, 31, 0x2B4B30u);
    ctx->pc = 0x2B4B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B28u;
    // 0x2b4b2c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BAA0u, 0x2B4B28u, 0x2B4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B30u;
label_2b4b30:
    // 0x2b4b30: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B4B30u;
    SET_GPR_U32(ctx, 31, 0x2B4B38u);
    ctx->pc = 0x2B4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B30u;
    // 0x2b4b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B4B30u, 0x2B4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B38u;
label_2b4b38:
    // 0x2b4b38: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B4B38u;
    {
        const bool branch_taken_0x2b4b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B38u;
        // 0x2b4b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b38) {
            ctx->pc = 0x2B4BCCu;
            goto label_2b4bcc;
        }
    }
    ctx->pc = 0x2B4B40u;
    // 0x2b4b40: 0xc0ace90  jal         func_2B3A40
    ctx->pc = 0x2B4B40u;
    SET_GPR_U32(ctx, 31, 0x2B4B48u);
    ctx->pc = 0x2B4B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B40u;
    // 0x2b4b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3A40u, 0x2B4B40u, 0x2B4B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B48u;
label_2b4b48:
    // 0x2b4b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4b4c: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B4B4Cu;
    {
        const bool branch_taken_0x2b4b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B4Cu;
        // 0x2b4b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b4c) {
            ctx->pc = 0x2B4BCCu;
            goto label_2b4bcc;
        }
    }
    ctx->pc = 0x2B4B54u;
    // 0x2b4b54: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2b4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2b4b58: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x2b4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2b4b5c: 0x2442fa18  addiu       $v0, $v0, -0x5E8
    ctx->pc = 0x2b4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965784));
    // 0x2b4b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b64: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2b4b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b4b68: 0x24060203  addiu       $a2, $zero, 0x203
    ctx->pc = 0x2b4b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x2b4b6c: 0xc0ad114  jal         func_2B4450
    ctx->pc = 0x2B4B6Cu;
    SET_GPR_U32(ctx, 31, 0x2B4B74u);
    ctx->pc = 0x2B4B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B6Cu;
    // 0x2b4b70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4450u, 0x2B4B6Cu, 0x2B4B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B74u;
label_2b4b74:
    // 0x2b4b74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b4b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b78: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b4b7c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B4B7Cu;
    {
        const bool branch_taken_0x2b4b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B7Cu;
        // 0x2b4b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b7c) {
            ctx->pc = 0x2B4BCCu;
            goto label_2b4bcc;
        }
    }
    ctx->pc = 0x2B4B84u;
    // 0x2b4b84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b4b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b88: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2b4b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b90: 0xc0ad184  jal         func_2B4610
    ctx->pc = 0x2B4B90u;
    SET_GPR_U32(ctx, 31, 0x2B4B98u);
    ctx->pc = 0x2B4B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B90u;
    // 0x2b4b94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4610u, 0x2B4B90u, 0x2B4B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B98u;
label_2b4b98:
    // 0x2b4b98: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B4B98u;
    {
        const bool branch_taken_0x2b4b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B98u;
        // 0x2b4b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b98) {
            ctx->pc = 0x2B4BCCu;
            goto label_2b4bcc;
        }
    }
    ctx->pc = 0x2B4BA0u;
    // 0x2b4ba0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b4ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ba4: 0xc0ad164  jal         func_2B4590
    ctx->pc = 0x2B4BA4u;
    SET_GPR_U32(ctx, 31, 0x2B4BACu);
    ctx->pc = 0x2B4BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4BA4u;
    // 0x2b4ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4590u, 0x2B4BA4u, 0x2B4BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4BACu;
label_2b4bac:
    // 0x2b4bac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4BACu;
    {
        const bool branch_taken_0x2b4bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BACu;
        // 0x2b4bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4bac) {
            ctx->pc = 0x2B4BCCu;
            goto label_2b4bcc;
        }
    }
    ctx->pc = 0x2B4BB4u;
    // 0x2b4bb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b4bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bb8: 0xc0ad51a  jal         func_2B5468
    ctx->pc = 0x2B4BB8u;
    SET_GPR_U32(ctx, 31, 0x2B4BC0u);
    ctx->pc = 0x2B4BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4BB8u;
    // 0x2b4bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5468u, 0x2B4BB8u, 0x2B4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4BC0u;
label_2b4bc0:
    // 0x2b4bc0: 0xc0ad336  jal         func_2B4CD8
    ctx->pc = 0x2B4BC0u;
    SET_GPR_U32(ctx, 31, 0x2B4BC8u);
    ctx->pc = 0x2B4BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4BC0u;
    // 0x2b4bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B4BC0u, 0x2B4BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4BC8u;
label_2b4bc8:
    // 0x2b4bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4bcc:
    // 0x2b4bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b4bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4bd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b4bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4bd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b4bd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4bdc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b4bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4be0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b4be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b4be4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BE4u;
        // 0x2b4be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4BECu;
    // 0x2b4bec: 0x0  nop
    ctx->pc = 0x2b4becu;
    // NOP
    ctx->pc = 0x2b4bf0u;
}
