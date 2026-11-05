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

// Function: sub_002862A0
// Address: 0x2862a0 - 0x2862b8
void sub_002862A0_0x2862a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002862A0_0x2862a0");
#endif

    ctx->pc = 0x2862a0u;

    // 0x2862a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2862a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2862a4: 0x24432bf8  addiu       $v1, $v0, 0x2BF8
    ctx->pc = 0x2862a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11256));
    // 0x2862a8: 0xac402bf8  sw          $zero, 0x2BF8($v0)
    ctx->pc = 0x2862a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482BF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482BF8u, _value); } while (0);
    // 0x2862ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2862ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2862B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862ACu;
        // 0x2862b0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2862ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2862B4u;
    // 0x2862b4: 0x0  nop
    ctx->pc = 0x2862b4u;
    // NOP
    ctx->pc = 0x2862b8u;
}
