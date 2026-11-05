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

// Function: sub_002FE368
// Address: 0x2fe368 - 0x2fe3a8
void sub_002FE368_0x2fe368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE368_0x2fe368");
#endif

    switch (ctx->pc) {
        case 0x2fe378u: goto label_2fe378;
        default: break;
    }

    ctx->pc = 0x2fe368u;

    // 0x2fe368: 0x8c8213f0  lw          $v0, 0x13F0($a0)
    ctx->pc = 0x2fe368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5104)));
    // 0x2fe36c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FE36Cu;
    {
        const bool branch_taken_0x2fe36c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE36Cu;
        // 0x2fe370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe36c) {
            ctx->pc = 0x2FE3A0u;
            goto label_2fe3a0;
        }
    }
    ctx->pc = 0x2FE374u;
    // 0x2fe374: 0x24831404  addiu       $v1, $a0, 0x1404
    ctx->pc = 0x2fe374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5124));
label_2fe378:
    // 0x2fe378: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fe378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fe37c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2fe37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2fe380: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2fe380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2fe384: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2fe384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2fe388: 0x8c8213f0  lw          $v0, 0x13F0($a0)
    ctx->pc = 0x2fe388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5104)));
    // 0x2fe38c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2fe38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fe390: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2FE390u;
    {
        const bool branch_taken_0x2fe390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE390u;
        // 0x2fe394: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe390) {
            ctx->pc = 0x2FE378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe378;
        }
    }
    ctx->pc = 0x2FE398u;
    // 0x2fe398: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE398u;
        // 0x2fe39c: 0x8c8213f0  lw          $v0, 0x13F0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5104)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE3A0u;
label_2fe3a0:
    // 0x2fe3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE3A8u;
}
