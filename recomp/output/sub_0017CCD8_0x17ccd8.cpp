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

// Function: sub_0017CCD8
// Address: 0x17ccd8 - 0x17ccf8
void sub_0017CCD8_0x17ccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CCD8_0x17ccd8");
#endif

    ctx->pc = 0x17ccd8u;

    // 0x17ccd8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x17ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x17ccdc: 0x8c62a9d4  lw          $v0, -0x562C($v1)
    ctx->pc = 0x17ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x17cce0: 0xac85006c  sw          $a1, 0x6C($a0)
    ctx->pc = 0x17cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
    // 0x17cce4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17cce8: 0xac860068  sw          $a2, 0x68($a0)
    ctx->pc = 0x17cce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 6));
    // 0x17ccec: 0x3e00008  jr          $ra
    ctx->pc = 0x17CCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCECu;
        // 0x17ccf0: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CCF4u;
    // 0x17ccf4: 0x0  nop
    ctx->pc = 0x17ccf4u;
    // NOP
    ctx->pc = 0x17ccf8u;
}
