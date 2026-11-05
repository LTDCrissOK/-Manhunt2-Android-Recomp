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

// Function: sub_00118878
// Address: 0x118878 - 0x118898
void sub_00118878_0x118878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118878_0x118878");
#endif

    ctx->pc = 0x118878u;

    // 0x118878: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x118878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11887c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x11887cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x118880: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118880u;
    {
        const bool branch_taken_0x118880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x118880) {
            ctx->pc = 0x118884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118880u;
            // 0x118884: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118890u;
            goto label_118890;
        }
    }
    ctx->pc = 0x118888u;
    // 0x118888: 0x3e00008  jr          $ra
    ctx->pc = 0x118888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118888u;
        // 0x11888c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118890u;
label_118890:
    // 0x118890: 0x3e00008  jr          $ra
    ctx->pc = 0x118890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118890u;
        // 0x118894: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118898u;
}
