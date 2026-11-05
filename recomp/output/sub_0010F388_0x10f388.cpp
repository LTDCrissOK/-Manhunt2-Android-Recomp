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

// Function: sub_0010F388
// Address: 0x10f388 - 0x10f3b0
void sub_0010F388_0x10f388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F388_0x10f388");
#endif

    ctx->pc = 0x10f388u;

    // 0x10f388: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x10f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x10f38c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F38Cu;
    {
        const bool branch_taken_0x10f38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f38c) {
            ctx->pc = 0x10F3A4u;
            goto label_10f3a4;
        }
    }
    ctx->pc = 0x10F394u;
    // 0x10f394: 0x8c8200fc  lw          $v0, 0xFC($a0)
    ctx->pc = 0x10f394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x10f398: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10f39c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F39Cu;
        // 0x10f3a0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F3A4u;
label_10f3a4:
    // 0x10f3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10F3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3A4u;
        // 0x10f3a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F3ACu;
    // 0x10f3ac: 0x0  nop
    ctx->pc = 0x10f3acu;
    // NOP
    ctx->pc = 0x10f3b0u;
}
