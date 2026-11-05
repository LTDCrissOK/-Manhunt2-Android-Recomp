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

// Function: sub_001088D8
// Address: 0x1088d8 - 0x108900
void sub_001088D8_0x1088d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001088D8_0x1088d8");
#endif

    ctx->pc = 0x1088d8u;

    // 0x1088d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1088d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1088dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1088DCu;
    {
        const bool branch_taken_0x1088dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1088dc) {
            ctx->pc = 0x1088F8u;
            goto label_1088f8;
        }
    }
    ctx->pc = 0x1088E4u;
    // 0x1088e4: 0xa0800051  sb          $zero, 0x51($a0)
    ctx->pc = 0x1088e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x1088e8: 0xa0800045  sb          $zero, 0x45($a0)
    ctx->pc = 0x1088e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x1088ec: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1088ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1088f0: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1088f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1088f4: 0xa0800050  sb          $zero, 0x50($a0)
    ctx->pc = 0x1088f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
label_1088f8:
    // 0x1088f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1088F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1088F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108900u;
}
