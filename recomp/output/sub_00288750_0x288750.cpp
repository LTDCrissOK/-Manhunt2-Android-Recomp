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

// Function: sub_00288750
// Address: 0x288750 - 0x288768
void sub_00288750_0x288750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288750_0x288750");
#endif

    ctx->pc = 0x288750u;

    // 0x288750: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x288750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x288754: 0x3e00008  jr          $ra
    ctx->pc = 0x288754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288754u;
        // 0x288758: 0x8c6225ac  lw          $v0, 0x25AC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9644)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28875Cu;
    // 0x28875c: 0x0  nop
    ctx->pc = 0x28875cu;
    // NOP
    // 0x288760: 0xac4400a4  sw          $a0, 0xA4($v0)
    ctx->pc = 0x288760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 4));
    // 0x288764: 0x0  nop
    ctx->pc = 0x288764u;
    // NOP
    ctx->pc = 0x288768u;
}
