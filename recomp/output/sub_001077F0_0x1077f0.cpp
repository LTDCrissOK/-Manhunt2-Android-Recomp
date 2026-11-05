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

// Function: sub_001077F0
// Address: 0x1077f0 - 0x107810
void sub_001077F0_0x1077f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001077F0_0x1077f0");
#endif

    switch (ctx->pc) {
        case 0x107800u: goto label_107800;
        default: break;
    }

    ctx->pc = 0x1077f0u;

    // 0x1077f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1077f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1077f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1077f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1077f8: 0xc0f6c6a  jal         func_3DB1A8
    ctx->pc = 0x1077F8u;
    SET_GPR_U32(ctx, 31, 0x107800u);
    ctx->pc = 0x3DB1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB1A8u, 0x1077F8u, 0x107800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107800u;
label_107800:
    // 0x107800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107804: 0x3e00008  jr          $ra
    ctx->pc = 0x107804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107804u;
        // 0x107808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10780Cu;
    // 0x10780c: 0x0  nop
    ctx->pc = 0x10780cu;
    // NOP
    ctx->pc = 0x107810u;
}
