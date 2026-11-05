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

// Function: sub_0030D498
// Address: 0x30d498 - 0x30d4b8
void sub_0030D498_0x30d498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D498_0x30d498");
#endif

    ctx->pc = 0x30d498u;

    // 0x30d498: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x30d498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d49c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x30d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x30d4a0: 0x24423258  addiu       $v0, $v0, 0x3258
    ctx->pc = 0x30d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12888));
    // 0x30d4a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d4a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x30D4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4ACu;
        // 0x30d4b0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D4B4u;
    // 0x30d4b4: 0x0  nop
    ctx->pc = 0x30d4b4u;
    // NOP
    ctx->pc = 0x30d4b8u;
}
