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

// Function: sub_001F9918
// Address: 0x1f9918 - 0x1f9938
void sub_001F9918_0x1f9918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9918_0x1f9918");
#endif

    ctx->pc = 0x1f9918u;

    // 0x1f9918: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9918u;
    {
        const bool branch_taken_0x1f9918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9918) {
            ctx->pc = 0x1F992Cu;
            goto label_1f992c;
        }
    }
    ctx->pc = 0x1F9920u;
    // 0x1f9920: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f9920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f9924: 0x344200e0  ori         $v0, $v0, 0xE0
    ctx->pc = 0x1f9924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)224);
    // 0x1f9928: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f9928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1f992c:
    // 0x1f992c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F992Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F992Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9934u;
    // 0x1f9934: 0x0  nop
    ctx->pc = 0x1f9934u;
    // NOP
    ctx->pc = 0x1f9938u;
}
