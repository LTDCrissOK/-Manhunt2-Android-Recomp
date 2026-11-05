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

// Function: sub_002489A0
// Address: 0x2489a0 - 0x2489c0
void sub_002489A0_0x2489a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002489A0_0x2489a0");
#endif

    switch (ctx->pc) {
        case 0x2489b4u: goto label_2489b4;
        default: break;
    }

    ctx->pc = 0x2489a0u;

    // 0x2489a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2489a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2489a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2489a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2489a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2489a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2489ac: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x2489ACu;
    SET_GPR_U32(ctx, 31, 0x2489B4u);
    ctx->pc = 0x2489B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489ACu;
    // 0x2489b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x2489ACu, 0x2489B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489B4u;
label_2489b4:
    // 0x2489b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2489b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2489b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2489B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2489BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489B8u;
        // 0x2489bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2489B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2489C0u;
}
