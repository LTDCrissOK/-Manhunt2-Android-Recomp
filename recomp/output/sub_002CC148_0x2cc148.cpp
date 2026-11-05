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

// Function: sub_002CC148
// Address: 0x2cc148 - 0x2cc178
void sub_002CC148_0x2cc148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC148_0x2cc148");
#endif

    switch (ctx->pc) {
        case 0x2cc158u: goto label_2cc158;
        case 0x2cc160u: goto label_2cc160;
        case 0x2cc16cu: goto label_2cc16c;
        default: break;
    }

    ctx->pc = 0x2cc148u;

    // 0x2cc148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc14c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc150: 0xc0b2ffe  jal         func_2CBFF8
    ctx->pc = 0x2CC150u;
    SET_GPR_U32(ctx, 31, 0x2CC158u);
    ctx->pc = 0x2CBFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBFF8u, 0x2CC150u, 0x2CC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC158u;
label_2cc158:
    // 0x2cc158: 0xc0b2fdc  jal         func_2CBF70
    ctx->pc = 0x2CC158u;
    SET_GPR_U32(ctx, 31, 0x2CC160u);
    ctx->pc = 0x2CBF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBF70u, 0x2CC158u, 0x2CC160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC160u;
label_2cc160:
    // 0x2cc160: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2cc160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2cc164: 0xc0e3c9a  jal         func_38F268
    ctx->pc = 0x2CC164u;
    SET_GPR_U32(ctx, 31, 0x2CC16Cu);
    ctx->pc = 0x2CC168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC164u;
    // 0x2cc168: 0x2484a608  addiu       $a0, $a0, -0x59F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F268u, 0x2CC164u, 0x2CC16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC16Cu;
label_2cc16c:
    // 0x2cc16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc170: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC170u;
        // 0x2cc174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC178u;
}
