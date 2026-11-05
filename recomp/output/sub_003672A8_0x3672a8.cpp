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

// Function: sub_003672A8
// Address: 0x3672a8 - 0x3672d8
void sub_003672A8_0x3672a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003672A8_0x3672a8");
#endif

    switch (ctx->pc) {
        case 0x3672b8u: goto label_3672b8;
        default: break;
    }

    ctx->pc = 0x3672a8u;

    // 0x3672a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3672a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3672ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3672acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3672b0: 0x24421ed8  addiu       $v0, $v0, 0x1ED8
    ctx->pc = 0x3672b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7896));
    // 0x3672b4: 0x0  nop
    ctx->pc = 0x3672b4u;
    // NOP
label_3672b8:
    // 0x3672b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3672b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3672bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3672bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3672c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3672c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3672c4: 0x0  nop
    ctx->pc = 0x3672c4u;
    // NOP
    // 0x3672c8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3672C8u;
    {
        const bool branch_taken_0x3672c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3672CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3672C8u;
        // 0x3672cc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3672c8) {
            ctx->pc = 0x3672B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3672b8;
        }
    }
    ctx->pc = 0x3672D0u;
    // 0x3672d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3672D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3672D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3672D8u;
}
