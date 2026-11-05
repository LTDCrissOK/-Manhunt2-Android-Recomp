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

// Function: sub_00326CB8
// Address: 0x326cb8 - 0x326cd0
void sub_00326CB8_0x326cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326CB8_0x326cb8");
#endif

    ctx->pc = 0x326cb8u;

    // 0x326cb8: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x326cb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x326cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326cc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x326cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x326cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x326CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CC4u;
        // 0x326cc8: 0xa4a30008  sh          $v1, 0x8($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326CCCu;
    // 0x326ccc: 0x0  nop
    ctx->pc = 0x326cccu;
    // NOP
    ctx->pc = 0x326cd0u;
}
