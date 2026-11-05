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

// Function: sub_003DF440
// Address: 0x3df440 - 0x3df468
void sub_003DF440_0x3df440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF440_0x3df440");
#endif

    ctx->pc = 0x3df440u;

    // 0x3df440: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x3df440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x3df444: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3df444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3df448: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DF448u;
    {
        const bool branch_taken_0x3df448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF448u;
        // 0x3df44c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df448) {
            ctx->pc = 0x3DF460u;
            goto label_3df460;
        }
    }
    ctx->pc = 0x3DF450u;
    // 0x3df450: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x3df450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3df454: 0x28820374  slti        $v0, $a0, 0x374
    ctx->pc = 0x3df454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)884) ? 1 : 0);
    // 0x3df458: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3DF458u;
    {
        const bool branch_taken_0x3df458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df458) {
            ctx->pc = 0x3DF45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF458u;
            // 0x3df45c: 0x2885041d  slti        $a1, $a0, 0x41D (Delay Slot)
            SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1053) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF460u;
            goto label_3df460;
        }
    }
    ctx->pc = 0x3DF460u;
label_3df460:
    // 0x3df460: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF460u;
        // 0x3df464: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF468u;
}
