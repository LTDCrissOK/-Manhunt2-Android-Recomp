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

// Function: sub_00326CD0
// Address: 0x326cd0 - 0x326cf8
void sub_00326CD0_0x326cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326CD0_0x326cd0");
#endif

    switch (ctx->pc) {
        case 0x326ce8u: goto label_326ce8;
        default: break;
    }

    ctx->pc = 0x326cd0u;

    // 0x326cd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x326cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326cd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326cd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x326cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326ce0: 0xc0c9aee  jal         func_326BB8
    ctx->pc = 0x326CE0u;
    SET_GPR_U32(ctx, 31, 0x326CE8u);
    ctx->pc = 0x326CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326CE0u;
    // 0x326ce4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326BB8u, 0x326CE0u, 0x326CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326CE8u;
label_326ce8:
    // 0x326ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x326CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CF0u;
        // 0x326cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326CF8u;
}
