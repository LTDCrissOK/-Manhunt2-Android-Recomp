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

// Function: sub_00308E98
// Address: 0x308e98 - 0x308eb0
void sub_00308E98_0x308e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308E98_0x308e98");
#endif

    ctx->pc = 0x308e98u;

    // 0x308e98: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x308e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x308e9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x308E9Cu;
    {
        const bool branch_taken_0x308e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308e9c) {
            ctx->pc = 0x308EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308E9Cu;
            // 0x308ea0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308EA4u;
            goto label_308ea4;
        }
    }
    ctx->pc = 0x308EA4u;
label_308ea4:
    // 0x308ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x308EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EA4u;
        // 0x308ea8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308EACu;
    // 0x308eac: 0x0  nop
    ctx->pc = 0x308eacu;
    // NOP
    ctx->pc = 0x308eb0u;
}
