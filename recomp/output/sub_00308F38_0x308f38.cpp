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

// Function: sub_00308F38
// Address: 0x308f38 - 0x308f68
void sub_00308F38_0x308f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308F38_0x308f38");
#endif

    switch (ctx->pc) {
        case 0x308f54u: goto label_308f54;
        default: break;
    }

    ctx->pc = 0x308f38u;

    // 0x308f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308f40: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x308f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x308f44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308F44u;
    {
        const bool branch_taken_0x308f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F44u;
        // 0x308f48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f44) {
            ctx->pc = 0x308F58u;
            goto label_308f58;
        }
    }
    ctx->pc = 0x308F4Cu;
    // 0x308f4c: 0xc0c49a2  jal         func_312688
    ctx->pc = 0x308F4Cu;
    SET_GPR_U32(ctx, 31, 0x308F54u);
    ctx->pc = 0x312688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312688u, 0x308F4Cu, 0x308F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F54u;
label_308f54:
    // 0x308f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308f58:
    // 0x308f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x308F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F5Cu;
        // 0x308f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308F64u;
    // 0x308f64: 0x0  nop
    ctx->pc = 0x308f64u;
    // NOP
    ctx->pc = 0x308f68u;
}
