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

// Function: sub_00280F80
// Address: 0x280f80 - 0x280fa0
void sub_00280F80_0x280f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280F80_0x280f80");
#endif

    ctx->pc = 0x280f80u;

    // 0x280f80: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x280f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x280f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280f88: 0x3e00008  jr          $ra
    ctx->pc = 0x280F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F88u;
        // 0x280f8c: 0xac62cd90  sw          $v0, -0x3270($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280F90u;
    // 0x280f90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x280f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280f94: 0x0  nop
    ctx->pc = 0x280f94u;
    // NOP
    // 0x280f98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x280f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x280f9c: 0x0  nop
    ctx->pc = 0x280f9cu;
    // NOP
    ctx->pc = 0x280fa0u;
}
