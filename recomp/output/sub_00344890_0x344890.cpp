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

// Function: sub_00344890
// Address: 0x344890 - 0x3448b0
void sub_00344890_0x344890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344890_0x344890");
#endif

    switch (ctx->pc) {
        case 0x3448a4u: goto label_3448a4;
        default: break;
    }

    ctx->pc = 0x344890u;

    // 0x344890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344894: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x344894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34489c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x34489Cu;
    SET_GPR_U32(ctx, 31, 0x3448A4u);
    ctx->pc = 0x3448A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34489Cu;
    // 0x3448a0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34489Cu, 0x3448A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3448A4u;
label_3448a4:
    // 0x3448a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3448a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3448a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3448A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3448ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448A8u;
        // 0x3448ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3448A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3448B0u;
}
