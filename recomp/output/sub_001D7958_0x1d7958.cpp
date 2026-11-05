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

// Function: sub_001D7958
// Address: 0x1d7958 - 0x1d7978
void sub_001D7958_0x1d7958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7958_0x1d7958");
#endif

    switch (ctx->pc) {
        case 0x1d7968u: goto label_1d7968;
        default: break;
    }

    ctx->pc = 0x1d7958u;

    // 0x1d7958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d795c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d795cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7960: 0xc0c80b0  jal         func_3202C0
    ctx->pc = 0x1D7960u;
    SET_GPR_U32(ctx, 31, 0x1D7968u);
    ctx->pc = 0x3202C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3202C0u, 0x1D7960u, 0x1D7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7968u;
label_1d7968:
    // 0x1d7968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d796c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d796cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7970: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7970u;
        // 0x1d7974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7978u;
}
