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

// Function: sub_0020B9C4
// Address: 0x20b9c4 - 0x20b9d8
void sub_0020B9C4_0x20b9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B9C4_0x20b9c4");
#endif

    ctx->pc = 0x20b9c4u;

    // 0x20b9c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b9c8: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x20b9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x20B9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9CCu;
        // 0x20b9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B9D4u;
    // 0x20b9d4: 0x0  nop
    ctx->pc = 0x20b9d4u;
    // NOP
    ctx->pc = 0x20b9d8u;
}
