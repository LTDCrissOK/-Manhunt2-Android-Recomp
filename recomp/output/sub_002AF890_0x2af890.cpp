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

// Function: sub_002AF890
// Address: 0x2af890 - 0x2af8b0
void sub_002AF890_0x2af890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF890_0x2af890");
#endif

    switch (ctx->pc) {
        case 0x2af8a4u: goto label_2af8a4;
        default: break;
    }

    ctx->pc = 0x2af890u;

    // 0x2af890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af894: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2af894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2af898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af89c: 0xc0abe4c  jal         func_2AF930
    ctx->pc = 0x2AF89Cu;
    SET_GPR_U32(ctx, 31, 0x2AF8A4u);
    ctx->pc = 0x2AF8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF89Cu;
    // 0x2af8a0: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF930u, 0x2AF89Cu, 0x2AF8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8A4u;
label_2af8a4:
    // 0x2af8a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8A8u;
        // 0x2af8ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF8B0u;
}
