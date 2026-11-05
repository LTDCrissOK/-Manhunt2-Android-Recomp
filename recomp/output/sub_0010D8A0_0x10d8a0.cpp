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

// Function: sub_0010D8A0
// Address: 0x10d8a0 - 0x10d8b8
void sub_0010D8A0_0x10d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D8A0_0x10d8a0");
#endif

    ctx->pc = 0x10d8a0u;

    // 0x10d8a0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x10d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x10d8a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10d8a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10d8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10D8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8ACu;
        // 0x10d8b0: 0xa08000dd  sb          $zero, 0xDD($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 221), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D8B4u;
    // 0x10d8b4: 0x0  nop
    ctx->pc = 0x10d8b4u;
    // NOP
    ctx->pc = 0x10d8b8u;
}
