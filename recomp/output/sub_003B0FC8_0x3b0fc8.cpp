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

// Function: sub_003B0FC8
// Address: 0x3b0fc8 - 0x3b0ff0
void sub_003B0FC8_0x3b0fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0FC8_0x3b0fc8");
#endif

    ctx->pc = 0x3b0fc8u;

    // 0x3b0fc8: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x3b0fc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3b0fcc: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3b0fccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b0fd0: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x3b0fd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x3b0fd4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3b0fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b0fd8: 0x9483002c  lhu         $v1, 0x2C($a0)
    ctx->pc = 0x3b0fd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3b0fdc: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x3b0fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b0fe0: 0x9482002e  lhu         $v0, 0x2E($a0)
    ctx->pc = 0x3b0fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x3b0fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FE4u;
        // 0x3b0fe8: 0xa4c20002  sh          $v0, 0x2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0FECu;
    // 0x3b0fec: 0x0  nop
    ctx->pc = 0x3b0fecu;
    // NOP
    ctx->pc = 0x3b0ff0u;
}
