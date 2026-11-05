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

// Function: sub_001D65E8
// Address: 0x1d65e8 - 0x1d6610
void sub_001D65E8_0x1d65e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D65E8_0x1d65e8");
#endif

    ctx->pc = 0x1d65e8u;

    // 0x1d65e8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1d65e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1d65ec: 0x90829168  lbu         $v0, -0x6E98($a0)
    ctx->pc = 0x1d65ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F9168u));
    // 0x1d65f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D65F0u;
    {
        const bool branch_taken_0x1d65f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65F0u;
        // 0x1d65f4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65f0) {
            ctx->pc = 0x1D6604u;
            goto label_1d6604;
        }
    }
    ctx->pc = 0x1D65F8u;
    // 0x1d65f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d65fc: 0xac628ec8  sw          $v0, -0x7138($v1)
    ctx->pc = 0x1d65fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294938312), GPR_U32(ctx, 2));
    // 0x1d6600: 0xa0809168  sb          $zero, -0x6E98($a0)
    ctx->pc = 0x1d6600u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294938984), (uint8_t)GPR_U32(ctx, 0));
label_1d6604:
    // 0x1d6604: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D660Cu;
    // 0x1d660c: 0x0  nop
    ctx->pc = 0x1d660cu;
    // NOP
    ctx->pc = 0x1d6610u;
}
