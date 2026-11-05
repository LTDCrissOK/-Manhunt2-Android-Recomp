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

// Function: sub_00131D58
// Address: 0x131d58 - 0x131d88
void sub_00131D58_0x131d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131D58_0x131d58");
#endif

    ctx->pc = 0x131d58u;

    // 0x131d58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x131d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131d5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x131D5Cu;
    {
        const bool branch_taken_0x131d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131d5c) {
            ctx->pc = 0x131D80u;
            goto label_131d80;
        }
    }
    ctx->pc = 0x131D64u;
    // 0x131d64: 0xac800220  sw          $zero, 0x220($a0)
    ctx->pc = 0x131d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 0));
    // 0x131d68: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x131d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x131d6c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x131d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x131d70: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x131d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x131d74: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x131d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x131d78: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x131d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x131d7c: 0xac80021c  sw          $zero, 0x21C($a0)
    ctx->pc = 0x131d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 0));
label_131d80:
    // 0x131d80: 0x3e00008  jr          $ra
    ctx->pc = 0x131D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131D88u;
}
