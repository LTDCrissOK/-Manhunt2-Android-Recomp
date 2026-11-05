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

// Function: sub_00127B58
// Address: 0x127b58 - 0x127b78
void sub_00127B58_0x127b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127B58_0x127b58");
#endif

    ctx->pc = 0x127b58u;

    // 0x127b58: 0xac800820  sw          $zero, 0x820($a0)
    ctx->pc = 0x127b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2080), GPR_U32(ctx, 0));
    // 0x127b5c: 0xac800824  sw          $zero, 0x824($a0)
    ctx->pc = 0x127b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2084), GPR_U32(ctx, 0));
    // 0x127b60: 0xac800828  sw          $zero, 0x828($a0)
    ctx->pc = 0x127b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 0));
    // 0x127b64: 0x7c800830  sq          $zero, 0x830($a0)
    ctx->pc = 0x127b64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2096), GPR_VEC(ctx, 0));
    // 0x127b68: 0xac800840  sw          $zero, 0x840($a0)
    ctx->pc = 0x127b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2112), GPR_U32(ctx, 0));
    // 0x127b6c: 0x7c800850  sq          $zero, 0x850($a0)
    ctx->pc = 0x127b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2128), GPR_VEC(ctx, 0));
    // 0x127b70: 0x3e00008  jr          $ra
    ctx->pc = 0x127B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B70u;
        // 0x127b74: 0xac800860  sw          $zero, 0x860($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127B78u;
}
