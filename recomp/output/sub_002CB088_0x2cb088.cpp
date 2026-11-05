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

// Function: sub_002CB088
// Address: 0x2cb088 - 0x2cb0a0
void sub_002CB088_0x2cb088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB088_0x2cb088");
#endif

    ctx->pc = 0x2cb088u;

    // 0x2cb088: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2cb088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2cb08c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2cb08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2cb090: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2cb090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cb094: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB094u;
        // 0x2cb098: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB09Cu;
    // 0x2cb09c: 0x0  nop
    ctx->pc = 0x2cb09cu;
    // NOP
    ctx->pc = 0x2cb0a0u;
}
