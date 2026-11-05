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

// Function: sub_00169EA8
// Address: 0x169ea8 - 0x169ec0
void sub_00169EA8_0x169ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169EA8_0x169ea8");
#endif

    ctx->pc = 0x169ea8u;

    // 0x169ea8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x169ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x169eac: 0x8c6207a4  lw          $v0, 0x7A4($v1)
    ctx->pc = 0x169eacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F07A4u));
    // 0x169eb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x169EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EB4u;
        // 0x169eb8: 0xac6207a4  sw          $v0, 0x7A4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169EBCu;
    // 0x169ebc: 0x0  nop
    ctx->pc = 0x169ebcu;
    // NOP
    ctx->pc = 0x169ec0u;
}
