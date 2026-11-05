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

// Function: sub_003EC538
// Address: 0x3ec538 - 0x3ec558
void sub_003EC538_0x3ec538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC538_0x3ec538");
#endif

    switch (ctx->pc) {
        case 0x3ec548u: goto label_3ec548;
        default: break;
    }

    ctx->pc = 0x3ec538u;

    // 0x3ec538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec53c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec540: 0xc0fade8  jal         func_3EB7A0
    ctx->pc = 0x3EC540u;
    SET_GPR_U32(ctx, 31, 0x3EC548u);
    ctx->pc = 0x3EB7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB7A0u, 0x3EC540u, 0x3EC548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC548u;
label_3ec548:
    // 0x3ec548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec54c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC54Cu;
        // 0x3ec550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC554u;
    // 0x3ec554: 0x0  nop
    ctx->pc = 0x3ec554u;
    // NOP
    ctx->pc = 0x3ec558u;
}
