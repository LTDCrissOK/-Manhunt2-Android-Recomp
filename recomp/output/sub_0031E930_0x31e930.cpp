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

// Function: sub_0031E930
// Address: 0x31e930 - 0x31e948
void sub_0031E930_0x31e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E930_0x31e930");
#endif

    ctx->pc = 0x31e930u;

    // 0x31e930: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31e930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31e934: 0x3e00008  jr          $ra
    ctx->pc = 0x31E934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E934u;
        // 0x31e938: 0xac44bdb8  sw          $a0, -0x4248($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950328), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E93Cu;
    // 0x31e93c: 0x0  nop
    ctx->pc = 0x31e93cu;
    // NOP
    // 0x31e940: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x31e940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x31e944: 0x0  nop
    ctx->pc = 0x31e944u;
    // NOP
    ctx->pc = 0x31e948u;
}
