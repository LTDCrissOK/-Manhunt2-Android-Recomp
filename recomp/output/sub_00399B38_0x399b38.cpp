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

// Function: sub_00399B38
// Address: 0x399b38 - 0x399b58
void sub_00399B38_0x399b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399B38_0x399b38");
#endif

    ctx->pc = 0x399b38u;

    // 0x399b38: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x399b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x399b3c: 0xac85005c  sw          $a1, 0x5C($a0)
    ctx->pc = 0x399b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
    // 0x399b40: 0x45282a  slt         $a1, $v0, $a1
    ctx->pc = 0x399b40u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x399b44: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x399B44u;
    {
        const bool branch_taken_0x399b44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x399b44) {
            ctx->pc = 0x399B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399B44u;
            // 0x399b48: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399B4Cu;
            goto label_399b4c;
        }
    }
    ctx->pc = 0x399B4Cu;
label_399b4c:
    // 0x399b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x399B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B4Cu;
        // 0x399b50: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399B54u;
    // 0x399b54: 0x0  nop
    ctx->pc = 0x399b54u;
    // NOP
    ctx->pc = 0x399b58u;
}
