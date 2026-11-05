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

// Function: sub_002946C0
// Address: 0x2946c0 - 0x2946e0
void sub_002946C0_0x2946c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002946C0_0x2946c0");
#endif

    ctx->pc = 0x2946c0u;

    // 0x2946c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2946c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2946c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2946c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2946c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2946c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2946cc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2946CCu;
    {
        const bool branch_taken_0x2946cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2946D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946CCu;
        // 0x2946d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946cc) {
            ctx->pc = 0x2946D8u;
            goto label_2946d8;
        }
    }
    ctx->pc = 0x2946D4u;
    // 0x2946d4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2946d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2946d8:
    // 0x2946d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2946D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2946D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2946E0u;
}
