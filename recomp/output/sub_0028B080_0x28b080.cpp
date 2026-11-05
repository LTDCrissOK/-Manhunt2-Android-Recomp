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

// Function: sub_0028B080
// Address: 0x28b080 - 0x28b0c0
void sub_0028B080_0x28b080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B080_0x28b080");
#endif

    switch (ctx->pc) {
        case 0x28b0a0u: goto label_28b0a0;
        default: break;
    }

    ctx->pc = 0x28b080u;

    // 0x28b080: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28b080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28b084: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28b084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28b088: 0x8c64f500  lw          $a0, -0xB00($v1)
    ctx->pc = 0x28b088u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF500u));
    // 0x28b08c: 0x2442ac88  addiu       $v0, $v0, -0x5378
    ctx->pc = 0x28b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
    // 0x28b090: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x28b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x28b094: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b098: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28b098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b09c: 0x0  nop
    ctx->pc = 0x28b09cu;
    // NOP
label_28b0a0:
    // 0x28b0a0: 0xac45fff0  sw          $a1, -0x10($v0)
    ctx->pc = 0x28b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 5));
    // 0x28b0a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28b0a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x28b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x28b0ac: 0x0  nop
    ctx->pc = 0x28b0acu;
    // NOP
    // 0x28b0b0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28B0B0u;
    {
        const bool branch_taken_0x28b0b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0B0u;
        // 0x28b0b4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0b0) {
            ctx->pc = 0x28B0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b0a0;
        }
    }
    ctx->pc = 0x28B0B8u;
    // 0x28b0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x28B0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B0C0u;
}
