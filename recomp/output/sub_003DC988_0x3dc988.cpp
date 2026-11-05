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

// Function: sub_003DC988
// Address: 0x3dc988 - 0x3dc9a8
void sub_003DC988_0x3dc988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC988_0x3dc988");
#endif

    switch (ctx->pc) {
        case 0x3dc998u: goto label_3dc998;
        default: break;
    }

    ctx->pc = 0x3dc988u;

    // 0x3dc988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc98c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dc98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dc990: 0xc063616  jal         func_18D858
    ctx->pc = 0x3DC990u;
    SET_GPR_U32(ctx, 31, 0x3DC998u);
    ctx->pc = 0x18D858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D858u, 0x3DC990u, 0x3DC998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC998u;
label_3dc998:
    // 0x3dc998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dc998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc99c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC99Cu;
        // 0x3dc9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC9A4u;
    // 0x3dc9a4: 0x0  nop
    ctx->pc = 0x3dc9a4u;
    // NOP
    ctx->pc = 0x3dc9a8u;
}
