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

// Function: sub_00326860
// Address: 0x326860 - 0x326880
void sub_00326860_0x326860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326860_0x326860");
#endif

    switch (ctx->pc) {
        case 0x326874u: goto label_326874;
        default: break;
    }

    ctx->pc = 0x326860u;

    // 0x326860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326864: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x326864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32686c: 0xc0c99ec  jal         func_3267B0
    ctx->pc = 0x32686Cu;
    SET_GPR_U32(ctx, 31, 0x326874u);
    ctx->pc = 0x326870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32686Cu;
    // 0x326870: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3267B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3267B0u, 0x32686Cu, 0x326874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326874u;
label_326874:
    // 0x326874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326878: 0x3e00008  jr          $ra
    ctx->pc = 0x326878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326878u;
        // 0x32687c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326880u;
}
