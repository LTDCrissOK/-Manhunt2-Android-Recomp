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

// Function: sub_001353A0
// Address: 0x1353a0 - 0x1353c8
void sub_001353A0_0x1353a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001353A0_0x1353a0");
#endif

    ctx->pc = 0x1353a0u;

    // 0x1353a0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1353a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1353a4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1353a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1353a8: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x1353a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1353ac: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1353acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1353b0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1353b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1353b4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1353b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1353b8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1353b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1353bc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1353bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1353c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1353C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1353C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1353C0u;
        // 0x1353c4: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1353C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1353C8u;
}
