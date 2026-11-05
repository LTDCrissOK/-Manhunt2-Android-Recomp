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

// Function: sub_003A63F0
// Address: 0x3a63f0 - 0x3a6400
void sub_003A63F0_0x3a63f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A63F0_0x3a63f0");
#endif

    ctx->pc = 0x3a63f0u;

    // 0x3a63f0: 0x9c82000c  lwu         $v0, 0xC($a0)
    ctx->pc = 0x3a63f0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a63f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a63f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a63f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A63F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63F8u;
        // 0x3a63fc: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A63F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6400u;
}
