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

// Function: sub_002AC5D0
// Address: 0x2ac5d0 - 0x2ac610
void sub_002AC5D0_0x2ac5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC5D0_0x2ac5d0");
#endif

    switch (ctx->pc) {
        case 0x2ac5e8u: goto label_2ac5e8;
        default: break;
    }

    ctx->pc = 0x2ac5d0u;

    // 0x2ac5d0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2ac5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2ac5d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ac5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac5d8: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x2ac5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x2ac5dc: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2ac5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2ac5e0: 0x244200ec  addiu       $v0, $v0, 0xEC
    ctx->pc = 0x2ac5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 236));
    // 0x2ac5e4: 0x0  nop
    ctx->pc = 0x2ac5e4u;
    // NOP
label_2ac5e8:
    // 0x2ac5e8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2ac5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ac5ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ac5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ac5f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ac5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ac5f4: 0x0  nop
    ctx->pc = 0x2ac5f4u;
    // NOP
    // 0x2ac5f8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AC5F8u;
    {
        const bool branch_taken_0x2ac5f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2AC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5F8u;
        // 0x2ac5fc: 0x244200b0  addiu       $v0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5f8) {
            ctx->pc = 0x2AC5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac5e8;
        }
    }
    ctx->pc = 0x2AC600u;
    // 0x2ac600: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ac600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ac604: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC604u;
        // 0x2ac608: 0xac40a448  sw          $zero, -0x5BB8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC60Cu;
    // 0x2ac60c: 0x0  nop
    ctx->pc = 0x2ac60cu;
    // NOP
    ctx->pc = 0x2ac610u;
}
