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

// Function: sub_0039A7B8
// Address: 0x39a7b8 - 0x39a7c8
void sub_0039A7B8_0x39a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A7B8_0x39a7b8");
#endif

    ctx->pc = 0x39a7b8u;

    // 0x39a7b8: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x39a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x39a7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x39A7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7BCu;
        // 0x39a7c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A7C4u;
    // 0x39a7c4: 0x0  nop
    ctx->pc = 0x39a7c4u;
    // NOP
    ctx->pc = 0x39a7c8u;
}
