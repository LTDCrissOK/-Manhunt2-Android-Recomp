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

// Function: sub_0029D0A0
// Address: 0x29d0a0 - 0x29d0b8
void sub_0029D0A0_0x29d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D0A0_0x29d0a0");
#endif

    ctx->pc = 0x29d0a0u;

    // 0x29d0a0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D0A0u;
    {
        const bool branch_taken_0x29d0a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d0a0) {
            ctx->pc = 0x29D0B0u;
            goto label_29d0b0;
        }
    }
    ctx->pc = 0x29D0A8u;
    // 0x29d0a8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x29d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x29d0ac: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x29d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_29d0b0:
    // 0x29d0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x29D0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0B0u;
        // 0x29d0b4: 0xa08500f4  sb          $a1, 0xF4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 244), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D0B8u;
}
