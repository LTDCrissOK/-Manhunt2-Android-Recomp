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

// Function: sub_00170498
// Address: 0x170498 - 0x1704b8
void sub_00170498_0x170498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170498_0x170498");
#endif

    ctx->pc = 0x170498u;

    // 0x170498: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x170498u;
    {
        const bool branch_taken_0x170498 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170498u;
        // 0x17049c: 0xac8502b0  sw          $a1, 0x2B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170498) {
            ctx->pc = 0x1704ACu;
            goto label_1704ac;
        }
    }
    ctx->pc = 0x1704A0u;
    // 0x1704a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1704a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1704a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1704A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1704A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704A4u;
        // 0x1704a8: 0xac8202b4  sw          $v0, 0x2B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1704A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1704ACu;
label_1704ac:
    // 0x1704ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1704ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1704B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704ACu;
        // 0x1704b0: 0xac8602b4  sw          $a2, 0x2B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1704ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1704B4u;
    // 0x1704b4: 0x0  nop
    ctx->pc = 0x1704b4u;
    // NOP
    ctx->pc = 0x1704b8u;
}
