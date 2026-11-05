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

// Function: sub_00122D90
// Address: 0x122d90 - 0x122db8
void sub_00122D90_0x122d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122D90_0x122d90");
#endif

    switch (ctx->pc) {
        case 0x122da0u: goto label_122da0;
        default: break;
    }

    ctx->pc = 0x122d90u;

    // 0x122d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x122d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x122d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122d98: 0xc048b6e  jal         func_122DB8
    ctx->pc = 0x122D98u;
    SET_GPR_U32(ctx, 31, 0x122DA0u);
    ctx->pc = 0x122D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D98u;
    // 0x122d9c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122DB8u, 0x122D98u, 0x122DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DA0u;
label_122da0:
    // 0x122da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122da4: 0x3e00008  jr          $ra
    ctx->pc = 0x122DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DA4u;
        // 0x122da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122DACu;
    // 0x122dac: 0x0  nop
    ctx->pc = 0x122dacu;
    // NOP
    // 0x122db0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x122db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x122db4: 0x0  nop
    ctx->pc = 0x122db4u;
    // NOP
    ctx->pc = 0x122db8u;
}
