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

// Function: sub_0039E020
// Address: 0x39e020 - 0x39e030
void sub_0039E020_0x39e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E020_0x39e020");
#endif

    switch (ctx->pc) {
        case 0x39e024u: goto label_39e024;
        default: break;
    }

    ctx->pc = 0x39e020u;

    // 0x39e020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39e024:
    // 0x39e024: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39e024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e028: 0x3e00008  jr          $ra
    ctx->pc = 0x39E028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E028u;
        // 0x39e02c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E030u;
}
