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

// Function: sub_00118F60
// Address: 0x118f60 - 0x118f80
void sub_00118F60_0x118f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118F60_0x118f60");
#endif

    switch (ctx->pc) {
        case 0x118f74u: goto label_118f74;
        default: break;
    }

    ctx->pc = 0x118f60u;

    // 0x118f60: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x118f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118f64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x118f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118f68: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x118f68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x118f6c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x118f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118f70: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x118f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_118f74:
    // 0x118f74: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x118f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118f78: 0x3e00008  jr          $ra
    ctx->pc = 0x118F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F78u;
        // 0x118f7c: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118F80u;
}
