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

// Function: sub_0014ABC0
// Address: 0x14abc0 - 0x14abd8
void sub_0014ABC0_0x14abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ABC0_0x14abc0");
#endif

    ctx->pc = 0x14abc0u;

    // 0x14abc0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14abc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14abc4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x14abc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14abc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14abcc: 0x3e00008  jr          $ra
    ctx->pc = 0x14ABCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABCCu;
        // 0x14abd0: 0x8c8204e4  lw          $v0, 0x4E4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1252)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ABCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ABD4u;
    // 0x14abd4: 0x0  nop
    ctx->pc = 0x14abd4u;
    // NOP
    ctx->pc = 0x14abd8u;
}
