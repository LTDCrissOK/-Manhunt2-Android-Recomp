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

// Function: sub_00114504
// Address: 0x114504 - 0x114510
void sub_00114504_0x114504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114504_0x114504");
#endif

    ctx->pc = 0x114504u;

    // 0x114504: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x114504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x114508: 0x3e00008  jr          $ra
    ctx->pc = 0x114508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114508u;
        // 0x11450c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114510u;
}
