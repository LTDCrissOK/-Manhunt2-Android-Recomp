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

// Function: sub_00201A88
// Address: 0x201a88 - 0x201aa8
void sub_00201A88_0x201a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201A88_0x201a88");
#endif

    ctx->pc = 0x201a88u;

    // 0x201a88: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x201a88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x201a8c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x201a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x201a90: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x201a90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x201a94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x201a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x201a98: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x201a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x201a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x201AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AA0u;
        // 0x201aa4: 0xac87013c  sw          $a3, 0x13C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201AA8u;
}
