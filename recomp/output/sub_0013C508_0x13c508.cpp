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

// Function: sub_0013C508
// Address: 0x13c508 - 0x13c520
void sub_0013C508_0x13c508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C508_0x13c508");
#endif

    ctx->pc = 0x13c508u;

    // 0x13c508: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13c508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13c50c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13c510: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13c510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13c514: 0x3e00008  jr          $ra
    ctx->pc = 0x13C514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C514u;
        // 0x13c518: 0xaca60020  sw          $a2, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C51Cu;
    // 0x13c51c: 0x0  nop
    ctx->pc = 0x13c51cu;
    // NOP
    ctx->pc = 0x13c520u;
}
