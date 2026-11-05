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

// Function: sub_0023F908
// Address: 0x23f908 - 0x23f930
void sub_0023F908_0x23f908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F908_0x23f908");
#endif

    ctx->pc = 0x23f908u;

    // 0x23f908: 0x8c820fb4  lw          $v0, 0xFB4($a0)
    ctx->pc = 0x23f908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4020)));
    // 0x23f90c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F90Cu;
    {
        const bool branch_taken_0x23f90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F90Cu;
        // 0x23f910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f90c) {
            ctx->pc = 0x23F928u;
            goto label_23f928;
        }
    }
    ctx->pc = 0x23F914u;
    // 0x23f914: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F914u;
    {
        const bool branch_taken_0x23f914 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F914u;
        // 0x23f918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f914) {
            ctx->pc = 0x23F924u;
            goto label_23f924;
        }
    }
    ctx->pc = 0x23F91Cu;
    // 0x23f91c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F91Cu;
        // 0x23f920: 0xac850fb4  sw          $a1, 0xFB4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4020), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F924u;
label_23f924:
    // 0x23f924: 0xac820fb4  sw          $v0, 0xFB4($a0)
    ctx->pc = 0x23f924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4020), GPR_U32(ctx, 2));
label_23f928:
    // 0x23f928: 0x3e00008  jr          $ra
    ctx->pc = 0x23F928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F930u;
}
