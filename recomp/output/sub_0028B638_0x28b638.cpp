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

// Function: sub_0028B638
// Address: 0x28b638 - 0x28b658
void sub_0028B638_0x28b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B638_0x28b638");
#endif

    ctx->pc = 0x28b638u;

    // 0x28b638: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28b638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28b63c: 0x2442ac88  addiu       $v0, $v0, -0x5378
    ctx->pc = 0x28b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
    // 0x28b640: 0x8c43013c  lw          $v1, 0x13C($v0)
    ctx->pc = 0x28b640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BADC4u));
    // 0x28b644: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28b644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28b648: 0x8c440140  lw          $a0, 0x140($v0)
    ctx->pc = 0x28b648u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BADC8u));
    // 0x28b64c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B64Cu;
        // 0x28b650: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B654u;
    // 0x28b654: 0x0  nop
    ctx->pc = 0x28b654u;
    // NOP
    ctx->pc = 0x28b658u;
}
