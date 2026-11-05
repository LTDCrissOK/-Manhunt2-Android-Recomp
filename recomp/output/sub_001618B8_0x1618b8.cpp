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

// Function: sub_001618B8
// Address: 0x1618b8 - 0x1618d8
void sub_001618B8_0x1618b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001618B8_0x1618b8");
#endif

    ctx->pc = 0x1618b8u;

    // 0x1618b8: 0x8c820358  lw          $v0, 0x358($a0)
    ctx->pc = 0x1618b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 856)));
    // 0x1618bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1618BCu;
    {
        const bool branch_taken_0x1618bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1618C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618BCu;
        // 0x1618c0: 0x248302f0  addiu       $v1, $a0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618bc) {
            ctx->pc = 0x1618D0u;
            goto label_1618d0;
        }
    }
    ctx->pc = 0x1618C4u;
    // 0x1618c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1618c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1618c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1618C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1618CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618C8u;
        // 0x1618cc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1618C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1618D0u;
label_1618d0:
    // 0x1618d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1618D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1618D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618D0u;
        // 0x1618d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1618D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1618D8u;
}
