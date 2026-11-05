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

// Function: sub_00107548
// Address: 0x107548 - 0x107570
void sub_00107548_0x107548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107548_0x107548");
#endif

    switch (ctx->pc) {
        case 0x107558u: goto label_107558;
        default: break;
    }

    ctx->pc = 0x107548u;

    // 0x107548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10754c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107550: 0xc0f6b96  jal         func_3DAE58
    ctx->pc = 0x107550u;
    SET_GPR_U32(ctx, 31, 0x107558u);
    ctx->pc = 0x3DAE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAE58u, 0x107550u, 0x107558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107558u;
label_107558:
    // 0x107558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10755c: 0x3e00008  jr          $ra
    ctx->pc = 0x10755Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10755Cu;
        // 0x107560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10755Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107564u;
    // 0x107564: 0x0  nop
    ctx->pc = 0x107564u;
    // NOP
    // 0x107568: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x107568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10756c: 0x0  nop
    ctx->pc = 0x10756cu;
    // NOP
    ctx->pc = 0x107570u;
}
