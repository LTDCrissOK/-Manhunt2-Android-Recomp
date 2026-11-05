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

// Function: sub_001368F8
// Address: 0x1368f8 - 0x136910
void sub_001368F8_0x1368f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001368F8_0x1368f8");
#endif

    ctx->pc = 0x1368f8u;

    // 0x1368f8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1368f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1368fc: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1368fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x136900: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x136900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x136904: 0x3e00008  jr          $ra
    ctx->pc = 0x136904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136904u;
        // 0x136908: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13690Cu;
    // 0x13690c: 0x0  nop
    ctx->pc = 0x13690cu;
    // NOP
    ctx->pc = 0x136910u;
}
