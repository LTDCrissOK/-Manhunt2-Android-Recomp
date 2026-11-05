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

// Function: sub_0021C9F8
// Address: 0x21c9f8 - 0x21ca08
void sub_0021C9F8_0x21c9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C9F8_0x21c9f8");
#endif

    ctx->pc = 0x21c9f8u;

    // 0x21c9f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x21c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x21c9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x21C9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9FCu;
        // 0x21ca00: 0x906295d0  lbu         $v0, -0x6A30($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CA04u;
    // 0x21ca04: 0x0  nop
    ctx->pc = 0x21ca04u;
    // NOP
    ctx->pc = 0x21ca08u;
}
