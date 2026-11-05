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

// Function: sub_00100288
// Address: 0x100288 - 0x1002a8
void sub_00100288_0x100288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100288_0x100288");
#endif

    ctx->pc = 0x100288u;

    // 0x100288: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x100288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10028c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10028Cu;
    {
        const bool branch_taken_0x10028c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10028c) {
            ctx->pc = 0x10029Cu;
            goto label_10029c;
        }
    }
    ctx->pc = 0x100294u;
    // 0x100294: 0x3e00008  jr          $ra
    ctx->pc = 0x100294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100294u;
        // 0x100298: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10029Cu;
label_10029c:
    // 0x10029c: 0x3e00008  jr          $ra
    ctx->pc = 0x10029Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1002A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10029Cu;
        // 0x1002a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10029Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1002A4u;
    // 0x1002a4: 0x0  nop
    ctx->pc = 0x1002a4u;
    // NOP
    ctx->pc = 0x1002a8u;
}
