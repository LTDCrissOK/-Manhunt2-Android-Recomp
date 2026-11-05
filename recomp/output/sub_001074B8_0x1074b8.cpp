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

// Function: sub_001074B8
// Address: 0x1074b8 - 0x1074d8
void sub_001074B8_0x1074b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001074B8_0x1074b8");
#endif

    switch (ctx->pc) {
        case 0x1074c8u: goto label_1074c8;
        default: break;
    }

    ctx->pc = 0x1074b8u;

    // 0x1074b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1074b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1074bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1074bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1074c0: 0xc0f6b6a  jal         func_3DADA8
    ctx->pc = 0x1074C0u;
    SET_GPR_U32(ctx, 31, 0x1074C8u);
    ctx->pc = 0x3DADA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DADA8u, 0x1074C0u, 0x1074C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074C8u;
label_1074c8:
    // 0x1074c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1074c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1074cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1074CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1074D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074CCu;
        // 0x1074d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1074CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1074D4u;
    // 0x1074d4: 0x0  nop
    ctx->pc = 0x1074d4u;
    // NOP
    ctx->pc = 0x1074d8u;
}
