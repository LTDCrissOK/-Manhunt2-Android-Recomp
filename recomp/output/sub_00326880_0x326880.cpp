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

// Function: sub_00326880
// Address: 0x326880 - 0x3268a8
void sub_00326880_0x326880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326880_0x326880");
#endif

    switch (ctx->pc) {
        case 0x326888u: goto label_326888;
        default: break;
    }

    ctx->pc = 0x326880u;

    // 0x326880: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x326880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x326884: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x326884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_326888:
    // 0x326888: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x326888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x32688c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326890: 0x0  nop
    ctx->pc = 0x326890u;
    // NOP
    // 0x326894: 0x0  nop
    ctx->pc = 0x326894u;
    // NOP
    // 0x326898: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x326898u;
    {
        const bool branch_taken_0x326898 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x32689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326898u;
        // 0x32689c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326898) {
            ctx->pc = 0x326888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326888;
        }
    }
    ctx->pc = 0x3268A0u;
    // 0x3268a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3268A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3268A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3268A8u;
}
