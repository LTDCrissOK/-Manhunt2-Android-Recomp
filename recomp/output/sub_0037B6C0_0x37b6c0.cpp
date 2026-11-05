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

// Function: sub_0037B6C0
// Address: 0x37b6c0 - 0x37b6d0
void sub_0037B6C0_0x37b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B6C0_0x37b6c0");
#endif

    ctx->pc = 0x37b6c0u;

    // 0x37b6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x37B6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B6C0u;
        // 0x37b6c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B6C8u;
    // 0x37b6c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37b6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37b6cc: 0x0  nop
    ctx->pc = 0x37b6ccu;
    // NOP
    ctx->pc = 0x37b6d0u;
}
