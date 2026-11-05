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

// Function: sub_0013E288
// Address: 0x13e288 - 0x13e2a8
void sub_0013E288_0x13e288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E288_0x13e288");
#endif

    switch (ctx->pc) {
        case 0x13e298u: goto label_13e298;
        default: break;
    }

    ctx->pc = 0x13e288u;

    // 0x13e288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e290: 0xc04f72c  jal         func_13DCB0
    ctx->pc = 0x13E290u;
    SET_GPR_U32(ctx, 31, 0x13E298u);
    ctx->pc = 0x13E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E290u;
    // 0x13e294: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCB0u, 0x13E290u, 0x13E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E298u;
label_13e298:
    // 0x13e298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e29c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E29Cu;
        // 0x13e2a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E2A4u;
    // 0x13e2a4: 0x0  nop
    ctx->pc = 0x13e2a4u;
    // NOP
    ctx->pc = 0x13e2a8u;
}
