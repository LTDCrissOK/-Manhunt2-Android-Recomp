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

// Function: sub_0017F3F8
// Address: 0x17f3f8 - 0x17f418
void sub_0017F3F8_0x17f3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F3F8_0x17f3f8");
#endif

    ctx->pc = 0x17f3f8u;

    // 0x17f3f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f3fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F3FCu;
    {
        const bool branch_taken_0x17f3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f3fc) {
            ctx->pc = 0x17F410u;
            goto label_17f410;
        }
    }
    ctx->pc = 0x17F404u;
    // 0x17f404: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17f404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17f408: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17f408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17f40c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_17f410:
    // 0x17f410: 0x3e00008  jr          $ra
    ctx->pc = 0x17F410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F418u;
}
