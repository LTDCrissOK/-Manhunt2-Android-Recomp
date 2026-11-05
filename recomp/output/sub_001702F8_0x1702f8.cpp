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

// Function: sub_001702F8
// Address: 0x1702f8 - 0x170318
void sub_001702F8_0x1702f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001702F8_0x1702f8");
#endif

    ctx->pc = 0x1702f8u;

    // 0x1702f8: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x1702f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1702fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1702fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170300: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x170300u;
    {
        const bool branch_taken_0x170300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x170304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170300u;
        // 0x170304: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170300) {
            ctx->pc = 0x17030Cu;
            goto label_17030c;
        }
    }
    ctx->pc = 0x170308u;
    // 0x170308: 0xa0850260  sb          $a1, 0x260($a0)
    ctx->pc = 0x170308u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 608), (uint8_t)GPR_U32(ctx, 5));
label_17030c:
    // 0x17030c: 0x3e00008  jr          $ra
    ctx->pc = 0x17030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17030Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170314u;
    // 0x170314: 0x0  nop
    ctx->pc = 0x170314u;
    // NOP
    ctx->pc = 0x170318u;
}
