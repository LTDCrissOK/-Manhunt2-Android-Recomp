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

// Function: sub_00132DB0
// Address: 0x132db0 - 0x132dd8
void sub_00132DB0_0x132db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132DB0_0x132db0");
#endif

    switch (ctx->pc) {
        case 0x132dccu: goto label_132dcc;
        default: break;
    }

    ctx->pc = 0x132db0u;

    // 0x132db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132db8: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x132db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x132dbc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132DBCu;
    {
        const bool branch_taken_0x132dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DBCu;
        // 0x132dc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132dbc) {
            ctx->pc = 0x132DD0u;
            goto label_132dd0;
        }
    }
    ctx->pc = 0x132DC4u;
    // 0x132dc4: 0xc04d078  jal         func_1341E0
    ctx->pc = 0x132DC4u;
    SET_GPR_U32(ctx, 31, 0x132DCCu);
    ctx->pc = 0x1341E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341E0u, 0x132DC4u, 0x132DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DCCu;
label_132dcc:
    // 0x132dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132dd0:
    // 0x132dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x132DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DD0u;
        // 0x132dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132DD8u;
}
