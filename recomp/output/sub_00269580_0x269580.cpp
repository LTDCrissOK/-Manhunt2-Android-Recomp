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

// Function: sub_00269580
// Address: 0x269580 - 0x2695a0
void sub_00269580_0x269580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269580_0x269580");
#endif

    switch (ctx->pc) {
        case 0x269590u: goto label_269590;
        default: break;
    }

    ctx->pc = 0x269580u;

    // 0x269580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x269580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x269584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x269588: 0xc083854  jal         func_20E150
    ctx->pc = 0x269588u;
    SET_GPR_U32(ctx, 31, 0x269590u);
    ctx->pc = 0x20E150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E150u, 0x269588u, 0x269590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269590u;
label_269590:
    // 0x269590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269594: 0x3e00008  jr          $ra
    ctx->pc = 0x269594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269594u;
        // 0x269598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26959Cu;
    // 0x26959c: 0x0  nop
    ctx->pc = 0x26959cu;
    // NOP
    ctx->pc = 0x2695a0u;
}
