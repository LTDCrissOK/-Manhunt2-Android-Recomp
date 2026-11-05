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

// Function: sub_002A4270
// Address: 0x2a4270 - 0x2a4288
void sub_002A4270_0x2a4270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4270_0x2a4270");
#endif

    ctx->pc = 0x2a4270u;

    // 0x2a4270: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a4270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a4274: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A4274u;
    {
        const bool branch_taken_0x2a4274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4274) {
            ctx->pc = 0x2A4278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4274u;
            // 0x2a4278: 0xac400048  sw          $zero, 0x48($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A427Cu;
            goto label_2a427c;
        }
    }
    ctx->pc = 0x2A427Cu;
label_2a427c:
    // 0x2a427c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A427Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4284u;
    // 0x2a4284: 0x0  nop
    ctx->pc = 0x2a4284u;
    // NOP
    ctx->pc = 0x2a4288u;
}
