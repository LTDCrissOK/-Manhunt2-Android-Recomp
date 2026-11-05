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

// Function: sub_0035CFD0
// Address: 0x35cfd0 - 0x35cff0
void sub_0035CFD0_0x35cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CFD0_0x35cfd0");
#endif

    switch (ctx->pc) {
        case 0x35cfe0u: goto label_35cfe0;
        default: break;
    }

    ctx->pc = 0x35cfd0u;

    // 0x35cfd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35cfd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35cfd8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x35CFD8u;
    SET_GPR_U32(ctx, 31, 0x35CFE0u);
    ctx->pc = 0x35CFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CFD8u;
    // 0x35cfdc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x35CFD8u, 0x35CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CFE0u;
label_35cfe0:
    // 0x35cfe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35cfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x35CFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CFE4u;
        // 0x35cfe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CFECu;
    // 0x35cfec: 0x0  nop
    ctx->pc = 0x35cfecu;
    // NOP
    ctx->pc = 0x35cff0u;
}
