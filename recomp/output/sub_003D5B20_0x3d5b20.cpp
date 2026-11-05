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

// Function: sub_003D5B20
// Address: 0x3d5b20 - 0x3d5b40
void sub_003D5B20_0x3d5b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5B20_0x3d5b20");
#endif

    switch (ctx->pc) {
        case 0x3d5b30u: goto label_3d5b30;
        default: break;
    }

    ctx->pc = 0x3d5b20u;

    // 0x3d5b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d5b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d5b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d5b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d5b28: 0xc0f5306  jal         func_3D4C18
    ctx->pc = 0x3D5B28u;
    SET_GPR_U32(ctx, 31, 0x3D5B30u);
    ctx->pc = 0x3D4C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4C18u, 0x3D5B28u, 0x3D5B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5B30u;
label_3d5b30:
    // 0x3d5b30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d5b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5b38: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B38u;
        // 0x3d5b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5B40u;
}
