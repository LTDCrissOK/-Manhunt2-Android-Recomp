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

// Function: sub_001559B0
// Address: 0x1559b0 - 0x1559c8
void sub_001559B0_0x1559b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001559B0_0x1559b0");
#endif

    ctx->pc = 0x1559b0u;

    // 0x1559b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1559B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1559B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559B0u;
        // 0x1559b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1559B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1559B8u;
    // 0x1559b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1559b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1559bc: 0x0  nop
    ctx->pc = 0x1559bcu;
    // NOP
    // 0x1559c0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1559c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1559c4: 0x0  nop
    ctx->pc = 0x1559c4u;
    // NOP
    ctx->pc = 0x1559c8u;
}
