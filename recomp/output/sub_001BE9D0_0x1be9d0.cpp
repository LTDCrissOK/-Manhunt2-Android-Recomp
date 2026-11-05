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

// Function: sub_001BE9D0
// Address: 0x1be9d0 - 0x1be9f8
void sub_001BE9D0_0x1be9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE9D0_0x1be9d0");
#endif

    switch (ctx->pc) {
        case 0x1be9e8u: goto label_1be9e8;
        default: break;
    }

    ctx->pc = 0x1be9d0u;

    // 0x1be9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be9d4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1be9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1be9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be9dc: 0x8c8501b0  lw          $a1, 0x1B0($a0)
    ctx->pc = 0x1be9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x1be9e0: 0xc0f62da  jal         func_3D8B68
    ctx->pc = 0x1BE9E0u;
    SET_GPR_U32(ctx, 31, 0x1BE9E8u);
    ctx->pc = 0x1BE9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9E0u;
    // 0x1be9e4: 0x2444f140  addiu       $a0, $v0, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B68u, 0x1BE9E0u, 0x1BE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9E8u;
label_1be9e8:
    // 0x1be9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9ECu;
        // 0x1be9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE9F4u;
    // 0x1be9f4: 0x0  nop
    ctx->pc = 0x1be9f4u;
    // NOP
    ctx->pc = 0x1be9f8u;
}
