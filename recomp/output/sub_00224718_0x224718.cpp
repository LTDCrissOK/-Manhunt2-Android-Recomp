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

// Function: sub_00224718
// Address: 0x224718 - 0x224738
void sub_00224718_0x224718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224718_0x224718");
#endif

    switch (ctx->pc) {
        case 0x224728u: goto label_224728;
        default: break;
    }

    ctx->pc = 0x224718u;

    // 0x224718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22471c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22471cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224720: 0xc08918c  jal         func_224630
    ctx->pc = 0x224720u;
    SET_GPR_U32(ctx, 31, 0x224728u);
    ctx->pc = 0x224630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224630u, 0x224720u, 0x224728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224728u;
label_224728:
    // 0x224728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22472c: 0x3e00008  jr          $ra
    ctx->pc = 0x22472Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22472Cu;
        // 0x224730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22472Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224734u;
    // 0x224734: 0x0  nop
    ctx->pc = 0x224734u;
    // NOP
    ctx->pc = 0x224738u;
}
