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

// Function: sub_00226678
// Address: 0x226678 - 0x226698
void sub_00226678_0x226678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226678_0x226678");
#endif

    ctx->pc = 0x226678u;

    // 0x226678: 0x8c820274  lw          $v0, 0x274($a0)
    ctx->pc = 0x226678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x22667c: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22667Cu;
    {
        const bool branch_taken_0x22667c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x22667c) {
            ctx->pc = 0x22668Cu;
            goto label_22668c;
        }
    }
    ctx->pc = 0x226684u;
    // 0x226684: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x226684u;
    {
        const bool branch_taken_0x226684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226684) {
            ctx->pc = 0x226688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226684u;
            // 0x226688: 0xac820278  sw          $v0, 0x278($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22668Cu;
            goto label_22668c;
        }
    }
    ctx->pc = 0x22668Cu;
label_22668c:
    // 0x22668c: 0x3e00008  jr          $ra
    ctx->pc = 0x22668Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22668Cu;
        // 0x226690: 0xac850274  sw          $a1, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22668Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226694u;
    // 0x226694: 0x0  nop
    ctx->pc = 0x226694u;
    // NOP
    ctx->pc = 0x226698u;
}
