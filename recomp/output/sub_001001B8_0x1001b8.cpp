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

// Function: sub_001001B8
// Address: 0x1001b8 - 0x1001e0
void sub_001001B8_0x1001b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001001B8_0x1001b8");
#endif

    ctx->pc = 0x1001b8u;

    // 0x1001b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1001b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1001bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1001BCu;
    {
        const bool branch_taken_0x1001bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1001bc) {
            ctx->pc = 0x1001D4u;
            goto label_1001d4;
        }
    }
    ctx->pc = 0x1001C4u;
    // 0x1001c4: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x1001c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1001c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1001c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1001cc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1001ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1001d0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1001d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1001d4:
    // 0x1001d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1001D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1001D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1001DCu;
    // 0x1001dc: 0x0  nop
    ctx->pc = 0x1001dcu;
    // NOP
    ctx->pc = 0x1001e0u;
}
