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

// Function: sub_001CA220
// Address: 0x1ca220 - 0x1ca240
void sub_001CA220_0x1ca220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA220_0x1ca220");
#endif

    ctx->pc = 0x1ca220u;

    // 0x1ca220: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ca220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca224: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA224u;
    {
        const bool branch_taken_0x1ca224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca224) {
            ctx->pc = 0x1CA228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA224u;
            // 0x1ca228: 0x8c4200c0  lw          $v0, 0xC0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA234u;
            goto label_1ca234;
        }
    }
    ctx->pc = 0x1CA22Cu;
    // 0x1ca22c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA22Cu;
        // 0x1ca230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA234u;
label_1ca234:
    // 0x1ca234: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ca234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ca238: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA238u;
        // 0x1ca23c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA240u;
}
