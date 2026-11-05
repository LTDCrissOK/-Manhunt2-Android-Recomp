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

// Function: sub_00115AB0
// Address: 0x115ab0 - 0x115ac0
void sub_00115AB0_0x115ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115AB0_0x115ab0");
#endif

    ctx->pc = 0x115ab0u;

    // 0x115ab0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x115ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x115ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x115AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AB4u;
        // 0x115ab8: 0xa4850076  sh          $a1, 0x76($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 118), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115ABCu;
    // 0x115abc: 0x0  nop
    ctx->pc = 0x115abcu;
    // NOP
    ctx->pc = 0x115ac0u;
}
