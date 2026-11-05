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

// Function: sub_00135F70
// Address: 0x135f70 - 0x135f88
void sub_00135F70_0x135f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135F70_0x135f70");
#endif

    ctx->pc = 0x135f70u;

    // 0x135f70: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x135f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x135f74: 0x54a20001  bnel        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x135F74u;
    {
        const bool branch_taken_0x135f74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x135f74) {
            ctx->pc = 0x135F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135F74u;
            // 0x135f78: 0xac8504c8  sw          $a1, 0x4C8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1224), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135F7Cu;
            goto label_135f7c;
        }
    }
    ctx->pc = 0x135F7Cu;
label_135f7c:
    // 0x135f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x135F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135F84u;
    // 0x135f84: 0x0  nop
    ctx->pc = 0x135f84u;
    // NOP
    ctx->pc = 0x135f88u;
}
