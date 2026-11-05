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

// Function: sub_003DCB38
// Address: 0x3dcb38 - 0x3dcb58
void sub_003DCB38_0x3dcb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCB38_0x3dcb38");
#endif

    ctx->pc = 0x3dcb38u;

    // 0x3dcb38: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x3dcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x3dcb3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DCB3Cu;
    {
        const bool branch_taken_0x3dcb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DCB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB3Cu;
        // 0x3dcb40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcb3c) {
            ctx->pc = 0x3DCB50u;
            goto label_3dcb50;
        }
    }
    ctx->pc = 0x3DCB44u;
    // 0x3dcb44: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3dcb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3dcb48: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3dcb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x3dcb4c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x3dcb4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3dcb50:
    // 0x3dcb50: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB50u;
        // 0x3dcb54: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCB58u;
}
