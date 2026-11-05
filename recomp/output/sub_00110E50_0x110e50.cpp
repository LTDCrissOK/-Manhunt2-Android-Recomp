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

// Function: sub_00110E50
// Address: 0x110e50 - 0x110e78
void sub_00110E50_0x110e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110E50_0x110e50");
#endif

    switch (ctx->pc) {
        case 0x110e6cu: goto label_110e6c;
        default: break;
    }

    ctx->pc = 0x110e50u;

    // 0x110e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110e58: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x110e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110e5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110E5Cu;
    {
        const bool branch_taken_0x110e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E5Cu;
        // 0x110e60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e5c) {
            ctx->pc = 0x110E70u;
            goto label_110e70;
        }
    }
    ctx->pc = 0x110E64u;
    // 0x110e64: 0xc05a9e8  jal         func_16A7A0
    ctx->pc = 0x110E64u;
    SET_GPR_U32(ctx, 31, 0x110E6Cu);
    ctx->pc = 0x16A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A7A0u, 0x110E64u, 0x110E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E6Cu;
label_110e6c:
    // 0x110e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110e70:
    // 0x110e70: 0x3e00008  jr          $ra
    ctx->pc = 0x110E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E70u;
        // 0x110e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110E78u;
}
