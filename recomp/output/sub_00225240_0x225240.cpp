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

// Function: sub_00225240
// Address: 0x225240 - 0x225260
void sub_00225240_0x225240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225240_0x225240");
#endif

    ctx->pc = 0x225240u;

    // 0x225240: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x225240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x225244: 0x90432b94  lbu         $v1, 0x2B94($v0)
    ctx->pc = 0x225244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x482B94u));
    // 0x225248: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x225248u;
    {
        const bool branch_taken_0x225248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225248u;
        // 0x22524c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225248) {
            ctx->pc = 0x225258u;
            goto label_225258;
        }
    }
    ctx->pc = 0x225250u;
    // 0x225250: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x225250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x225254: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x225254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_225258:
    // 0x225258: 0x3e00008  jr          $ra
    ctx->pc = 0x225258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225260u;
}
