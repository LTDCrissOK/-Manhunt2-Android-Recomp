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

// Function: sub_003DF9D8
// Address: 0x3df9d8 - 0x3dfa08
void sub_003DF9D8_0x3df9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF9D8_0x3df9d8");
#endif

    switch (ctx->pc) {
        case 0x3df9e0u: goto label_3df9e0;
        default: break;
    }

    ctx->pc = 0x3df9d8u;

    // 0x3df9d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3df9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3df9dc: 0x0  nop
    ctx->pc = 0x3df9dcu;
    // NOP
label_3df9e0:
    // 0x3df9e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DF9E0u;
    {
        const bool branch_taken_0x3df9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df9e0) {
            ctx->pc = 0x3DFA00u;
            goto label_3dfa00;
        }
    }
    ctx->pc = 0x3DF9E8u;
    // 0x3df9e8: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DF9E8u;
    {
        const bool branch_taken_0x3df9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3df9e8) {
            ctx->pc = 0x3DF9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF9E8u;
            // 0x3df9ec: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF9F8u;
            goto label_3df9f8;
        }
    }
    ctx->pc = 0x3DF9F0u;
    // 0x3df9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF9F0u;
        // 0x3df9f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF9F8u;
label_3df9f8:
    // 0x3df9f8: 0x5462fff9  bnel        $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3DF9F8u;
    {
        const bool branch_taken_0x3df9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3df9f8) {
            ctx->pc = 0x3DF9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF9F8u;
            // 0x3df9fc: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3df9e0;
        }
    }
    ctx->pc = 0x3DFA00u;
label_3dfa00:
    // 0x3dfa00: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA00u;
        // 0x3dfa04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFA08u;
}
