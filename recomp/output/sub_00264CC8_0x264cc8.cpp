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

// Function: sub_00264CC8
// Address: 0x264cc8 - 0x264cf0
void sub_00264CC8_0x264cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264CC8_0x264cc8");
#endif

    switch (ctx->pc) {
        case 0x264ce4u: goto label_264ce4;
        default: break;
    }

    ctx->pc = 0x264cc8u;

    // 0x264cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264ccc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x264cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x264cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264cd4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x264cd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264cd8: 0x244224b0  addiu       $v0, $v0, 0x24B0
    ctx->pc = 0x264cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9392));
    // 0x264cdc: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x264CDCu;
    SET_GPR_U32(ctx, 31, 0x264CE4u);
    ctx->pc = 0x264CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264CDCu;
    // 0x264ce0: 0xac620218  sw          $v0, 0x218($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x264CDCu, 0x264CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264CE4u;
label_264ce4:
    // 0x264ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x264CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CE8u;
        // 0x264cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264CF0u;
}
