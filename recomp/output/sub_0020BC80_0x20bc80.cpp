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

// Function: sub_0020BC80
// Address: 0x20bc80 - 0x20bc90
void sub_0020BC80_0x20bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BC80_0x20bc80");
#endif

    ctx->pc = 0x20bc80u;

    // 0x20bc80: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x20bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x20bc84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bc88: 0x3e00008  jr          $ra
    ctx->pc = 0x20BC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC88u;
        // 0x20bc8c: 0xac62e498  sw          $v0, -0x1B68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BC90u;
}
