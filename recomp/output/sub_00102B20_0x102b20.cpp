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

// Function: sub_00102B20
// Address: 0x102b20 - 0x102ba8
void sub_00102B20_0x102b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102B20_0x102b20");
#endif

    switch (ctx->pc) {
        case 0x102b44u: goto label_102b44;
        case 0x102b4cu: goto label_102b4c;
        case 0x102b58u: goto label_102b58;
        case 0x102b60u: goto label_102b60;
        case 0x102b7cu: goto label_102b7c;
        default: break;
    }

    ctx->pc = 0x102b20u;

    // 0x102b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102b24: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x102b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x102b28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x102b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x102b2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x102b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x102b30: 0x24502d90  addiu       $s0, $v0, 0x2D90
    ctx->pc = 0x102b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11664));
    // 0x102b34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x102b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x102b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x102b3c: 0xc0f657c  jal         func_3D95F0
    ctx->pc = 0x102B3Cu;
    SET_GPR_U32(ctx, 31, 0x102B44u);
    ctx->pc = 0x102B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B3Cu;
    // 0x102b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D95F0u, 0x102B3Cu, 0x102B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B44u;
label_102b44:
    // 0x102b44: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x102B44u;
    {
        const bool branch_taken_0x102b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102b44) {
            ctx->pc = 0x102B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102B44u;
            // 0x102b48: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102B54u;
            goto label_102b54;
        }
    }
    ctx->pc = 0x102B4Cu;
label_102b4c:
    // 0x102b4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x102B4Cu;
    {
        const bool branch_taken_0x102b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B4Cu;
        // 0x102b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b4c) {
            ctx->pc = 0x102B88u;
            goto label_102b88;
        }
    }
    ctx->pc = 0x102B54u;
label_102b54:
    // 0x102b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_102b58:
    // 0x102b58: 0xc0f6744  jal         func_3D9D10
    ctx->pc = 0x102B58u;
    SET_GPR_U32(ctx, 31, 0x102B60u);
    ctx->pc = 0x102B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B58u;
    // 0x102b5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9D10u, 0x102B58u, 0x102B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B60u;
label_102b60:
    // 0x102b60: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102B60u;
    {
        const bool branch_taken_0x102b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B60u;
        // 0x102b64: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b60) {
            ctx->pc = 0x102B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102b4c;
        }
    }
    ctx->pc = 0x102B68u;
    // 0x102b68: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x102b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102b6c: 0x50510006  beql        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x102B6Cu;
    {
        const bool branch_taken_0x102b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x102b6c) {
            ctx->pc = 0x102B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102B6Cu;
            // 0x102b70: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102B88u;
            goto label_102b88;
        }
    }
    ctx->pc = 0x102B74u;
    // 0x102b74: 0xc0f659e  jal         func_3D9678
    ctx->pc = 0x102B74u;
    SET_GPR_U32(ctx, 31, 0x102B7Cu);
    ctx->pc = 0x102B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B74u;
    // 0x102b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9678u, 0x102B74u, 0x102B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B7Cu;
label_102b7c:
    // 0x102b7c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x102B7Cu;
    {
        const bool branch_taken_0x102b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B7Cu;
        // 0x102b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b7c) {
            ctx->pc = 0x102B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102b58;
        }
    }
    ctx->pc = 0x102B84u;
    // 0x102b84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102b88:
    // 0x102b88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x102b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102b8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x102b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102b90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x102b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102b94: 0x3e00008  jr          $ra
    ctx->pc = 0x102B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B94u;
        // 0x102b98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102B9Cu;
    // 0x102b9c: 0x0  nop
    ctx->pc = 0x102b9cu;
    // NOP
    // 0x102ba0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x102ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x102ba4: 0x0  nop
    ctx->pc = 0x102ba4u;
    // NOP
    ctx->pc = 0x102ba8u;
}
