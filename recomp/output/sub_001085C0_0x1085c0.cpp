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

// Function: sub_001085C0
// Address: 0x1085c0 - 0x1085e0
void sub_001085C0_0x1085c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001085C0_0x1085c0");
#endif

    switch (ctx->pc) {
        case 0x1085d0u: goto label_1085d0;
        default: break;
    }

    ctx->pc = 0x1085c0u;

    // 0x1085c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1085c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1085c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1085c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1085c8: 0xc042270  jal         func_1089C0
    ctx->pc = 0x1085C8u;
    SET_GPR_U32(ctx, 31, 0x1085D0u);
    ctx->pc = 0x1089C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1089C0u, 0x1085C8u, 0x1085D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085D0u;
label_1085d0:
    // 0x1085d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1085d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1085d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1085D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1085D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085D4u;
        // 0x1085d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1085D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1085DCu;
    // 0x1085dc: 0x0  nop
    ctx->pc = 0x1085dcu;
    // NOP
    ctx->pc = 0x1085e0u;
}
