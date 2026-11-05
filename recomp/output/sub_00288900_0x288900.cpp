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

// Function: sub_00288900
// Address: 0x288900 - 0x288940
void sub_00288900_0x288900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288900_0x288900");
#endif

    switch (ctx->pc) {
        case 0x288918u: goto label_288918;
        default: break;
    }

    ctx->pc = 0x288900u;

    // 0x288900: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x288900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x288904: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x288904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x288908: 0x24424dd0  addiu       $v0, $v0, 0x4DD0
    ctx->pc = 0x288908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19920));
    // 0x28890c: 0x2463c758  addiu       $v1, $v1, -0x38A8
    ctx->pc = 0x28890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952792));
    // 0x288910: 0x24450668  addiu       $a1, $v0, 0x668
    ctx->pc = 0x288910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1640));
    // 0x288914: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x288914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_288918:
    // 0x288918: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x288918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28891c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28891cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x288920: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x288920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x288924: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x288924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x288928: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x288928u;
    {
        const bool branch_taken_0x288928 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x28892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288928u;
        // 0x28892c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288928) {
            ctx->pc = 0x288918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288918;
        }
    }
    ctx->pc = 0x288930u;
    // 0x288930: 0x3e00008  jr          $ra
    ctx->pc = 0x288930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288938u;
    // 0x288938: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x288938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28893c: 0x0  nop
    ctx->pc = 0x28893cu;
    // NOP
    ctx->pc = 0x288940u;
}
