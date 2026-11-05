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

// Function: sub_00316020
// Address: 0x316020 - 0x316030
void sub_00316020_0x316020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316020_0x316020");
#endif

    ctx->pc = 0x316020u;

    // 0x316020: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x316020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x316024: 0x3e00008  jr          $ra
    ctx->pc = 0x316024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316024u;
        // 0x316028: 0xac44bd3c  sw          $a0, -0x42C4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31602Cu;
    // 0x31602c: 0x0  nop
    ctx->pc = 0x31602cu;
    // NOP
    ctx->pc = 0x316030u;
}
