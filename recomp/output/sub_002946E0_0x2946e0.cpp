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

// Function: sub_002946E0
// Address: 0x2946e0 - 0x294708
void sub_002946E0_0x2946e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002946E0_0x2946e0");
#endif

    switch (ctx->pc) {
        case 0x2946e8u: goto label_2946e8;
        default: break;
    }

    ctx->pc = 0x2946e0u;

    // 0x2946e0: 0x2484005c  addiu       $a0, $a0, 0x5C
    ctx->pc = 0x2946e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x2946e4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2946e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2946e8:
    // 0x2946e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2946e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2946ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2946ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2946f0: 0x0  nop
    ctx->pc = 0x2946f0u;
    // NOP
    // 0x2946f4: 0x0  nop
    ctx->pc = 0x2946f4u;
    // NOP
    // 0x2946f8: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2946F8u;
    {
        const bool branch_taken_0x2946f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2946FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946F8u;
        // 0x2946fc: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946f8) {
            ctx->pc = 0x2946E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2946e8;
        }
    }
    ctx->pc = 0x294700u;
    // 0x294700: 0x3e00008  jr          $ra
    ctx->pc = 0x294700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294708u;
}
