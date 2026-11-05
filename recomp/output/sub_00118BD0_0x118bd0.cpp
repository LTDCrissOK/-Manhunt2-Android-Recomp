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

// Function: sub_00118BD0
// Address: 0x118bd0 - 0x118bf0
void sub_00118BD0_0x118bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118BD0_0x118bd0");
#endif

    ctx->pc = 0x118bd0u;

    // 0x118bd0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x118bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118bd4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x118bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x118bd8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118BD8u;
    {
        const bool branch_taken_0x118bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x118bd8) {
            ctx->pc = 0x118BE8u;
            goto label_118be8;
        }
    }
    ctx->pc = 0x118BE0u;
    // 0x118be0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x118be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118be4: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x118be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
label_118be8:
    // 0x118be8: 0x3e00008  jr          $ra
    ctx->pc = 0x118BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118BF0u;
}
