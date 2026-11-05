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

// Function: sub_003D7EC0
// Address: 0x3d7ec0 - 0x3d7ee0
void sub_003D7EC0_0x3d7ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7EC0_0x3d7ec0");
#endif

    ctx->pc = 0x3d7ec0u;

    // 0x3d7ec0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D7EC0u;
    {
        const bool branch_taken_0x3d7ec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7EC0u;
        // 0x3d7ec4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ec0) {
            ctx->pc = 0x3D7ED4u;
            goto label_3d7ed4;
        }
    }
    ctx->pc = 0x3D7EC8u;
    // 0x3d7ec8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d7ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3d7ecc: 0x24422778  addiu       $v0, $v0, 0x2778
    ctx->pc = 0x3d7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10104));
    // 0x3d7ed0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3d7ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_3d7ed4:
    // 0x3d7ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7EDCu;
    // 0x3d7edc: 0x0  nop
    ctx->pc = 0x3d7edcu;
    // NOP
    ctx->pc = 0x3d7ee0u;
}
