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

// Function: sub_003D8B28
// Address: 0x3d8b28 - 0x3d8b68
void sub_003D8B28_0x3d8b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8B28_0x3d8b28");
#endif

    switch (ctx->pc) {
        case 0x3d8b38u: goto label_3d8b38;
        case 0x3d8b40u: goto label_3d8b40;
        default: break;
    }

    ctx->pc = 0x3d8b28u;

    // 0x3d8b28: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D8B28u;
    {
        const bool branch_taken_0x3d8b28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8b28) {
            ctx->pc = 0x3D8B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8B28u;
            // 0x3d8b2c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8B40u;
            goto label_3d8b40;
        }
    }
    ctx->pc = 0x3D8B30u;
    // 0x3d8b30: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B30u;
        // 0x3d8b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8B38u;
label_3d8b38:
    // 0x3d8b38: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B38u;
        // 0x3d8b3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8B40u;
label_3d8b40:
    // 0x3d8b40: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D8B40u;
    {
        const bool branch_taken_0x3d8b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8b40) {
            ctx->pc = 0x3D8B60u;
            goto label_3d8b60;
        }
    }
    ctx->pc = 0x3D8B48u;
    // 0x3d8b48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d8b4c: 0x1045fffa  beq         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D8B4Cu;
    {
        const bool branch_taken_0x3d8b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3d8b4c) {
            ctx->pc = 0x3D8B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8b38;
        }
    }
    ctx->pc = 0x3D8B54u;
    // 0x3d8b54: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d8b58: 0x5462fff9  bnel        $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D8B58u;
    {
        const bool branch_taken_0x3d8b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d8b58) {
            ctx->pc = 0x3D8B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8B58u;
            // 0x3d8b5c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8b40;
        }
    }
    ctx->pc = 0x3D8B60u;
label_3d8b60:
    // 0x3d8b60: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B60u;
        // 0x3d8b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8B68u;
}
