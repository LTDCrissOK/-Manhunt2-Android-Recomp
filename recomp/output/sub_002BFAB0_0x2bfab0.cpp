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

// Function: sub_002BFAB0
// Address: 0x2bfab0 - 0x2bfad0
void sub_002BFAB0_0x2bfab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFAB0_0x2bfab0");
#endif

    switch (ctx->pc) {
        case 0x2bfac4u: goto label_2bfac4;
        default: break;
    }

    ctx->pc = 0x2bfab0u;

    // 0x2bfab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfab4: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x2bfab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2bfab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bfab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bfabc: 0xc0b048a  jal         func_2C1228
    ctx->pc = 0x2BFABCu;
    SET_GPR_U32(ctx, 31, 0x2BFAC4u);
    ctx->pc = 0x2BFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFABCu;
    // 0x2bfac0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1228u, 0x2BFABCu, 0x2BFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAC4u;
label_2bfac4:
    // 0x2bfac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bfac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAC8u;
        // 0x2bfacc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFAD0u;
}
