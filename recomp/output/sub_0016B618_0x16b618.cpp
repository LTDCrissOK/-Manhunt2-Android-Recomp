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

// Function: sub_0016B618
// Address: 0x16b618 - 0x16b630
void sub_0016B618_0x16b618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B618_0x16b618");
#endif

    ctx->pc = 0x16b618u;

    // 0x16b618: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x16b618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x16b61c: 0xac800140  sw          $zero, 0x140($a0)
    ctx->pc = 0x16b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 0));
    // 0x16b620: 0xac800144  sw          $zero, 0x144($a0)
    ctx->pc = 0x16b620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 0));
    // 0x16b624: 0xac800148  sw          $zero, 0x148($a0)
    ctx->pc = 0x16b624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 0));
    // 0x16b628: 0x3e00008  jr          $ra
    ctx->pc = 0x16B628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B628u;
        // 0x16b62c: 0xac80014c  sw          $zero, 0x14C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B630u;
}
