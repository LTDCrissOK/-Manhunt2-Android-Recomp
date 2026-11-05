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

// Function: sub_00138FB0
// Address: 0x138fb0 - 0x138fd8
void sub_00138FB0_0x138fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138FB0_0x138fb0");
#endif

    ctx->pc = 0x138fb0u;

    // 0x138fb0: 0x8c8304d8  lw          $v1, 0x4D8($a0)
    ctx->pc = 0x138fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1240)));
    // 0x138fb4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138FB4u;
    {
        const bool branch_taken_0x138fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x138FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FB4u;
        // 0x138fb8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fb4) {
            ctx->pc = 0x138FC4u;
            goto label_138fc4;
        }
    }
    ctx->pc = 0x138FBCu;
    // 0x138fbc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138FBCu;
    {
        const bool branch_taken_0x138fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x138fbc) {
            ctx->pc = 0x138FCCu;
            goto label_138fcc;
        }
    }
    ctx->pc = 0x138FC4u;
label_138fc4:
    // 0x138fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x138FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FC4u;
        // 0x138fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138FCCu;
label_138fcc:
    // 0x138fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x138FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FCCu;
        // 0x138fd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138FD4u;
    // 0x138fd4: 0x0  nop
    ctx->pc = 0x138fd4u;
    // NOP
    ctx->pc = 0x138fd8u;
}
