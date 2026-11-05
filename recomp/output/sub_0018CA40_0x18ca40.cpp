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

// Function: sub_0018CA40
// Address: 0x18ca40 - 0x18ca60
void sub_0018CA40_0x18ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CA40_0x18ca40");
#endif

    ctx->pc = 0x18ca40u;

    // 0x18ca40: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x18ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18ca44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CA44u;
    {
        const bool branch_taken_0x18ca44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA44u;
        // 0x18ca48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca44) {
            ctx->pc = 0x18CA58u;
            goto label_18ca58;
        }
    }
    ctx->pc = 0x18CA4Cu;
    // 0x18ca4c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x18ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x18ca50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18ca50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18ca54: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x18ca54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18ca58:
    // 0x18ca58: 0x3e00008  jr          $ra
    ctx->pc = 0x18CA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA58u;
        // 0x18ca5c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CA60u;
}
