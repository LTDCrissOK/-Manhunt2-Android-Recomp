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

// Function: sub_003D72E0
// Address: 0x3d72e0 - 0x3d7300
void sub_003D72E0_0x3d72e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D72E0_0x3d72e0");
#endif

    ctx->pc = 0x3d72e0u;

    // 0x3d72e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D72E0u;
    {
        const bool branch_taken_0x3d72e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72E0u;
        // 0x3d72e4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d72e0) {
            ctx->pc = 0x3D72F4u;
            goto label_3d72f4;
        }
    }
    ctx->pc = 0x3D72E8u;
    // 0x3d72e8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d72e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3d72ec: 0x24422600  addiu       $v0, $v0, 0x2600
    ctx->pc = 0x3d72ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
    // 0x3d72f0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3d72f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_3d72f4:
    // 0x3d72f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D72F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D72F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D72FCu;
    // 0x3d72fc: 0x0  nop
    ctx->pc = 0x3d72fcu;
    // NOP
    ctx->pc = 0x3d7300u;
}
