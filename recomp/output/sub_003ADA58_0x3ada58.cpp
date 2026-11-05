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

// Function: sub_003ADA58
// Address: 0x3ada58 - 0x3ada88
void sub_003ADA58_0x3ada58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADA58_0x3ada58");
#endif

    ctx->pc = 0x3ada58u;

    // 0x3ada58: 0x8c88008c  lw          $t0, 0x8C($a0)
    ctx->pc = 0x3ada58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x3ada5c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x3ada5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x3ada60: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x3ada60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x3ada64: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x3ada64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x3ada68: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x3ada68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x3ada6c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3ada6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3ada70: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3ada70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3ada74: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x3ada74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3ada78: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x3ada78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3ada7c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x3ada7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ada80: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA80u;
        // 0x3ada84: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADA88u;
}
