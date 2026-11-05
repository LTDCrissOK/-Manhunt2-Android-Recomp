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

// Function: sub_00309630
// Address: 0x309630 - 0x309668
void sub_00309630_0x309630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309630_0x309630");
#endif

    ctx->pc = 0x309630u;

    // 0x309630: 0x8c83130c  lw          $v1, 0x130C($a0)
    ctx->pc = 0x309630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4876)));
    // 0x309634: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x309634u;
    {
        const bool branch_taken_0x309634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309634) {
            ctx->pc = 0x30965Cu;
            goto label_30965c;
        }
    }
    ctx->pc = 0x30963Cu;
    // 0x30963c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x30963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x309640: 0xac82130c  sw          $v0, 0x130C($a0)
    ctx->pc = 0x309640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4876), GPR_U32(ctx, 2));
    // 0x309644: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x309644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x309648: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x309648u;
    {
        const bool branch_taken_0x309648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309648u;
        // 0x30964c: 0x248212f0  addiu       $v0, $a0, 0x12F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309648) {
            ctx->pc = 0x309654u;
            goto label_309654;
        }
    }
    ctx->pc = 0x309650u;
    // 0x309650: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x309650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_309654:
    // 0x309654: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x309654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x309658: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x309658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_30965c:
    // 0x30965c: 0x3e00008  jr          $ra
    ctx->pc = 0x30965Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30965Cu;
        // 0x309660: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30965Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309664u;
    // 0x309664: 0x0  nop
    ctx->pc = 0x309664u;
    // NOP
    ctx->pc = 0x309668u;
}
