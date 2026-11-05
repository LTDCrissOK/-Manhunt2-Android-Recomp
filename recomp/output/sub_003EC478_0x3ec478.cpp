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

// Function: sub_003EC478
// Address: 0x3ec478 - 0x3ec498
void sub_003EC478_0x3ec478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC478_0x3ec478");
#endif

    switch (ctx->pc) {
        case 0x3ec488u: goto label_3ec488;
        default: break;
    }

    ctx->pc = 0x3ec478u;

    // 0x3ec478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec47c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec480: 0xc0fabf0  jal         func_3EAFC0
    ctx->pc = 0x3EC480u;
    SET_GPR_U32(ctx, 31, 0x3EC488u);
    ctx->pc = 0x3EAFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAFC0u, 0x3EC480u, 0x3EC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC488u;
label_3ec488:
    // 0x3ec488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec48c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC48Cu;
        // 0x3ec490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC494u;
    // 0x3ec494: 0x0  nop
    ctx->pc = 0x3ec494u;
    // NOP
    ctx->pc = 0x3ec498u;
}
