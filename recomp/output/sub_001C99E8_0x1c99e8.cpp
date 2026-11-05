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

// Function: sub_001C99E8
// Address: 0x1c99e8 - 0x1c9a08
void sub_001C99E8_0x1c99e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C99E8_0x1c99e8");
#endif

    switch (ctx->pc) {
        case 0x1c99fcu: goto label_1c99fc;
        default: break;
    }

    ctx->pc = 0x1c99e8u;

    // 0x1c99e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c99e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c99ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c99ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c99f0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1c99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c99f4: 0xc0d9108  jal         func_364420
    ctx->pc = 0x1C99F4u;
    SET_GPR_U32(ctx, 31, 0x1C99FCu);
    ctx->pc = 0x1C99F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99F4u;
    // 0x1c99f8: 0x8c440274  lw          $a0, 0x274($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364420u, 0x1C99F4u, 0x1C99FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99FCu;
label_1c99fc:
    // 0x1c99fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c99fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a00: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A00u;
        // 0x1c9a04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9A08u;
}
