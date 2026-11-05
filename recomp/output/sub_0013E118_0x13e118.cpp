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

// Function: sub_0013E118
// Address: 0x13e118 - 0x13e128
void sub_0013E118_0x13e118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E118_0x13e118");
#endif

    ctx->pc = 0x13e118u;

    // 0x13e118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e11c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E11Cu;
        // 0x13e120: 0xac820060  sw          $v0, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E124u;
    // 0x13e124: 0x0  nop
    ctx->pc = 0x13e124u;
    // NOP
    ctx->pc = 0x13e128u;
}
