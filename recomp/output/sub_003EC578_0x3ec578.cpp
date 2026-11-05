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

// Function: sub_003EC578
// Address: 0x3ec578 - 0x3ec598
void sub_003EC578_0x3ec578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC578_0x3ec578");
#endif

    switch (ctx->pc) {
        case 0x3ec588u: goto label_3ec588;
        default: break;
    }

    ctx->pc = 0x3ec578u;

    // 0x3ec578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec57c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec580: 0xc0fae90  jal         func_3EBA40
    ctx->pc = 0x3EC580u;
    SET_GPR_U32(ctx, 31, 0x3EC588u);
    ctx->pc = 0x3EBA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBA40u, 0x3EC580u, 0x3EC588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC588u;
label_3ec588:
    // 0x3ec588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec58c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC58Cu;
        // 0x3ec590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC594u;
    // 0x3ec594: 0x0  nop
    ctx->pc = 0x3ec594u;
    // NOP
    ctx->pc = 0x3ec598u;
}
