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

// Function: sub_00337978
// Address: 0x337978 - 0x337998
void sub_00337978_0x337978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337978_0x337978");
#endif

    ctx->pc = 0x337978u;

    // 0x337978: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x337978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x33797c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x33797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x337980: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x337980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x337984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x337984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x337988: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x337988u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33798c: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x33798cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x337990: 0x3e00008  jr          $ra
    ctx->pc = 0x337990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337990u;
        // 0x337994: 0xac85006c  sw          $a1, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337998u;
}
