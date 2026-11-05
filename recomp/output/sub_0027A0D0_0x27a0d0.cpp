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

// Function: sub_0027A0D0
// Address: 0x27a0d0 - 0x27a110
void sub_0027A0D0_0x27a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A0D0_0x27a0d0");
#endif

    switch (ctx->pc) {
        case 0x27a0e0u: goto label_27a0e0;
        default: break;
    }

    ctx->pc = 0x27a0d0u;

    // 0x27a0d0: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x27a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x27a0d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27A0D4u;
    {
        const bool branch_taken_0x27a0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0D4u;
        // 0x27a0d8: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0d4) {
            ctx->pc = 0x27A0ECu;
            goto label_27a0ec;
        }
    }
    ctx->pc = 0x27A0DCu;
    // 0x27a0dc: 0x0  nop
    ctx->pc = 0x27a0dcu;
    // NOP
label_27a0e0:
    // 0x27a0e0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27a0e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27a0e8: 0xac820114  sw          $v0, 0x114($a0)
    ctx->pc = 0x27a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 2));
label_27a0ec:
    // 0x27a0ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27a0f0: 0x80450004  lb          $a1, 0x4($v0)
    ctx->pc = 0x27a0f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a0f4: 0x50a3fffa  beql        $a1, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27A0F4u;
    {
        const bool branch_taken_0x27a0f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x27a0f4) {
            ctx->pc = 0x27A0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A0F4u;
            // 0x27a0f8: 0x8c820114  lw          $v0, 0x114($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a0e0;
        }
    }
    ctx->pc = 0x27A0FCu;
    // 0x27a0fc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27a100: 0x50a2fff7  beql        $a1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x27A100u;
    {
        const bool branch_taken_0x27a100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a100) {
            ctx->pc = 0x27A104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A100u;
            // 0x27a104: 0x8c820114  lw          $v0, 0x114($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a0e0;
        }
    }
    ctx->pc = 0x27A108u;
    // 0x27a108: 0x3e00008  jr          $ra
    ctx->pc = 0x27A108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A110u;
}
