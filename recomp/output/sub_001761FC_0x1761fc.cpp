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

// Function: sub_001761FC
// Address: 0x1761fc - 0x176210
void sub_001761FC_0x1761fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001761FC_0x1761fc");
#endif

    switch (ctx->pc) {
        case 0x176200u: goto label_176200;
        default: break;
    }

    ctx->pc = 0x1761fcu;

    // 0x1761fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1761fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176200:
    // 0x176200: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x176200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176204: 0x3e00008  jr          $ra
    ctx->pc = 0x176204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176204u;
        // 0x176208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17620Cu;
    // 0x17620c: 0x0  nop
    ctx->pc = 0x17620cu;
    // NOP
    ctx->pc = 0x176210u;
}
