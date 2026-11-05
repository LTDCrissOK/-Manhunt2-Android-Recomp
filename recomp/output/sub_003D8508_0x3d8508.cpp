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

// Function: sub_003D8508
// Address: 0x3d8508 - 0x3d8528
void sub_003D8508_0x3d8508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8508_0x3d8508");
#endif

    switch (ctx->pc) {
        case 0x3d8518u: goto label_3d8518;
        default: break;
    }

    ctx->pc = 0x3d8508u;

    // 0x3d8508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d850c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d8510: 0xc0f5c8a  jal         func_3D7228
    ctx->pc = 0x3D8510u;
    SET_GPR_U32(ctx, 31, 0x3D8518u);
    ctx->pc = 0x3D7228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7228u, 0x3D8510u, 0x3D8518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8518u;
label_3d8518:
    // 0x3d8518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d851c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D851Cu;
        // 0x3d8520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8524u;
    // 0x3d8524: 0x0  nop
    ctx->pc = 0x3d8524u;
    // NOP
    ctx->pc = 0x3d8528u;
}
