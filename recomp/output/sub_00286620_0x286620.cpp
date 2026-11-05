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

// Function: sub_00286620
// Address: 0x286620 - 0x286650
void sub_00286620_0x286620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286620_0x286620");
#endif

    switch (ctx->pc) {
        case 0x286630u: goto label_286630;
        case 0x286638u: goto label_286638;
        case 0x286644u: goto label_286644;
        default: break;
    }

    ctx->pc = 0x286620u;

    // 0x286620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x286620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x286624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x286628: 0xc0a1b56  jal         func_286D58
    ctx->pc = 0x286628u;
    SET_GPR_U32(ctx, 31, 0x286630u);
    ctx->pc = 0x286D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D58u, 0x286628u, 0x286630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286630u;
label_286630:
    // 0x286630: 0xc0a1b4e  jal         func_286D38
    ctx->pc = 0x286630u;
    SET_GPR_U32(ctx, 31, 0x286638u);
    ctx->pc = 0x286634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286630u;
    // 0x286634: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D38u, 0x286630u, 0x286638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286638u;
label_286638:
    // 0x286638: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x286638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x28663c: 0xc0a0540  jal         func_281500
    ctx->pc = 0x28663Cu;
    SET_GPR_U32(ctx, 31, 0x286644u);
    ctx->pc = 0x286640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28663Cu;
    // 0x286640: 0x24841158  addiu       $a0, $a0, 0x1158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281500u, 0x28663Cu, 0x286644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286644u;
label_286644:
    // 0x286644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286648: 0x3e00008  jr          $ra
    ctx->pc = 0x286648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286648u;
        // 0x28664c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286650u;
}
