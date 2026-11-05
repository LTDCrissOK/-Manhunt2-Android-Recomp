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

// Function: sub_002B95E0
// Address: 0x2b95e0 - 0x2b9608
void sub_002B95E0_0x2b95e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B95E0_0x2b95e0");
#endif

    ctx->pc = 0x2b95e0u;

    // 0x2b95e0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2b95e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2b95e4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b95e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b95e8: 0x8ca2ad90  lw          $v0, -0x5270($a1)
    ctx->pc = 0x2b95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAD90u));
    // 0x2b95ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b95f0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B95F0u;
    {
        const bool branch_taken_0x2b95f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95F0u;
        // 0x2b95f4: 0xaca2ad90  sw          $v0, -0x5270($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294946192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95f0) {
            ctx->pc = 0x2B9600u;
            goto label_2b9600;
        }
    }
    ctx->pc = 0x2B95F8u;
    // 0x2b95f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2b95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2b95fc: 0xaca0ad90  sw          $zero, -0x5270($a1)
    ctx->pc = 0x2b95fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294946192), GPR_U32(ctx, 0));
label_2b9600:
    // 0x2b9600: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9608u;
}
