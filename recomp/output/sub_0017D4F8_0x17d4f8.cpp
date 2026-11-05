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

// Function: sub_0017D4F8
// Address: 0x17d4f8 - 0x17d528
void sub_0017D4F8_0x17d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D4F8_0x17d4f8");
#endif

    ctx->pc = 0x17d4f8u;

    // 0x17d4f8: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x17d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x17d4fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D4FCu;
    {
        const bool branch_taken_0x17d4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d4fc) {
            ctx->pc = 0x17D500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D4FCu;
            // 0x17d500: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D50Cu;
            goto label_17d50c;
        }
    }
    ctx->pc = 0x17D504u;
    // 0x17d504: 0x3e00008  jr          $ra
    ctx->pc = 0x17D504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D504u;
        // 0x17d508: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D50Cu;
label_17d50c:
    // 0x17d50c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D50Cu;
    {
        const bool branch_taken_0x17d50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d50c) {
            ctx->pc = 0x17D51Cu;
            goto label_17d51c;
        }
    }
    ctx->pc = 0x17D514u;
    // 0x17d514: 0x3e00008  jr          $ra
    ctx->pc = 0x17D514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D514u;
        // 0x17d518: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D51Cu;
label_17d51c:
    // 0x17d51c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D51Cu;
        // 0x17d520: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D524u;
    // 0x17d524: 0x0  nop
    ctx->pc = 0x17d524u;
    // NOP
    ctx->pc = 0x17d528u;
}
