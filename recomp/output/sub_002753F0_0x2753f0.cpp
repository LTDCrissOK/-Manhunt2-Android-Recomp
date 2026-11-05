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

// Function: sub_002753F0
// Address: 0x2753f0 - 0x275418
void sub_002753F0_0x2753f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002753F0_0x2753f0");
#endif

    switch (ctx->pc) {
        case 0x275404u: goto label_275404;
        default: break;
    }

    ctx->pc = 0x2753f0u;

    // 0x2753f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2753f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2753f4: 0x24840230  addiu       $a0, $a0, 0x230
    ctx->pc = 0x2753f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
    // 0x2753f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2753f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2753fc: 0xc09cb60  jal         func_272D80
    ctx->pc = 0x2753FCu;
    SET_GPR_U32(ctx, 31, 0x275404u);
    ctx->pc = 0x275400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2753FCu;
    // 0x275400: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272D80u, 0x2753FCu, 0x275404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275404u;
label_275404:
    // 0x275404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275408: 0x3e00008  jr          $ra
    ctx->pc = 0x275408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275408u;
        // 0x27540c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275410u;
    // 0x275410: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x275410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x275414: 0x0  nop
    ctx->pc = 0x275414u;
    // NOP
    ctx->pc = 0x275418u;
}
