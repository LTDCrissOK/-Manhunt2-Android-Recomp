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

// Function: sub_002D7478
// Address: 0x2d7478 - 0x2d74b8
void sub_002D7478_0x2d7478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7478_0x2d7478");
#endif

    ctx->pc = 0x2d7478u;

    // 0x2d7478: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7480u;
    // 0x2d7480: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d7480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d7484: 0x0  nop
    ctx->pc = 0x2d7484u;
    // NOP
    // 0x2d7488: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d7488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d748c: 0x0  nop
    ctx->pc = 0x2d748cu;
    // NOP
    // 0x2d7490: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d7490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7494: 0x0  nop
    ctx->pc = 0x2d7494u;
    // NOP
    // 0x2d7498: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d7498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d749c: 0x0  nop
    ctx->pc = 0x2d749cu;
    // NOP
    // 0x2d74a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d74a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d74a4: 0x0  nop
    ctx->pc = 0x2d74a4u;
    // NOP
    // 0x2d74a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d74a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d74ac: 0x0  nop
    ctx->pc = 0x2d74acu;
    // NOP
    // 0x2d74b0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2d74b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d74b4: 0x0  nop
    ctx->pc = 0x2d74b4u;
    // NOP
    ctx->pc = 0x2d74b8u;
}
