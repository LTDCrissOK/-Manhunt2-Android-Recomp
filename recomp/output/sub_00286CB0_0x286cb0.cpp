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

// Function: sub_00286CB0
// Address: 0x286cb0 - 0x286cc8
void sub_00286CB0_0x286cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286CB0_0x286cb0");
#endif

    ctx->pc = 0x286cb0u;

    // 0x286cb0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x286cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x286cb4: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x286cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA45Cu));
    // 0x286cb8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286CB8u;
    {
        const bool branch_taken_0x286cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286cb8) {
            ctx->pc = 0x286CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286CB8u;
            // 0x286cbc: 0xac60a45c  sw          $zero, -0x5BA4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294943836), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286CC0u;
            goto label_286cc0;
        }
    }
    ctx->pc = 0x286CC0u;
label_286cc0:
    // 0x286cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x286CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286CC8u;
}
