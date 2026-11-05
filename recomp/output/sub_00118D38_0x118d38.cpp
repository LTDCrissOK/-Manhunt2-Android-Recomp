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

// Function: sub_00118D38
// Address: 0x118d38 - 0x118d58
void sub_00118D38_0x118d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118D38_0x118d38");
#endif

    ctx->pc = 0x118d38u;

    // 0x118d38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x118d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118d3c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x118d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x118d40: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118D40u;
    {
        const bool branch_taken_0x118d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x118d40) {
            ctx->pc = 0x118D50u;
            goto label_118d50;
        }
    }
    ctx->pc = 0x118D48u;
    // 0x118d48: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x118d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118d4c: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x118d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_118d50:
    // 0x118d50: 0x3e00008  jr          $ra
    ctx->pc = 0x118D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118D58u;
}
