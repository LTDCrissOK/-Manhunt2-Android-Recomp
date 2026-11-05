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

// Function: sub_001E5608
// Address: 0x1e5608 - 0x1e5618
void sub_001E5608_0x1e5608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5608_0x1e5608");
#endif

    ctx->pc = 0x1e5608u;

    // 0x1e5608: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e5608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e560c: 0x8c6291d8  lw          $v0, -0x6E28($v1)
    ctx->pc = 0x1e560cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91D8u));
    // 0x1e5610: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5610u;
        // 0x1e5614: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5618u;
}
