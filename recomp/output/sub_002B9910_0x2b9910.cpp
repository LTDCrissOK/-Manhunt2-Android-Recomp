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

// Function: sub_002B9910
// Address: 0x2b9910 - 0x2b9930
void sub_002B9910_0x2b9910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9910_0x2b9910");
#endif

    switch (ctx->pc) {
        case 0x2b9924u: goto label_2b9924;
        default: break;
    }

    ctx->pc = 0x2b9910u;

    // 0x2b9910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9914: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b991c: 0xc0ae638  jal         func_2B98E0
    ctx->pc = 0x2B991Cu;
    SET_GPR_U32(ctx, 31, 0x2B9924u);
    ctx->pc = 0x2B9920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B991Cu;
    // 0x2b9920: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B98E0u, 0x2B991Cu, 0x2B9924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9924u;
label_2b9924:
    // 0x2b9924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9928: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9928u;
        // 0x2b992c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9930u;
}
