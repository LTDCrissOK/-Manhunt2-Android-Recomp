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

// Function: sub_003D7E58
// Address: 0x3d7e58 - 0x3d7e80
void sub_003D7E58_0x3d7e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7E58_0x3d7e58");
#endif

    ctx->pc = 0x3d7e58u;

    // 0x3d7e58: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D7E58u;
    {
        const bool branch_taken_0x3d7e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E58u;
        // 0x3d7e5c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7e58) {
            ctx->pc = 0x3D7E74u;
            goto label_3d7e74;
        }
    }
    ctx->pc = 0x3D7E60u;
    // 0x3d7e60: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x3d7e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x3d7e64: 0x244227b8  addiu       $v0, $v0, 0x27B8
    ctx->pc = 0x3d7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10168));
    // 0x3d7e68: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3d7e6c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3d7e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3d7e70: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x3d7e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_3d7e74:
    // 0x3d7e74: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7E7Cu;
    // 0x3d7e7c: 0x0  nop
    ctx->pc = 0x3d7e7cu;
    // NOP
    ctx->pc = 0x3d7e80u;
}
