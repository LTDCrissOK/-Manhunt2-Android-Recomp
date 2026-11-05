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

// Function: sub_001AD230
// Address: 0x1ad230 - 0x1ad250
void sub_001AD230_0x1ad230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD230_0x1ad230");
#endif

    ctx->pc = 0x1ad230u;

    // 0x1ad230: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1ad230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ad234: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1ad234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1ad238: 0x24634008  addiu       $v1, $v1, 0x4008
    ctx->pc = 0x1ad238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16392));
    // 0x1ad23c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad244: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ad244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad248: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD248u;
        // 0x1ad24c: 0xac850154  sw          $a1, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD250u;
}
