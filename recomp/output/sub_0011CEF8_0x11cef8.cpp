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

// Function: sub_0011CEF8
// Address: 0x11cef8 - 0x11cf10
void sub_0011CEF8_0x11cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CEF8_0x11cef8");
#endif

    switch (ctx->pc) {
        case 0x11cefcu: goto label_11cefc;
        default: break;
    }

    ctx->pc = 0x11cef8u;

    // 0x11cef8: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x11cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_11cefc:
    // 0x11cefc: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x11cefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11cf00: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x11cf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x11cf04: 0x3e00008  jr          $ra
    ctx->pc = 0x11CF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF04u;
        // 0x11cf08: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CF0Cu;
    // 0x11cf0c: 0x0  nop
    ctx->pc = 0x11cf0cu;
    // NOP
    ctx->pc = 0x11cf10u;
}
