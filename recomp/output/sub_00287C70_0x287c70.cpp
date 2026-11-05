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

// Function: sub_00287C70
// Address: 0x287c70 - 0x287ca8
void sub_00287C70_0x287c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287C70_0x287c70");
#endif

    ctx->pc = 0x287c70u;

    // 0x287c70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x287c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x287c74: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x287c74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x287c78: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x287C78u;
    {
        const bool branch_taken_0x287c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C78u;
        // 0x287c7c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c78) {
            ctx->pc = 0x287C94u;
            goto label_287c94;
        }
    }
    ctx->pc = 0x287C80u;
    // 0x287c80: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287c84: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x287c88: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x287c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x287c8c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287C8Cu;
    {
        const bool branch_taken_0x287c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287c8c) {
            ctx->pc = 0x287C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287C8Cu;
            // 0x287c90: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287C9Cu;
            goto label_287c9c;
        }
    }
    ctx->pc = 0x287C94u;
label_287c94:
    // 0x287c94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287C94u;
    {
        const bool branch_taken_0x287c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C94u;
        // 0x287c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c94) {
            ctx->pc = 0x287CA0u;
            goto label_287ca0;
        }
    }
    ctx->pc = 0x287C9Cu;
label_287c9c:
    // 0x287c9c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x287c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_287ca0:
    // 0x287ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x287CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CA0u;
        // 0x287ca4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287CA8u;
}
