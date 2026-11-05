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

// Function: sub_001732E0
// Address: 0x1732e0 - 0x173300
void sub_001732E0_0x1732e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001732E0_0x1732e0");
#endif

    ctx->pc = 0x1732e0u;

    // 0x1732e0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1732e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1732e4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1732e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1732e8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1732e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1732ec: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1732ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1732f0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1732f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1732f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1732F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1732F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732F4u;
        // 0x1732f8: 0xac8700e0  sw          $a3, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1732F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1732FCu;
    // 0x1732fc: 0x0  nop
    ctx->pc = 0x1732fcu;
    // NOP
    ctx->pc = 0x173300u;
}
