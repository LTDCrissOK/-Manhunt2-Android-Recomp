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

// Function: sub_001073F8
// Address: 0x1073f8 - 0x107418
void sub_001073F8_0x1073f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001073F8_0x1073f8");
#endif

    switch (ctx->pc) {
        case 0x107408u: goto label_107408;
        default: break;
    }

    ctx->pc = 0x1073f8u;

    // 0x1073f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1073f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1073fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1073fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107400: 0xc0f6b2c  jal         func_3DACB0
    ctx->pc = 0x107400u;
    SET_GPR_U32(ctx, 31, 0x107408u);
    ctx->pc = 0x3DACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DACB0u, 0x107400u, 0x107408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107408u;
label_107408:
    // 0x107408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10740c: 0x3e00008  jr          $ra
    ctx->pc = 0x10740Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10740Cu;
        // 0x107410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10740Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107414u;
    // 0x107414: 0x0  nop
    ctx->pc = 0x107414u;
    // NOP
    ctx->pc = 0x107418u;
}
