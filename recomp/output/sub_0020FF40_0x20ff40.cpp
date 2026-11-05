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

// Function: sub_0020FF40
// Address: 0x20ff40 - 0x20ff70
void sub_0020FF40_0x20ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FF40_0x20ff40");
#endif

    switch (ctx->pc) {
        case 0x20ff48u: goto label_20ff48;
        default: break;
    }

    ctx->pc = 0x20ff40u;

    // 0x20ff40: 0x248401d8  addiu       $a0, $a0, 0x1D8
    ctx->pc = 0x20ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
    // 0x20ff44: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20ff44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ff48:
    // 0x20ff48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20ff4c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20FF4Cu;
    {
        const bool branch_taken_0x20ff4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ff4c) {
            ctx->pc = 0x20FF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FF4Cu;
            // 0x20ff50: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FF5Cu;
            goto label_20ff5c;
        }
    }
    ctx->pc = 0x20FF54u;
    // 0x20ff54: 0x3e00008  jr          $ra
    ctx->pc = 0x20FF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF54u;
        // 0x20ff58: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FF5Cu;
label_20ff5c:
    // 0x20ff5c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x20ff5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x20ff60: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20FF60u;
    {
        const bool branch_taken_0x20ff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF60u;
        // 0x20ff64: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff60) {
            ctx->pc = 0x20FF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ff48;
        }
    }
    ctx->pc = 0x20FF68u;
    // 0x20ff68: 0x3e00008  jr          $ra
    ctx->pc = 0x20FF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF68u;
        // 0x20ff6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FF70u;
}
