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

// Function: sub_002B9A18
// Address: 0x2b9a18 - 0x2b9a38
void sub_002B9A18_0x2b9a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9A18_0x2b9a18");
#endif

    switch (ctx->pc) {
        case 0x2b9a28u: goto label_2b9a28;
        default: break;
    }

    ctx->pc = 0x2b9a18u;

    // 0x2b9a18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9a1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b9a20: 0xc0ae8e2  jal         func_2BA388
    ctx->pc = 0x2B9A20u;
    SET_GPR_U32(ctx, 31, 0x2B9A28u);
    ctx->pc = 0x2B9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A20u;
    // 0x2b9a24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA388u, 0x2B9A20u, 0x2B9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A28u;
label_2b9a28:
    // 0x2b9a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A2Cu;
        // 0x2b9a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9A34u;
    // 0x2b9a34: 0x0  nop
    ctx->pc = 0x2b9a34u;
    // NOP
    ctx->pc = 0x2b9a38u;
}
