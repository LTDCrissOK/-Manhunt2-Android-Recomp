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

// Function: sub_00110E78
// Address: 0x110e78 - 0x110ea0
void sub_00110E78_0x110e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110E78_0x110e78");
#endif

    switch (ctx->pc) {
        case 0x110e94u: goto label_110e94;
        default: break;
    }

    ctx->pc = 0x110e78u;

    // 0x110e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110e80: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x110e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110e84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110E84u;
    {
        const bool branch_taken_0x110e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E84u;
        // 0x110e88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e84) {
            ctx->pc = 0x110E98u;
            goto label_110e98;
        }
    }
    ctx->pc = 0x110E8Cu;
    // 0x110e8c: 0xc05aa04  jal         func_16A810
    ctx->pc = 0x110E8Cu;
    SET_GPR_U32(ctx, 31, 0x110E94u);
    ctx->pc = 0x16A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A810u, 0x110E8Cu, 0x110E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E94u;
label_110e94:
    // 0x110e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110e98:
    // 0x110e98: 0x3e00008  jr          $ra
    ctx->pc = 0x110E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E98u;
        // 0x110e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110EA0u;
}
