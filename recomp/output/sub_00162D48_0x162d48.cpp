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

// Function: sub_00162D48
// Address: 0x162d48 - 0x162d78
void sub_00162D48_0x162d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162D48_0x162d48");
#endif

    ctx->pc = 0x162d48u;

    // 0x162d48: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x162d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x162d4c: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162D4Cu;
    {
        const bool branch_taken_0x162d4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x162d4c) {
            ctx->pc = 0x162D5Cu;
            goto label_162d5c;
        }
    }
    ctx->pc = 0x162D54u;
    // 0x162d54: 0x3e00008  jr          $ra
    ctx->pc = 0x162D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D54u;
        // 0x162d58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162D5Cu;
label_162d5c:
    // 0x162d5c: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162D5Cu;
    {
        const bool branch_taken_0x162d5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x162D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D5Cu;
        // 0x162d60: 0xc5102a  slt         $v0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d5c) {
            ctx->pc = 0x162D6Cu;
            goto label_162d6c;
        }
    }
    ctx->pc = 0x162D64u;
    // 0x162d64: 0x3e00008  jr          $ra
    ctx->pc = 0x162D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D64u;
        // 0x162d68: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162D6Cu;
label_162d6c:
    // 0x162d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x162D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D6Cu;
        // 0x162d70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162D74u;
    // 0x162d74: 0x0  nop
    ctx->pc = 0x162d74u;
    // NOP
    ctx->pc = 0x162d78u;
}
