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

// Function: sub_003DBD70
// Address: 0x3dbd70 - 0x3dbdb0
void sub_003DBD70_0x3dbd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBD70_0x3dbd70");
#endif

    switch (ctx->pc) {
        case 0x3dbd80u: goto label_3dbd80;
        case 0x3dbd88u: goto label_3dbd88;
        default: break;
    }

    ctx->pc = 0x3dbd70u;

    // 0x3dbd70: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DBD70u;
    {
        const bool branch_taken_0x3dbd70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dbd70) {
            ctx->pc = 0x3DBD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBD70u;
            // 0x3dbd74: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBD88u;
            goto label_3dbd88;
        }
    }
    ctx->pc = 0x3DBD78u;
    // 0x3dbd78: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD78u;
        // 0x3dbd7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBD80u;
label_3dbd80:
    // 0x3dbd80: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBD80u;
        // 0x3dbd84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBD88u;
label_3dbd88:
    // 0x3dbd88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DBD88u;
    {
        const bool branch_taken_0x3dbd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbd88) {
            ctx->pc = 0x3DBDA8u;
            goto label_3dbda8;
        }
    }
    ctx->pc = 0x3DBD90u;
    // 0x3dbd90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dbd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dbd94: 0x1045fffa  beq         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3DBD94u;
    {
        const bool branch_taken_0x3dbd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3dbd94) {
            ctx->pc = 0x3DBD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dbd80;
        }
    }
    ctx->pc = 0x3DBD9Cu;
    // 0x3dbd9c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dbd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3dbda0: 0x5462fff9  bnel        $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3DBDA0u;
    {
        const bool branch_taken_0x3dbda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dbda0) {
            ctx->pc = 0x3DBDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBDA0u;
            // 0x3dbda4: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dbd88;
        }
    }
    ctx->pc = 0x3DBDA8u;
label_3dbda8:
    // 0x3dbda8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBDA8u;
        // 0x3dbdac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBDB0u;
}
