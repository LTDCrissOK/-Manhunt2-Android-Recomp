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

// Function: sub_00106948
// Address: 0x106948 - 0x106970
void sub_00106948_0x106948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106948_0x106948");
#endif

    ctx->pc = 0x106948u;

    // 0x106948: 0x90820022  lbu         $v0, 0x22($a0)
    ctx->pc = 0x106948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x10694c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x10694cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x106950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106950u;
    {
        const bool branch_taken_0x106950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106950u;
        // 0x106954: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106950) {
            ctx->pc = 0x106968u;
            goto label_106968;
        }
    }
    ctx->pc = 0x106958u;
    // 0x106958: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x106958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x10695c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x10695cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x106960: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106964: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x106964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_106968:
    // 0x106968: 0x3e00008  jr          $ra
    ctx->pc = 0x106968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106970u;
}
