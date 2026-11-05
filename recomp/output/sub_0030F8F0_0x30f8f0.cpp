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

// Function: sub_0030F8F0
// Address: 0x30f8f0 - 0x30f928
void sub_0030F8F0_0x30f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F8F0_0x30f8f0");
#endif

    switch (ctx->pc) {
        case 0x30f900u: goto label_30f900;
        default: break;
    }

    ctx->pc = 0x30f8f0u;

    // 0x30f8f0: 0x8c8601f0  lw          $a2, 0x1F0($a0)
    ctx->pc = 0x30f8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x30f8f4: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x30F8F4u;
    {
        const bool branch_taken_0x30f8f4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x30F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8F4u;
        // 0x30f8f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f8f4) {
            ctx->pc = 0x30F920u;
            goto label_30f920;
        }
    }
    ctx->pc = 0x30F8FCu;
    // 0x30f8fc: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x30f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_30f900:
    // 0x30f900: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30f900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30f904: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F904u;
    {
        const bool branch_taken_0x30f904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F904u;
        // 0x30f908: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f904) {
            ctx->pc = 0x30F914u;
            goto label_30f914;
        }
    }
    ctx->pc = 0x30F90Cu;
    // 0x30f90c: 0x3e00008  jr          $ra
    ctx->pc = 0x30F90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F90Cu;
        // 0x30f910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F914u;
label_30f914:
    // 0x30f914: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x30f914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30f918: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30F918u;
    {
        const bool branch_taken_0x30f918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F918u;
        // 0x30f91c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f918) {
            ctx->pc = 0x30F900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f900;
        }
    }
    ctx->pc = 0x30F920u;
label_30f920:
    // 0x30f920: 0x3e00008  jr          $ra
    ctx->pc = 0x30F920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F920u;
        // 0x30f924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F928u;
}
