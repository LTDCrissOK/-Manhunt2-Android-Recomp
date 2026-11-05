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

// Function: sub_0020E508
// Address: 0x20e508 - 0x20e528
void sub_0020E508_0x20e508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E508_0x20e508");
#endif

    switch (ctx->pc) {
        case 0x20e518u: goto label_20e518;
        default: break;
    }

    ctx->pc = 0x20e508u;

    // 0x20e508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e50c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e510: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x20E510u;
    SET_GPR_U32(ctx, 31, 0x20E518u);
    ctx->pc = 0x20E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E510u;
    // 0x20e514: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x20E510u, 0x20E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E518u;
label_20e518:
    // 0x20e518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e51c: 0x3e00008  jr          $ra
    ctx->pc = 0x20E51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E51Cu;
        // 0x20e520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E524u;
    // 0x20e524: 0x0  nop
    ctx->pc = 0x20e524u;
    // NOP
    ctx->pc = 0x20e528u;
}
