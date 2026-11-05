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

// Function: sub_002887C8
// Address: 0x2887c8 - 0x2887f0
void sub_002887C8_0x2887c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002887C8_0x2887c8");
#endif

    ctx->pc = 0x2887c8u;

    // 0x2887c8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2887c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2887cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2887CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2887D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887CCu;
        // 0x2887d0: 0x8c6225c0  lw          $v0, 0x25C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9664)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2887CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2887D4u;
    // 0x2887d4: 0x0  nop
    ctx->pc = 0x2887d4u;
    // NOP
    // 0x2887d8: 0xac4400b8  sw          $a0, 0xB8($v0)
    ctx->pc = 0x2887d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 4));
    // 0x2887dc: 0x0  nop
    ctx->pc = 0x2887dcu;
    // NOP
    // 0x2887e0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2887e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x2887e4: 0x0  nop
    ctx->pc = 0x2887e4u;
    // NOP
    // 0x2887e8: 0xac4400bc  sw          $a0, 0xBC($v0)
    ctx->pc = 0x2887e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 4));
    // 0x2887ec: 0x0  nop
    ctx->pc = 0x2887ecu;
    // NOP
    ctx->pc = 0x2887f0u;
}
