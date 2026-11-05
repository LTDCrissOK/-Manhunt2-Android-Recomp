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

// Function: sub_001D8FC8
// Address: 0x1d8fc8 - 0x1d8fe8
void sub_001D8FC8_0x1d8fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8FC8_0x1d8fc8");
#endif

    ctx->pc = 0x1d8fc8u;

    // 0x1d8fc8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1d8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d8fcc: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x1d8fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x1d8fd0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d8fd4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8FD4u;
    {
        const bool branch_taken_0x1d8fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8fd4) {
            ctx->pc = 0x1D8FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8FD4u;
            // 0x1d8fd8: 0xac450040  sw          $a1, 0x40($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8FDCu;
            goto label_1d8fdc;
        }
    }
    ctx->pc = 0x1D8FDCu;
label_1d8fdc:
    // 0x1d8fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8FE4u;
    // 0x1d8fe4: 0x0  nop
    ctx->pc = 0x1d8fe4u;
    // NOP
    ctx->pc = 0x1d8fe8u;
}
