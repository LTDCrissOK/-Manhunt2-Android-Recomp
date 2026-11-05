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

// Function: sub_001B2EE8
// Address: 0x1b2ee8 - 0x1b2f00
void sub_001B2EE8_0x1b2ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2EE8_0x1b2ee8");
#endif

    ctx->pc = 0x1b2ee8u;

    // 0x1b2ee8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b2eec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b2eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ef0: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x1b2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x1b2ef4: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x1b2ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2EF8u;
        // 0x1b2efc: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2F00u;
}
