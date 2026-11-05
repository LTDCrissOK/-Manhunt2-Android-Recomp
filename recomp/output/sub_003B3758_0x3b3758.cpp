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

// Function: sub_003B3758
// Address: 0x3b3758 - 0x3b3770
void sub_003B3758_0x3b3758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3758_0x3b3758");
#endif

    ctx->pc = 0x3b3758u;

    // 0x3b3758: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b3758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b375c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3b375cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3b3760: 0xac4468fc  sw          $a0, 0x68FC($v0)
    ctx->pc = 0x3b3760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4268FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4268FCu, _value); } while (0);
    // 0x3b3764: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3764u;
        // 0x3b3768: 0xac656900  sw          $a1, 0x6900($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 26880), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B376Cu;
    // 0x3b376c: 0x0  nop
    ctx->pc = 0x3b376cu;
    // NOP
    ctx->pc = 0x3b3770u;
}
