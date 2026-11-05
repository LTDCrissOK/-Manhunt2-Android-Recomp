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

// Function: sub_00116B58
// Address: 0x116b58 - 0x116b78
void sub_00116B58_0x116b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116B58_0x116b58");
#endif

    switch (ctx->pc) {
        case 0x116b6cu: goto label_116b6c;
        default: break;
    }

    ctx->pc = 0x116b58u;

    // 0x116b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116b5c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116B5Cu;
    {
        const bool branch_taken_0x116b5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x116B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B5Cu;
        // 0x116b60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b5c) {
            ctx->pc = 0x116B6Cu;
            goto label_116b6c;
        }
    }
    ctx->pc = 0x116B64u;
    // 0x116b64: 0xc045b92  jal         func_116E48
    ctx->pc = 0x116B64u;
    SET_GPR_U32(ctx, 31, 0x116B6Cu);
    ctx->pc = 0x116E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116E48u, 0x116B64u, 0x116B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B6Cu;
label_116b6c:
    // 0x116b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116b70: 0x3e00008  jr          $ra
    ctx->pc = 0x116B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B70u;
        // 0x116b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116B78u;
}
