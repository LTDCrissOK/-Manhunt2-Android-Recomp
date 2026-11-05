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

// Function: sub_00110A08
// Address: 0x110a08 - 0x110a38
void sub_00110A08_0x110a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110A08_0x110a08");
#endif

    switch (ctx->pc) {
        case 0x110a24u: goto label_110a24;
        default: break;
    }

    ctx->pc = 0x110a08u;

    // 0x110a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110a10: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x110a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x110a14: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110A14u;
    {
        const bool branch_taken_0x110a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A14u;
        // 0x110a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a14) {
            ctx->pc = 0x110A2Cu;
            goto label_110a2c;
        }
    }
    ctx->pc = 0x110A1Cu;
    // 0x110a1c: 0xc05fc9e  jal         func_17F278
    ctx->pc = 0x110A1Cu;
    SET_GPR_U32(ctx, 31, 0x110A24u);
    ctx->pc = 0x17F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F278u, 0x110A1Cu, 0x110A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A24u;
label_110a24:
    // 0x110a24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110A24u;
    {
        const bool branch_taken_0x110a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A24u;
        // 0x110a28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a24) {
            ctx->pc = 0x110A30u;
            goto label_110a30;
        }
    }
    ctx->pc = 0x110A2Cu;
label_110a2c:
    // 0x110a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110a30:
    // 0x110a30: 0x3e00008  jr          $ra
    ctx->pc = 0x110A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A30u;
        // 0x110a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110A38u;
}
