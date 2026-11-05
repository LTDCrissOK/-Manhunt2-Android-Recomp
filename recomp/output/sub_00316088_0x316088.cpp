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

// Function: sub_00316088
// Address: 0x316088 - 0x3160a8
void sub_00316088_0x316088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316088_0x316088");
#endif

    switch (ctx->pc) {
        case 0x316098u: goto label_316098;
        default: break;
    }

    ctx->pc = 0x316088u;

    // 0x316088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31608c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x316090: 0xc0abc0c  jal         func_2AF030
    ctx->pc = 0x316090u;
    SET_GPR_U32(ctx, 31, 0x316098u);
    ctx->pc = 0x2AF030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF030u, 0x316090u, 0x316098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316098u;
label_316098:
    // 0x316098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31609c: 0x3e00008  jr          $ra
    ctx->pc = 0x31609Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3160A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31609Cu;
        // 0x3160a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31609Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3160A4u;
    // 0x3160a4: 0x0  nop
    ctx->pc = 0x3160a4u;
    // NOP
    ctx->pc = 0x3160a8u;
}
