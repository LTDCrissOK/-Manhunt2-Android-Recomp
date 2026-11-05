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

// Function: sub_002AF818
// Address: 0x2af818 - 0x2af848
void sub_002AF818_0x2af818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF818_0x2af818");
#endif

    ctx->pc = 0x2af818u;

    // 0x2af818: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2af818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2af81c: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2af81cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2af820: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF820u;
    {
        const bool branch_taken_0x2af820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF820u;
        // 0x2af824: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af820) {
            ctx->pc = 0x2AF83Cu;
            goto label_2af83c;
        }
    }
    ctx->pc = 0x2AF828u;
    // 0x2af828: 0x8c622460  lw          $v0, 0x2460($v1)
    ctx->pc = 0x2af828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9312)));
    // 0x2af82c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af830: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2af830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2af834: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF834u;
        // 0x2af838: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF83Cu;
label_2af83c:
    // 0x2af83c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF83Cu;
        // 0x2af840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF844u;
    // 0x2af844: 0x0  nop
    ctx->pc = 0x2af844u;
    // NOP
    ctx->pc = 0x2af848u;
}
