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

// Function: sub_00133080
// Address: 0x133080 - 0x133098
void sub_00133080_0x133080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133080_0x133080");
#endif

    ctx->pc = 0x133080u;

    // 0x133080: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x133080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x133084: 0x8c620770  lw          $v0, 0x770($v1)
    ctx->pc = 0x133084u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0770u));
    // 0x133088: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13308c: 0x3e00008  jr          $ra
    ctx->pc = 0x13308Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13308Cu;
        // 0x133090: 0xac620770  sw          $v0, 0x770($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13308Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133094u;
    // 0x133094: 0x0  nop
    ctx->pc = 0x133094u;
    // NOP
    ctx->pc = 0x133098u;
}
