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

// Function: sub_003DFCB0
// Address: 0x3dfcb0 - 0x3dfcd0
void sub_003DFCB0_0x3dfcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFCB0_0x3dfcb0");
#endif

    ctx->pc = 0x3dfcb0u;

    // 0x3dfcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFCB0u;
        // 0x3dfcb4: 0x8c820228  lw          $v0, 0x228($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFCB8u;
    // 0x3dfcb8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3dfcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3dfcbc: 0x0  nop
    ctx->pc = 0x3dfcbcu;
    // NOP
    // 0x3dfcc0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3dfcc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3dfcc4: 0x0  nop
    ctx->pc = 0x3dfcc4u;
    // NOP
    // 0x3dfcc8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dfcc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dfccc: 0x0  nop
    ctx->pc = 0x3dfcccu;
    // NOP
    ctx->pc = 0x3dfcd0u;
}
