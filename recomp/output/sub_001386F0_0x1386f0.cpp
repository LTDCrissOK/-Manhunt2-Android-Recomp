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

// Function: sub_001386F0
// Address: 0x1386f0 - 0x138708
void sub_001386F0_0x1386f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001386F0_0x1386f0");
#endif

    ctx->pc = 0x1386f0u;

    // 0x1386f0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1386f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1386f4: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1386f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1386f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1386f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1386fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1386FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386FCu;
        // 0x138700: 0x8c82004c  lw          $v0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1386FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138704u;
    // 0x138704: 0x0  nop
    ctx->pc = 0x138704u;
    // NOP
    ctx->pc = 0x138708u;
}
