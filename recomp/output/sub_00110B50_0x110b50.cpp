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

// Function: sub_00110B50
// Address: 0x110b50 - 0x110b78
void sub_00110B50_0x110b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110B50_0x110b50");
#endif

    switch (ctx->pc) {
        case 0x110b6cu: goto label_110b6c;
        default: break;
    }

    ctx->pc = 0x110b50u;

    // 0x110b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110b58: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x110b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110b5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110B5Cu;
    {
        const bool branch_taken_0x110b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B5Cu;
        // 0x110b60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b5c) {
            ctx->pc = 0x110B70u;
            goto label_110b70;
        }
    }
    ctx->pc = 0x110B64u;
    // 0x110b64: 0xc05a86a  jal         func_16A1A8
    ctx->pc = 0x110B64u;
    SET_GPR_U32(ctx, 31, 0x110B6Cu);
    ctx->pc = 0x16A1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1A8u, 0x110B64u, 0x110B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B6Cu;
label_110b6c:
    // 0x110b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110b70:
    // 0x110b70: 0x3e00008  jr          $ra
    ctx->pc = 0x110B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B70u;
        // 0x110b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110B78u;
}
