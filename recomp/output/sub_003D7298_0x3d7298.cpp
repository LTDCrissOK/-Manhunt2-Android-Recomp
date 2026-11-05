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

// Function: sub_003D7298
// Address: 0x3d7298 - 0x3d72c0
void sub_003D7298_0x3d7298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7298_0x3d7298");
#endif

    ctx->pc = 0x3d7298u;

    // 0x3d7298: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D7298u;
    {
        const bool branch_taken_0x3d7298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7298u;
        // 0x3d729c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7298) {
            ctx->pc = 0x3D72B4u;
            goto label_3d72b4;
        }
    }
    ctx->pc = 0x3D72A0u;
    // 0x3d72a0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x3d72a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x3d72a4: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x3d72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
    // 0x3d72a8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d72a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3d72ac: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3d72acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3d72b0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x3d72b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_3d72b4:
    // 0x3d72b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D72B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D72B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D72BCu;
    // 0x3d72bc: 0x0  nop
    ctx->pc = 0x3d72bcu;
    // NOP
    ctx->pc = 0x3d72c0u;
}
