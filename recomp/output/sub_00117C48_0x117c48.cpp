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

// Function: sub_00117C48
// Address: 0x117c48 - 0x117c68
void sub_00117C48_0x117c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117C48_0x117c48");
#endif

    ctx->pc = 0x117c48u;

    // 0x117c48: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x117c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x117c4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117C4Cu;
    {
        const bool branch_taken_0x117c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C4Cu;
        // 0x117c50: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c4c) {
            ctx->pc = 0x117C5Cu;
            goto label_117c5c;
        }
    }
    ctx->pc = 0x117C54u;
    // 0x117c54: 0x3e00008  jr          $ra
    ctx->pc = 0x117C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C54u;
        // 0x117c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117C5Cu;
label_117c5c:
    // 0x117c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x117C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117C64u;
    // 0x117c64: 0x0  nop
    ctx->pc = 0x117c64u;
    // NOP
    ctx->pc = 0x117c68u;
}
