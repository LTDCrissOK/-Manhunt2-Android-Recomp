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

// Function: sub_00275F68
// Address: 0x275f68 - 0x275f90
void sub_00275F68_0x275f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275F68_0x275f68");
#endif

    ctx->pc = 0x275f68u;

    // 0x275f68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x275f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x275f6c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x275f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x275f70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275F70u;
    {
        const bool branch_taken_0x275f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F70u;
        // 0x275f74: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f70) {
            ctx->pc = 0x275F88u;
            goto label_275f88;
        }
    }
    ctx->pc = 0x275F78u;
    // 0x275f78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x275f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x275f7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x275f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275f80: 0x3e00008  jr          $ra
    ctx->pc = 0x275F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F80u;
        // 0x275f84: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275F88u;
label_275f88:
    // 0x275f88: 0x3e00008  jr          $ra
    ctx->pc = 0x275F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F88u;
        // 0x275f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275F90u;
}
