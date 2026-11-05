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

// Function: sub_002410F8
// Address: 0x2410f8 - 0x241118
void sub_002410F8_0x2410f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002410F8_0x2410f8");
#endif

    switch (ctx->pc) {
        case 0x241108u: goto label_241108;
        default: break;
    }

    ctx->pc = 0x2410f8u;

    // 0x2410f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2410f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2410fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2410fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241100: 0xc0921d6  jal         func_248758
    ctx->pc = 0x241100u;
    SET_GPR_U32(ctx, 31, 0x241108u);
    ctx->pc = 0x248758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248758u, 0x241100u, 0x241108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241108u;
label_241108:
    // 0x241108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24110c: 0x3e00008  jr          $ra
    ctx->pc = 0x24110Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24110Cu;
        // 0x241110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24110Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241114u;
    // 0x241114: 0x0  nop
    ctx->pc = 0x241114u;
    // NOP
    ctx->pc = 0x241118u;
}
