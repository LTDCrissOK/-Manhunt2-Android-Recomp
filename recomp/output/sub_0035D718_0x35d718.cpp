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

// Function: sub_0035D718
// Address: 0x35d718 - 0x35d740
void sub_0035D718_0x35d718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D718_0x35d718");
#endif

    ctx->pc = 0x35d718u;

    // 0x35d718: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35d71c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35d720: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x35d720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x35d724: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x35d724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35d728: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x35d728u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35d72c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35D72Cu;
    {
        const bool branch_taken_0x35d72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d72c) {
            ctx->pc = 0x35D730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D72Cu;
            // 0x35d730: 0xa4850004  sh          $a1, 0x4($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D734u;
            goto label_35d734;
        }
    }
    ctx->pc = 0x35D734u;
label_35d734:
    // 0x35d734: 0x3e00008  jr          $ra
    ctx->pc = 0x35D734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D73Cu;
    // 0x35d73c: 0x0  nop
    ctx->pc = 0x35d73cu;
    // NOP
    ctx->pc = 0x35d740u;
}
