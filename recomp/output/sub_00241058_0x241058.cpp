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

// Function: sub_00241058
// Address: 0x241058 - 0x241078
void sub_00241058_0x241058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241058_0x241058");
#endif

    switch (ctx->pc) {
        case 0x241068u: goto label_241068;
        default: break;
    }

    ctx->pc = 0x241058u;

    // 0x241058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24105c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24105cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241060: 0xc092f3e  jal         func_24BCF8
    ctx->pc = 0x241060u;
    SET_GPR_U32(ctx, 31, 0x241068u);
    ctx->pc = 0x24BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BCF8u, 0x241060u, 0x241068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241068u;
label_241068:
    // 0x241068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24106c: 0x3e00008  jr          $ra
    ctx->pc = 0x24106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24106Cu;
        // 0x241070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24106Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241074u;
    // 0x241074: 0x0  nop
    ctx->pc = 0x241074u;
    // NOP
    ctx->pc = 0x241078u;
}
