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

// Function: sub_001164D8
// Address: 0x1164d8 - 0x116500
void sub_001164D8_0x1164d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001164D8_0x1164d8");
#endif

    ctx->pc = 0x1164d8u;

    // 0x1164d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1164d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1164dc: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x1164dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1164e0: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x1164e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1164e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1164E4u;
    {
        const bool branch_taken_0x1164e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1164E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164E4u;
        // 0x1164e8: 0x30420040  andi        $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164e4) {
            ctx->pc = 0x1164F4u;
            goto label_1164f4;
        }
    }
    ctx->pc = 0x1164ECu;
    // 0x1164ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1164ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1164F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164ECu;
        // 0x1164f0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1164ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1164F4u;
label_1164f4:
    // 0x1164f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1164F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1164F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164F4u;
        // 0x1164f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1164F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1164FCu;
    // 0x1164fc: 0x0  nop
    ctx->pc = 0x1164fcu;
    // NOP
    ctx->pc = 0x116500u;
}
