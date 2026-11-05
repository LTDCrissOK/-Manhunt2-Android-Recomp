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

// Function: sub_0013C598
// Address: 0x13c598 - 0x13c5b0
void sub_0013C598_0x13c598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C598_0x13c598");
#endif

    ctx->pc = 0x13c598u;

    // 0x13c598: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13c598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13c59c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13c59cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13c5a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13c5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x13C5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5A4u;
        // 0x13c5a8: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C5ACu;
    // 0x13c5ac: 0x0  nop
    ctx->pc = 0x13c5acu;
    // NOP
    ctx->pc = 0x13c5b0u;
}
