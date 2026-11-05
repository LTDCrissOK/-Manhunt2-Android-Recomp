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

// Function: sub_00111210
// Address: 0x111210 - 0x111238
void sub_00111210_0x111210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111210_0x111210");
#endif

    switch (ctx->pc) {
        case 0x11122cu: goto label_11122c;
        default: break;
    }

    ctx->pc = 0x111210u;

    // 0x111210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111218: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x111218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11121c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11121Cu;
    {
        const bool branch_taken_0x11121c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x111220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11121Cu;
        // 0x111220: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11121c) {
            ctx->pc = 0x111230u;
            goto label_111230;
        }
    }
    ctx->pc = 0x111224u;
    // 0x111224: 0xc05df9c  jal         func_177E70
    ctx->pc = 0x111224u;
    SET_GPR_U32(ctx, 31, 0x11122Cu);
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x111224u, 0x11122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11122Cu;
label_11122c:
    // 0x11122c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11122cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111230:
    // 0x111230: 0x3e00008  jr          $ra
    ctx->pc = 0x111230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111230u;
        // 0x111234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111238u;
}
