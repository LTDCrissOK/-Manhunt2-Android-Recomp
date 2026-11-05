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

// Function: sub_00107610
// Address: 0x107610 - 0x107630
void sub_00107610_0x107610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107610_0x107610");
#endif

    switch (ctx->pc) {
        case 0x107620u: goto label_107620;
        default: break;
    }

    ctx->pc = 0x107610u;

    // 0x107610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107618: 0xc0f6bd4  jal         func_3DAF50
    ctx->pc = 0x107618u;
    SET_GPR_U32(ctx, 31, 0x107620u);
    ctx->pc = 0x3DAF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAF50u, 0x107618u, 0x107620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107620u;
label_107620:
    // 0x107620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107624: 0x3e00008  jr          $ra
    ctx->pc = 0x107624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107624u;
        // 0x107628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10762Cu;
    // 0x10762c: 0x0  nop
    ctx->pc = 0x10762cu;
    // NOP
    ctx->pc = 0x107630u;
}
