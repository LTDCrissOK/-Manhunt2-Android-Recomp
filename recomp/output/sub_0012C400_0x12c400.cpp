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

// Function: sub_0012C400
// Address: 0x12c400 - 0x12c410
void sub_0012C400_0x12c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C400_0x12c400");
#endif

    ctx->pc = 0x12c400u;

    // 0x12c400: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x12c400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12c404: 0x3e00008  jr          $ra
    ctx->pc = 0x12C404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C404u;
        // 0x12c408: 0x90a20085  lbu         $v0, 0x85($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 133)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C40Cu;
    // 0x12c40c: 0x0  nop
    ctx->pc = 0x12c40cu;
    // NOP
    ctx->pc = 0x12c410u;
}
