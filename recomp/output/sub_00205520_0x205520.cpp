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

// Function: sub_00205520
// Address: 0x205520 - 0x205550
void sub_00205520_0x205520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205520_0x205520");
#endif

    switch (ctx->pc) {
        case 0x20553cu: goto label_20553c;
        default: break;
    }

    ctx->pc = 0x205520u;

    // 0x205520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205528: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x205528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20552c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20552Cu;
    {
        const bool branch_taken_0x20552c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20552c) {
            ctx->pc = 0x205530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20552Cu;
            // 0x205530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205544u;
            goto label_205544;
        }
    }
    ctx->pc = 0x205534u;
    // 0x205534: 0xc0e7222  jal         func_39C888
    ctx->pc = 0x205534u;
    SET_GPR_U32(ctx, 31, 0x20553Cu);
    ctx->pc = 0x39C888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C888u, 0x205534u, 0x20553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20553Cu;
label_20553c:
    // 0x20553c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20553cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x205540: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x205540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_205544:
    // 0x205544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205548: 0x3e00008  jr          $ra
    ctx->pc = 0x205548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205548u;
        // 0x20554c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205550u;
}
