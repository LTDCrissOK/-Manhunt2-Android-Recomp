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

// Function: sub_003DB768
// Address: 0x3db768 - 0x3db788
void sub_003DB768_0x3db768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB768_0x3db768");
#endif

    switch (ctx->pc) {
        case 0x3db778u: goto label_3db778;
        default: break;
    }

    ctx->pc = 0x3db768u;

    // 0x3db768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db76c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db770: 0xc04237c  jal         func_108DF0
    ctx->pc = 0x3DB770u;
    SET_GPR_U32(ctx, 31, 0x3DB778u);
    ctx->pc = 0x108DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108DF0u, 0x3DB770u, 0x3DB778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB778u;
label_3db778:
    // 0x3db778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db77c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB77Cu;
        // 0x3db780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB784u;
    // 0x3db784: 0x0  nop
    ctx->pc = 0x3db784u;
    // NOP
    ctx->pc = 0x3db788u;
}
