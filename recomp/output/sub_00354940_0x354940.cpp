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

// Function: sub_00354940
// Address: 0x354940 - 0x354950
void sub_00354940_0x354940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354940_0x354940");
#endif

    ctx->pc = 0x354940u;

    // 0x354940: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x354940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x354944: 0x3e00008  jr          $ra
    ctx->pc = 0x354944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354944u;
        // 0x354948: 0xa4442d08  sh          $a0, 0x2D08($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 11528), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35494Cu;
    // 0x35494c: 0x0  nop
    ctx->pc = 0x35494cu;
    // NOP
    ctx->pc = 0x354950u;
}
