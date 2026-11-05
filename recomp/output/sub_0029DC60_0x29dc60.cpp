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

// Function: sub_0029DC60
// Address: 0x29dc60 - 0x29dca0
void sub_0029DC60_0x29dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DC60_0x29dc60");
#endif

    switch (ctx->pc) {
        case 0x29dc78u: goto label_29dc78;
        default: break;
    }

    ctx->pc = 0x29dc60u;

    // 0x29dc60: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x29dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29dc64: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x29dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x29dc68: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x29dc68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29dc6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29dc6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc70: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x29dc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x29dc74: 0x0  nop
    ctx->pc = 0x29dc74u;
    // NOP
label_29dc78:
    // 0x29dc78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x29dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29dc7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DC7Cu;
    {
        const bool branch_taken_0x29dc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC7Cu;
        // 0x29dc80: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc7c) {
            ctx->pc = 0x29DC8Cu;
            goto label_29dc8c;
        }
    }
    ctx->pc = 0x29DC84u;
    // 0x29dc84: 0x3e00008  jr          $ra
    ctx->pc = 0x29DC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC84u;
        // 0x29dc88: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DC8Cu;
label_29dc8c:
    // 0x29dc8c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x29dc8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29dc90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29DC90u;
    {
        const bool branch_taken_0x29dc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC90u;
        // 0x29dc94: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc90) {
            ctx->pc = 0x29DC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dc78;
        }
    }
    ctx->pc = 0x29DC98u;
    // 0x29dc98: 0x3e00008  jr          $ra
    ctx->pc = 0x29DC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DCA0u;
}
