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

// Function: sub_00107520
// Address: 0x107520 - 0x107548
void sub_00107520_0x107520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107520_0x107520");
#endif

    switch (ctx->pc) {
        case 0x107530u: goto label_107530;
        default: break;
    }

    ctx->pc = 0x107520u;

    // 0x107520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107528: 0xc0f6b8a  jal         func_3DAE28
    ctx->pc = 0x107528u;
    SET_GPR_U32(ctx, 31, 0x107530u);
    ctx->pc = 0x3DAE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAE28u, 0x107528u, 0x107530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107530u;
label_107530:
    // 0x107530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107534: 0x3e00008  jr          $ra
    ctx->pc = 0x107534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107534u;
        // 0x107538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10753Cu;
    // 0x10753c: 0x0  nop
    ctx->pc = 0x10753cu;
    // NOP
    // 0x107540: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x107540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x107544: 0x0  nop
    ctx->pc = 0x107544u;
    // NOP
    ctx->pc = 0x107548u;
}
