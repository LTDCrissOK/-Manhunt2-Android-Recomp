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

// Function: sub_0012D618
// Address: 0x12d618 - 0x12d628
void sub_0012D618_0x12d618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D618_0x12d618");
#endif

    switch (ctx->pc) {
        case 0x12d61cu: goto label_12d61c;
        default: break;
    }

    ctx->pc = 0x12d618u;

    // 0x12d618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12d61c:
    // 0x12d61c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D61Cu;
        // 0x12d620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D624u;
    // 0x12d624: 0x0  nop
    ctx->pc = 0x12d624u;
    // NOP
    ctx->pc = 0x12d628u;
}
