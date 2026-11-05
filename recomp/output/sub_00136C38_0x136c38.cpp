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

// Function: sub_00136C38
// Address: 0x136c38 - 0x136c58
void sub_00136C38_0x136c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136C38_0x136c38");
#endif

    ctx->pc = 0x136c38u;

    // 0x136c38: 0x908204b0  lbu         $v0, 0x4B0($a0)
    ctx->pc = 0x136c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1200)));
    // 0x136c3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136c40: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x136c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x136c44: 0xac450470  sw          $a1, 0x470($v0)
    ctx->pc = 0x136c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1136), GPR_U32(ctx, 5));
    // 0x136c48: 0x908304b0  lbu         $v1, 0x4B0($a0)
    ctx->pc = 0x136c48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1200)));
    // 0x136c4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x136c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x136c50: 0x3e00008  jr          $ra
    ctx->pc = 0x136C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C50u;
        // 0x136c54: 0xa08304b0  sb          $v1, 0x4B0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1200), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136C58u;
}
