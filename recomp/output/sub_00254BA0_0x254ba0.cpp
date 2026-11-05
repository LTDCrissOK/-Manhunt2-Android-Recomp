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

// Function: sub_00254BA0
// Address: 0x254ba0 - 0x254bc8
void sub_00254BA0_0x254ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254BA0_0x254ba0");
#endif

    ctx->pc = 0x254ba0u;

label_254ba0:
    // 0x254ba0: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x254BA0u;
    {
        const bool branch_taken_0x254ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x254ba0) {
            ctx->pc = 0x254BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254BA0u;
            // 0x254ba4: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254BB0u;
            goto label_254bb0;
        }
    }
    ctx->pc = 0x254BA8u;
    // 0x254ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x254BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BA8u;
        // 0x254bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254BB0u;
label_254bb0:
    // 0x254bb0: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x254BB0u;
    {
        const bool branch_taken_0x254bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x254bb0) {
            ctx->pc = 0x254BC0u;
            goto label_254bc0;
        }
    }
    ctx->pc = 0x254BB8u;
    // 0x254bb8: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x254BB8u;
    {
        const bool branch_taken_0x254bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BB8u;
        // 0x254bbc: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bb8) {
            ctx->pc = 0x254BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254ba0;
        }
    }
    ctx->pc = 0x254BC0u;
label_254bc0:
    // 0x254bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x254BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BC0u;
        // 0x254bc4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254BC8u;
}
