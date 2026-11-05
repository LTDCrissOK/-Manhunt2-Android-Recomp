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

// Function: sub_00128C48
// Address: 0x128c48 - 0x128cb0
void sub_00128C48_0x128c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128C48_0x128c48");
#endif

    ctx->pc = 0x128c48u;

    // 0x128c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128c4c: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x128C4Cu;
    {
        const bool branch_taken_0x128c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x128C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C4Cu;
        // 0x128c50: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c4c) {
            ctx->pc = 0x128C8Cu;
            goto label_128c8c;
        }
    }
    ctx->pc = 0x128C54u;
    // 0x128c54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x128C54u;
    {
        const bool branch_taken_0x128c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c54) {
            ctx->pc = 0x128C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128C54u;
            // 0x128c58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128C6Cu;
            goto label_128c6c;
        }
    }
    ctx->pc = 0x128C5Cu;
    // 0x128c5c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x128C5Cu;
    {
        const bool branch_taken_0x128c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c5c) {
            ctx->pc = 0x128C84u;
            goto label_128c84;
        }
    }
    ctx->pc = 0x128C64u;
    // 0x128c64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x128C64u;
    {
        const bool branch_taken_0x128c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c64) {
            ctx->pc = 0x128CA4u;
            goto label_128ca4;
        }
    }
    ctx->pc = 0x128C6Cu;
label_128c6c:
    // 0x128c6c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128C6Cu;
    {
        const bool branch_taken_0x128c6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x128C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C6Cu;
        // 0x128c70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c6c) {
            ctx->pc = 0x128C94u;
            goto label_128c94;
        }
    }
    ctx->pc = 0x128C74u;
    // 0x128c74: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128C74u;
    {
        const bool branch_taken_0x128c74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x128c74) {
            ctx->pc = 0x128C9Cu;
            goto label_128c9c;
        }
    }
    ctx->pc = 0x128C7Cu;
    // 0x128c7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x128C7Cu;
    {
        const bool branch_taken_0x128c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c7c) {
            ctx->pc = 0x128CA4u;
            goto label_128ca4;
        }
    }
    ctx->pc = 0x128C84u;
label_128c84:
    // 0x128c84: 0x3e00008  jr          $ra
    ctx->pc = 0x128C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C84u;
        // 0x128c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128C8Cu;
label_128c8c:
    // 0x128c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x128C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C8Cu;
        // 0x128c90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128C94u;
label_128c94:
    // 0x128c94: 0x3e00008  jr          $ra
    ctx->pc = 0x128C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C94u;
        // 0x128c98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128C9Cu;
label_128c9c:
    // 0x128c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x128C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C9Cu;
        // 0x128ca0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128CA4u;
label_128ca4:
    // 0x128ca4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x128ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x128ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x128CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CA8u;
        // 0x128cac: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128CB0u;
}
