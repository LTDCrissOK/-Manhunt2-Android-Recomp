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

// Function: sub_003A74D8
// Address: 0x3a74d8 - 0x3a7500
void sub_003A74D8_0x3a74d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A74D8_0x3a74d8");
#endif

    ctx->pc = 0x3a74d8u;

    // 0x3a74d8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A74D8u;
    {
        const bool branch_taken_0x3a74d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74D8u;
        // 0x3a74dc: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a74d8) {
            ctx->pc = 0x3A74F0u;
            goto label_3a74f0;
        }
    }
    ctx->pc = 0x3A74E0u;
    // 0x3a74e0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a74e4: 0xac403e90  sw          $zero, 0x3E90($v0)
    ctx->pc = 0x3a74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16016), GPR_U32(ctx, 0));
    // 0x3a74e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A74E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74E8u;
        // 0x3a74ec: 0xac603e94  sw          $zero, 0x3E94($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A74E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A74F0u;
label_3a74f0:
    // 0x3a74f0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a74f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a74f4: 0xac443e90  sw          $a0, 0x3E90($v0)
    ctx->pc = 0x3a74f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16016), GPR_U32(ctx, 4));
    // 0x3a74f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A74F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74F8u;
        // 0x3a74fc: 0xac653e94  sw          $a1, 0x3E94($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16020), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A74F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7500u;
}
