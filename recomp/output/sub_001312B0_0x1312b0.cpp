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

// Function: sub_001312B0
// Address: 0x1312b0 - 0x1312d0
void sub_001312B0_0x1312b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001312B0_0x1312b0");
#endif

    ctx->pc = 0x1312b0u;

    // 0x1312b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1312b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1312b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1312B4u;
    {
        const bool branch_taken_0x1312b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1312b4) {
            ctx->pc = 0x1312C8u;
            goto label_1312c8;
        }
    }
    ctx->pc = 0x1312BCu;
    // 0x1312bc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1312bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1312c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1312c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1312c4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1312c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1312c8:
    // 0x1312c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1312C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1312C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1312D0u;
}
