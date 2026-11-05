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

// Function: sub_002C4680
// Address: 0x2c4680 - 0x2c46a8
void sub_002C4680_0x2c4680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4680_0x2c4680");
#endif

    switch (ctx->pc) {
        case 0x2c4690u: goto label_2c4690;
        default: break;
    }

    ctx->pc = 0x2c4680u;

    // 0x2c4680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4688: 0xc0b11ec  jal         func_2C47B0
    ctx->pc = 0x2C4688u;
    SET_GPR_U32(ctx, 31, 0x2C4690u);
    ctx->pc = 0x2C47B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C47B0u, 0x2C4688u, 0x2C4690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4690u;
label_2c4690:
    // 0x2c4690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4694: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4694u;
        // 0x2c4698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C469Cu;
    // 0x2c469c: 0x0  nop
    ctx->pc = 0x2c469cu;
    // NOP
    // 0x2c46a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c46a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c46a4: 0x0  nop
    ctx->pc = 0x2c46a4u;
    // NOP
    ctx->pc = 0x2c46a8u;
}
