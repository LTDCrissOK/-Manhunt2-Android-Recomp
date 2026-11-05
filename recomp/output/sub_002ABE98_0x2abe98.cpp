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

// Function: sub_002ABE98
// Address: 0x2abe98 - 0x2abeb0
void sub_002ABE98_0x2abe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABE98_0x2abe98");
#endif

    ctx->pc = 0x2abe98u;

    // 0x2abe98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2abe98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abe9c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2abe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2abea0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2abea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2abea4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEA4u;
        // 0x2abea8: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABEACu;
    // 0x2abeac: 0x0  nop
    ctx->pc = 0x2abeacu;
    // NOP
    ctx->pc = 0x2abeb0u;
}
