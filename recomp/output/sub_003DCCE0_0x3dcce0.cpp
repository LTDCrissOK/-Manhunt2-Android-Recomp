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

// Function: sub_003DCCE0
// Address: 0x3dcce0 - 0x3dcd18
void sub_003DCCE0_0x3dcce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCCE0_0x3dcce0");
#endif

    ctx->pc = 0x3dcce0u;

    // 0x3dcce0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3dcce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x3dcce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dcce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dcce8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCCF0u;
    // 0x3dccf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dccf4: 0x0  nop
    ctx->pc = 0x3dccf4u;
    // NOP
    // 0x3dccf8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3dccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3dccfc: 0x0  nop
    ctx->pc = 0x3dccfcu;
    // NOP
    // 0x3dcd00: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3dcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3dcd04: 0x0  nop
    ctx->pc = 0x3dcd04u;
    // NOP
    // 0x3dcd08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dcd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dcd0c: 0x0  nop
    ctx->pc = 0x3dcd0cu;
    // NOP
    // 0x3dcd10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3dcd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3dcd14: 0x0  nop
    ctx->pc = 0x3dcd14u;
    // NOP
    ctx->pc = 0x3dcd18u;
}
