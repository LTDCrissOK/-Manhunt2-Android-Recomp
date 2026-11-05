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

// Function: sub_00264CF0
// Address: 0x264cf0 - 0x264d10
void sub_00264CF0_0x264cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264CF0_0x264cf0");
#endif

    switch (ctx->pc) {
        case 0x264d00u: goto label_264d00;
        default: break;
    }

    ctx->pc = 0x264cf0u;

    // 0x264cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264cf8: 0xc0837d8  jal         func_20DF60
    ctx->pc = 0x264CF8u;
    SET_GPR_U32(ctx, 31, 0x264D00u);
    ctx->pc = 0x20DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF60u, 0x264CF8u, 0x264D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D00u;
label_264d00:
    // 0x264d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264d04: 0x3e00008  jr          $ra
    ctx->pc = 0x264D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D04u;
        // 0x264d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264D0Cu;
    // 0x264d0c: 0x0  nop
    ctx->pc = 0x264d0cu;
    // NOP
    ctx->pc = 0x264d10u;
}
