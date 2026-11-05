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

// Function: sub_003EC3F8
// Address: 0x3ec3f8 - 0x3ec418
void sub_003EC3F8_0x3ec3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC3F8_0x3ec3f8");
#endif

    switch (ctx->pc) {
        case 0x3ec408u: goto label_3ec408;
        default: break;
    }

    ctx->pc = 0x3ec3f8u;

    // 0x3ec3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec400: 0xc0faaa0  jal         func_3EAA80
    ctx->pc = 0x3EC400u;
    SET_GPR_U32(ctx, 31, 0x3EC408u);
    ctx->pc = 0x3EAA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAA80u, 0x3EC400u, 0x3EC408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC408u;
label_3ec408:
    // 0x3ec408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec40c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC40Cu;
        // 0x3ec410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC414u;
    // 0x3ec414: 0x0  nop
    ctx->pc = 0x3ec414u;
    // NOP
    ctx->pc = 0x3ec418u;
}
