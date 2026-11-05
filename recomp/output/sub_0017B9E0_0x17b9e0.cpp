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

// Function: sub_0017B9E0
// Address: 0x17b9e0 - 0x17ba00
void sub_0017B9E0_0x17b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B9E0_0x17b9e0");
#endif

    switch (ctx->pc) {
        case 0x17b9f4u: goto label_17b9f4;
        default: break;
    }

    ctx->pc = 0x17b9e0u;

    // 0x17b9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b9e4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17b9e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b9ec: 0xc041e3c  jal         func_1078F0
    ctx->pc = 0x17B9ECu;
    SET_GPR_U32(ctx, 31, 0x17B9F4u);
    ctx->pc = 0x17B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B9ECu;
    // 0x17b9f0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1078F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1078F0u, 0x17B9ECu, 0x17B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B9F4u;
label_17b9f4:
    // 0x17b9f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9F8u;
        // 0x17b9fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BA00u;
}
