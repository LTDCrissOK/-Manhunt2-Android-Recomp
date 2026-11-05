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

// Function: sub_00146DD0
// Address: 0x146dd0 - 0x146de8
void sub_00146DD0_0x146dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146DD0_0x146dd0");
#endif

    ctx->pc = 0x146dd0u;

    // 0x146dd0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x146dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x146dd4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x146dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x146dd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x146dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x146ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x146DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DDCu;
        // 0x146de0: 0xac8604e4  sw          $a2, 0x4E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1252), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146DE4u;
    // 0x146de4: 0x0  nop
    ctx->pc = 0x146de4u;
    // NOP
    ctx->pc = 0x146de8u;
}
