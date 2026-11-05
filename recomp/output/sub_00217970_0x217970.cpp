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

// Function: sub_00217970
// Address: 0x217970 - 0x217988
void sub_00217970_0x217970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217970_0x217970");
#endif

    ctx->pc = 0x217970u;

    // 0x217970: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x217970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x217974: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x217974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217978: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x217978u;
    {
        const bool branch_taken_0x217978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217978) {
            ctx->pc = 0x21797Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217978u;
            // 0x21797c: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217980u;
            goto label_217980;
        }
    }
    ctx->pc = 0x217980u;
label_217980:
    // 0x217980: 0x3e00008  jr          $ra
    ctx->pc = 0x217980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217980u;
        // 0x217984: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217988u;
}
