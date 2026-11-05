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

// Function: sub_00118550
// Address: 0x118550 - 0x118570
void sub_00118550_0x118550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118550_0x118550");
#endif

    ctx->pc = 0x118550u;

    // 0x118550: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x118550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118554: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x118554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x118558: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118558u;
    {
        const bool branch_taken_0x118558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x118558) {
            ctx->pc = 0x118568u;
            goto label_118568;
        }
    }
    ctx->pc = 0x118560u;
    // 0x118560: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x118560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118564: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x118564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_118568:
    // 0x118568: 0x3e00008  jr          $ra
    ctx->pc = 0x118568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118570u;
}
