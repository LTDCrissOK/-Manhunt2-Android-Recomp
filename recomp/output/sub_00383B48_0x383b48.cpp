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

// Function: sub_00383B48
// Address: 0x383b48 - 0x383b78
void sub_00383B48_0x383b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383B48_0x383b48");
#endif

    switch (ctx->pc) {
        case 0x383b74u: goto label_383b74;
        default: break;
    }

    ctx->pc = 0x383b48u;

    // 0x383b48: 0x8f828038  lw          $v0, -0x7FC8($gp)
    ctx->pc = 0x383b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934584)));
    // 0x383b4c: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x383b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x383b50: 0x2529ce60  addiu       $t1, $t1, -0x31A0
    ctx->pc = 0x383b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954592));
    // 0x383b54: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x383b54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x383b58: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x383b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x383b5c: 0x2508de60  addiu       $t0, $t0, -0x21A0
    ctx->pc = 0x383b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958688));
    // 0x383b60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x383b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383b64: 0x8f83803c  lw          $v1, -0x7FC4($gp)
    ctx->pc = 0x383b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934588)));
    // 0x383b68: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x383b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x383b6c: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x383b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x383b70: 0x3e00008  jr          $ra
label_383b74:
    if (ctx->pc == 0x383B74u) {
        ctx->pc = 0x383B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B70u;
        // 0x383b74: 0xace80000  sw          $t0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383B78u;
        goto label_fallthrough_0x383b70;
    }
    ctx->pc = 0x383B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B70u;
        // 0x383b74: 0xace80000  sw          $t0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x383b70:
    ctx->pc = 0x383B78u;
}
