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

// Function: sub_001E7680
// Address: 0x1e7680 - 0x1e76a0
void sub_001E7680_0x1e7680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7680_0x1e7680");
#endif

    switch (ctx->pc) {
        case 0x1e7694u: goto label_1e7694;
        default: break;
    }

    ctx->pc = 0x1e7680u;

    // 0x1e7680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7684: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e7684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e768c: 0xc079d8e  jal         func_1E7638
    ctx->pc = 0x1E768Cu;
    SET_GPR_U32(ctx, 31, 0x1E7694u);
    ctx->pc = 0x1E7690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E768Cu;
    // 0x1e7690: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7638u, 0x1E768Cu, 0x1E7694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7694u;
label_1e7694:
    // 0x1e7694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7698: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7698u;
        // 0x1e769c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E76A0u;
}
