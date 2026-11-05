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

// Function: sub_0017B9C0
// Address: 0x17b9c0 - 0x17b9e0
void sub_0017B9C0_0x17b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B9C0_0x17b9c0");
#endif

    switch (ctx->pc) {
        case 0x17b9d4u: goto label_17b9d4;
        default: break;
    }

    ctx->pc = 0x17b9c0u;

    // 0x17b9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b9c4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17b9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b9cc: 0xc041e2c  jal         func_1078B0
    ctx->pc = 0x17B9CCu;
    SET_GPR_U32(ctx, 31, 0x17B9D4u);
    ctx->pc = 0x17B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B9CCu;
    // 0x17b9d0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1078B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1078B0u, 0x17B9CCu, 0x17B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B9D4u;
label_17b9d4:
    // 0x17b9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9D8u;
        // 0x17b9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B9E0u;
}
