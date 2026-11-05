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

// Function: sub_00152F50
// Address: 0x152f50 - 0x152f70
void sub_00152F50_0x152f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152F50_0x152f50");
#endif

    ctx->pc = 0x152f50u;

    // 0x152f50: 0x8c820520  lw          $v0, 0x520($a0)
    ctx->pc = 0x152f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1312)));
    // 0x152f54: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x152f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x152f58: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x152f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x152f5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x152f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x152f60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x152f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152f64: 0x3e00008  jr          $ra
    ctx->pc = 0x152F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F64u;
        // 0x152f68: 0x8c620108  lw          $v0, 0x108($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152F6Cu;
    // 0x152f6c: 0x0  nop
    ctx->pc = 0x152f6cu;
    // NOP
    ctx->pc = 0x152f70u;
}
