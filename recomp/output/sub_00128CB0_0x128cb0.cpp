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

// Function: sub_00128CB0
// Address: 0x128cb0 - 0x128ce0
void sub_00128CB0_0x128cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128CB0_0x128cb0");
#endif

    ctx->pc = 0x128cb0u;

    // 0x128cb0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128CB0u;
    {
        const bool branch_taken_0x128cb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x128CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CB0u;
        // 0x128cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cb0) {
            ctx->pc = 0x128CC8u;
            goto label_128cc8;
        }
    }
    ctx->pc = 0x128CB8u;
    // 0x128cb8: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128CB8u;
    {
        const bool branch_taken_0x128cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x128CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CB8u;
        // 0x128cbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cb8) {
            ctx->pc = 0x128CD0u;
            goto label_128cd0;
        }
    }
    ctx->pc = 0x128CC0u;
    // 0x128cc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128CC0u;
    {
        const bool branch_taken_0x128cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128cc0) {
            ctx->pc = 0x128CD8u;
            goto label_128cd8;
        }
    }
    ctx->pc = 0x128CC8u;
label_128cc8:
    // 0x128cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x128CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CC8u;
        // 0x128ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128CD0u;
label_128cd0:
    // 0x128cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x128CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CD0u;
        // 0x128cd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128CD8u;
label_128cd8:
    // 0x128cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x128CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128CE0u;
}
