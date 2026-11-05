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

// Function: sub_00177588
// Address: 0x177588 - 0x1775a8
void sub_00177588_0x177588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177588_0x177588");
#endif

    switch (ctx->pc) {
        case 0x177598u: goto label_177598;
        default: break;
    }

    ctx->pc = 0x177588u;

    // 0x177588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17758c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17758cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177590: 0xc05e0e2  jal         func_178388
    ctx->pc = 0x177590u;
    SET_GPR_U32(ctx, 31, 0x177598u);
    ctx->pc = 0x178388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178388u, 0x177590u, 0x177598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177598u;
label_177598:
    // 0x177598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17759c: 0x3e00008  jr          $ra
    ctx->pc = 0x17759Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1775A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17759Cu;
        // 0x1775a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17759Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1775A4u;
    // 0x1775a4: 0x0  nop
    ctx->pc = 0x1775a4u;
    // NOP
    ctx->pc = 0x1775a8u;
}
