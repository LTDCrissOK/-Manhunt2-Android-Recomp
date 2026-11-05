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

// Function: sub_003EE4A8
// Address: 0x3ee4a8 - 0x3ee4c0
void sub_003EE4A8_0x3ee4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE4A8_0x3ee4a8");
#endif

    ctx->pc = 0x3ee4a8u;

    // 0x3ee4a8: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x3ee4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x3ee4ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EE4ACu;
    {
        const bool branch_taken_0x3ee4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4ACu;
        // 0x3ee4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee4ac) {
            ctx->pc = 0x3EE4B8u;
            goto label_3ee4b8;
        }
    }
    ctx->pc = 0x3EE4B4u;
    // 0x3ee4b4: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x3ee4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
label_3ee4b8:
    // 0x3ee4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE4C0u;
}
