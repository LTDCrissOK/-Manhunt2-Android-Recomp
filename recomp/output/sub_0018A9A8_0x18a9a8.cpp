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

// Function: sub_0018A9A8
// Address: 0x18a9a8 - 0x18a9c8
void sub_0018A9A8_0x18a9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A9A8_0x18a9a8");
#endif

    switch (ctx->pc) {
        case 0x18a9b8u: goto label_18a9b8;
        default: break;
    }

    ctx->pc = 0x18a9a8u;

    // 0x18a9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a9b0: 0xc062974  jal         func_18A5D0
    ctx->pc = 0x18A9B0u;
    SET_GPR_U32(ctx, 31, 0x18A9B8u);
    ctx->pc = 0x18A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9B0u;
    // 0x18a9b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x18A9B0u, 0x18A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9B8u;
label_18a9b8:
    // 0x18a9b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x18A9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9BCu;
        // 0x18a9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A9C4u;
    // 0x18a9c4: 0x0  nop
    ctx->pc = 0x18a9c4u;
    // NOP
    ctx->pc = 0x18a9c8u;
}
