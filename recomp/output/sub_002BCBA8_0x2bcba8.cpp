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

// Function: sub_002BCBA8
// Address: 0x2bcba8 - 0x2bcbc0
void sub_002BCBA8_0x2bcba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCBA8_0x2bcba8");
#endif

    ctx->pc = 0x2bcba8u;

    // 0x2bcba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bcba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcbac: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2bcbacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2bcbb0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2bcbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2bcbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBB4u;
        // 0x2bcbb8: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCBBCu;
    // 0x2bcbbc: 0x0  nop
    ctx->pc = 0x2bcbbcu;
    // NOP
    ctx->pc = 0x2bcbc0u;
}
