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

// Function: sub_001F6F10
// Address: 0x1f6f10 - 0x1f6f28
void sub_001F6F10_0x1f6f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6F10_0x1f6f10");
#endif

    ctx->pc = 0x1f6f10u;

    // 0x1f6f10: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1f6f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1f6f14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F14u;
        // 0x1f6f18: 0x90629c3b  lbu         $v0, -0x63C5($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294941755)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6F1Cu;
    // 0x1f6f1c: 0x0  nop
    ctx->pc = 0x1f6f1cu;
    // NOP
    // 0x1f6f20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f6f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f6f24: 0x0  nop
    ctx->pc = 0x1f6f24u;
    // NOP
    ctx->pc = 0x1f6f28u;
}
