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

// Function: sub_0013E398
// Address: 0x13e398 - 0x13e3b0
void sub_0013E398_0x13e398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E398_0x13e398");
#endif

    ctx->pc = 0x13e398u;

    // 0x13e398: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13e398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13e39c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13e39cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13e3a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13e3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x13E3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3A4u;
        // 0x13e3a8: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E3ACu;
    // 0x13e3ac: 0x0  nop
    ctx->pc = 0x13e3acu;
    // NOP
    ctx->pc = 0x13e3b0u;
}
