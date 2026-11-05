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

// Function: sub_0013E380
// Address: 0x13e380 - 0x13e398
void sub_0013E380_0x13e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E380_0x13e380");
#endif

    ctx->pc = 0x13e380u;

    // 0x13e380: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13e380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13e384: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13e384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13e388: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13e388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13e38c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E38Cu;
        // 0x13e390: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E394u;
    // 0x13e394: 0x0  nop
    ctx->pc = 0x13e394u;
    // NOP
    ctx->pc = 0x13e398u;
}
