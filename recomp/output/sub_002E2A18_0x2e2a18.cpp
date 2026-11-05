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

// Function: sub_002E2A18
// Address: 0x2e2a18 - 0x2e2a78
void sub_002E2A18_0x2e2a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2A18_0x2e2a18");
#endif

    switch (ctx->pc) {
        case 0x2e2a28u: goto label_2e2a28;
        case 0x2e2a50u: goto label_2e2a50;
        default: break;
    }

    ctx->pc = 0x2e2a18u;

    // 0x2e2a18: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2e2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e2a1c: 0x24850970  addiu       $a1, $a0, 0x970
    ctx->pc = 0x2e2a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2416));
    // 0x2e2a20: 0x24820fb0  addiu       $v0, $a0, 0xFB0
    ctx->pc = 0x2e2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4016));
    // 0x2e2a24: 0x0  nop
    ctx->pc = 0x2e2a24u;
    // NOP
label_2e2a28:
    // 0x2e2a28: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2e2a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2a2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e2a30: 0x0  nop
    ctx->pc = 0x2e2a30u;
    // NOP
    // 0x2e2a34: 0x0  nop
    ctx->pc = 0x2e2a34u;
    // NOP
    // 0x2e2a38: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E2A38u;
    {
        const bool branch_taken_0x2e2a38 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2E2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A38u;
        // 0x2e2a3c: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a38) {
            ctx->pc = 0x2E2A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2a28;
        }
    }
    ctx->pc = 0x2E2A40u;
    // 0x2e2a40: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2e2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e2a44: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2e2a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e2a48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e2a48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e2a4c: 0x24820960  addiu       $v0, $a0, 0x960
    ctx->pc = 0x2e2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2400));
label_2e2a50:
    // 0x2e2a50: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2e2a50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2a54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e2a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e2a58: 0x0  nop
    ctx->pc = 0x2e2a58u;
    // NOP
    // 0x2e2a5c: 0x0  nop
    ctx->pc = 0x2e2a5cu;
    // NOP
    // 0x2e2a60: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E2A60u;
    {
        const bool branch_taken_0x2e2a60 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2E2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A60u;
        // 0x2e2a64: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a60) {
            ctx->pc = 0x2E2A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2a50;
        }
    }
    ctx->pc = 0x2E2A68u;
    // 0x2e2a68: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2e2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2e2a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A6Cu;
        // 0x2e2a70: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2A74u;
    // 0x2e2a74: 0x0  nop
    ctx->pc = 0x2e2a74u;
    // NOP
    ctx->pc = 0x2e2a78u;
}
