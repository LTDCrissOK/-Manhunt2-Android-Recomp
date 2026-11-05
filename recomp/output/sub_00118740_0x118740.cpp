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

// Function: sub_00118740
// Address: 0x118740 - 0x118760
void sub_00118740_0x118740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118740_0x118740");
#endif

    ctx->pc = 0x118740u;

    // 0x118740: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x118740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118744: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x118744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x118748: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118748u;
    {
        const bool branch_taken_0x118748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x118748) {
            ctx->pc = 0x118758u;
            goto label_118758;
        }
    }
    ctx->pc = 0x118750u;
    // 0x118750: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x118750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118754: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x118754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_118758:
    // 0x118758: 0x3e00008  jr          $ra
    ctx->pc = 0x118758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118760u;
}
