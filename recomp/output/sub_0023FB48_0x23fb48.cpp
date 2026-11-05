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

// Function: sub_0023FB48
// Address: 0x23fb48 - 0x23fb78
void sub_0023FB48_0x23fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FB48_0x23fb48");
#endif

    ctx->pc = 0x23fb48u;

    // 0x23fb48: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FB48u;
    {
        const bool branch_taken_0x23fb48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fb48) {
            ctx->pc = 0x23FB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FB48u;
            // 0x23fb4c: 0x8c82036c  lw          $v0, 0x36C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FB64u;
            goto label_23fb64;
        }
    }
    ctx->pc = 0x23FB50u;
    // 0x23fb50: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x23fb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x23fb54: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x23fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x23fb58: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23fb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x23fb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB5Cu;
        // 0x23fb60: 0xac82036c  sw          $v0, 0x36C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FB64u;
label_23fb64:
    // 0x23fb64: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x23fb64u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x23fb68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23fb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23fb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB6Cu;
        // 0x23fb70: 0xac82036c  sw          $v0, 0x36C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FB74u;
    // 0x23fb74: 0x0  nop
    ctx->pc = 0x23fb74u;
    // NOP
    ctx->pc = 0x23fb78u;
}
