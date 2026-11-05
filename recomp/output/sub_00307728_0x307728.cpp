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

// Function: sub_00307728
// Address: 0x307728 - 0x307748
void sub_00307728_0x307728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307728_0x307728");
#endif

    switch (ctx->pc) {
        case 0x307738u: goto label_307738;
        default: break;
    }

    ctx->pc = 0x307728u;

    // 0x307728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30772c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30772cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307730: 0xc091342  jal         func_244D08
    ctx->pc = 0x307730u;
    SET_GPR_U32(ctx, 31, 0x307738u);
    ctx->pc = 0x244D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244D08u, 0x307730u, 0x307738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307738u;
label_307738:
    // 0x307738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30773c: 0x3e00008  jr          $ra
    ctx->pc = 0x30773Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30773Cu;
        // 0x307740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30773Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307744u;
    // 0x307744: 0x0  nop
    ctx->pc = 0x307744u;
    // NOP
    ctx->pc = 0x307748u;
}
