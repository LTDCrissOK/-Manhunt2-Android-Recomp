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

// Function: sub_0023F790
// Address: 0x23f790 - 0x23f7a8
void sub_0023F790_0x23f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F790_0x23f790");
#endif

    ctx->pc = 0x23f790u;

    // 0x23f790: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F790u;
    {
        const bool branch_taken_0x23f790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F790u;
        // 0x23f794: 0x2402080d  addiu       $v0, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f790) {
            ctx->pc = 0x23F7A0u;
            goto label_23f7a0;
        }
    }
    ctx->pc = 0x23F798u;
    // 0x23f798: 0x3e00008  jr          $ra
    ctx->pc = 0x23F798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F798u;
        // 0x23f79c: 0xac860790  sw          $a2, 0x790($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1936), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F7A0u;
label_23f7a0:
    // 0x23f7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7A0u;
        // 0x23f7a4: 0xac820790  sw          $v0, 0x790($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F7A8u;
}
