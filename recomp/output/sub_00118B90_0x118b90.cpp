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

// Function: sub_00118B90
// Address: 0x118b90 - 0x118bb0
void sub_00118B90_0x118b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118B90_0x118b90");
#endif

    ctx->pc = 0x118b90u;

    // 0x118b90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x118b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118b94: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x118b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x118b98: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118B98u;
    {
        const bool branch_taken_0x118b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x118b98) {
            ctx->pc = 0x118BA8u;
            goto label_118ba8;
        }
    }
    ctx->pc = 0x118BA0u;
    // 0x118ba0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x118ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118ba4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x118ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_118ba8:
    // 0x118ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x118BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118BB0u;
}
