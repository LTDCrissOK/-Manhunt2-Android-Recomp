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

// Function: sub_0011B4D8
// Address: 0x11b4d8 - 0x11b4f0
void sub_0011B4D8_0x11b4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B4D8_0x11b4d8");
#endif

    ctx->pc = 0x11b4d8u;

    // 0x11b4d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x11b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x11b4dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4e0: 0x8c830758  lw          $v1, 0x758($a0)
    ctx->pc = 0x11b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F0758u));
    // 0x11b4e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11b4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4E8u;
        // 0x11b4ec: 0xac830758  sw          $v1, 0x758($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1880), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B4F0u;
}
