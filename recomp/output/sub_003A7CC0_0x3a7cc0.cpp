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

// Function: sub_003A7CC0
// Address: 0x3a7cc0 - 0x3a7cd8
void sub_003A7CC0_0x3a7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7CC0_0x3a7cc0");
#endif

    ctx->pc = 0x3a7cc0u;

    // 0x3a7cc0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a7cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a7cc4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a7cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3a7cc8: 0xac4486bc  sw          $a0, -0x7944($v0)
    ctx->pc = 0x3a7cc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4186BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4186BCu, _value); } while (0);
    // 0x3a7ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7CCCu;
        // 0x3a7cd0: 0xac6586c0  sw          $a1, -0x7940($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7CD4u;
    // 0x3a7cd4: 0x0  nop
    ctx->pc = 0x3a7cd4u;
    // NOP
    ctx->pc = 0x3a7cd8u;
}
