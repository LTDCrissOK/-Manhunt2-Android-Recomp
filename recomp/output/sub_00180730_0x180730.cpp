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

// Function: sub_00180730
// Address: 0x180730 - 0x180760
void sub_00180730_0x180730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180730_0x180730");
#endif

    ctx->pc = 0x180730u;

    // 0x180730: 0x90820412  lbu         $v0, 0x412($a0)
    ctx->pc = 0x180730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1042)));
    // 0x180734: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x180734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x180738: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x180738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18073c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x18073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x180740: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x180744: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x180744u;
    {
        const bool branch_taken_0x180744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x180744) {
            ctx->pc = 0x180758u;
            goto label_180758;
        }
    }
    ctx->pc = 0x18074Cu;
    // 0x18074c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x18074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x180750: 0x3e00008  jr          $ra
    ctx->pc = 0x180750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180750u;
        // 0x180754: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180758u;
label_180758:
    // 0x180758: 0x3e00008  jr          $ra
    ctx->pc = 0x180758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180758u;
        // 0x18075c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180760u;
}
