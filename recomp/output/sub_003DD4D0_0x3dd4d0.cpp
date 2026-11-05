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

// Function: sub_003DD4D0
// Address: 0x3dd4d0 - 0x3dd4f8
void sub_003DD4D0_0x3dd4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD4D0_0x3dd4d0");
#endif

    ctx->pc = 0x3dd4d0u;

    // 0x3dd4d0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DD4D0u;
    {
        const bool branch_taken_0x3dd4d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4D0u;
        // 0x3dd4d4: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd4d0) {
            ctx->pc = 0x3DD4E4u;
            goto label_3dd4e4;
        }
    }
    ctx->pc = 0x3DD4D8u;
    // 0x3dd4d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3dd4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3dd4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4DCu;
        // 0x3dd4e0: 0xac8200a8  sw          $v0, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD4E4u;
label_3dd4e4:
    // 0x3dd4e4: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x3dd4e4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x3dd4e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3dd4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3dd4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4ECu;
        // 0x3dd4f0: 0xac8200a8  sw          $v0, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD4F4u;
    // 0x3dd4f4: 0x0  nop
    ctx->pc = 0x3dd4f4u;
    // NOP
    ctx->pc = 0x3dd4f8u;
}
