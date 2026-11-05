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

// Function: sub_00110560
// Address: 0x110560 - 0x110590
void sub_00110560_0x110560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110560_0x110560");
#endif

    switch (ctx->pc) {
        case 0x11057cu: goto label_11057c;
        default: break;
    }

    ctx->pc = 0x110560u;

    // 0x110560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110568: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x110568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11056c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11056Cu;
    {
        const bool branch_taken_0x11056c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11056Cu;
        // 0x110570: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11056c) {
            ctx->pc = 0x110584u;
            goto label_110584;
        }
    }
    ctx->pc = 0x110574u;
    // 0x110574: 0xc05de4c  jal         func_177930
    ctx->pc = 0x110574u;
    SET_GPR_U32(ctx, 31, 0x11057Cu);
    ctx->pc = 0x177930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177930u, 0x110574u, 0x11057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11057Cu;
label_11057c:
    // 0x11057c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11057Cu;
    {
        const bool branch_taken_0x11057c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11057Cu;
        // 0x110580: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11057c) {
            ctx->pc = 0x110588u;
            goto label_110588;
        }
    }
    ctx->pc = 0x110584u;
label_110584:
    // 0x110584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110588:
    // 0x110588: 0x3e00008  jr          $ra
    ctx->pc = 0x110588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110588u;
        // 0x11058c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110590u;
}
