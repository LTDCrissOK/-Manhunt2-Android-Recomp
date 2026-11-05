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

// Function: sub_00240968
// Address: 0x240968 - 0x240980
void sub_00240968_0x240968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240968_0x240968");
#endif

    ctx->pc = 0x240968u;

    // 0x240968: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x240968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x24096c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x24096cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x240970: 0x8c83010c  lw          $v1, 0x10C($a0)
    ctx->pc = 0x240970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x240974: 0x3e00008  jr          $ra
    ctx->pc = 0x240974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240974u;
        // 0x240978: 0xac600038  sw          $zero, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24097Cu;
    // 0x24097c: 0x0  nop
    ctx->pc = 0x24097cu;
    // NOP
    ctx->pc = 0x240980u;
}
