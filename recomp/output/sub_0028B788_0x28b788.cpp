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

// Function: sub_0028B788
// Address: 0x28b788 - 0x28b7c0
void sub_0028B788_0x28b788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B788_0x28b788");
#endif

    ctx->pc = 0x28b788u;

    // 0x28b788: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x28b788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x28b78c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b790: 0x3e00008  jr          $ra
    ctx->pc = 0x28B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B790u;
        // 0x28b794: 0xac62adb4  sw          $v0, -0x524C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294946228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B798u;
    // 0x28b798: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28b798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28b79c: 0x0  nop
    ctx->pc = 0x28b79cu;
    // NOP
    // 0x28b7a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28b7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28b7a4: 0x0  nop
    ctx->pc = 0x28b7a4u;
    // NOP
    // 0x28b7a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28b7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28b7ac: 0x0  nop
    ctx->pc = 0x28b7acu;
    // NOP
    // 0x28b7b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28b7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28b7b4: 0x0  nop
    ctx->pc = 0x28b7b4u;
    // NOP
    // 0x28b7b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28b7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28b7bc: 0x0  nop
    ctx->pc = 0x28b7bcu;
    // NOP
    ctx->pc = 0x28b7c0u;
}
