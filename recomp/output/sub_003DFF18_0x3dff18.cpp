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

// Function: sub_003DFF18
// Address: 0x3dff18 - 0x3dff38
void sub_003DFF18_0x3dff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFF18_0x3dff18");
#endif

    ctx->pc = 0x3dff18u;

    // 0x3dff18: 0x8c822040  lw          $v0, 0x2040($a0)
    ctx->pc = 0x3dff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8256)));
    // 0x3dff1c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFF1Cu;
    {
        const bool branch_taken_0x3dff1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3dff1c) {
            ctx->pc = 0x3DFF2Cu;
            goto label_3dff2c;
        }
    }
    ctx->pc = 0x3DFF24u;
    // 0x3dff24: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF24u;
        // 0x3dff28: 0x8c822044  lw          $v0, 0x2044($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFF2Cu;
label_3dff2c:
    // 0x3dff2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFF2Cu;
        // 0x3dff30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFF34u;
    // 0x3dff34: 0x0  nop
    ctx->pc = 0x3dff34u;
    // NOP
    ctx->pc = 0x3dff38u;
}
