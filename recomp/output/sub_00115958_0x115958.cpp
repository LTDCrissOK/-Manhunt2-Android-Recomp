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

// Function: sub_00115958
// Address: 0x115958 - 0x115970
void sub_00115958_0x115958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115958_0x115958");
#endif

    ctx->pc = 0x115958u;

    // 0x115958: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x115958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11595c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x11595cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x115960: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x115960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x115964: 0x3e00008  jr          $ra
    ctx->pc = 0x115964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115964u;
        // 0x115968: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11596Cu;
    // 0x11596c: 0x0  nop
    ctx->pc = 0x11596cu;
    // NOP
    ctx->pc = 0x115970u;
}
