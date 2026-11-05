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

// Function: sub_00116C20
// Address: 0x116c20 - 0x116c40
void sub_00116C20_0x116c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116C20_0x116c20");
#endif

    switch (ctx->pc) {
        case 0x116c30u: goto label_116c30;
        default: break;
    }

    ctx->pc = 0x116c20u;

    // 0x116c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116c28: 0xc089490  jal         func_225240
    ctx->pc = 0x116C28u;
    SET_GPR_U32(ctx, 31, 0x116C30u);
    ctx->pc = 0x116C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C28u;
    // 0x116c2c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x116C28u, 0x116C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C30u;
label_116c30:
    // 0x116c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116c34: 0x3e00008  jr          $ra
    ctx->pc = 0x116C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C34u;
        // 0x116c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116C3Cu;
    // 0x116c3c: 0x0  nop
    ctx->pc = 0x116c3cu;
    // NOP
    ctx->pc = 0x116c40u;
}
