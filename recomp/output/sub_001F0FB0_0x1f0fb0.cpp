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

// Function: sub_001F0FB0
// Address: 0x1f0fb0 - 0x1f0fc0
void sub_001F0FB0_0x1f0fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0FB0_0x1f0fb0");
#endif

    ctx->pc = 0x1f0fb0u;

    // 0x1f0fb0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f0fb4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f0fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FB8u;
        // 0x1f0fbc: 0xac80139c  sw          $zero, 0x139C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0FC0u;
}
