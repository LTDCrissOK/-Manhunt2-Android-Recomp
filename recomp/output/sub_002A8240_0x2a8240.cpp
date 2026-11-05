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

// Function: sub_002A8240
// Address: 0x2a8240 - 0x2a8260
void sub_002A8240_0x2a8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8240_0x2a8240");
#endif

    switch (ctx->pc) {
        case 0x2a8250u: goto label_2a8250;
        default: break;
    }

    ctx->pc = 0x2a8240u;

    // 0x2a8240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a8244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8248: 0xc0a9986  jal         func_2A6618
    ctx->pc = 0x2A8248u;
    SET_GPR_U32(ctx, 31, 0x2A8250u);
    ctx->pc = 0x2A6618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6618u, 0x2A8248u, 0x2A8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8250u;
label_2a8250:
    // 0x2a8250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8254: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8254u;
        // 0x2a8258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A825Cu;
    // 0x2a825c: 0x0  nop
    ctx->pc = 0x2a825cu;
    // NOP
    ctx->pc = 0x2a8260u;
}
