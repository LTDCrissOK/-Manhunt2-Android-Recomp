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

// Function: sub_00308870
// Address: 0x308870 - 0x308898
void sub_00308870_0x308870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308870_0x308870");
#endif

    switch (ctx->pc) {
        case 0x308870u: goto label_308870;
        case 0x308874u: goto label_308874;
        case 0x308878u: goto label_308878;
        case 0x30887cu: goto label_30887c;
        case 0x308880u: goto label_308880;
        case 0x308884u: goto label_308884;
        case 0x308888u: goto label_308888;
        case 0x30888cu: goto label_30888c;
        case 0x308890u: goto label_308890;
        case 0x308894u: goto label_308894;
        default: break;
    }

    ctx->pc = 0x308870u;

label_308870:
    // 0x308870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_308874:
    // 0x308874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_308878:
    // 0x308878: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x308878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_30887c:
    // 0x30887c: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x30887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_308880:
    // 0x308880: 0x40f809  jalr        $v0
label_308884:
    if (ctx->pc == 0x308884u) {
        ctx->pc = 0x308888u;
        goto label_308888;
    }
    ctx->pc = 0x308880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308888u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308880u, 0x308888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308888u;
label_308888:
    // 0x308888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30888c:
    // 0x30888c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308890:
    // 0x308890: 0x3e00008  jr          $ra
label_308894:
    if (ctx->pc == 0x308894u) {
        ctx->pc = 0x308894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308890u;
        // 0x308894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308898u;
        goto label_fallthrough_0x308890;
    }
    ctx->pc = 0x308890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308890u;
        // 0x308894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x308890:
    ctx->pc = 0x308898u;
}
