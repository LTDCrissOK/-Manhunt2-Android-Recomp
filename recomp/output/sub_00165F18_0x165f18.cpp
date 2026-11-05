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

// Function: sub_00165F18
// Address: 0x165f18 - 0x165f48
void sub_00165F18_0x165f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165F18_0x165f18");
#endif

    ctx->pc = 0x165f18u;

    // 0x165f18: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x165f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x165f1c: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165F1Cu;
    {
        const bool branch_taken_0x165f1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x165f1c) {
            ctx->pc = 0x165F2Cu;
            goto label_165f2c;
        }
    }
    ctx->pc = 0x165F24u;
    // 0x165f24: 0x3e00008  jr          $ra
    ctx->pc = 0x165F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F24u;
        // 0x165f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165F2Cu;
label_165f2c:
    // 0x165f2c: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165F2Cu;
    {
        const bool branch_taken_0x165f2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x165F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F2Cu;
        // 0x165f30: 0xc5102a  slt         $v0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f2c) {
            ctx->pc = 0x165F3Cu;
            goto label_165f3c;
        }
    }
    ctx->pc = 0x165F34u;
    // 0x165f34: 0x3e00008  jr          $ra
    ctx->pc = 0x165F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F34u;
        // 0x165f38: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165F3Cu;
label_165f3c:
    // 0x165f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x165F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F3Cu;
        // 0x165f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165F44u;
    // 0x165f44: 0x0  nop
    ctx->pc = 0x165f44u;
    // NOP
    ctx->pc = 0x165f48u;
}
