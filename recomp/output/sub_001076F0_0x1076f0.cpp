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

// Function: sub_001076F0
// Address: 0x1076f0 - 0x107710
void sub_001076F0_0x1076f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001076F0_0x1076f0");
#endif

    switch (ctx->pc) {
        case 0x107700u: goto label_107700;
        default: break;
    }

    ctx->pc = 0x1076f0u;

    // 0x1076f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1076f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1076f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1076f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1076f8: 0xc0f6c1a  jal         func_3DB068
    ctx->pc = 0x1076F8u;
    SET_GPR_U32(ctx, 31, 0x107700u);
    ctx->pc = 0x3DB068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB068u, 0x1076F8u, 0x107700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107700u;
label_107700:
    // 0x107700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107704: 0x3e00008  jr          $ra
    ctx->pc = 0x107704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107704u;
        // 0x107708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10770Cu;
    // 0x10770c: 0x0  nop
    ctx->pc = 0x10770cu;
    // NOP
    ctx->pc = 0x107710u;
}
