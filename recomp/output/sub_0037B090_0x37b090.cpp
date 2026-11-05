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

// Function: sub_0037B090
// Address: 0x37b090 - 0x37b0a8
void sub_0037B090_0x37b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B090_0x37b090");
#endif

    ctx->pc = 0x37b090u;

    // 0x37b090: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37B090u;
    {
        const bool branch_taken_0x37b090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b090) {
            ctx->pc = 0x37B09Cu;
            goto label_37b09c;
        }
    }
    ctx->pc = 0x37B098u;
    // 0x37b098: 0xd  break       0
    ctx->pc = 0x37b098u;
    runtime->handleBreak(rdram, ctx);
label_37b09c:
    // 0x37b09c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B0A4u;
    // 0x37b0a4: 0x0  nop
    ctx->pc = 0x37b0a4u;
    // NOP
    ctx->pc = 0x37b0a8u;
}
