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

// Function: sub_001184E0
// Address: 0x1184e0 - 0x118510
void sub_001184E0_0x1184e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001184E0_0x1184e0");
#endif

    ctx->pc = 0x1184e0u;

    // 0x1184e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1184e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1184e4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1184e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1184e8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1184E8u;
    {
        const bool branch_taken_0x1184e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1184ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184E8u;
        // 0x1184ec: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184e8) {
            ctx->pc = 0x118508u;
            goto label_118508;
        }
    }
    ctx->pc = 0x1184F0u;
    // 0x1184f0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1184f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1184f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1184f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1184f8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1184F8u;
    {
        const bool branch_taken_0x1184f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1184f8) {
            ctx->pc = 0x1184FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1184F8u;
            // 0x1184fc: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118508u;
            goto label_118508;
        }
    }
    ctx->pc = 0x118500u;
    // 0x118500: 0x3e00008  jr          $ra
    ctx->pc = 0x118500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118500u;
        // 0x118504: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118508u;
label_118508:
    // 0x118508: 0x3e00008  jr          $ra
    ctx->pc = 0x118508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118510u;
}
