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

// Function: sub_003EC2B8
// Address: 0x3ec2b8 - 0x3ec2d8
void sub_003EC2B8_0x3ec2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC2B8_0x3ec2b8");
#endif

    switch (ctx->pc) {
        case 0x3ec2c8u: goto label_3ec2c8;
        default: break;
    }

    ctx->pc = 0x3ec2b8u;

    // 0x3ec2b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec2bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec2c0: 0xc0fa758  jal         func_3E9D60
    ctx->pc = 0x3EC2C0u;
    SET_GPR_U32(ctx, 31, 0x3EC2C8u);
    ctx->pc = 0x3E9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9D60u, 0x3EC2C0u, 0x3EC2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC2C8u;
label_3ec2c8:
    // 0x3ec2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC2CCu;
        // 0x3ec2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC2D4u;
    // 0x3ec2d4: 0x0  nop
    ctx->pc = 0x3ec2d4u;
    // NOP
    ctx->pc = 0x3ec2d8u;
}
