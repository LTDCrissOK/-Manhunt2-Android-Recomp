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

// Function: sub_001FB390
// Address: 0x1fb390 - 0x1fb3a8
void sub_001FB390_0x1fb390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB390_0x1fb390");
#endif

    ctx->pc = 0x1fb390u;

    // 0x1fb390: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1fb390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1fb394: 0x8c629328  lw          $v0, -0x6CD8($v1)
    ctx->pc = 0x1fb394u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9328u));
    // 0x1fb398: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb39c: 0xac629328  sw          $v0, -0x6CD8($v1)
    ctx->pc = 0x1fb39cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F9328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9328u, _value); } while (0);
    // 0x1fb3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3A0u;
        // 0x1fb3a4: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB3A8u;
}
