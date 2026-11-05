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

// Function: sub_0029EF28
// Address: 0x29ef28 - 0x29ef50
void sub_0029EF28_0x29ef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EF28_0x29ef28");
#endif

    switch (ctx->pc) {
        case 0x29ef40u: goto label_29ef40;
        default: break;
    }

    ctx->pc = 0x29ef28u;

    // 0x29ef28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ef28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ef2c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29ef30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ef30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ef34: 0x24840238  addiu       $a0, $a0, 0x238
    ctx->pc = 0x29ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
    // 0x29ef38: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x29EF38u;
    SET_GPR_U32(ctx, 31, 0x29EF40u);
    ctx->pc = 0x29EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF38u;
    // 0x29ef3c: 0x24a5c550  addiu       $a1, $a1, -0x3AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x29EF38u, 0x29EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF40u;
label_29ef40:
    // 0x29ef40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ef40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ef44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29ef44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29ef48: 0x3e00008  jr          $ra
    ctx->pc = 0x29EF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF48u;
        // 0x29ef4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EF50u;
}
