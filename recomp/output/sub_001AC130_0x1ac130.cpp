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

// Function: sub_001AC130
// Address: 0x1ac130 - 0x1ac150
void sub_001AC130_0x1ac130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC130_0x1ac130");
#endif

    switch (ctx->pc) {
        case 0x1ac140u: goto label_1ac140;
        default: break;
    }

    ctx->pc = 0x1ac130u;

    // 0x1ac130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac138: 0xc092a7c  jal         func_24A9F0
    ctx->pc = 0x1AC138u;
    SET_GPR_U32(ctx, 31, 0x1AC140u);
    ctx->pc = 0x24A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A9F0u, 0x1AC138u, 0x1AC140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC140u;
label_1ac140:
    // 0x1ac140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac144: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC144u;
        // 0x1ac148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC14Cu;
    // 0x1ac14c: 0x0  nop
    ctx->pc = 0x1ac14cu;
    // NOP
    ctx->pc = 0x1ac150u;
}
