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

// Function: sub_00281428
// Address: 0x281428 - 0x281448
void sub_00281428_0x281428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281428_0x281428");
#endif

    switch (ctx->pc) {
        case 0x28143cu: goto label_28143c;
        default: break;
    }

    ctx->pc = 0x281428u;

    // 0x281428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28142c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28142cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x281430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281434: 0xc075ce0  jal         func_1D7380
    ctx->pc = 0x281434u;
    SET_GPR_U32(ctx, 31, 0x28143Cu);
    ctx->pc = 0x281438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281434u;
    // 0x281438: 0xac442bb8  sw          $a0, 0x2BB8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 11192), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7380u, 0x281434u, 0x28143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28143Cu;
label_28143c:
    // 0x28143c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28143cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281440: 0x3e00008  jr          $ra
    ctx->pc = 0x281440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281440u;
        // 0x281444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281448u;
}
