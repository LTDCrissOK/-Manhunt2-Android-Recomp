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

// Function: sub_001DA6D0
// Address: 0x1da6d0 - 0x1da6f8
void sub_001DA6D0_0x1da6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA6D0_0x1da6d0");
#endif

    switch (ctx->pc) {
        case 0x1da6ecu: goto label_1da6ec;
        default: break;
    }

    ctx->pc = 0x1da6d0u;

    // 0x1da6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da6d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1da6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1da6d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da6dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1da6dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6e0: 0x244214c8  addiu       $v0, $v0, 0x14C8
    ctx->pc = 0x1da6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5320));
    // 0x1da6e4: 0xc07645e  jal         func_1D9178
    ctx->pc = 0x1DA6E4u;
    SET_GPR_U32(ctx, 31, 0x1DA6ECu);
    ctx->pc = 0x1DA6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA6E4u;
    // 0x1da6e8: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9178u, 0x1DA6E4u, 0x1DA6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6ECu;
label_1da6ec:
    // 0x1da6ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6F0u;
        // 0x1da6f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA6F8u;
}
