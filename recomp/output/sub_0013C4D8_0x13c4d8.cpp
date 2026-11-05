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

// Function: sub_0013C4D8
// Address: 0x13c4d8 - 0x13c4f0
void sub_0013C4D8_0x13c4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C4D8_0x13c4d8");
#endif

    ctx->pc = 0x13c4d8u;

    // 0x13c4d8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13c4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13c4dc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13c4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13c4e0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13c4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13C4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C4E4u;
        // 0x13c4e8: 0xaca6001c  sw          $a2, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C4ECu;
    // 0x13c4ec: 0x0  nop
    ctx->pc = 0x13c4ecu;
    // NOP
    ctx->pc = 0x13c4f0u;
}
