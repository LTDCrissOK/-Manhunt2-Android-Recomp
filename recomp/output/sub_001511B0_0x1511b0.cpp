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

// Function: sub_001511B0
// Address: 0x1511b0 - 0x1511d0
void sub_001511B0_0x1511b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001511B0_0x1511b0");
#endif

    switch (ctx->pc) {
        case 0x1511c4u: goto label_1511c4;
        default: break;
    }

    ctx->pc = 0x1511b0u;

    // 0x1511b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1511b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1511b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1511b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1511b8: 0xac800914  sw          $zero, 0x914($a0)
    ctx->pc = 0x1511b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2324), GPR_U32(ctx, 0));
    // 0x1511bc: 0xc053b44  jal         func_14ED10
    ctx->pc = 0x1511BCu;
    SET_GPR_U32(ctx, 31, 0x1511C4u);
    ctx->pc = 0x1511C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1511BCu;
    // 0x1511c0: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ED10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ED10u, 0x1511BCu, 0x1511C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1511C4u;
label_1511c4:
    // 0x1511c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1511c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1511c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1511C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1511CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511C8u;
        // 0x1511cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1511C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1511D0u;
}
