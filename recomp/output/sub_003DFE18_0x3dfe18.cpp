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

// Function: sub_003DFE18
// Address: 0x3dfe18 - 0x3dfe30
void sub_003DFE18_0x3dfe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFE18_0x3dfe18");
#endif

    ctx->pc = 0x3dfe18u;

    // 0x3dfe18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3dfe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3dfe1c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3dfe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dfe20: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3dfe20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dfe24: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE24u;
        // 0x3dfe28: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFE2Cu;
    // 0x3dfe2c: 0x0  nop
    ctx->pc = 0x3dfe2cu;
    // NOP
    ctx->pc = 0x3dfe30u;
}
