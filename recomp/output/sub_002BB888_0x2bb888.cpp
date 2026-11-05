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

// Function: sub_002BB888
// Address: 0x2bb888 - 0x2bb8a8
void sub_002BB888_0x2bb888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB888_0x2bb888");
#endif

    switch (ctx->pc) {
        case 0x2bb89cu: goto label_2bb89c;
        default: break;
    }

    ctx->pc = 0x2bb888u;

    // 0x2bb888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bb888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bb88c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bb88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bb890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bb890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bb894: 0xc0b09aa  jal         func_2C26A8
    ctx->pc = 0x2BB894u;
    SET_GPR_U32(ctx, 31, 0x2BB89Cu);
    ctx->pc = 0x2BB898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB894u;
    // 0x2bb898: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C26A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C26A8u, 0x2BB894u, 0x2BB89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB89Cu;
label_2bb89c:
    // 0x2bb89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB8A0u;
        // 0x2bb8a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB8A8u;
}
