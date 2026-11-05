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

// Function: sub_002A8220
// Address: 0x2a8220 - 0x2a8240
void sub_002A8220_0x2a8220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8220_0x2a8220");
#endif

    switch (ctx->pc) {
        case 0x2a8230u: goto label_2a8230;
        default: break;
    }

    ctx->pc = 0x2a8220u;

    // 0x2a8220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a8224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8228: 0xc0a9968  jal         func_2A65A0
    ctx->pc = 0x2A8228u;
    SET_GPR_U32(ctx, 31, 0x2A8230u);
    ctx->pc = 0x2A65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65A0u, 0x2A8228u, 0x2A8230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8230u;
label_2a8230:
    // 0x2a8230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8234: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8234u;
        // 0x2a8238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A823Cu;
    // 0x2a823c: 0x0  nop
    ctx->pc = 0x2a823cu;
    // NOP
    ctx->pc = 0x2a8240u;
}
