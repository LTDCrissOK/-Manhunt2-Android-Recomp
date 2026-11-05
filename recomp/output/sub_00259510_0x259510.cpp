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

// Function: sub_00259510
// Address: 0x259510 - 0x259530
void sub_00259510_0x259510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259510_0x259510");
#endif

    switch (ctx->pc) {
        case 0x259520u: goto label_259520;
        default: break;
    }

    ctx->pc = 0x259510u;

    // 0x259510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x259514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259518: 0xc0960f0  jal         func_2583C0
    ctx->pc = 0x259518u;
    SET_GPR_U32(ctx, 31, 0x259520u);
    ctx->pc = 0x2583C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2583C0u, 0x259518u, 0x259520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259520u;
label_259520:
    // 0x259520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259524: 0x3e00008  jr          $ra
    ctx->pc = 0x259524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259524u;
        // 0x259528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25952Cu;
    // 0x25952c: 0x0  nop
    ctx->pc = 0x25952cu;
    // NOP
    ctx->pc = 0x259530u;
}
