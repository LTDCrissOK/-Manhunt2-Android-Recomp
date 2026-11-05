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

// Function: sub_001105D0
// Address: 0x1105d0 - 0x1105f8
void sub_001105D0_0x1105d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001105D0_0x1105d0");
#endif

    switch (ctx->pc) {
        case 0x1105ecu: goto label_1105ec;
        default: break;
    }

    ctx->pc = 0x1105d0u;

    // 0x1105d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1105d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1105d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1105d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1105d8: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x1105d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1105dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1105DCu;
    {
        const bool branch_taken_0x1105dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1105E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105DCu;
        // 0x1105e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105dc) {
            ctx->pc = 0x1105F0u;
            goto label_1105f0;
        }
    }
    ctx->pc = 0x1105E4u;
    // 0x1105e4: 0xc05de9a  jal         func_177A68
    ctx->pc = 0x1105E4u;
    SET_GPR_U32(ctx, 31, 0x1105ECu);
    ctx->pc = 0x177A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A68u, 0x1105E4u, 0x1105ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105ECu;
label_1105ec:
    // 0x1105ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1105ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1105f0:
    // 0x1105f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1105F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1105F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105F0u;
        // 0x1105f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1105F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1105F8u;
}
