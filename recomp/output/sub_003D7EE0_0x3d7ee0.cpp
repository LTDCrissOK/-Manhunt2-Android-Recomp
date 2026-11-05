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

// Function: sub_003D7EE0
// Address: 0x3d7ee0 - 0x3d7f00
void sub_003D7EE0_0x3d7ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7EE0_0x3d7ee0");
#endif

    ctx->pc = 0x3d7ee0u;

    // 0x3d7ee0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D7EE0u;
    {
        const bool branch_taken_0x3d7ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7EE0u;
        // 0x3d7ee4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ee0) {
            ctx->pc = 0x3D7EF4u;
            goto label_3d7ef4;
        }
    }
    ctx->pc = 0x3D7EE8u;
    // 0x3d7ee8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d7ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3d7eec: 0x24422768  addiu       $v0, $v0, 0x2768
    ctx->pc = 0x3d7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10088));
    // 0x3d7ef0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3d7ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_3d7ef4:
    // 0x3d7ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7EFCu;
    // 0x3d7efc: 0x0  nop
    ctx->pc = 0x3d7efcu;
    // NOP
    ctx->pc = 0x3d7f00u;
}
