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

// Function: sub_003EC2F8
// Address: 0x3ec2f8 - 0x3ec318
void sub_003EC2F8_0x3ec2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC2F8_0x3ec2f8");
#endif

    switch (ctx->pc) {
        case 0x3ec308u: goto label_3ec308;
        default: break;
    }

    ctx->pc = 0x3ec2f8u;

    // 0x3ec2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec2fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec300: 0xc0fa800  jal         func_3EA000
    ctx->pc = 0x3EC300u;
    SET_GPR_U32(ctx, 31, 0x3EC308u);
    ctx->pc = 0x3EA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA000u, 0x3EC300u, 0x3EC308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC308u;
label_3ec308:
    // 0x3ec308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec30c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC30Cu;
        // 0x3ec310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC314u;
    // 0x3ec314: 0x0  nop
    ctx->pc = 0x3ec314u;
    // NOP
    ctx->pc = 0x3ec318u;
}
