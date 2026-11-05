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

// Function: sub_002CFD20
// Address: 0x2cfd20 - 0x2cfd48
void sub_002CFD20_0x2cfd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFD20_0x2cfd20");
#endif

    switch (ctx->pc) {
        case 0x2cfd30u: goto label_2cfd30;
        default: break;
    }

    ctx->pc = 0x2cfd20u;

    // 0x2cfd20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cfd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cfd24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfd28: 0xc0b3d94  jal         func_2CF650
    ctx->pc = 0x2CFD28u;
    SET_GPR_U32(ctx, 31, 0x2CFD30u);
    ctx->pc = 0x2CFD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD28u;
    // 0x2cfd2c: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF650u, 0x2CFD28u, 0x2CFD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD30u;
label_2cfd30:
    // 0x2cfd30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfd34: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD34u;
        // 0x2cfd38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFD3Cu;
    // 0x2cfd3c: 0x0  nop
    ctx->pc = 0x2cfd3cu;
    // NOP
    // 0x2cfd40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cfd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cfd44: 0x0  nop
    ctx->pc = 0x2cfd44u;
    // NOP
    ctx->pc = 0x2cfd48u;
}
