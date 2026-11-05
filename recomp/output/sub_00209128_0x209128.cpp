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

// Function: sub_00209128
// Address: 0x209128 - 0x209138
void sub_00209128_0x209128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209128_0x209128");
#endif

    ctx->pc = 0x209128u;

    // 0x209128: 0xac8633cc  sw          $a2, 0x33CC($a0)
    ctx->pc = 0x209128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13260), GPR_U32(ctx, 6));
    // 0x20912c: 0x3e00008  jr          $ra
    ctx->pc = 0x20912Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20912Cu;
        // 0x209130: 0xac8533c8  sw          $a1, 0x33C8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 13256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20912Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209134u;
    // 0x209134: 0x0  nop
    ctx->pc = 0x209134u;
    // NOP
    ctx->pc = 0x209138u;
}
