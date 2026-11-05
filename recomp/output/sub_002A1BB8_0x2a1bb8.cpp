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

// Function: sub_002A1BB8
// Address: 0x2a1bb8 - 0x2a1bd8
void sub_002A1BB8_0x2a1bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1BB8_0x2a1bb8");
#endif

    ctx->pc = 0x2a1bb8u;

    // 0x2a1bb8: 0x8c820f9c  lw          $v0, 0xF9C($a0)
    ctx->pc = 0x2a1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3996)));
    // 0x2a1bbc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A1BBCu;
    {
        const bool branch_taken_0x2a1bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1bbc) {
            ctx->pc = 0x2A1BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1BBCu;
            // 0x2a1bc0: 0xac400048  sw          $zero, 0x48($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1BC4u;
            goto label_2a1bc4;
        }
    }
    ctx->pc = 0x2A1BC4u;
label_2a1bc4:
    // 0x2a1bc4: 0x8c84029c  lw          $a0, 0x29C($a0)
    ctx->pc = 0x2a1bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
    // 0x2a1bc8: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A1BC8u;
    {
        const bool branch_taken_0x2a1bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1bc8) {
            ctx->pc = 0x2A1BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1BC8u;
            // 0x2a1bcc: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1BD0u;
            goto label_2a1bd0;
        }
    }
    ctx->pc = 0x2A1BD0u;
label_2a1bd0:
    // 0x2a1bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1BD8u;
}
