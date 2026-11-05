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

// Function: sub_0017F1B0
// Address: 0x17f1b0 - 0x17f1d8
void sub_0017F1B0_0x17f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F1B0_0x17f1b0");
#endif

    switch (ctx->pc) {
        case 0x17f1ccu: goto label_17f1cc;
        default: break;
    }

    ctx->pc = 0x17f1b0u;

    // 0x17f1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f1b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f1b8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x17f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f1bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F1BCu;
    {
        const bool branch_taken_0x17f1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1BCu;
        // 0x17f1c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1bc) {
            ctx->pc = 0x17F1D0u;
            goto label_17f1d0;
        }
    }
    ctx->pc = 0x17F1C4u;
    // 0x17f1c4: 0xc05f000  jal         func_17C000
    ctx->pc = 0x17F1C4u;
    SET_GPR_U32(ctx, 31, 0x17F1CCu);
    ctx->pc = 0x17C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C000u, 0x17F1C4u, 0x17F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1CCu;
label_17f1cc:
    // 0x17f1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f1d0:
    // 0x17f1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17F1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1D0u;
        // 0x17f1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F1D8u;
}
