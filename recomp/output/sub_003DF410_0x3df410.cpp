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

// Function: sub_003DF410
// Address: 0x3df410 - 0x3df428
void sub_003DF410_0x3df410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF410_0x3df410");
#endif

    ctx->pc = 0x3df410u;

    // 0x3df410: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3df410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3df414: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3df414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df418: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x3df418u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3df41c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF41Cu;
        // 0x3df420: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF424u;
    // 0x3df424: 0x0  nop
    ctx->pc = 0x3df424u;
    // NOP
    ctx->pc = 0x3df428u;
}
