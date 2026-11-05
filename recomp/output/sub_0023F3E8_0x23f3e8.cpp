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

// Function: sub_0023F3E8
// Address: 0x23f3e8 - 0x23f400
void sub_0023F3E8_0x23f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F3E8_0x23f3e8");
#endif

    ctx->pc = 0x23f3e8u;

    // 0x23f3e8: 0x8c830418  lw          $v1, 0x418($a0)
    ctx->pc = 0x23f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1048)));
    // 0x23f3ec: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x23f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23f3f0: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x23F3F0u;
    {
        const bool branch_taken_0x23f3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f3f0) {
            ctx->pc = 0x23F3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F3F0u;
            // 0x23f3f4: 0xac85031c  sw          $a1, 0x31C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 796), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F3F8u;
            goto label_23f3f8;
        }
    }
    ctx->pc = 0x23F3F8u;
label_23f3f8:
    // 0x23f3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F400u;
}
