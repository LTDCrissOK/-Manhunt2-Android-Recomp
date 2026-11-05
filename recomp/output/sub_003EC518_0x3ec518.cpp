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

// Function: sub_003EC518
// Address: 0x3ec518 - 0x3ec538
void sub_003EC518_0x3ec518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC518_0x3ec518");
#endif

    switch (ctx->pc) {
        case 0x3ec528u: goto label_3ec528;
        default: break;
    }

    ctx->pc = 0x3ec518u;

    // 0x3ec518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec51c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec520: 0xc0fad94  jal         func_3EB650
    ctx->pc = 0x3EC520u;
    SET_GPR_U32(ctx, 31, 0x3EC528u);
    ctx->pc = 0x3EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB650u, 0x3EC520u, 0x3EC528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC528u;
label_3ec528:
    // 0x3ec528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec52c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC52Cu;
        // 0x3ec530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC534u;
    // 0x3ec534: 0x0  nop
    ctx->pc = 0x3ec534u;
    // NOP
    ctx->pc = 0x3ec538u;
}
