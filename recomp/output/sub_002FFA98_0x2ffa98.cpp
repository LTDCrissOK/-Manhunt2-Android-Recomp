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

// Function: sub_002FFA98
// Address: 0x2ffa98 - 0x2ffab8
void sub_002FFA98_0x2ffa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFA98_0x2ffa98");
#endif

    switch (ctx->pc) {
        case 0x2ffaacu: goto label_2ffaac;
        default: break;
    }

    ctx->pc = 0x2ffa98u;

    // 0x2ffa98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ffa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ffa9c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2ffa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2ffaa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ffaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ffaa4: 0xc0b8c8c  jal         func_2E3230
    ctx->pc = 0x2FFAA4u;
    SET_GPR_U32(ctx, 31, 0x2FFAACu);
    ctx->pc = 0x2FFAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFAA4u;
    // 0x2ffaa8: 0x24845870  addiu       $a0, $a0, 0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3230u, 0x2FFAA4u, 0x2FFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAACu;
label_2ffaac:
    // 0x2ffaac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAB0u;
        // 0x2ffab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFAB8u;
}
