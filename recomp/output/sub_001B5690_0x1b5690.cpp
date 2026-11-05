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

// Function: sub_001B5690
// Address: 0x1b5690 - 0x1b56b8
void sub_001B5690_0x1b5690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5690_0x1b5690");
#endif

    ctx->pc = 0x1b5690u;

    // 0x1b5690: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x1b5690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x1b5694: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x1b5694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x1b5698: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x1b5698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x1b569c: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x1b569cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x1b56a0: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x1b56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x1b56a4: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x1b56a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x1b56a8: 0xac8000f4  sw          $zero, 0xF4($a0)
    ctx->pc = 0x1b56a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 0));
    // 0x1b56ac: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x1b56acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x1b56b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B56B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B56B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B56B0u;
        // 0x1b56b4: 0xac8000fc  sw          $zero, 0xFC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B56B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B56B8u;
}
