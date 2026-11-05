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

// Function: sub_00337998
// Address: 0x337998 - 0x3379b8
void sub_00337998_0x337998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337998_0x337998");
#endif

    ctx->pc = 0x337998u;

    // 0x337998: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x337998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x33799c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x33799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3379a0: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x3379a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3379a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3379a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3379a8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3379a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3379ac: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x3379acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x3379b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3379B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3379B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3379B0u;
        // 0x3379b4: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3379B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3379B8u;
}
