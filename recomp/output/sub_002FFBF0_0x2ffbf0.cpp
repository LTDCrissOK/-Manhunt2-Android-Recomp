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

// Function: sub_002FFBF0
// Address: 0x2ffbf0 - 0x2ffc08
void sub_002FFBF0_0x2ffbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFBF0_0x2ffbf0");
#endif

    ctx->pc = 0x2ffbf0u;

    // 0x2ffbf0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2ffbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2ffbf4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2ffbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ffbf8: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x2ffbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x2ffbfc: 0xac430280  sw          $v1, 0x280($v0)
    ctx->pc = 0x2ffbfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x595AF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x595AF0u, _value); } while (0);
    // 0x2ffc00: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC00u;
        // 0x2ffc04: 0xa044027d  sb          $a0, 0x27D($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 637), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFC08u;
}
