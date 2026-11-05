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

// Function: sub_00254CF8
// Address: 0x254cf8 - 0x254d18
void sub_00254CF8_0x254cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254CF8_0x254cf8");
#endif

    switch (ctx->pc) {
        case 0x254d08u: goto label_254d08;
        default: break;
    }

    ctx->pc = 0x254cf8u;

    // 0x254cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254cfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254d00: 0xc062014  jal         func_188050
    ctx->pc = 0x254D00u;
    SET_GPR_U32(ctx, 31, 0x254D08u);
    ctx->pc = 0x254D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254D00u;
    // 0x254d04: 0x8c840fe4  lw          $a0, 0xFE4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188050u, 0x254D00u, 0x254D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D08u;
label_254d08:
    // 0x254d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x254D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D0Cu;
        // 0x254d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254D14u;
    // 0x254d14: 0x0  nop
    ctx->pc = 0x254d14u;
    // NOP
    ctx->pc = 0x254d18u;
}
