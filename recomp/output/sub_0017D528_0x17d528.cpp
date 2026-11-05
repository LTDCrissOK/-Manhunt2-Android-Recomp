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

// Function: sub_0017D528
// Address: 0x17d528 - 0x17d558
void sub_0017D528_0x17d528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D528_0x17d528");
#endif

    ctx->pc = 0x17d528u;

    // 0x17d528: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x17d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x17d52c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D52Cu;
    {
        const bool branch_taken_0x17d52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d52c) {
            ctx->pc = 0x17D530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D52Cu;
            // 0x17d530: 0x8c830070  lw          $v1, 0x70($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D53Cu;
            goto label_17d53c;
        }
    }
    ctx->pc = 0x17D534u;
    // 0x17d534: 0x3e00008  jr          $ra
    ctx->pc = 0x17D534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D534u;
        // 0x17d538: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D53Cu;
label_17d53c:
    // 0x17d53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d540: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D540u;
    {
        const bool branch_taken_0x17d540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17d540) {
            ctx->pc = 0x17D550u;
            goto label_17d550;
        }
    }
    ctx->pc = 0x17D548u;
    // 0x17d548: 0x3e00008  jr          $ra
    ctx->pc = 0x17D548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D548u;
        // 0x17d54c: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D550u;
label_17d550:
    // 0x17d550: 0x3e00008  jr          $ra
    ctx->pc = 0x17D550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D550u;
        // 0x17d554: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D558u;
}
