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

// Function: sub_00111150
// Address: 0x111150 - 0x111178
void sub_00111150_0x111150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111150_0x111150");
#endif

    switch (ctx->pc) {
        case 0x11116cu: goto label_11116c;
        default: break;
    }

    ctx->pc = 0x111150u;

    // 0x111150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111158: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x111158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11115c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11115Cu;
    {
        const bool branch_taken_0x11115c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x111160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11115Cu;
        // 0x111160: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11115c) {
            ctx->pc = 0x111170u;
            goto label_111170;
        }
    }
    ctx->pc = 0x111164u;
    // 0x111164: 0xc05dff4  jal         func_177FD0
    ctx->pc = 0x111164u;
    SET_GPR_U32(ctx, 31, 0x11116Cu);
    ctx->pc = 0x177FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177FD0u, 0x111164u, 0x11116Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11116Cu;
label_11116c:
    // 0x11116c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11116cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111170:
    // 0x111170: 0x3e00008  jr          $ra
    ctx->pc = 0x111170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111170u;
        // 0x111174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111178u;
}
