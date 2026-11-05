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

// Function: sub_0030D478
// Address: 0x30d478 - 0x30d498
void sub_0030D478_0x30d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D478_0x30d478");
#endif

    ctx->pc = 0x30d478u;

    // 0x30d478: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x30d478u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d47c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x30d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x30d480: 0x24423140  addiu       $v0, $v0, 0x3140
    ctx->pc = 0x30d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12608));
    // 0x30d484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d488: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d48c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D48Cu;
        // 0x30d490: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D494u;
    // 0x30d494: 0x0  nop
    ctx->pc = 0x30d494u;
    // NOP
    ctx->pc = 0x30d498u;
}
