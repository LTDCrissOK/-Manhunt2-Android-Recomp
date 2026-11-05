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

// Function: sub_00118760
// Address: 0x118760 - 0x118780
void sub_00118760_0x118760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118760_0x118760");
#endif

    ctx->pc = 0x118760u;

    // 0x118760: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x118760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118764: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x118764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x118768: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118768u;
    {
        const bool branch_taken_0x118768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x118768) {
            ctx->pc = 0x118778u;
            goto label_118778;
        }
    }
    ctx->pc = 0x118770u;
    // 0x118770: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x118770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118774: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x118774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_118778:
    // 0x118778: 0x3e00008  jr          $ra
    ctx->pc = 0x118778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118780u;
}
