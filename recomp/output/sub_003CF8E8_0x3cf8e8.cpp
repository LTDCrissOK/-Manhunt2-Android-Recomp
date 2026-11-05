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

// Function: sub_003CF8E8
// Address: 0x3cf8e8 - 0x3cf918
void sub_003CF8E8_0x3cf8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF8E8_0x3cf8e8");
#endif

    switch (ctx->pc) {
        case 0x3cf8f8u: goto label_3cf8f8;
        default: break;
    }

    ctx->pc = 0x3cf8e8u;

    // 0x3cf8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3cf8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3cf8ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cf8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3cf8f0: 0xc0f3e1c  jal         func_3CF870
    ctx->pc = 0x3CF8F0u;
    SET_GPR_U32(ctx, 31, 0x3CF8F8u);
    ctx->pc = 0x3CF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF870u, 0x3CF8F0u, 0x3CF8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF8F8u;
label_3cf8f8:
    // 0x3cf8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cf8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cf8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF8FCu;
        // 0x3cf900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF904u;
    // 0x3cf904: 0x0  nop
    ctx->pc = 0x3cf904u;
    // NOP
    // 0x3cf908: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3cf908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cf90c: 0x0  nop
    ctx->pc = 0x3cf90cu;
    // NOP
    // 0x3cf910: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3cf910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cf914: 0x0  nop
    ctx->pc = 0x3cf914u;
    // NOP
    ctx->pc = 0x3cf918u;
}
