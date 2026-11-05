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

// Function: sub_00217670
// Address: 0x217670 - 0x217698
void sub_00217670_0x217670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217670_0x217670");
#endif

    switch (ctx->pc) {
        case 0x217688u: goto label_217688;
        default: break;
    }

    ctx->pc = 0x217670u;

    // 0x217670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217674: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x217674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21767c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x21767cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x217680: 0xc0c4898  jal         func_312260
    ctx->pc = 0x217680u;
    SET_GPR_U32(ctx, 31, 0x217688u);
    ctx->pc = 0x217684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217680u;
    // 0x217684: 0x24a57670  addiu       $a1, $a1, 0x7670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x217680u, 0x217688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217688u;
label_217688:
    // 0x217688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21768c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217690: 0x3e00008  jr          $ra
    ctx->pc = 0x217690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217690u;
        // 0x217694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217698u;
}
