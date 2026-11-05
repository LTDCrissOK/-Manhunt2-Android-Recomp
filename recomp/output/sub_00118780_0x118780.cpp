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

// Function: sub_00118780
// Address: 0x118780 - 0x1187a0
void sub_00118780_0x118780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118780_0x118780");
#endif

    ctx->pc = 0x118780u;

    // 0x118780: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x118780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118784: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x118784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x118788: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118788u;
    {
        const bool branch_taken_0x118788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x118788) {
            ctx->pc = 0x11878Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118788u;
            // 0x11878c: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118798u;
            goto label_118798;
        }
    }
    ctx->pc = 0x118790u;
    // 0x118790: 0x3e00008  jr          $ra
    ctx->pc = 0x118790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118790u;
        // 0x118794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118798u;
label_118798:
    // 0x118798: 0x3e00008  jr          $ra
    ctx->pc = 0x118798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118798u;
        // 0x11879c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1187A0u;
}
