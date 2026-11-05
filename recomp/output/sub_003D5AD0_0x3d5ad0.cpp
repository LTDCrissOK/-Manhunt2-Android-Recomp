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

// Function: sub_003D5AD0
// Address: 0x3d5ad0 - 0x3d5ae0
void sub_003D5AD0_0x3d5ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5AD0_0x3d5ad0");
#endif

    ctx->pc = 0x3d5ad0u;

    // 0x3d5ad0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3d5ad4: 0x8c62f3dc  lw          $v0, -0xC24($v1)
    ctx->pc = 0x3d5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42F3DCu));
    // 0x3d5ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AD8u;
        // 0x3d5adc: 0xac64f3dc  sw          $a0, -0xC24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5AE0u;
}
