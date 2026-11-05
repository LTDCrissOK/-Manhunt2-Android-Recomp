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

// Function: sub_001075F0
// Address: 0x1075f0 - 0x107610
void sub_001075F0_0x1075f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001075F0_0x1075f0");
#endif

    switch (ctx->pc) {
        case 0x107600u: goto label_107600;
        default: break;
    }

    ctx->pc = 0x1075f0u;

    // 0x1075f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1075f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1075f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1075f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1075f8: 0xc0f6bca  jal         func_3DAF28
    ctx->pc = 0x1075F8u;
    SET_GPR_U32(ctx, 31, 0x107600u);
    ctx->pc = 0x3DAF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAF28u, 0x1075F8u, 0x107600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107600u;
label_107600:
    // 0x107600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107604: 0x3e00008  jr          $ra
    ctx->pc = 0x107604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107604u;
        // 0x107608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10760Cu;
    // 0x10760c: 0x0  nop
    ctx->pc = 0x10760cu;
    // NOP
    ctx->pc = 0x107610u;
}
