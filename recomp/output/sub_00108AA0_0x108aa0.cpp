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

// Function: sub_00108AA0
// Address: 0x108aa0 - 0x108ac0
void sub_00108AA0_0x108aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108AA0_0x108aa0");
#endif

    ctx->pc = 0x108aa0u;

    // 0x108aa0: 0x90820044  lbu         $v0, 0x44($a0)
    ctx->pc = 0x108aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x108aa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108aa8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x108aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108aac: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x108aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x108ab0: 0x90830044  lbu         $v1, 0x44($a0)
    ctx->pc = 0x108ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x108ab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x108ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x108ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x108AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AB8u;
        // 0x108abc: 0xa0830044  sb          $v1, 0x44($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108AC0u;
}
