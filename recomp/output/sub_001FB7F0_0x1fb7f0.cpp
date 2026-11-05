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

// Function: sub_001FB7F0
// Address: 0x1fb7f0 - 0x1fb818
void sub_001FB7F0_0x1fb7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB7F0_0x1fb7f0");
#endif

    ctx->pc = 0x1fb7f0u;

    // 0x1fb7f0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1fb7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1fb7f4: 0x2c42007f  sltiu       $v0, $v0, 0x7F
    ctx->pc = 0x1fb7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x1fb7f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB7F8u;
    {
        const bool branch_taken_0x1fb7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7F8u;
        // 0x1fb7fc: 0x28a40001  slti        $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7f8) {
            ctx->pc = 0x1FB810u;
            goto label_1fb810;
        }
    }
    ctx->pc = 0x1FB800u;
    // 0x1fb800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fb800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb804: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1fb804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1fb808: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB808u;
        // 0x1fb80c: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB810u;
label_1fb810:
    // 0x1fb810: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB810u;
        // 0x1fb814: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB818u;
}
