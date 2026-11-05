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

// Function: sub_003DE708
// Address: 0x3de708 - 0x3de728
void sub_003DE708_0x3de708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE708_0x3de708");
#endif

    switch (ctx->pc) {
        case 0x3de718u: goto label_3de718;
        default: break;
    }

    ctx->pc = 0x3de708u;

    // 0x3de708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3de708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3de70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3de70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3de710: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x3DE710u;
    SET_GPR_U32(ctx, 31, 0x3DE718u);
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x3DE710u, 0x3DE718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE718u;
label_3de718:
    // 0x3de718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3de718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de71c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE71Cu;
        // 0x3de720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE724u;
    // 0x3de724: 0x0  nop
    ctx->pc = 0x3de724u;
    // NOP
    ctx->pc = 0x3de728u;
}
