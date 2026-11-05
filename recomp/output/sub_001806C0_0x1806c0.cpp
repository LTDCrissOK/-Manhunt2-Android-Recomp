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

// Function: sub_001806C0
// Address: 0x1806c0 - 0x1806e0
void sub_001806C0_0x1806c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001806C0_0x1806c0");
#endif

    ctx->pc = 0x1806c0u;

    // 0x1806c0: 0x90830410  lbu         $v1, 0x410($a0)
    ctx->pc = 0x1806c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1040)));
    // 0x1806c4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1806c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1806c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1806C8u;
    {
        const bool branch_taken_0x1806c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1806CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806C8u;
        // 0x1806cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1806c8) {
            ctx->pc = 0x1806D8u;
            goto label_1806d8;
        }
    }
    ctx->pc = 0x1806D0u;
    // 0x1806d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1806D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1806D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806D0u;
        // 0x1806d4: 0xa0830411  sb          $v1, 0x411($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1041), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1806D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1806D8u;
label_1806d8:
    // 0x1806d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1806D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1806DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806D8u;
        // 0x1806dc: 0xa0820411  sb          $v0, 0x411($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1041), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1806D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1806E0u;
}
