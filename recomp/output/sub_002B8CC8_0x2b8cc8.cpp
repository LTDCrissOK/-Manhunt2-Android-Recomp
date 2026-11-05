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

// Function: sub_002B8CC8
// Address: 0x2b8cc8 - 0x2b8ce0
void sub_002B8CC8_0x2b8cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8CC8_0x2b8cc8");
#endif

    switch (ctx->pc) {
        case 0x2b8cccu: goto label_2b8ccc;
        case 0x2b8cd0u: goto label_2b8cd0;
        default: break;
    }

    ctx->pc = 0x2b8cc8u;

    // 0x2b8cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8ccc:
    // 0x2b8ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b8cd0:
    // 0x2b8cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CD0u;
        // 0x2b8cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8CD8u;
    // 0x2b8cd8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b8cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b8cdc: 0x0  nop
    ctx->pc = 0x2b8cdcu;
    // NOP
    ctx->pc = 0x2b8ce0u;
}
