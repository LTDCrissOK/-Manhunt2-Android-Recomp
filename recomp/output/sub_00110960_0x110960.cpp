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

// Function: sub_00110960
// Address: 0x110960 - 0x110988
void sub_00110960_0x110960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110960_0x110960");
#endif

    switch (ctx->pc) {
        case 0x11097cu: goto label_11097c;
        default: break;
    }

    ctx->pc = 0x110960u;

    // 0x110960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110968: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x110968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x11096c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11096Cu;
    {
        const bool branch_taken_0x11096c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11096Cu;
        // 0x110970: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11096c) {
            ctx->pc = 0x110980u;
            goto label_110980;
        }
    }
    ctx->pc = 0x110974u;
    // 0x110974: 0xc05fc76  jal         func_17F1D8
    ctx->pc = 0x110974u;
    SET_GPR_U32(ctx, 31, 0x11097Cu);
    ctx->pc = 0x17F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F1D8u, 0x110974u, 0x11097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11097Cu;
label_11097c:
    // 0x11097c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11097cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110980:
    // 0x110980: 0x3e00008  jr          $ra
    ctx->pc = 0x110980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110980u;
        // 0x110984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110988u;
}
