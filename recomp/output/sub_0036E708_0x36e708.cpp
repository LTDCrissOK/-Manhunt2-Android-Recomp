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

// Function: sub_0036E708
// Address: 0x36e708 - 0x36e728
void sub_0036E708_0x36e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E708_0x36e708");
#endif

    switch (ctx->pc) {
        case 0x36e718u: goto label_36e718;
        default: break;
    }

    ctx->pc = 0x36e708u;

    // 0x36e708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e710: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x36E710u;
    SET_GPR_U32(ctx, 31, 0x36E718u);
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x36E710u, 0x36E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E718u;
label_36e718:
    // 0x36e718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e71c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E71Cu;
        // 0x36e720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E724u;
    // 0x36e724: 0x0  nop
    ctx->pc = 0x36e724u;
    // NOP
    ctx->pc = 0x36e728u;
}
