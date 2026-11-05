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

// Function: sub_002BFA30
// Address: 0x2bfa30 - 0x2bfa50
void sub_002BFA30_0x2bfa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFA30_0x2bfa30");
#endif

    switch (ctx->pc) {
        case 0x2bfa44u: goto label_2bfa44;
        default: break;
    }

    ctx->pc = 0x2bfa30u;

    // 0x2bfa30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfa34: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x2bfa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2bfa38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bfa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bfa3c: 0xc0b0370  jal         func_2C0DC0
    ctx->pc = 0x2BFA3Cu;
    SET_GPR_U32(ctx, 31, 0x2BFA44u);
    ctx->pc = 0x2BFA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA3Cu;
    // 0x2bfa40: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DC0u, 0x2BFA3Cu, 0x2BFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA44u;
label_2bfa44:
    // 0x2bfa44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bfa44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfa48: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA48u;
        // 0x2bfa4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFA50u;
}
