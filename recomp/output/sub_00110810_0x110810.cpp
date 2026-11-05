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

// Function: sub_00110810
// Address: 0x110810 - 0x110840
void sub_00110810_0x110810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110810_0x110810");
#endif

    switch (ctx->pc) {
        case 0x11082cu: goto label_11082c;
        default: break;
    }

    ctx->pc = 0x110810u;

    // 0x110810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110818: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x110818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11081c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11081Cu;
    {
        const bool branch_taken_0x11081c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11081Cu;
        // 0x110820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11081c) {
            ctx->pc = 0x110834u;
            goto label_110834;
        }
    }
    ctx->pc = 0x110824u;
    // 0x110824: 0xc05df6c  jal         func_177DB0
    ctx->pc = 0x110824u;
    SET_GPR_U32(ctx, 31, 0x11082Cu);
    ctx->pc = 0x177DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177DB0u, 0x110824u, 0x11082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11082Cu;
label_11082c:
    // 0x11082c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11082Cu;
    {
        const bool branch_taken_0x11082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11082Cu;
        // 0x110830: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11082c) {
            ctx->pc = 0x110838u;
            goto label_110838;
        }
    }
    ctx->pc = 0x110834u;
label_110834:
    // 0x110834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110838:
    // 0x110838: 0x3e00008  jr          $ra
    ctx->pc = 0x110838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110838u;
        // 0x11083c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110840u;
}
