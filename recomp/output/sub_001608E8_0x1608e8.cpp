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

// Function: sub_001608E8
// Address: 0x1608e8 - 0x160908
void sub_001608E8_0x1608e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001608E8_0x1608e8");
#endif

    switch (ctx->pc) {
        case 0x1608f8u: goto label_1608f8;
        default: break;
    }

    ctx->pc = 0x1608e8u;

    // 0x1608e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1608e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1608ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1608ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1608f0: 0xc0584a4  jal         func_161290
    ctx->pc = 0x1608F0u;
    SET_GPR_U32(ctx, 31, 0x1608F8u);
    ctx->pc = 0x161290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161290u, 0x1608F0u, 0x1608F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1608F8u;
label_1608f8:
    // 0x1608f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1608f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1608fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1608FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608FCu;
        // 0x160900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1608FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160904u;
    // 0x160904: 0x0  nop
    ctx->pc = 0x160904u;
    // NOP
    ctx->pc = 0x160908u;
}
