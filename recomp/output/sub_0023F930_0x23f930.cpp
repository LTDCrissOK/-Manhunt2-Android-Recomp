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

// Function: sub_0023F930
// Address: 0x23f930 - 0x23f948
void sub_0023F930_0x23f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F930_0x23f930");
#endif

    ctx->pc = 0x23f930u;

    // 0x23f930: 0x8c820fb4  lw          $v0, 0xFB4($a0)
    ctx->pc = 0x23f930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4020)));
    // 0x23f934: 0xac800fb4  sw          $zero, 0xFB4($a0)
    ctx->pc = 0x23f934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4020), GPR_U32(ctx, 0));
    // 0x23f938: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23f938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x23f93c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F93Cu;
        // 0x23f940: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F944u;
    // 0x23f944: 0x0  nop
    ctx->pc = 0x23f944u;
    // NOP
    ctx->pc = 0x23f948u;
}
