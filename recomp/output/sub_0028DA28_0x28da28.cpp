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

// Function: sub_0028DA28
// Address: 0x28da28 - 0x28da60
void sub_0028DA28_0x28da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DA28_0x28da28");
#endif

    switch (ctx->pc) {
        case 0x28da38u: goto label_28da38;
        default: break;
    }

    ctx->pc = 0x28da28u;

    // 0x28da28: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28da28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28da2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28da2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da30: 0x2445ca10  addiu       $a1, $v0, -0x35F0
    ctx->pc = 0x28da30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x28da34: 0x0  nop
    ctx->pc = 0x28da34u;
    // NOP
label_28da38:
    // 0x28da38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28da3c: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DA3Cu;
    {
        const bool branch_taken_0x28da3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x28DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA3Cu;
        // 0x28da40: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da3c) {
            ctx->pc = 0x28DA4Cu;
            goto label_28da4c;
        }
    }
    ctx->pc = 0x28DA44u;
    // 0x28da44: 0x3e00008  jr          $ra
    ctx->pc = 0x28DA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA44u;
        // 0x28da48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DA4Cu;
label_28da4c:
    // 0x28da4c: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x28da4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28da50: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28DA50u;
    {
        const bool branch_taken_0x28da50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA50u;
        // 0x28da54: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da50) {
            ctx->pc = 0x28DA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28da38;
        }
    }
    ctx->pc = 0x28DA58u;
    // 0x28da58: 0x3e00008  jr          $ra
    ctx->pc = 0x28DA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA58u;
        // 0x28da5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DA60u;
}
