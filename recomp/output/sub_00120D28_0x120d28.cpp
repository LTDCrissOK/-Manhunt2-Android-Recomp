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

// Function: sub_00120D28
// Address: 0x120d28 - 0x120d40
void sub_00120D28_0x120d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120D28_0x120d28");
#endif

    ctx->pc = 0x120d28u;

    // 0x120d28: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x120D28u;
    {
        const bool branch_taken_0x120d28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D28u;
        // 0x120d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d28) {
            ctx->pc = 0x120D34u;
            goto label_120d34;
        }
    }
    ctx->pc = 0x120D30u;
    // 0x120d30: 0x8ca201d0  lw          $v0, 0x1D0($a1)
    ctx->pc = 0x120d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 464)));
label_120d34:
    // 0x120d34: 0x3e00008  jr          $ra
    ctx->pc = 0x120D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120D3Cu;
    // 0x120d3c: 0x0  nop
    ctx->pc = 0x120d3cu;
    // NOP
    ctx->pc = 0x120d40u;
}
