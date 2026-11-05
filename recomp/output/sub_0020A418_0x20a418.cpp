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

// Function: sub_0020A418
// Address: 0x20a418 - 0x20a448
void sub_0020A418_0x20a418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A418_0x20a418");
#endif

    ctx->pc = 0x20a418u;

    // 0x20a418: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20a41c: 0x2462ffef  addiu       $v0, $v1, -0x11
    ctx->pc = 0x20a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967279));
    // 0x20a420: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20a420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20a424: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A424u;
    {
        const bool branch_taken_0x20a424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A424u;
        // 0x20a428: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a424) {
            ctx->pc = 0x20A438u;
            goto label_20a438;
        }
    }
    ctx->pc = 0x20A42Cu;
    // 0x20a42c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x20a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x20a430: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A430u;
    {
        const bool branch_taken_0x20a430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a430) {
            ctx->pc = 0x20A43Cu;
            goto label_20a43c;
        }
    }
    ctx->pc = 0x20A438u;
label_20a438:
    // 0x20a438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a43c:
    // 0x20a43c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A43Cu;
        // 0x20a440: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A444u;
    // 0x20a444: 0x0  nop
    ctx->pc = 0x20a444u;
    // NOP
    ctx->pc = 0x20a448u;
}
