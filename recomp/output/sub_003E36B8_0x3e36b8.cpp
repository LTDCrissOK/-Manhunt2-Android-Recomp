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

// Function: sub_003E36B8
// Address: 0x3e36b8 - 0x3e36c8
void sub_003E36B8_0x3e36b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E36B8_0x3e36b8");
#endif

    ctx->pc = 0x3e36b8u;

    // 0x3e36b8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3e36b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3e36bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E36BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36BCu;
        // 0x3e36c0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E36BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E36C4u;
    // 0x3e36c4: 0x0  nop
    ctx->pc = 0x3e36c4u;
    // NOP
    ctx->pc = 0x3e36c8u;
}
