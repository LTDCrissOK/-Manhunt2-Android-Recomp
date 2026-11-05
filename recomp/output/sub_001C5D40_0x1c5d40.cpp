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

// Function: sub_001C5D40
// Address: 0x1c5d40 - 0x1c5d68
void sub_001C5D40_0x1c5d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5D40_0x1c5d40");
#endif

    ctx->pc = 0x1c5d40u;

    // 0x1c5d40: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1c5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1c5d44: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1c5d44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c5d48: 0x8c860318  lw          $a2, 0x318($a0)
    ctx->pc = 0x1c5d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x1c5d4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c5d50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c5d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5d54: 0x8cc40fe8  lw          $a0, 0xFE8($a2)
    ctx->pc = 0x1c5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4072)));
    // 0x1c5d58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c5d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c5d5c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c5d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D60u;
        // 0x1c5d64: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5D68u;
}
