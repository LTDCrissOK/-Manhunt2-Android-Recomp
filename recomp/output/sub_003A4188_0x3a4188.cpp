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

// Function: sub_003A4188
// Address: 0x3a4188 - 0x3a41a0
void sub_003A4188_0x3a4188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4188_0x3a4188");
#endif

    ctx->pc = 0x3a4188u;

    // 0x3a4188: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a4188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a418c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a418cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a4190: 0xac442a94  sw          $a0, 0x2A94($v0)
    ctx->pc = 0x3a4190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x412A94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x412A94u, _value); } while (0);
    // 0x3a4194: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4194u;
        // 0x3a4198: 0xac652a98  sw          $a1, 0x2A98($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10904), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A419Cu;
    // 0x3a419c: 0x0  nop
    ctx->pc = 0x3a419cu;
    // NOP
    ctx->pc = 0x3a41a0u;
}
