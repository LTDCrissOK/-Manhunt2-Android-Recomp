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

// Function: sub_001109B8
// Address: 0x1109b8 - 0x1109e0
void sub_001109B8_0x1109b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001109B8_0x1109b8");
#endif

    switch (ctx->pc) {
        case 0x1109d4u: goto label_1109d4;
        default: break;
    }

    ctx->pc = 0x1109b8u;

    // 0x1109b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1109b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1109bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1109bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1109c0: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1109c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1109c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1109C4u;
    {
        const bool branch_taken_0x1109c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1109C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109C4u;
        // 0x1109c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1109c4) {
            ctx->pc = 0x1109D8u;
            goto label_1109d8;
        }
    }
    ctx->pc = 0x1109CCu;
    // 0x1109cc: 0xc05fc88  jal         func_17F220
    ctx->pc = 0x1109CCu;
    SET_GPR_U32(ctx, 31, 0x1109D4u);
    ctx->pc = 0x17F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F220u, 0x1109CCu, 0x1109D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109D4u;
label_1109d4:
    // 0x1109d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1109d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1109d8:
    // 0x1109d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1109D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1109DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109D8u;
        // 0x1109dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1109D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1109E0u;
}
