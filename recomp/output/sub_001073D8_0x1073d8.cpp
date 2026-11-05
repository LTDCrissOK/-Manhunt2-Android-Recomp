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

// Function: sub_001073D8
// Address: 0x1073d8 - 0x1073f8
void sub_001073D8_0x1073d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001073D8_0x1073d8");
#endif

    switch (ctx->pc) {
        case 0x1073e8u: goto label_1073e8;
        default: break;
    }

    ctx->pc = 0x1073d8u;

    // 0x1073d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1073d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1073dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1073dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1073e0: 0xc0f6b14  jal         func_3DAC50
    ctx->pc = 0x1073E0u;
    SET_GPR_U32(ctx, 31, 0x1073E8u);
    ctx->pc = 0x3DAC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAC50u, 0x1073E0u, 0x1073E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073E8u;
label_1073e8:
    // 0x1073e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1073e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1073ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1073ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1073F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073ECu;
        // 0x1073f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1073ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1073F4u;
    // 0x1073f4: 0x0  nop
    ctx->pc = 0x1073f4u;
    // NOP
    ctx->pc = 0x1073f8u;
}
