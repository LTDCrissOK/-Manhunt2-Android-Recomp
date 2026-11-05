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

// Function: sub_00100250
// Address: 0x100250 - 0x100270
void sub_00100250_0x100250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100250_0x100250");
#endif

    ctx->pc = 0x100250u;

    // 0x100250: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x100250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100254u;
    {
        const bool branch_taken_0x100254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100254) {
            ctx->pc = 0x100264u;
            goto label_100264;
        }
    }
    ctx->pc = 0x10025Cu;
    // 0x10025c: 0x3e00008  jr          $ra
    ctx->pc = 0x10025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10025Cu;
        // 0x100260: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10025Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100264u;
label_100264:
    // 0x100264: 0x3e00008  jr          $ra
    ctx->pc = 0x100264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100264u;
        // 0x100268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10026Cu;
    // 0x10026c: 0x0  nop
    ctx->pc = 0x10026cu;
    // NOP
    ctx->pc = 0x100270u;
}
