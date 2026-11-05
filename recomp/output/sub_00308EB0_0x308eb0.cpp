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

// Function: sub_00308EB0
// Address: 0x308eb0 - 0x308ed0
void sub_00308EB0_0x308eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308EB0_0x308eb0");
#endif

    ctx->pc = 0x308eb0u;

    // 0x308eb0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x308EB0u;
    {
        const bool branch_taken_0x308eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x308eb0) {
            ctx->pc = 0x308EC4u;
            goto label_308ec4;
        }
    }
    ctx->pc = 0x308EB8u;
    // 0x308eb8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x308eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x308ebc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x308EBCu;
    {
        const bool branch_taken_0x308ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308ebc) {
            ctx->pc = 0x308EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308EBCu;
            // 0x308ec0: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308EC4u;
            goto label_308ec4;
        }
    }
    ctx->pc = 0x308EC4u;
label_308ec4:
    // 0x308ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x308EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EC4u;
        // 0x308ec8: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308ECCu;
    // 0x308ecc: 0x0  nop
    ctx->pc = 0x308eccu;
    // NOP
    ctx->pc = 0x308ed0u;
}
