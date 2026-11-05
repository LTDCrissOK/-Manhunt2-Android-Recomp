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

// Function: sub_003D7E38
// Address: 0x3d7e38 - 0x3d7e58
void sub_003D7E38_0x3d7e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7E38_0x3d7e38");
#endif

    ctx->pc = 0x3d7e38u;

    // 0x3d7e38: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D7E38u;
    {
        const bool branch_taken_0x3d7e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E38u;
        // 0x3d7e3c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7e38) {
            ctx->pc = 0x3D7E50u;
            goto label_3d7e50;
        }
    }
    ctx->pc = 0x3D7E40u;
    // 0x3d7e40: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x3d7e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x3d7e44: 0x244227c8  addiu       $v0, $v0, 0x27C8
    ctx->pc = 0x3d7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10184));
    // 0x3d7e48: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d7e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3d7e4c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3d7e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_3d7e50:
    // 0x3d7e50: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7E58u;
}
