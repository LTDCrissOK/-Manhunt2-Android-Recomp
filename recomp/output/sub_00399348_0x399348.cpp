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

// Function: sub_00399348
// Address: 0x399348 - 0x399360
void sub_00399348_0x399348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399348_0x399348");
#endif

    ctx->pc = 0x399348u;

    // 0x399348: 0x3e00008  jr          $ra
    ctx->pc = 0x399348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399348u;
        // 0x39934c: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399350u;
    // 0x399350: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x399350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x399354: 0x0  nop
    ctx->pc = 0x399354u;
    // NOP
    // 0x399358: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x399358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x39935c: 0x0  nop
    ctx->pc = 0x39935cu;
    // NOP
    ctx->pc = 0x399360u;
}
