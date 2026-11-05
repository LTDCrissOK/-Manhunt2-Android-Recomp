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

// Function: sub_00165DE8
// Address: 0x165de8 - 0x165e08
void sub_00165DE8_0x165de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165DE8_0x165de8");
#endif

    switch (ctx->pc) {
        case 0x165dfcu: goto label_165dfc;
        default: break;
    }

    ctx->pc = 0x165de8u;

    // 0x165de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165dec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x165decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x165df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165df4: 0xc0599b4  jal         func_1666D0
    ctx->pc = 0x165DF4u;
    SET_GPR_U32(ctx, 31, 0x165DFCu);
    ctx->pc = 0x165DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DF4u;
    // 0x165df8: 0xac820304  sw          $v0, 0x304($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 772), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1666D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1666D0u, 0x165DF4u, 0x165DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DFCu;
label_165dfc:
    // 0x165dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165e00: 0x3e00008  jr          $ra
    ctx->pc = 0x165E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E00u;
        // 0x165e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165E08u;
}
