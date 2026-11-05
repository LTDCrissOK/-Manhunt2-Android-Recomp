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

// Function: sub_002887F0
// Address: 0x2887f0 - 0x288808
void sub_002887F0_0x2887f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002887F0_0x2887f0");
#endif

    ctx->pc = 0x2887f0u;

    // 0x2887f0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2887f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2887f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2887F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2887F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887F4u;
        // 0x2887f8: 0x8c6225c8  lw          $v0, 0x25C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9672)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2887F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2887FCu;
    // 0x2887fc: 0x0  nop
    ctx->pc = 0x2887fcu;
    // NOP
    // 0x288800: 0xac4400c0  sw          $a0, 0xC0($v0)
    ctx->pc = 0x288800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 4));
    // 0x288804: 0x0  nop
    ctx->pc = 0x288804u;
    // NOP
    ctx->pc = 0x288808u;
}
