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

// Function: sub_00326940
// Address: 0x326940 - 0x326960
void sub_00326940_0x326940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326940_0x326940");
#endif

    ctx->pc = 0x326940u;

    // 0x326940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326944: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x326944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x326948: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x326948u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x32694c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x32694cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x326950: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x326950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x326954: 0x3e00008  jr          $ra
    ctx->pc = 0x326954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326954u;
        // 0x326958: 0xa0800010  sb          $zero, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32695Cu;
    // 0x32695c: 0x0  nop
    ctx->pc = 0x32695cu;
    // NOP
    ctx->pc = 0x326960u;
}
