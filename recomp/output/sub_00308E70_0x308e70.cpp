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

// Function: sub_00308E70
// Address: 0x308e70 - 0x308e98
void sub_00308E70_0x308e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308E70_0x308e70");
#endif

    ctx->pc = 0x308e70u;

    // 0x308e70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x308e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x308e74: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x308e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x308e78: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x308e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x308e7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x308e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e80: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x308e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x308e84: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x308e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x308e88: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x308e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x308e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x308E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E8Cu;
        // 0x308e90: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308E94u;
    // 0x308e94: 0x0  nop
    ctx->pc = 0x308e94u;
    // NOP
    ctx->pc = 0x308e98u;
}
